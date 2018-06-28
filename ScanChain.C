// -*- C++ -*-
// Usage:
// > root -b -q doAll.C

#include <iostream>
#include <vector>

// ROOT
#include "TBenchmark.h"
#include "TChain.h"
#include "TDirectory.h"
#include "TFile.h"
#include "TROOT.h"
#include "TTreeCache.h"

// CMS3
#include "CMS3.cc"
#include "/home/users/jguiang/projects/MT2Analysis/CORE/MuonSelections.h"
#include "/home/users/jguiang/projects/MT2Analysis/CORE/TriggerSelections.h"

using namespace std;
using namespace tas;

int ScanChain(TChain* chain, char file_name[], bool fast = true, int nEvents = -1, string skimFilePrefix = "test") {

    // Benchmark
    TBenchmark *bmark = new TBenchmark();
    bmark->Start("benchmark");

    // Directory Setup
    TDirectory *rootdir = gDirectory->GetDirectory("Rint:");

    // Example Histogram
    /*
    TH1F *samplehisto = new TH1F("samplehisto", "Example histogram", 200,0,200);
    samplehisto->SetDirectory(rootdir);
    */

    // Invariant Mass
    TH1F *mass = new TH1F("mass", "", 100,0,200);
    mass->SetDirectory(rootdir);

    // Missing Transverse Energy
    TH1F *met = new TH1F("met", "", 100,0,200);
    met->SetDirectory(rootdir);

    // Tight Lepton Transverse Momentum
    TH1F *lt_pt = new TH1F("lt_pt", "", 100,0,200);
    lt_pt->SetDirectory(rootdir);

    // Loose Lepton Transverse Momentum
    TH1F *ll_pt = new TH1F("ll_pt", "", 100,0,200);
    ll_pt->SetDirectory(rootdir);

    // Missing Transverse Energy
    TH1F *met = new TH1F("met", "", 100,0,200);
    met->SetDirectory(rootdir);

    // Jets for pt > 40
    TH1F *njets = new TH1F("njets", "", 10,0,10);
    njets->SetDirectory(rootdir);

    // Hadronic Transverse Momentum
    TH1F *ht = new TH1F("ht", "", 150,0,300);
    ht->SetDirectory(rootdir);

    // Tight Lepton Phi
    TH1F *lt_phi = new TH1F("lt_phi", "", 160,-4,4);
    lt_phi->SetDirectory(rootdir);

    // Loose Lepton Phi
    TH1F *ll_phi = new TH1F("ll_phi", "", 160,-4,4);
    ll_phi->SetDirectory(rootdir);

    // Tight Lepton Eta
    TH1F *lt_eta = new TH1F("lt_eta", "", 160,-4,4);
    lt_eta->SetDirectory(rootdir);

    // Loose Lepton Eta
    TH1F *ll_eta = new TH1F("ll_eta", "", 160,-4,4);
    ll_eta->SetDirectory(rootdir);

    // Small Mass
    TH1F *small_mass = new TH1F("small_mass", "", 100,0,20);
    small_mass->SetDirectory(rootdir);

    // Loop over events to Analyze
    unsigned int nEventsTotal = 0;
    unsigned int nEventsChain = chain->GetEntries();
    if (nEvents >= 0) nEventsChain = nEvents;
    TObjArray *listOfFiles = chain->GetListOfFiles();
    TIter fileIter(listOfFiles);
    TFile *currentFile = 0;

    // File Loop
    while ( (currentFile = (TFile*)fileIter.Next()) ) {

        // Get File Content
        TFile file(currentFile->GetTitle());
        TTree *tree = (TTree*)file.Get("mt2");
        if (fast) TTreeCache::SetLearnEntries(10);
        if (fast) tree->SetCacheSize(128*1024*1024);
        cms3.Init(tree);

        // Loop over Events in current file
        if (nEventsTotal >= nEventsChain) continue;
        unsigned int nEventsTree = tree->GetEntriesFast();
        // START main analysis loop
        for (unsigned int event = 0; event < nEventsTree; ++event) {

            // Get Event Content
            if (nEventsTotal >= nEventsChain) continue;
            if (fast) tree->LoadTree(event);
            cms3.GetEntry(event);
            ++nEventsTotal;

            // Progress
            CMS3::progress( nEventsTotal, nEventsChain );

            // Analysis Code
            /*
                ### Histograms:
                njets -> Number of jets
                ht -> Hadronic transverse momentum
                mass -> Invariant mass for opposite-sign, same-flavor dileptons
                met -> Missing transverse energy
                {lt, ll}_pt -> Tight, loose lepton transverse momentum
                {lt, ll, jet}_{phi, eta} -> Jet/tight, loose lepton phi, eta
            */

            // Scale factor (used for normalizing Monte Carlo), 1 if data
            
            // Data Operations
            if (cms3.evt_isRealData() == 1) {
                // Trigger - only trigger for real data
                if (!passHLTTriggerPattern("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_v10")) {
                    continue;
                }
            } // END Data Operations

            // START Find best hypothesis -----------------------------------------------
            /*
             Looking for something that matches closely in mass to the Z-Boson. Closest particle
             is the 'best hypothesis.'
             */

            // Reject empty hypothesis arrays
            if (cms3.hyp_lt_id().size() == 0) {
                continue;
            }

            // Variables
            const double Z_mass = 91.1852; // From pdg
            int bhi = 0; // Index of best hypothesis in hypothesis array
            bool bh_found = false; // For tracking best hypothesis
            double gbl_dm = 1000; // Saves minimum difference in mass - abs(hyp[i]_mass - Z_mass)
            double cur_dm; // For tracking current difference in mass

            // Loop over hypothesis array
            for (unsigned int i = 0; i < cms3.hyp_lt_id().size; i++) {
                
                // Constraints
                if (cms3.hyp_lt_id().at(i) != -cms3.hyp_ll_id().at(i) || abs(cms3.hyp_lt_id().at(i)) != 13) {
                    continue;
                }
                if (cms3.hyp_lt_p4().at(i).pt() < 20 || cms3.hyp_ll_p4().at(i).pt() < 10) {
                    continue;
                }
                if (!muonID(hyp_ll_index().at(i), STOP_medium_v3) || !muonID(hyp_lt_index().at(i), STOP_medium_v3)) {
                    continue;
                }

                cur_dm = abs(cms3.hyp_p4().at(i).M() - Z_mass);
                if (cur_dm < gbl_dm) {
                    gbl_dm = cur_dm;
                    bh_found = true;
                    bhi = i;
                }

            } // END hypothesis array loop

            // Discard data if best hypothesis not found
            if (bh_found == false) {
                continue;
            }

            // END Find best hypothesis -------------------------------------------------
            
            // START Loop over jets -----------------------------------------------------
            // Variables
            int jet_sum = 0;
            double ht_sum = 0;

            // START eta, phi analysis loop
            for (unsigned int j = 0; j < cms3.pfjets_p4().size(); j++) {
                // Require jet_pt > 40
                if (cms3.pfjets_p4()[j].pt() > 40) {
                    // Get jet phi, eta
                    auto jet_phi = cms3.pfjets_p4().at(j).phi();
                    auto jet_eta = cms3.pfjets_p4().at(j).eta();
                    // Discard data for tight lepton eta > 2.4
                    if (abs(jet_eta) > 2.4) {
                        continue;
                    }
                    // Get tight, loose lepton phi, eta
                    auto lt_phi = cms3.hyp_lt_p4().at(bhi).phi();
                    auto ll_phi = cms3.hyp_ll_p4().at(bhi).phi();
                    auto lt_eta = cms3.hyp_lt_p4().at(bhi).eta();
                    auto ll_eta = cms3.hyp_ll_p4().at(bhi).eta();

                    // We want inside phi (dphi < pi) between two jets, (dphi > pi) = outside angle
                    // Tight lepton
                    double dphi = abs(lt_phi - jet_phi);
                    if (dphi > M_PI) {
                        dphi = 2*M_PI - dphi;
                    }
                    double dR = sqrt(pow((dphi), 2) + pow((lt_eta - jet_eta), 2));
                    if (dR < 0.3) {
                        continue;
                    }
                    // Loose lepton
                    dphi = abs(ll_phi - jet_phi);
                    if (dphi > M_PI) {
                        dphi = 2*M_PI - dphi;
                    }
                    double dR = sqrt(pow((dphi), 2) + pow((ll_eta - jet_eta), 2));
                    if (dR < 0.3) {
                        continue;
                    }

                    // Only add to number of jets if dR > 0.3
                    jet_sum += 1;
                    ht_sum += abs(cms3.pfjets_p4()[j].pt());
                } // END eta, phi analysis loop
            } 
        
            // END loop over jets -------------------------------------------------------

            // Fill Histograms
            njets->Fill(jet_sum, sf);
            if (ht_sum > 0) {
                ht->Fill(ht_sum, sf);
            }
            met->Fill(cms3.evt_pfmet(), sf);
            mass->Fill(cms3.hyp_p4().at(bhi).M(), sf);
            lt_pt->Fill(cms3.hyp_lt_p4().at(bhi).pt(), sf);
            ll_pt->Fill(cms3.hyp_ll_p4().at(bhi).pt(), sf);
            lt_phi->Fill(cms3.hyp_lt_p4().at(bhi).phi(), sf);
            ll_phi->Fill(cms3.hyp_ll_p4().at(bhi).phi(), sf);
            lt_eta->Fill(cms3.hyp_lt_p4().at(bhi).eta(), sf);
            ll_eta->Fill(cms3.hyp_ll_p4().at(bhi).eta(), sf);
            small_mass->Fill(cms3.hyp_p4().at(bhi).M(), sf);


        } // END main analysis loop

        // Clean Up
        delete tree;
        file.Close();

    } // END while loop
    if (nEventsChain != nEventsTotal) {
        cout << Form( "ERROR: number of events from files (%d) is not equal to total number of events (%d)", nEventsChain, nEventsTotal ) << endl;
    }

    // Write Histograms
    TFile* f = new TFile(file_name, "RECREATE");
    njets->Write();
    ht->Write();
    met->Write();
    mass->Write();
    small_mass->Write();
    lt_pt->Write();
    ll_pt->Write();
    lt_phi->Write();
    ll_phi->Write();
    lt_eta->Write();
    ll_eta->Write();

    f->Close();

    // Clear Histograms
    njets->Delete();
    ht->Delete();
    met->Delete();
    mass->Delete();
    small_mass->Delete();
    lt_pt->Delete();
    ll_pt->Delete();
    lt_phi->Delete();
    ll_phi->Delete();
    lt_eta->Delete();
    ll_eta->Delete();

    // return
    bmark->Stop("benchmark");
    cout << endl;
    cout << nEventsTotal << " Events Processed" << endl;
    cout << "------------------------------" << endl;
    cout << "CPU  Time: " << Form( "%.01f", bmark->GetCpuTime("benchmark")  ) << endl;
    cout << "Real Time: " << Form( "%.01f", bmark->GetRealTime("benchmark") ) << endl;
    cout << endl;
    delete bmark;
    return 0;
    }
