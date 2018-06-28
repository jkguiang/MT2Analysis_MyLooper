#include "CMS3.h"
CMS3 cms3;

void CMS3::Init(TTree *tree) {

  tree->SetMakeClass(1);

  run_branch = tree->GetBranch("run");
  if (run_branch) run_branch->SetAddress(&run_);
  lumi_branch = tree->GetBranch("lumi");
  if (lumi_branch) lumi_branch->SetAddress(&lumi_);
  evt_branch = tree->GetBranch("evt");
  if (evt_branch) evt_branch->SetAddress(&evt_);
  isData_branch = tree->GetBranch("isData");
  if (isData_branch) isData_branch->SetAddress(&isData_);
  isGolden_branch = tree->GetBranch("isGolden");
  if (isGolden_branch) isGolden_branch->SetAddress(&isGolden_);
  evt_scale1fb_branch = tree->GetBranch("evt_scale1fb");
  if (evt_scale1fb_branch) evt_scale1fb_branch->SetAddress(&evt_scale1fb_);
  evt_xsec_branch = tree->GetBranch("evt_xsec");
  if (evt_xsec_branch) evt_xsec_branch->SetAddress(&evt_xsec_);
  evt_kfactor_branch = tree->GetBranch("evt_kfactor");
  if (evt_kfactor_branch) evt_kfactor_branch->SetAddress(&evt_kfactor_);
  evt_filter_branch = tree->GetBranch("evt_filter");
  if (evt_filter_branch) evt_filter_branch->SetAddress(&evt_filter_);
  evt_nEvts_branch = tree->GetBranch("evt_nEvts");
  if (evt_nEvts_branch) evt_nEvts_branch->SetAddress(&evt_nEvts_);
  evt_id_branch = tree->GetBranch("evt_id");
  if (evt_id_branch) evt_id_branch->SetAddress(&evt_id_);
  genWeight_branch = tree->GetBranch("genWeight");
  if (genWeight_branch) genWeight_branch->SetAddress(&genWeight_);
  puWeight_branch = tree->GetBranch("puWeight");
  if (puWeight_branch) puWeight_branch->SetAddress(&puWeight_);
  nVert_branch = tree->GetBranch("nVert");
  if (nVert_branch) nVert_branch->SetAddress(&nVert_);
  nTrueInt_branch = tree->GetBranch("nTrueInt");
  if (nTrueInt_branch) nTrueInt_branch->SetAddress(&nTrueInt_);
  rho_branch = tree->GetBranch("rho");
  if (rho_branch) rho_branch->SetAddress(&rho_);
  nJet30_branch = tree->GetBranch("nJet30");
  if (nJet30_branch) nJet30_branch->SetAddress(&nJet30_);
  nJet30JECup_branch = tree->GetBranch("nJet30JECup");
  if (nJet30JECup_branch) nJet30JECup_branch->SetAddress(&nJet30JECup_);
  nJet30JECdn_branch = tree->GetBranch("nJet30JECdn");
  if (nJet30JECdn_branch) nJet30JECdn_branch->SetAddress(&nJet30JECdn_);
  nJet40_branch = tree->GetBranch("nJet40");
  if (nJet40_branch) nJet40_branch->SetAddress(&nJet40_);
  nBJet20_branch = tree->GetBranch("nBJet20");
  if (nBJet20_branch) nBJet20_branch->SetAddress(&nBJet20_);
  nBJet20csv_branch = tree->GetBranch("nBJet20csv");
  if (nBJet20csv_branch) nBJet20csv_branch->SetAddress(&nBJet20csv_);
  nBJet20mva_branch = tree->GetBranch("nBJet20mva");
  if (nBJet20mva_branch) nBJet20mva_branch->SetAddress(&nBJet20mva_);
  nBJet20JECup_branch = tree->GetBranch("nBJet20JECup");
  if (nBJet20JECup_branch) nBJet20JECup_branch->SetAddress(&nBJet20JECup_);
  nBJet20JECdn_branch = tree->GetBranch("nBJet20JECdn");
  if (nBJet20JECdn_branch) nBJet20JECdn_branch->SetAddress(&nBJet20JECdn_);
  nBJet25_branch = tree->GetBranch("nBJet25");
  if (nBJet25_branch) nBJet25_branch->SetAddress(&nBJet25_);
  nBJet30_branch = tree->GetBranch("nBJet30");
  if (nBJet30_branch) nBJet30_branch->SetAddress(&nBJet30_);
  nBJet30csv_branch = tree->GetBranch("nBJet30csv");
  if (nBJet30csv_branch) nBJet30csv_branch->SetAddress(&nBJet30csv_);
  nBJet30mva_branch = tree->GetBranch("nBJet30mva");
  if (nBJet30mva_branch) nBJet30mva_branch->SetAddress(&nBJet30mva_);
  nBJet40_branch = tree->GetBranch("nBJet40");
  if (nBJet40_branch) nBJet40_branch->SetAddress(&nBJet40_);
  nJet30FailId_branch = tree->GetBranch("nJet30FailId");
  if (nJet30FailId_branch) nJet30FailId_branch->SetAddress(&nJet30FailId_);
  nJet100FailId_branch = tree->GetBranch("nJet100FailId");
  if (nJet100FailId_branch) nJet100FailId_branch->SetAddress(&nJet100FailId_);
  nJet20BadFastsim_branch = tree->GetBranch("nJet20BadFastsim");
  if (nJet20BadFastsim_branch) nJet20BadFastsim_branch->SetAddress(&nJet20BadFastsim_);
  nJet200MuFrac50DphiMet_branch = tree->GetBranch("nJet200MuFrac50DphiMet");
  if (nJet200MuFrac50DphiMet_branch) nJet200MuFrac50DphiMet_branch->SetAddress(&nJet200MuFrac50DphiMet_);
  nMuons10_branch = tree->GetBranch("nMuons10");
  if (nMuons10_branch) nMuons10_branch->SetAddress(&nMuons10_);
  nBadMuons20_branch = tree->GetBranch("nBadMuons20");
  if (nBadMuons20_branch) nBadMuons20_branch->SetAddress(&nBadMuons20_);
  nElectrons10_branch = tree->GetBranch("nElectrons10");
  if (nElectrons10_branch) nElectrons10_branch->SetAddress(&nElectrons10_);
  nLepLowMT_branch = tree->GetBranch("nLepLowMT");
  if (nLepLowMT_branch) nLepLowMT_branch->SetAddress(&nLepLowMT_);
  nTaus20_branch = tree->GetBranch("nTaus20");
  if (nTaus20_branch) nTaus20_branch->SetAddress(&nTaus20_);
  nGammas20_branch = tree->GetBranch("nGammas20");
  if (nGammas20_branch) nGammas20_branch->SetAddress(&nGammas20_);
  nPFCHCand3_branch = tree->GetBranch("nPFCHCand3");
  if (nPFCHCand3_branch) nPFCHCand3_branch->SetAddress(&nPFCHCand3_);
  deltaPhiMin_branch = tree->GetBranch("deltaPhiMin");
  if (deltaPhiMin_branch) deltaPhiMin_branch->SetAddress(&deltaPhiMin_);
  deltaPhiMin_genmet_branch = tree->GetBranch("deltaPhiMin_genmet");
  if (deltaPhiMin_genmet_branch) deltaPhiMin_genmet_branch->SetAddress(&deltaPhiMin_genmet_);
  diffMetMht_branch = tree->GetBranch("diffMetMht");
  if (diffMetMht_branch) diffMetMht_branch->SetAddress(&diffMetMht_);
  diffMetMht_genmet_branch = tree->GetBranch("diffMetMht_genmet");
  if (diffMetMht_genmet_branch) diffMetMht_genmet_branch->SetAddress(&diffMetMht_genmet_);
  deltaPhiMinJECup_branch = tree->GetBranch("deltaPhiMinJECup");
  if (deltaPhiMinJECup_branch) deltaPhiMinJECup_branch->SetAddress(&deltaPhiMinJECup_);
  deltaPhiMinJECdn_branch = tree->GetBranch("deltaPhiMinJECdn");
  if (deltaPhiMinJECdn_branch) deltaPhiMinJECdn_branch->SetAddress(&deltaPhiMinJECdn_);
  diffMetMhtJECup_branch = tree->GetBranch("diffMetMhtJECup");
  if (diffMetMhtJECup_branch) diffMetMhtJECup_branch->SetAddress(&diffMetMhtJECup_);
  diffMetMhtJECdn_branch = tree->GetBranch("diffMetMhtJECdn");
  if (diffMetMhtJECdn_branch) diffMetMhtJECdn_branch->SetAddress(&diffMetMhtJECdn_);
  minMTBMet_branch = tree->GetBranch("minMTBMet");
  if (minMTBMet_branch) minMTBMet_branch->SetAddress(&minMTBMet_);
  zll_minMTBMet_branch = tree->GetBranch("zll_minMTBMet");
  if (zll_minMTBMet_branch) zll_minMTBMet_branch->SetAddress(&zll_minMTBMet_);
  gamma_minMTBMet_branch = tree->GetBranch("gamma_minMTBMet");
  if (gamma_minMTBMet_branch) gamma_minMTBMet_branch->SetAddress(&gamma_minMTBMet_);
  ht_branch = tree->GetBranch("ht");
  if (ht_branch) ht_branch->SetAddress(&ht_);
  htJECup_branch = tree->GetBranch("htJECup");
  if (htJECup_branch) htJECup_branch->SetAddress(&htJECup_);
  htJECdn_branch = tree->GetBranch("htJECdn");
  if (htJECdn_branch) htJECdn_branch->SetAddress(&htJECdn_);
  mt2_branch = tree->GetBranch("mt2");
  if (mt2_branch) mt2_branch->SetAddress(&mt2_);
  mt2JECup_branch = tree->GetBranch("mt2JECup");
  if (mt2JECup_branch) mt2JECup_branch->SetAddress(&mt2JECup_);
  mt2JECdn_branch = tree->GetBranch("mt2JECdn");
  if (mt2JECdn_branch) mt2JECdn_branch->SetAddress(&mt2JECdn_);
  mt2_gen_branch = tree->GetBranch("mt2_gen");
  if (mt2_gen_branch) mt2_gen_branch->SetAddress(&mt2_gen_);
  mt2_genmet_branch = tree->GetBranch("mt2_genmet");
  if (mt2_genmet_branch) mt2_genmet_branch->SetAddress(&mt2_genmet_);
  jet1_pt_branch = tree->GetBranch("jet1_pt");
  if (jet1_pt_branch) jet1_pt_branch->SetAddress(&jet1_pt_);
  jet2_pt_branch = tree->GetBranch("jet2_pt");
  if (jet2_pt_branch) jet2_pt_branch->SetAddress(&jet2_pt_);
  jet1_ptJECup_branch = tree->GetBranch("jet1_ptJECup");
  if (jet1_ptJECup_branch) jet1_ptJECup_branch->SetAddress(&jet1_ptJECup_);
  jet2_ptJECup_branch = tree->GetBranch("jet2_ptJECup");
  if (jet2_ptJECup_branch) jet2_ptJECup_branch->SetAddress(&jet2_ptJECup_);
  jet1_ptJECdn_branch = tree->GetBranch("jet1_ptJECdn");
  if (jet1_ptJECdn_branch) jet1_ptJECdn_branch->SetAddress(&jet1_ptJECdn_);
  jet2_ptJECdn_branch = tree->GetBranch("jet2_ptJECdn");
  if (jet2_ptJECdn_branch) jet2_ptJECdn_branch->SetAddress(&jet2_ptJECdn_);
  jet_failFSveto_branch = tree->GetBranch("jet_failFSveto");
  if (jet_failFSveto_branch) jet_failFSveto_branch->SetAddress(&jet_failFSveto_);
  gamma_jet1_pt_branch = tree->GetBranch("gamma_jet1_pt");
  if (gamma_jet1_pt_branch) gamma_jet1_pt_branch->SetAddress(&gamma_jet1_pt_);
  gamma_jet2_pt_branch = tree->GetBranch("gamma_jet2_pt");
  if (gamma_jet2_pt_branch) gamma_jet2_pt_branch->SetAddress(&gamma_jet2_pt_);
  pseudoJet1_pt_branch = tree->GetBranch("pseudoJet1_pt");
  if (pseudoJet1_pt_branch) pseudoJet1_pt_branch->SetAddress(&pseudoJet1_pt_);
  pseudoJet1_eta_branch = tree->GetBranch("pseudoJet1_eta");
  if (pseudoJet1_eta_branch) pseudoJet1_eta_branch->SetAddress(&pseudoJet1_eta_);
  pseudoJet1_phi_branch = tree->GetBranch("pseudoJet1_phi");
  if (pseudoJet1_phi_branch) pseudoJet1_phi_branch->SetAddress(&pseudoJet1_phi_);
  pseudoJet1_mass_branch = tree->GetBranch("pseudoJet1_mass");
  if (pseudoJet1_mass_branch) pseudoJet1_mass_branch->SetAddress(&pseudoJet1_mass_);
  pseudoJet2_pt_branch = tree->GetBranch("pseudoJet2_pt");
  if (pseudoJet2_pt_branch) pseudoJet2_pt_branch->SetAddress(&pseudoJet2_pt_);
  pseudoJet2_eta_branch = tree->GetBranch("pseudoJet2_eta");
  if (pseudoJet2_eta_branch) pseudoJet2_eta_branch->SetAddress(&pseudoJet2_eta_);
  pseudoJet2_phi_branch = tree->GetBranch("pseudoJet2_phi");
  if (pseudoJet2_phi_branch) pseudoJet2_phi_branch->SetAddress(&pseudoJet2_phi_);
  pseudoJet2_mass_branch = tree->GetBranch("pseudoJet2_mass");
  if (pseudoJet2_mass_branch) pseudoJet2_mass_branch->SetAddress(&pseudoJet2_mass_);
  mht_pt_branch = tree->GetBranch("mht_pt");
  if (mht_pt_branch) mht_pt_branch->SetAddress(&mht_pt_);
  mht_phi_branch = tree->GetBranch("mht_phi");
  if (mht_phi_branch) mht_phi_branch->SetAddress(&mht_phi_);
  mht_ptJECup_branch = tree->GetBranch("mht_ptJECup");
  if (mht_ptJECup_branch) mht_ptJECup_branch->SetAddress(&mht_ptJECup_);
  mht_phiJECup_branch = tree->GetBranch("mht_phiJECup");
  if (mht_phiJECup_branch) mht_phiJECup_branch->SetAddress(&mht_phiJECup_);
  mht_ptJECdn_branch = tree->GetBranch("mht_ptJECdn");
  if (mht_ptJECdn_branch) mht_ptJECdn_branch->SetAddress(&mht_ptJECdn_);
  mht_phiJECdn_branch = tree->GetBranch("mht_phiJECdn");
  if (mht_phiJECdn_branch) mht_phiJECdn_branch->SetAddress(&mht_phiJECdn_);
  met_pt_branch = tree->GetBranch("met_pt");
  if (met_pt_branch) met_pt_branch->SetAddress(&met_pt_);
  met_phi_branch = tree->GetBranch("met_phi");
  if (met_phi_branch) met_phi_branch->SetAddress(&met_phi_);
  met_ptJECup_branch = tree->GetBranch("met_ptJECup");
  if (met_ptJECup_branch) met_ptJECup_branch->SetAddress(&met_ptJECup_);
  met_phiJECup_branch = tree->GetBranch("met_phiJECup");
  if (met_phiJECup_branch) met_phiJECup_branch->SetAddress(&met_phiJECup_);
  met_ptJECdn_branch = tree->GetBranch("met_ptJECdn");
  if (met_ptJECdn_branch) met_ptJECdn_branch->SetAddress(&met_ptJECdn_);
  met_phiJECdn_branch = tree->GetBranch("met_phiJECdn");
  if (met_phiJECdn_branch) met_phiJECdn_branch->SetAddress(&met_phiJECdn_);
  met_rawPt_branch = tree->GetBranch("met_rawPt");
  if (met_rawPt_branch) met_rawPt_branch->SetAddress(&met_rawPt_);
  met_rawPhi_branch = tree->GetBranch("met_rawPhi");
  if (met_rawPhi_branch) met_rawPhi_branch->SetAddress(&met_rawPhi_);
  met_caloPt_branch = tree->GetBranch("met_caloPt");
  if (met_caloPt_branch) met_caloPt_branch->SetAddress(&met_caloPt_);
  met_caloPhi_branch = tree->GetBranch("met_caloPhi");
  if (met_caloPhi_branch) met_caloPhi_branch->SetAddress(&met_caloPhi_);
  met_trkPt_branch = tree->GetBranch("met_trkPt");
  if (met_trkPt_branch) met_trkPt_branch->SetAddress(&met_trkPt_);
  met_trkPhi_branch = tree->GetBranch("met_trkPhi");
  if (met_trkPhi_branch) met_trkPhi_branch->SetAddress(&met_trkPhi_);
  met_genPt_branch = tree->GetBranch("met_genPt");
  if (met_genPt_branch) met_genPt_branch->SetAddress(&met_genPt_);
  met_genPhi_branch = tree->GetBranch("met_genPhi");
  if (met_genPhi_branch) met_genPhi_branch->SetAddress(&met_genPhi_);
  met_miniaodPt_branch = tree->GetBranch("met_miniaodPt");
  if (met_miniaodPt_branch) met_miniaodPt_branch->SetAddress(&met_miniaodPt_);
  met_miniaodPhi_branch = tree->GetBranch("met_miniaodPhi");
  if (met_miniaodPhi_branch) met_miniaodPhi_branch->SetAddress(&met_miniaodPhi_);
  Flag_EcalDeadCellTriggerPrimitiveFilter_branch = tree->GetBranch("Flag_EcalDeadCellTriggerPrimitiveFilter");
  if (Flag_EcalDeadCellTriggerPrimitiveFilter_branch) Flag_EcalDeadCellTriggerPrimitiveFilter_branch->SetAddress(&Flag_EcalDeadCellTriggerPrimitiveFilter_);
  Flag_trkPOG_manystripclus53X_branch = tree->GetBranch("Flag_trkPOG_manystripclus53X");
  if (Flag_trkPOG_manystripclus53X_branch) Flag_trkPOG_manystripclus53X_branch->SetAddress(&Flag_trkPOG_manystripclus53X_);
  Flag_ecalLaserCorrFilter_branch = tree->GetBranch("Flag_ecalLaserCorrFilter");
  if (Flag_ecalLaserCorrFilter_branch) Flag_ecalLaserCorrFilter_branch->SetAddress(&Flag_ecalLaserCorrFilter_);
  Flag_trkPOG_toomanystripclus53X_branch = tree->GetBranch("Flag_trkPOG_toomanystripclus53X");
  if (Flag_trkPOG_toomanystripclus53X_branch) Flag_trkPOG_toomanystripclus53X_branch->SetAddress(&Flag_trkPOG_toomanystripclus53X_);
  Flag_hcalLaserEventFilter_branch = tree->GetBranch("Flag_hcalLaserEventFilter");
  if (Flag_hcalLaserEventFilter_branch) Flag_hcalLaserEventFilter_branch->SetAddress(&Flag_hcalLaserEventFilter_);
  Flag_trkPOG_logErrorTooManyClusters_branch = tree->GetBranch("Flag_trkPOG_logErrorTooManyClusters");
  if (Flag_trkPOG_logErrorTooManyClusters_branch) Flag_trkPOG_logErrorTooManyClusters_branch->SetAddress(&Flag_trkPOG_logErrorTooManyClusters_);
  Flag_trkPOGFilters_branch = tree->GetBranch("Flag_trkPOGFilters");
  if (Flag_trkPOGFilters_branch) Flag_trkPOGFilters_branch->SetAddress(&Flag_trkPOGFilters_);
  Flag_trackingFailureFilter_branch = tree->GetBranch("Flag_trackingFailureFilter");
  if (Flag_trackingFailureFilter_branch) Flag_trackingFailureFilter_branch->SetAddress(&Flag_trackingFailureFilter_);
  Flag_CSCTightHalo2015Filter_branch = tree->GetBranch("Flag_CSCTightHalo2015Filter");
  if (Flag_CSCTightHalo2015Filter_branch) Flag_CSCTightHalo2015Filter_branch->SetAddress(&Flag_CSCTightHalo2015Filter_);
  Flag_CSCTightHaloFilter_branch = tree->GetBranch("Flag_CSCTightHaloFilter");
  if (Flag_CSCTightHaloFilter_branch) Flag_CSCTightHaloFilter_branch->SetAddress(&Flag_CSCTightHaloFilter_);
  Flag_globalTightHalo2016Filter_branch = tree->GetBranch("Flag_globalTightHalo2016Filter");
  if (Flag_globalTightHalo2016Filter_branch) Flag_globalTightHalo2016Filter_branch->SetAddress(&Flag_globalTightHalo2016Filter_);
  Flag_globalSuperTightHalo2016Filter_branch = tree->GetBranch("Flag_globalSuperTightHalo2016Filter");
  if (Flag_globalSuperTightHalo2016Filter_branch) Flag_globalSuperTightHalo2016Filter_branch->SetAddress(&Flag_globalSuperTightHalo2016Filter_);
  Flag_HBHENoiseFilter_branch = tree->GetBranch("Flag_HBHENoiseFilter");
  if (Flag_HBHENoiseFilter_branch) Flag_HBHENoiseFilter_branch->SetAddress(&Flag_HBHENoiseFilter_);
  Flag_HBHENoiseIsoFilter_branch = tree->GetBranch("Flag_HBHENoiseIsoFilter");
  if (Flag_HBHENoiseIsoFilter_branch) Flag_HBHENoiseIsoFilter_branch->SetAddress(&Flag_HBHENoiseIsoFilter_);
  Flag_goodVertices_branch = tree->GetBranch("Flag_goodVertices");
  if (Flag_goodVertices_branch) Flag_goodVertices_branch->SetAddress(&Flag_goodVertices_);
  Flag_eeBadScFilter_branch = tree->GetBranch("Flag_eeBadScFilter");
  if (Flag_eeBadScFilter_branch) Flag_eeBadScFilter_branch->SetAddress(&Flag_eeBadScFilter_);
  Flag_ecalBadCalibFilter_branch = tree->GetBranch("Flag_ecalBadCalibFilter");
  if (Flag_ecalBadCalibFilter_branch) Flag_ecalBadCalibFilter_branch->SetAddress(&Flag_ecalBadCalibFilter_);
  Flag_badMuonFilter_branch = tree->GetBranch("Flag_badMuonFilter");
  if (Flag_badMuonFilter_branch) Flag_badMuonFilter_branch->SetAddress(&Flag_badMuonFilter_);
  Flag_badMuonFilterV2_branch = tree->GetBranch("Flag_badMuonFilterV2");
  if (Flag_badMuonFilterV2_branch) Flag_badMuonFilterV2_branch->SetAddress(&Flag_badMuonFilterV2_);
  Flag_badMuons_branch = tree->GetBranch("Flag_badMuons");
  if (Flag_badMuons_branch) Flag_badMuons_branch->SetAddress(&Flag_badMuons_);
  Flag_duplicateMuons_branch = tree->GetBranch("Flag_duplicateMuons");
  if (Flag_duplicateMuons_branch) Flag_duplicateMuons_branch->SetAddress(&Flag_duplicateMuons_);
  Flag_noBadMuons_branch = tree->GetBranch("Flag_noBadMuons");
  if (Flag_noBadMuons_branch) Flag_noBadMuons_branch->SetAddress(&Flag_noBadMuons_);
  Flag_badChargedCandidateFilter_branch = tree->GetBranch("Flag_badChargedCandidateFilter");
  if (Flag_badChargedCandidateFilter_branch) Flag_badChargedCandidateFilter_branch->SetAddress(&Flag_badChargedCandidateFilter_);
  Flag_badChargedHadronFilter_branch = tree->GetBranch("Flag_badChargedHadronFilter");
  if (Flag_badChargedHadronFilter_branch) Flag_badChargedHadronFilter_branch->SetAddress(&Flag_badChargedHadronFilter_);
  Flag_badChargedHadronFilterV2_branch = tree->GetBranch("Flag_badChargedHadronFilterV2");
  if (Flag_badChargedHadronFilterV2_branch) Flag_badChargedHadronFilterV2_branch->SetAddress(&Flag_badChargedHadronFilterV2_);
  Flag_METFilters_branch = tree->GetBranch("Flag_METFilters");
  if (Flag_METFilters_branch) Flag_METFilters_branch->SetAddress(&Flag_METFilters_);
  HLT_PFHT1050_branch = tree->GetBranch("HLT_PFHT1050");
  if (HLT_PFHT1050_branch) HLT_PFHT1050_branch->SetAddress(&HLT_PFHT1050_);
  HLT_PFHT500_PFMET100_PFMHT100_branch = tree->GetBranch("HLT_PFHT500_PFMET100_PFMHT100");
  if (HLT_PFHT500_PFMET100_PFMHT100_branch) HLT_PFHT500_PFMET100_PFMHT100_branch->SetAddress(&HLT_PFHT500_PFMET100_PFMHT100_);
  HLT_PFHT700_PFMET85_PFMHT85_branch = tree->GetBranch("HLT_PFHT700_PFMET85_PFMHT85");
  if (HLT_PFHT700_PFMET85_PFMHT85_branch) HLT_PFHT700_PFMET85_PFMHT85_branch->SetAddress(&HLT_PFHT700_PFMET85_PFMHT85_);
  HLT_PFHT800_PFMET75_PFMHT75_branch = tree->GetBranch("HLT_PFHT800_PFMET75_PFMHT75");
  if (HLT_PFHT800_PFMET75_PFMHT75_branch) HLT_PFHT800_PFMET75_PFMHT75_branch->SetAddress(&HLT_PFHT800_PFMET75_PFMHT75_);
  HLT_PFMET170_branch = tree->GetBranch("HLT_PFMET170");
  if (HLT_PFMET170_branch) HLT_PFMET170_branch->SetAddress(&HLT_PFMET170_);
  HLT_PFHT300_PFMET100_branch = tree->GetBranch("HLT_PFHT300_PFMET100");
  if (HLT_PFHT300_PFMET100_branch) HLT_PFHT300_PFMET100_branch->SetAddress(&HLT_PFHT300_PFMET100_);
  HLT_PFHT300_PFMET110_branch = tree->GetBranch("HLT_PFHT300_PFMET110");
  if (HLT_PFHT300_PFMET110_branch) HLT_PFHT300_PFMET110_branch->SetAddress(&HLT_PFHT300_PFMET110_);
  HLT_PFHT350_PFMET100_branch = tree->GetBranch("HLT_PFHT350_PFMET100");
  if (HLT_PFHT350_PFMET100_branch) HLT_PFHT350_PFMET100_branch->SetAddress(&HLT_PFHT350_PFMET100_);
  HLT_PFHT350_PFMET120_branch = tree->GetBranch("HLT_PFHT350_PFMET120");
  if (HLT_PFHT350_PFMET120_branch) HLT_PFHT350_PFMET120_branch->SetAddress(&HLT_PFHT350_PFMET120_);
  HLT_PFMETNoMu90_PFMHTNoMu90_branch = tree->GetBranch("HLT_PFMETNoMu90_PFMHTNoMu90");
  if (HLT_PFMETNoMu90_PFMHTNoMu90_branch) HLT_PFMETNoMu90_PFMHTNoMu90_branch->SetAddress(&HLT_PFMETNoMu90_PFMHTNoMu90_);
  HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_branch = tree->GetBranch("HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90");
  if (HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_branch) HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_branch->SetAddress(&HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_);
  HLT_PFMETNoMu100_PFMHTNoMu100_branch = tree->GetBranch("HLT_PFMETNoMu100_PFMHTNoMu100");
  if (HLT_PFMETNoMu100_PFMHTNoMu100_branch) HLT_PFMETNoMu100_PFMHTNoMu100_branch->SetAddress(&HLT_PFMETNoMu100_PFMHTNoMu100_);
  HLT_PFMETNoMu110_PFMHTNoMu110_branch = tree->GetBranch("HLT_PFMETNoMu110_PFMHTNoMu110");
  if (HLT_PFMETNoMu110_PFMHTNoMu110_branch) HLT_PFMETNoMu110_PFMHTNoMu110_branch->SetAddress(&HLT_PFMETNoMu110_PFMHTNoMu110_);
  HLT_PFMETNoMu120_PFMHTNoMu120_branch = tree->GetBranch("HLT_PFMETNoMu120_PFMHTNoMu120");
  if (HLT_PFMETNoMu120_PFMHTNoMu120_branch) HLT_PFMETNoMu120_PFMHTNoMu120_branch->SetAddress(&HLT_PFMETNoMu120_PFMHTNoMu120_);
  HLT_PFMETNoMu130_PFMHTNoMu130_branch = tree->GetBranch("HLT_PFMETNoMu130_PFMHTNoMu130");
  if (HLT_PFMETNoMu130_PFMHTNoMu130_branch) HLT_PFMETNoMu130_PFMHTNoMu130_branch->SetAddress(&HLT_PFMETNoMu130_PFMHTNoMu130_);
  HLT_PFMETNoMu140_PFMHTNoMu140_branch = tree->GetBranch("HLT_PFMETNoMu140_PFMHTNoMu140");
  if (HLT_PFMETNoMu140_PFMHTNoMu140_branch) HLT_PFMETNoMu140_PFMHTNoMu140_branch->SetAddress(&HLT_PFMETNoMu140_PFMHTNoMu140_);
  HLT_PFMET90_PFMHT90_branch = tree->GetBranch("HLT_PFMET90_PFMHT90");
  if (HLT_PFMET90_PFMHT90_branch) HLT_PFMET90_PFMHT90_branch->SetAddress(&HLT_PFMET90_PFMHT90_);
  HLT_PFMET100_PFMHT100_branch = tree->GetBranch("HLT_PFMET100_PFMHT100");
  if (HLT_PFMET100_PFMHT100_branch) HLT_PFMET100_PFMHT100_branch->SetAddress(&HLT_PFMET100_PFMHT100_);
  HLT_PFMET110_PFMHT110_branch = tree->GetBranch("HLT_PFMET110_PFMHT110");
  if (HLT_PFMET110_PFMHT110_branch) HLT_PFMET110_PFMHT110_branch->SetAddress(&HLT_PFMET110_PFMHT110_);
  HLT_PFMET120_PFMHT120_branch = tree->GetBranch("HLT_PFMET120_PFMHT120");
  if (HLT_PFMET120_PFMHT120_branch) HLT_PFMET120_PFMHT120_branch->SetAddress(&HLT_PFMET120_PFMHT120_);
  HLT_PFMET130_PFMHT130_branch = tree->GetBranch("HLT_PFMET130_PFMHT130");
  if (HLT_PFMET130_PFMHT130_branch) HLT_PFMET130_PFMHT130_branch->SetAddress(&HLT_PFMET130_PFMHT130_);
  HLT_PFMET140_PFMHT140_branch = tree->GetBranch("HLT_PFMET140_PFMHT140");
  if (HLT_PFMET140_PFMHT140_branch) HLT_PFMET140_PFMHT140_branch->SetAddress(&HLT_PFMET140_PFMHT140_);
  HLT_PFMET100_PFMHT100_PFHT60_branch = tree->GetBranch("HLT_PFMET100_PFMHT100_PFHT60");
  if (HLT_PFMET100_PFMHT100_PFHT60_branch) HLT_PFMET100_PFMHT100_PFHT60_branch->SetAddress(&HLT_PFMET100_PFMHT100_PFHT60_);
  HLT_PFMET120_PFMHT120_PFHT60_branch = tree->GetBranch("HLT_PFMET120_PFMHT120_PFHT60");
  if (HLT_PFMET120_PFMHT120_PFHT60_branch) HLT_PFMET120_PFMHT120_PFHT60_branch->SetAddress(&HLT_PFMET120_PFMHT120_PFHT60_);
  HLT_PFJet450_branch = tree->GetBranch("HLT_PFJet450");
  if (HLT_PFJet450_branch) HLT_PFJet450_branch->SetAddress(&HLT_PFJet450_);
  HLT_PFJet500_branch = tree->GetBranch("HLT_PFJet500");
  if (HLT_PFJet500_branch) HLT_PFJet500_branch->SetAddress(&HLT_PFJet500_);
  HLT_ECALHT800_branch = tree->GetBranch("HLT_ECALHT800");
  if (HLT_ECALHT800_branch) HLT_ECALHT800_branch->SetAddress(&HLT_ECALHT800_);
  HLT_SingleMu_branch = tree->GetBranch("HLT_SingleMu");
  if (HLT_SingleMu_branch) HLT_SingleMu_branch->SetAddress(&HLT_SingleMu_);
  HLT_SingleMu_NonIso_branch = tree->GetBranch("HLT_SingleMu_NonIso");
  if (HLT_SingleMu_NonIso_branch) HLT_SingleMu_NonIso_branch->SetAddress(&HLT_SingleMu_NonIso_);
  HLT_SingleEl_branch = tree->GetBranch("HLT_SingleEl");
  if (HLT_SingleEl_branch) HLT_SingleEl_branch->SetAddress(&HLT_SingleEl_);
  HLT_SingleEl_NonIso_branch = tree->GetBranch("HLT_SingleEl_NonIso");
  if (HLT_SingleEl_NonIso_branch) HLT_SingleEl_NonIso_branch->SetAddress(&HLT_SingleEl_NonIso_);
  HLT_DoubleEl_branch = tree->GetBranch("HLT_DoubleEl");
  if (HLT_DoubleEl_branch) HLT_DoubleEl_branch->SetAddress(&HLT_DoubleEl_);
  HLT_DoubleEl33_branch = tree->GetBranch("HLT_DoubleEl33");
  if (HLT_DoubleEl33_branch) HLT_DoubleEl33_branch->SetAddress(&HLT_DoubleEl33_);
  HLT_MuX_Ele12_branch = tree->GetBranch("HLT_MuX_Ele12");
  if (HLT_MuX_Ele12_branch) HLT_MuX_Ele12_branch->SetAddress(&HLT_MuX_Ele12_);
  HLT_Mu8_EleX_branch = tree->GetBranch("HLT_Mu8_EleX");
  if (HLT_Mu8_EleX_branch) HLT_Mu8_EleX_branch->SetAddress(&HLT_Mu8_EleX_);
  HLT_Mu12_EleX_branch = tree->GetBranch("HLT_Mu12_EleX");
  if (HLT_Mu12_EleX_branch) HLT_Mu12_EleX_branch->SetAddress(&HLT_Mu12_EleX_);
  HLT_Mu30_Ele30_NonIso_branch = tree->GetBranch("HLT_Mu30_Ele30_NonIso");
  if (HLT_Mu30_Ele30_NonIso_branch) HLT_Mu30_Ele30_NonIso_branch->SetAddress(&HLT_Mu30_Ele30_NonIso_);
  HLT_Mu33_Ele33_NonIso_branch = tree->GetBranch("HLT_Mu33_Ele33_NonIso");
  if (HLT_Mu33_Ele33_NonIso_branch) HLT_Mu33_Ele33_NonIso_branch->SetAddress(&HLT_Mu33_Ele33_NonIso_);
  HLT_Mu37_Ele27_NonIso_branch = tree->GetBranch("HLT_Mu37_Ele27_NonIso");
  if (HLT_Mu37_Ele27_NonIso_branch) HLT_Mu37_Ele27_NonIso_branch->SetAddress(&HLT_Mu37_Ele27_NonIso_);
  HLT_Mu27_Ele37_NonIso_branch = tree->GetBranch("HLT_Mu27_Ele37_NonIso");
  if (HLT_Mu27_Ele37_NonIso_branch) HLT_Mu27_Ele37_NonIso_branch->SetAddress(&HLT_Mu27_Ele37_NonIso_);
  HLT_DoubleMu_branch = tree->GetBranch("HLT_DoubleMu");
  if (HLT_DoubleMu_branch) HLT_DoubleMu_branch->SetAddress(&HLT_DoubleMu_);
  HLT_DoubleMu_NonIso_branch = tree->GetBranch("HLT_DoubleMu_NonIso");
  if (HLT_DoubleMu_NonIso_branch) HLT_DoubleMu_NonIso_branch->SetAddress(&HLT_DoubleMu_NonIso_);
  HLT_Photon120_branch = tree->GetBranch("HLT_Photon120");
  if (HLT_Photon120_branch) HLT_Photon120_branch->SetAddress(&HLT_Photon120_);
  HLT_Photon200_branch = tree->GetBranch("HLT_Photon200");
  if (HLT_Photon200_branch) HLT_Photon200_branch->SetAddress(&HLT_Photon200_);
  HLT_Photon175_Prescale_branch = tree->GetBranch("HLT_Photon175_Prescale");
  if (HLT_Photon175_Prescale_branch) HLT_Photon175_Prescale_branch->SetAddress(&HLT_Photon175_Prescale_);
  HLT_Photon165_HE10_branch = tree->GetBranch("HLT_Photon165_HE10");
  if (HLT_Photon165_HE10_branch) HLT_Photon165_HE10_branch->SetAddress(&HLT_Photon165_HE10_);
  HLT_Photon250_NoHE_branch = tree->GetBranch("HLT_Photon250_NoHE");
  if (HLT_Photon250_NoHE_branch) HLT_Photon250_NoHE_branch->SetAddress(&HLT_Photon250_NoHE_);
  HLT_PFHT180_Prescale_branch = tree->GetBranch("HLT_PFHT180_Prescale");
  if (HLT_PFHT180_Prescale_branch) HLT_PFHT180_Prescale_branch->SetAddress(&HLT_PFHT180_Prescale_);
  HLT_PFHT250_Prescale_branch = tree->GetBranch("HLT_PFHT250_Prescale");
  if (HLT_PFHT250_Prescale_branch) HLT_PFHT250_Prescale_branch->SetAddress(&HLT_PFHT250_Prescale_);
  HLT_PFHT370_Prescale_branch = tree->GetBranch("HLT_PFHT370_Prescale");
  if (HLT_PFHT370_Prescale_branch) HLT_PFHT370_Prescale_branch->SetAddress(&HLT_PFHT370_Prescale_);
  HLT_PFHT430_Prescale_branch = tree->GetBranch("HLT_PFHT430_Prescale");
  if (HLT_PFHT430_Prescale_branch) HLT_PFHT430_Prescale_branch->SetAddress(&HLT_PFHT430_Prescale_);
  HLT_PFHT510_Prescale_branch = tree->GetBranch("HLT_PFHT510_Prescale");
  if (HLT_PFHT510_Prescale_branch) HLT_PFHT510_Prescale_branch->SetAddress(&HLT_PFHT510_Prescale_);
  HLT_PFHT590_Prescale_branch = tree->GetBranch("HLT_PFHT590_Prescale");
  if (HLT_PFHT590_Prescale_branch) HLT_PFHT590_Prescale_branch->SetAddress(&HLT_PFHT590_Prescale_);
  HLT_PFHT680_Prescale_branch = tree->GetBranch("HLT_PFHT680_Prescale");
  if (HLT_PFHT680_Prescale_branch) HLT_PFHT680_Prescale_branch->SetAddress(&HLT_PFHT680_Prescale_);
  HLT_PFHT780_Prescale_branch = tree->GetBranch("HLT_PFHT780_Prescale");
  if (HLT_PFHT780_Prescale_branch) HLT_PFHT780_Prescale_branch->SetAddress(&HLT_PFHT780_Prescale_);
  HLT_PFHT890_Prescale_branch = tree->GetBranch("HLT_PFHT890_Prescale");
  if (HLT_PFHT890_Prescale_branch) HLT_PFHT890_Prescale_branch->SetAddress(&HLT_PFHT890_Prescale_);
  HLT_DiCentralPFJet70_PFMET120_branch = tree->GetBranch("HLT_DiCentralPFJet70_PFMET120");
  if (HLT_DiCentralPFJet70_PFMET120_branch) HLT_DiCentralPFJet70_PFMET120_branch->SetAddress(&HLT_DiCentralPFJet70_PFMET120_);
  HLT_DiCentralPFJet55_PFMET110_branch = tree->GetBranch("HLT_DiCentralPFJet55_PFMET110");
  if (HLT_DiCentralPFJet55_PFMET110_branch) HLT_DiCentralPFJet55_PFMET110_branch->SetAddress(&HLT_DiCentralPFJet55_PFMET110_);
  nlep_branch = tree->GetBranch("nlep");
  if (nlep_branch) nlep_branch->SetAddress(&nlep_);
  lep_pt_branch = tree->GetBranch("lep_pt");
  if (lep_pt_branch) lep_pt_branch->SetAddress(&lep_pt_);
  lep_eta_branch = tree->GetBranch("lep_eta");
  if (lep_eta_branch) lep_eta_branch->SetAddress(&lep_eta_);
  lep_phi_branch = tree->GetBranch("lep_phi");
  if (lep_phi_branch) lep_phi_branch->SetAddress(&lep_phi_);
  lep_mass_branch = tree->GetBranch("lep_mass");
  if (lep_mass_branch) lep_mass_branch->SetAddress(&lep_mass_);
  lep_charge_branch = tree->GetBranch("lep_charge");
  if (lep_charge_branch) lep_charge_branch->SetAddress(&lep_charge_);
  lep_pdgId_branch = tree->GetBranch("lep_pdgId");
  if (lep_pdgId_branch) lep_pdgId_branch->SetAddress(&lep_pdgId_);
  lep_dxy_branch = tree->GetBranch("lep_dxy");
  if (lep_dxy_branch) lep_dxy_branch->SetAddress(&lep_dxy_);
  lep_dz_branch = tree->GetBranch("lep_dz");
  if (lep_dz_branch) lep_dz_branch->SetAddress(&lep_dz_);
  lep_tightId_branch = tree->GetBranch("lep_tightId");
  if (lep_tightId_branch) lep_tightId_branch->SetAddress(&lep_tightId_);
  lep_heepId_branch = tree->GetBranch("lep_heepId");
  if (lep_heepId_branch) lep_heepId_branch->SetAddress(&lep_heepId_);
  lep_highPtFit_pt_branch = tree->GetBranch("lep_highPtFit_pt");
  if (lep_highPtFit_pt_branch) lep_highPtFit_pt_branch->SetAddress(&lep_highPtFit_pt_);
  lep_highPtFit_eta_branch = tree->GetBranch("lep_highPtFit_eta");
  if (lep_highPtFit_eta_branch) lep_highPtFit_eta_branch->SetAddress(&lep_highPtFit_eta_);
  lep_highPtFit_phi_branch = tree->GetBranch("lep_highPtFit_phi");
  if (lep_highPtFit_phi_branch) lep_highPtFit_phi_branch->SetAddress(&lep_highPtFit_phi_);
  lep_relIso03_branch = tree->GetBranch("lep_relIso03");
  if (lep_relIso03_branch) lep_relIso03_branch->SetAddress(&lep_relIso03_);
  lep_relIso04_branch = tree->GetBranch("lep_relIso04");
  if (lep_relIso04_branch) lep_relIso04_branch->SetAddress(&lep_relIso04_);
  lep_miniRelIso_branch = tree->GetBranch("lep_miniRelIso");
  if (lep_miniRelIso_branch) lep_miniRelIso_branch->SetAddress(&lep_miniRelIso_);
  lep_mcMatchId_branch = tree->GetBranch("lep_mcMatchId");
  if (lep_mcMatchId_branch) lep_mcMatchId_branch->SetAddress(&lep_mcMatchId_);
  lep_lostHits_branch = tree->GetBranch("lep_lostHits");
  if (lep_lostHits_branch) lep_lostHits_branch->SetAddress(&lep_lostHits_);
  lep_convVeto_branch = tree->GetBranch("lep_convVeto");
  if (lep_convVeto_branch) lep_convVeto_branch->SetAddress(&lep_convVeto_);
  lep_tightCharge_branch = tree->GetBranch("lep_tightCharge");
  if (lep_tightCharge_branch) lep_tightCharge_branch->SetAddress(&lep_tightCharge_);
  nisoTrack_branch = tree->GetBranch("nisoTrack");
  if (nisoTrack_branch) nisoTrack_branch->SetAddress(&nisoTrack_);
  isoTrack_pt_branch = tree->GetBranch("isoTrack_pt");
  if (isoTrack_pt_branch) isoTrack_pt_branch->SetAddress(&isoTrack_pt_);
  isoTrack_eta_branch = tree->GetBranch("isoTrack_eta");
  if (isoTrack_eta_branch) isoTrack_eta_branch->SetAddress(&isoTrack_eta_);
  isoTrack_phi_branch = tree->GetBranch("isoTrack_phi");
  if (isoTrack_phi_branch) isoTrack_phi_branch->SetAddress(&isoTrack_phi_);
  isoTrack_mass_branch = tree->GetBranch("isoTrack_mass");
  if (isoTrack_mass_branch) isoTrack_mass_branch->SetAddress(&isoTrack_mass_);
  isoTrack_absIso_branch = tree->GetBranch("isoTrack_absIso");
  if (isoTrack_absIso_branch) isoTrack_absIso_branch->SetAddress(&isoTrack_absIso_);
  isoTrack_dz_branch = tree->GetBranch("isoTrack_dz");
  if (isoTrack_dz_branch) isoTrack_dz_branch->SetAddress(&isoTrack_dz_);
  isoTrack_pdgId_branch = tree->GetBranch("isoTrack_pdgId");
  if (isoTrack_pdgId_branch) isoTrack_pdgId_branch->SetAddress(&isoTrack_pdgId_);
  isoTrack_mcMatchId_branch = tree->GetBranch("isoTrack_mcMatchId");
  if (isoTrack_mcMatchId_branch) isoTrack_mcMatchId_branch->SetAddress(&isoTrack_mcMatchId_);
  nhighPtPFcands_branch = tree->GetBranch("nhighPtPFcands");
  if (nhighPtPFcands_branch) nhighPtPFcands_branch->SetAddress(&nhighPtPFcands_);
  highPtPFcands_pt_branch = tree->GetBranch("highPtPFcands_pt");
  if (highPtPFcands_pt_branch) highPtPFcands_pt_branch->SetAddress(&highPtPFcands_pt_);
  highPtPFcands_eta_branch = tree->GetBranch("highPtPFcands_eta");
  if (highPtPFcands_eta_branch) highPtPFcands_eta_branch->SetAddress(&highPtPFcands_eta_);
  highPtPFcands_phi_branch = tree->GetBranch("highPtPFcands_phi");
  if (highPtPFcands_phi_branch) highPtPFcands_phi_branch->SetAddress(&highPtPFcands_phi_);
  highPtPFcands_mass_branch = tree->GetBranch("highPtPFcands_mass");
  if (highPtPFcands_mass_branch) highPtPFcands_mass_branch->SetAddress(&highPtPFcands_mass_);
  highPtPFcands_absIso_branch = tree->GetBranch("highPtPFcands_absIso");
  if (highPtPFcands_absIso_branch) highPtPFcands_absIso_branch->SetAddress(&highPtPFcands_absIso_);
  highPtPFcands_dz_branch = tree->GetBranch("highPtPFcands_dz");
  if (highPtPFcands_dz_branch) highPtPFcands_dz_branch->SetAddress(&highPtPFcands_dz_);
  highPtPFcands_pdgId_branch = tree->GetBranch("highPtPFcands_pdgId");
  if (highPtPFcands_pdgId_branch) highPtPFcands_pdgId_branch->SetAddress(&highPtPFcands_pdgId_);
  highPtPFcands_mcMatchId_branch = tree->GetBranch("highPtPFcands_mcMatchId");
  if (highPtPFcands_mcMatchId_branch) highPtPFcands_mcMatchId_branch->SetAddress(&highPtPFcands_mcMatchId_);
  nPFLep5LowMT_branch = tree->GetBranch("nPFLep5LowMT");
  if (nPFLep5LowMT_branch) nPFLep5LowMT_branch->SetAddress(&nPFLep5LowMT_);
  nPFHad10LowMT_branch = tree->GetBranch("nPFHad10LowMT");
  if (nPFHad10LowMT_branch) nPFHad10LowMT_branch->SetAddress(&nPFHad10LowMT_);
  ntau_branch = tree->GetBranch("ntau");
  if (ntau_branch) ntau_branch->SetAddress(&ntau_);
  tau_pt_branch = tree->GetBranch("tau_pt");
  if (tau_pt_branch) tau_pt_branch->SetAddress(&tau_pt_);
  tau_eta_branch = tree->GetBranch("tau_eta");
  if (tau_eta_branch) tau_eta_branch->SetAddress(&tau_eta_);
  tau_phi_branch = tree->GetBranch("tau_phi");
  if (tau_phi_branch) tau_phi_branch->SetAddress(&tau_phi_);
  tau_mass_branch = tree->GetBranch("tau_mass");
  if (tau_mass_branch) tau_mass_branch->SetAddress(&tau_mass_);
  tau_charge_branch = tree->GetBranch("tau_charge");
  if (tau_charge_branch) tau_charge_branch->SetAddress(&tau_charge_);
  tau_dxy_branch = tree->GetBranch("tau_dxy");
  if (tau_dxy_branch) tau_dxy_branch->SetAddress(&tau_dxy_);
  tau_dz_branch = tree->GetBranch("tau_dz");
  if (tau_dz_branch) tau_dz_branch->SetAddress(&tau_dz_);
  tau_idCI3hit_branch = tree->GetBranch("tau_idCI3hit");
  if (tau_idCI3hit_branch) tau_idCI3hit_branch->SetAddress(&tau_idCI3hit_);
  tau_isoCI3hit_branch = tree->GetBranch("tau_isoCI3hit");
  if (tau_isoCI3hit_branch) tau_isoCI3hit_branch->SetAddress(&tau_isoCI3hit_);
  tau_mcMatchId_branch = tree->GetBranch("tau_mcMatchId");
  if (tau_mcMatchId_branch) tau_mcMatchId_branch->SetAddress(&tau_mcMatchId_);
  ngamma_branch = tree->GetBranch("ngamma");
  if (ngamma_branch) ngamma_branch->SetAddress(&ngamma_);
  gamma_pt_branch = tree->GetBranch("gamma_pt");
  if (gamma_pt_branch) gamma_pt_branch->SetAddress(&gamma_pt_);
  gamma_eta_branch = tree->GetBranch("gamma_eta");
  if (gamma_eta_branch) gamma_eta_branch->SetAddress(&gamma_eta_);
  gamma_phi_branch = tree->GetBranch("gamma_phi");
  if (gamma_phi_branch) gamma_phi_branch->SetAddress(&gamma_phi_);
  gamma_mass_branch = tree->GetBranch("gamma_mass");
  if (gamma_mass_branch) gamma_mass_branch->SetAddress(&gamma_mass_);
  gamma_mcMatchId_branch = tree->GetBranch("gamma_mcMatchId");
  if (gamma_mcMatchId_branch) gamma_mcMatchId_branch->SetAddress(&gamma_mcMatchId_);
  gamma_genIso04_branch = tree->GetBranch("gamma_genIso04");
  if (gamma_genIso04_branch) gamma_genIso04_branch->SetAddress(&gamma_genIso04_);
  gamma_drMinParton_branch = tree->GetBranch("gamma_drMinParton");
  if (gamma_drMinParton_branch) gamma_drMinParton_branch->SetAddress(&gamma_drMinParton_);
  gamma_chHadIso_branch = tree->GetBranch("gamma_chHadIso");
  if (gamma_chHadIso_branch) gamma_chHadIso_branch->SetAddress(&gamma_chHadIso_);
  gamma_neuHadIso_branch = tree->GetBranch("gamma_neuHadIso");
  if (gamma_neuHadIso_branch) gamma_neuHadIso_branch->SetAddress(&gamma_neuHadIso_);
  gamma_phIso_branch = tree->GetBranch("gamma_phIso");
  if (gamma_phIso_branch) gamma_phIso_branch->SetAddress(&gamma_phIso_);
  gamma_sigmaIetaIeta_branch = tree->GetBranch("gamma_sigmaIetaIeta");
  if (gamma_sigmaIetaIeta_branch) gamma_sigmaIetaIeta_branch->SetAddress(&gamma_sigmaIetaIeta_);
  gamma_r9_branch = tree->GetBranch("gamma_r9");
  if (gamma_r9_branch) gamma_r9_branch->SetAddress(&gamma_r9_);
  gamma_hOverE_branch = tree->GetBranch("gamma_hOverE");
  if (gamma_hOverE_branch) gamma_hOverE_branch->SetAddress(&gamma_hOverE_);
  gamma_hOverE015_branch = tree->GetBranch("gamma_hOverE015");
  if (gamma_hOverE015_branch) gamma_hOverE015_branch->SetAddress(&gamma_hOverE015_);
  gamma_idCutBased_branch = tree->GetBranch("gamma_idCutBased");
  if (gamma_idCutBased_branch) gamma_idCutBased_branch->SetAddress(&gamma_idCutBased_);
  gamma_mt2_branch = tree->GetBranch("gamma_mt2");
  if (gamma_mt2_branch) gamma_mt2_branch->SetAddress(&gamma_mt2_);
  gamma_nJet30_branch = tree->GetBranch("gamma_nJet30");
  if (gamma_nJet30_branch) gamma_nJet30_branch->SetAddress(&gamma_nJet30_);
  gamma_nJet40_branch = tree->GetBranch("gamma_nJet40");
  if (gamma_nJet40_branch) gamma_nJet40_branch->SetAddress(&gamma_nJet40_);
  gamma_nJet30FailId_branch = tree->GetBranch("gamma_nJet30FailId");
  if (gamma_nJet30FailId_branch) gamma_nJet30FailId_branch->SetAddress(&gamma_nJet30FailId_);
  gamma_nJet100FailId_branch = tree->GetBranch("gamma_nJet100FailId");
  if (gamma_nJet100FailId_branch) gamma_nJet100FailId_branch->SetAddress(&gamma_nJet100FailId_);
  gamma_nBJet20_branch = tree->GetBranch("gamma_nBJet20");
  if (gamma_nBJet20_branch) gamma_nBJet20_branch->SetAddress(&gamma_nBJet20_);
  gamma_nBJet20csv_branch = tree->GetBranch("gamma_nBJet20csv");
  if (gamma_nBJet20csv_branch) gamma_nBJet20csv_branch->SetAddress(&gamma_nBJet20csv_);
  gamma_nBJet20mva_branch = tree->GetBranch("gamma_nBJet20mva");
  if (gamma_nBJet20mva_branch) gamma_nBJet20mva_branch->SetAddress(&gamma_nBJet20mva_);
  gamma_nBJet25_branch = tree->GetBranch("gamma_nBJet25");
  if (gamma_nBJet25_branch) gamma_nBJet25_branch->SetAddress(&gamma_nBJet25_);
  gamma_nBJet30_branch = tree->GetBranch("gamma_nBJet30");
  if (gamma_nBJet30_branch) gamma_nBJet30_branch->SetAddress(&gamma_nBJet30_);
  gamma_nBJet40_branch = tree->GetBranch("gamma_nBJet40");
  if (gamma_nBJet40_branch) gamma_nBJet40_branch->SetAddress(&gamma_nBJet40_);
  gamma_ht_branch = tree->GetBranch("gamma_ht");
  if (gamma_ht_branch) gamma_ht_branch->SetAddress(&gamma_ht_);
  gamma_deltaPhiMin_branch = tree->GetBranch("gamma_deltaPhiMin");
  if (gamma_deltaPhiMin_branch) gamma_deltaPhiMin_branch->SetAddress(&gamma_deltaPhiMin_);
  gamma_diffMetMht_branch = tree->GetBranch("gamma_diffMetMht");
  if (gamma_diffMetMht_branch) gamma_diffMetMht_branch->SetAddress(&gamma_diffMetMht_);
  gamma_mht_pt_branch = tree->GetBranch("gamma_mht_pt");
  if (gamma_mht_pt_branch) gamma_mht_pt_branch->SetAddress(&gamma_mht_pt_);
  gamma_mht_phi_branch = tree->GetBranch("gamma_mht_phi");
  if (gamma_mht_phi_branch) gamma_mht_phi_branch->SetAddress(&gamma_mht_phi_);
  gamma_met_pt_branch = tree->GetBranch("gamma_met_pt");
  if (gamma_met_pt_branch) gamma_met_pt_branch->SetAddress(&gamma_met_pt_);
  gamma_met_phi_branch = tree->GetBranch("gamma_met_phi");
  if (gamma_met_phi_branch) gamma_met_phi_branch->SetAddress(&gamma_met_phi_);
  npfPhoton_branch = tree->GetBranch("npfPhoton");
  if (npfPhoton_branch) npfPhoton_branch->SetAddress(&npfPhoton_);
  pfPhoton_pt_branch = tree->GetBranch("pfPhoton_pt");
  if (pfPhoton_pt_branch) pfPhoton_pt_branch->SetAddress(&pfPhoton_pt_);
  pfPhoton_eta_branch = tree->GetBranch("pfPhoton_eta");
  if (pfPhoton_eta_branch) pfPhoton_eta_branch->SetAddress(&pfPhoton_eta_);
  pfPhoton_phi_branch = tree->GetBranch("pfPhoton_phi");
  if (pfPhoton_phi_branch) pfPhoton_phi_branch->SetAddress(&pfPhoton_phi_);
  zll_mt2_branch = tree->GetBranch("zll_mt2");
  if (zll_mt2_branch) zll_mt2_branch->SetAddress(&zll_mt2_);
  zll_deltaPhiMin_branch = tree->GetBranch("zll_deltaPhiMin");
  if (zll_deltaPhiMin_branch) zll_deltaPhiMin_branch->SetAddress(&zll_deltaPhiMin_);
  zll_diffMetMht_branch = tree->GetBranch("zll_diffMetMht");
  if (zll_diffMetMht_branch) zll_diffMetMht_branch->SetAddress(&zll_diffMetMht_);
  zll_met_pt_branch = tree->GetBranch("zll_met_pt");
  if (zll_met_pt_branch) zll_met_pt_branch->SetAddress(&zll_met_pt_);
  zll_met_phi_branch = tree->GetBranch("zll_met_phi");
  if (zll_met_phi_branch) zll_met_phi_branch->SetAddress(&zll_met_phi_);
  zll_mht_pt_branch = tree->GetBranch("zll_mht_pt");
  if (zll_mht_pt_branch) zll_mht_pt_branch->SetAddress(&zll_mht_pt_);
  zll_mht_phi_branch = tree->GetBranch("zll_mht_phi");
  if (zll_mht_phi_branch) zll_mht_phi_branch->SetAddress(&zll_mht_phi_);
  zll_mass_branch = tree->GetBranch("zll_mass");
  if (zll_mass_branch) zll_mass_branch->SetAddress(&zll_mass_);
  zll_pt_branch = tree->GetBranch("zll_pt");
  if (zll_pt_branch) zll_pt_branch->SetAddress(&zll_pt_);
  zll_eta_branch = tree->GetBranch("zll_eta");
  if (zll_eta_branch) zll_eta_branch->SetAddress(&zll_eta_);
  zll_phi_branch = tree->GetBranch("zll_phi");
  if (zll_phi_branch) zll_phi_branch->SetAddress(&zll_phi_);
  zll_ht_branch = tree->GetBranch("zll_ht");
  if (zll_ht_branch) zll_ht_branch->SetAddress(&zll_ht_);
  zll_mt2JECup_branch = tree->GetBranch("zll_mt2JECup");
  if (zll_mt2JECup_branch) zll_mt2JECup_branch->SetAddress(&zll_mt2JECup_);
  zll_deltaPhiMinJECup_branch = tree->GetBranch("zll_deltaPhiMinJECup");
  if (zll_deltaPhiMinJECup_branch) zll_deltaPhiMinJECup_branch->SetAddress(&zll_deltaPhiMinJECup_);
  zll_diffMetMhtJECup_branch = tree->GetBranch("zll_diffMetMhtJECup");
  if (zll_diffMetMhtJECup_branch) zll_diffMetMhtJECup_branch->SetAddress(&zll_diffMetMhtJECup_);
  zll_met_ptJECup_branch = tree->GetBranch("zll_met_ptJECup");
  if (zll_met_ptJECup_branch) zll_met_ptJECup_branch->SetAddress(&zll_met_ptJECup_);
  zll_met_phiJECup_branch = tree->GetBranch("zll_met_phiJECup");
  if (zll_met_phiJECup_branch) zll_met_phiJECup_branch->SetAddress(&zll_met_phiJECup_);
  zll_mht_ptJECup_branch = tree->GetBranch("zll_mht_ptJECup");
  if (zll_mht_ptJECup_branch) zll_mht_ptJECup_branch->SetAddress(&zll_mht_ptJECup_);
  zll_mht_phiJECup_branch = tree->GetBranch("zll_mht_phiJECup");
  if (zll_mht_phiJECup_branch) zll_mht_phiJECup_branch->SetAddress(&zll_mht_phiJECup_);
  zll_htJECup_branch = tree->GetBranch("zll_htJECup");
  if (zll_htJECup_branch) zll_htJECup_branch->SetAddress(&zll_htJECup_);
  zll_mt2JECdn_branch = tree->GetBranch("zll_mt2JECdn");
  if (zll_mt2JECdn_branch) zll_mt2JECdn_branch->SetAddress(&zll_mt2JECdn_);
  zll_deltaPhiMinJECdn_branch = tree->GetBranch("zll_deltaPhiMinJECdn");
  if (zll_deltaPhiMinJECdn_branch) zll_deltaPhiMinJECdn_branch->SetAddress(&zll_deltaPhiMinJECdn_);
  zll_diffMetMhtJECdn_branch = tree->GetBranch("zll_diffMetMhtJECdn");
  if (zll_diffMetMhtJECdn_branch) zll_diffMetMhtJECdn_branch->SetAddress(&zll_diffMetMhtJECdn_);
  zll_met_ptJECdn_branch = tree->GetBranch("zll_met_ptJECdn");
  if (zll_met_ptJECdn_branch) zll_met_ptJECdn_branch->SetAddress(&zll_met_ptJECdn_);
  zll_met_phiJECdn_branch = tree->GetBranch("zll_met_phiJECdn");
  if (zll_met_phiJECdn_branch) zll_met_phiJECdn_branch->SetAddress(&zll_met_phiJECdn_);
  zll_mht_ptJECdn_branch = tree->GetBranch("zll_mht_ptJECdn");
  if (zll_mht_ptJECdn_branch) zll_mht_ptJECdn_branch->SetAddress(&zll_mht_ptJECdn_);
  zll_mht_phiJECdn_branch = tree->GetBranch("zll_mht_phiJECdn");
  if (zll_mht_phiJECdn_branch) zll_mht_phiJECdn_branch->SetAddress(&zll_mht_phiJECdn_);
  zll_htJECdn_branch = tree->GetBranch("zll_htJECdn");
  if (zll_htJECdn_branch) zll_htJECdn_branch->SetAddress(&zll_htJECdn_);
  zllmt_mt2_branch = tree->GetBranch("zllmt_mt2");
  if (zllmt_mt2_branch) zllmt_mt2_branch->SetAddress(&zllmt_mt2_);
  zllmt_deltaPhiMin_branch = tree->GetBranch("zllmt_deltaPhiMin");
  if (zllmt_deltaPhiMin_branch) zllmt_deltaPhiMin_branch->SetAddress(&zllmt_deltaPhiMin_);
  zllmt_diffMetMht_branch = tree->GetBranch("zllmt_diffMetMht");
  if (zllmt_diffMetMht_branch) zllmt_diffMetMht_branch->SetAddress(&zllmt_diffMetMht_);
  zllmt_met_pt_branch = tree->GetBranch("zllmt_met_pt");
  if (zllmt_met_pt_branch) zllmt_met_pt_branch->SetAddress(&zllmt_met_pt_);
  zllmt_met_phi_branch = tree->GetBranch("zllmt_met_phi");
  if (zllmt_met_phi_branch) zllmt_met_phi_branch->SetAddress(&zllmt_met_phi_);
  zllmt_mht_pt_branch = tree->GetBranch("zllmt_mht_pt");
  if (zllmt_mht_pt_branch) zllmt_mht_pt_branch->SetAddress(&zllmt_mht_pt_);
  zllmt_mht_phi_branch = tree->GetBranch("zllmt_mht_phi");
  if (zllmt_mht_phi_branch) zllmt_mht_phi_branch->SetAddress(&zllmt_mht_phi_);
  zllmt_ht_branch = tree->GetBranch("zllmt_ht");
  if (zllmt_ht_branch) zllmt_ht_branch->SetAddress(&zllmt_ht_);
  zllmt_mt_branch = tree->GetBranch("zllmt_mt");
  if (zllmt_mt_branch) zllmt_mt_branch->SetAddress(&zllmt_mt_);
  rl_mt2_branch = tree->GetBranch("rl_mt2");
  if (rl_mt2_branch) rl_mt2_branch->SetAddress(&rl_mt2_);
  rl_deltaPhiMin_branch = tree->GetBranch("rl_deltaPhiMin");
  if (rl_deltaPhiMin_branch) rl_deltaPhiMin_branch->SetAddress(&rl_deltaPhiMin_);
  rl_diffMetMht_branch = tree->GetBranch("rl_diffMetMht");
  if (rl_diffMetMht_branch) rl_diffMetMht_branch->SetAddress(&rl_diffMetMht_);
  rl_met_pt_branch = tree->GetBranch("rl_met_pt");
  if (rl_met_pt_branch) rl_met_pt_branch->SetAddress(&rl_met_pt_);
  rl_met_phi_branch = tree->GetBranch("rl_met_phi");
  if (rl_met_phi_branch) rl_met_phi_branch->SetAddress(&rl_met_phi_);
  rl_mht_pt_branch = tree->GetBranch("rl_mht_pt");
  if (rl_mht_pt_branch) rl_mht_pt_branch->SetAddress(&rl_mht_pt_);
  rl_mht_phi_branch = tree->GetBranch("rl_mht_phi");
  if (rl_mht_phi_branch) rl_mht_phi_branch->SetAddress(&rl_mht_phi_);
  rl_mass_branch = tree->GetBranch("rl_mass");
  if (rl_mass_branch) rl_mass_branch->SetAddress(&rl_mass_);
  rl_pt_branch = tree->GetBranch("rl_pt");
  if (rl_pt_branch) rl_pt_branch->SetAddress(&rl_pt_);
  rl_eta_branch = tree->GetBranch("rl_eta");
  if (rl_eta_branch) rl_eta_branch->SetAddress(&rl_eta_);
  rl_phi_branch = tree->GetBranch("rl_phi");
  if (rl_phi_branch) rl_phi_branch->SetAddress(&rl_phi_);
  rl_ht_branch = tree->GetBranch("rl_ht");
  if (rl_ht_branch) rl_ht_branch->SetAddress(&rl_ht_);
  njet_branch = tree->GetBranch("njet");
  if (njet_branch) njet_branch->SetAddress(&njet_);
  jet_pt_branch = tree->GetBranch("jet_pt");
  if (jet_pt_branch) jet_pt_branch->SetAddress(&jet_pt_);
  jet_eta_branch = tree->GetBranch("jet_eta");
  if (jet_eta_branch) jet_eta_branch->SetAddress(&jet_eta_);
  jet_phi_branch = tree->GetBranch("jet_phi");
  if (jet_phi_branch) jet_phi_branch->SetAddress(&jet_phi_);
  jet_mass_branch = tree->GetBranch("jet_mass");
  if (jet_mass_branch) jet_mass_branch->SetAddress(&jet_mass_);
  jet_btagCSV_branch = tree->GetBranch("jet_btagCSV");
  if (jet_btagCSV_branch) jet_btagCSV_branch->SetAddress(&jet_btagCSV_);
  jet_btagMVA_branch = tree->GetBranch("jet_btagMVA");
  if (jet_btagMVA_branch) jet_btagMVA_branch->SetAddress(&jet_btagMVA_);
  jet_chFrac_branch = tree->GetBranch("jet_chFrac");
  if (jet_chFrac_branch) jet_chFrac_branch->SetAddress(&jet_chFrac_);
  jet_nhFrac_branch = tree->GetBranch("jet_nhFrac");
  if (jet_nhFrac_branch) jet_nhFrac_branch->SetAddress(&jet_nhFrac_);
  jet_cemFrac_branch = tree->GetBranch("jet_cemFrac");
  if (jet_cemFrac_branch) jet_cemFrac_branch->SetAddress(&jet_cemFrac_);
  jet_nemFrac_branch = tree->GetBranch("jet_nemFrac");
  if (jet_nemFrac_branch) jet_nemFrac_branch->SetAddress(&jet_nemFrac_);
  jet_muFrac_branch = tree->GetBranch("jet_muFrac");
  if (jet_muFrac_branch) jet_muFrac_branch->SetAddress(&jet_muFrac_);
  jet_rawPt_branch = tree->GetBranch("jet_rawPt");
  if (jet_rawPt_branch) jet_rawPt_branch->SetAddress(&jet_rawPt_);
  jet_mcPt_branch = tree->GetBranch("jet_mcPt");
  if (jet_mcPt_branch) jet_mcPt_branch->SetAddress(&jet_mcPt_);
  jet_mcFlavour_branch = tree->GetBranch("jet_mcFlavour");
  if (jet_mcFlavour_branch) jet_mcFlavour_branch->SetAddress(&jet_mcFlavour_);
  jet_hadronFlavour_branch = tree->GetBranch("jet_hadronFlavour");
  if (jet_hadronFlavour_branch) jet_hadronFlavour_branch->SetAddress(&jet_hadronFlavour_);
  jet_qgl_branch = tree->GetBranch("jet_qgl");
  if (jet_qgl_branch) jet_qgl_branch->SetAddress(&jet_qgl_);
  jet_area_branch = tree->GetBranch("jet_area");
  if (jet_area_branch) jet_area_branch->SetAddress(&jet_area_);
  jet_id_branch = tree->GetBranch("jet_id");
  if (jet_id_branch) jet_id_branch->SetAddress(&jet_id_);
  jet_puId_branch = tree->GetBranch("jet_puId");
  if (jet_puId_branch) jet_puId_branch->SetAddress(&jet_puId_);
  jet_muf_branch = tree->GetBranch("jet_muf");
  if (jet_muf_branch) jet_muf_branch->SetAddress(&jet_muf_);
  weight_lepsf_branch = tree->GetBranch("weight_lepsf");
  if (weight_lepsf_branch) weight_lepsf_branch->SetAddress(&weight_lepsf_);
  weight_lepsf_UP_branch = tree->GetBranch("weight_lepsf_UP");
  if (weight_lepsf_UP_branch) weight_lepsf_UP_branch->SetAddress(&weight_lepsf_UP_);
  weight_lepsf_DN_branch = tree->GetBranch("weight_lepsf_DN");
  if (weight_lepsf_DN_branch) weight_lepsf_DN_branch->SetAddress(&weight_lepsf_DN_);
  weight_lepsf_0l_branch = tree->GetBranch("weight_lepsf_0l");
  if (weight_lepsf_0l_branch) weight_lepsf_0l_branch->SetAddress(&weight_lepsf_0l_);
  weight_lepsf_0l_UP_branch = tree->GetBranch("weight_lepsf_0l_UP");
  if (weight_lepsf_0l_UP_branch) weight_lepsf_0l_UP_branch->SetAddress(&weight_lepsf_0l_UP_);
  weight_lepsf_0l_DN_branch = tree->GetBranch("weight_lepsf_0l_DN");
  if (weight_lepsf_0l_DN_branch) weight_lepsf_0l_DN_branch->SetAddress(&weight_lepsf_0l_DN_);
  weight_btagsf_branch = tree->GetBranch("weight_btagsf");
  if (weight_btagsf_branch) weight_btagsf_branch->SetAddress(&weight_btagsf_);
  weight_btagsf_heavy_UP_branch = tree->GetBranch("weight_btagsf_heavy_UP");
  if (weight_btagsf_heavy_UP_branch) weight_btagsf_heavy_UP_branch->SetAddress(&weight_btagsf_heavy_UP_);
  weight_btagsf_light_UP_branch = tree->GetBranch("weight_btagsf_light_UP");
  if (weight_btagsf_light_UP_branch) weight_btagsf_light_UP_branch->SetAddress(&weight_btagsf_light_UP_);
  weight_btagsf_heavy_DN_branch = tree->GetBranch("weight_btagsf_heavy_DN");
  if (weight_btagsf_heavy_DN_branch) weight_btagsf_heavy_DN_branch->SetAddress(&weight_btagsf_heavy_DN_);
  weight_btagsf_light_DN_branch = tree->GetBranch("weight_btagsf_light_DN");
  if (weight_btagsf_light_DN_branch) weight_btagsf_light_DN_branch->SetAddress(&weight_btagsf_light_DN_);
  weight_sigtrigsf_branch = tree->GetBranch("weight_sigtrigsf");
  if (weight_sigtrigsf_branch) weight_sigtrigsf_branch->SetAddress(&weight_sigtrigsf_);
  weight_dileptrigsf_branch = tree->GetBranch("weight_dileptrigsf");
  if (weight_dileptrigsf_branch) weight_dileptrigsf_branch->SetAddress(&weight_dileptrigsf_);
  weight_phottrigsf_branch = tree->GetBranch("weight_phottrigsf");
  if (weight_phottrigsf_branch) weight_phottrigsf_branch->SetAddress(&weight_phottrigsf_);
  weight_pu_branch = tree->GetBranch("weight_pu");
  if (weight_pu_branch) weight_pu_branch->SetAddress(&weight_pu_);
  weight_isr_branch = tree->GetBranch("weight_isr");
  if (weight_isr_branch) weight_isr_branch->SetAddress(&weight_isr_);
  weight_isr_UP_branch = tree->GetBranch("weight_isr_UP");
  if (weight_isr_UP_branch) weight_isr_UP_branch->SetAddress(&weight_isr_UP_);
  weight_isr_DN_branch = tree->GetBranch("weight_isr_DN");
  if (weight_isr_DN_branch) weight_isr_DN_branch->SetAddress(&weight_isr_DN_);
  weight_scales_UP_branch = tree->GetBranch("weight_scales_UP");
  if (weight_scales_UP_branch) weight_scales_UP_branch->SetAddress(&weight_scales_UP_);
  weight_scales_DN_branch = tree->GetBranch("weight_scales_DN");
  if (weight_scales_DN_branch) weight_scales_DN_branch->SetAddress(&weight_scales_DN_);
  weight_pdfs_UP_branch = tree->GetBranch("weight_pdfs_UP");
  if (weight_pdfs_UP_branch) weight_pdfs_UP_branch->SetAddress(&weight_pdfs_UP_);
  weight_pdfs_DN_branch = tree->GetBranch("weight_pdfs_DN");
  if (weight_pdfs_DN_branch) weight_pdfs_DN_branch->SetAddress(&weight_pdfs_DN_);
  weight_toppt_branch = tree->GetBranch("weight_toppt");
  if (weight_toppt_branch) weight_toppt_branch->SetAddress(&weight_toppt_);
  genRecoil_pt_branch = tree->GetBranch("genRecoil_pt");
  if (genRecoil_pt_branch) genRecoil_pt_branch->SetAddress(&genRecoil_pt_);
  genTop_pt_branch = tree->GetBranch("genTop_pt");
  if (genTop_pt_branch) genTop_pt_branch->SetAddress(&genTop_pt_);
  genTbar_pt_branch = tree->GetBranch("genTbar_pt");
  if (genTbar_pt_branch) genTbar_pt_branch->SetAddress(&genTbar_pt_);
  genProd_pdgId_branch = tree->GetBranch("genProd_pdgId");
  if (genProd_pdgId_branch) genProd_pdgId_branch->SetAddress(&genProd_pdgId_);
  weight_pol_L_branch = tree->GetBranch("weight_pol_L");
  if (weight_pol_L_branch) weight_pol_L_branch->SetAddress(&weight_pol_L_);
  weight_pol_R_branch = tree->GetBranch("weight_pol_R");
  if (weight_pol_R_branch) weight_pol_R_branch->SetAddress(&weight_pol_R_);
  nisrMatch_branch = tree->GetBranch("nisrMatch");
  if (nisrMatch_branch) nisrMatch_branch->SetAddress(&nisrMatch_);

  tree->SetMakeClass(0);
}

void CMS3::GetEntry(unsigned int idx) {
  // this only marks branches as not loaded, saving a lot of time
  index = idx;
  run_isLoaded = false;
  lumi_isLoaded = false;
  evt_isLoaded = false;
  isData_isLoaded = false;
  isGolden_isLoaded = false;
  evt_scale1fb_isLoaded = false;
  evt_xsec_isLoaded = false;
  evt_kfactor_isLoaded = false;
  evt_filter_isLoaded = false;
  evt_nEvts_isLoaded = false;
  evt_id_isLoaded = false;
  genWeight_isLoaded = false;
  puWeight_isLoaded = false;
  nVert_isLoaded = false;
  nTrueInt_isLoaded = false;
  rho_isLoaded = false;
  nJet30_isLoaded = false;
  nJet30JECup_isLoaded = false;
  nJet30JECdn_isLoaded = false;
  nJet40_isLoaded = false;
  nBJet20_isLoaded = false;
  nBJet20csv_isLoaded = false;
  nBJet20mva_isLoaded = false;
  nBJet20JECup_isLoaded = false;
  nBJet20JECdn_isLoaded = false;
  nBJet25_isLoaded = false;
  nBJet30_isLoaded = false;
  nBJet30csv_isLoaded = false;
  nBJet30mva_isLoaded = false;
  nBJet40_isLoaded = false;
  nJet30FailId_isLoaded = false;
  nJet100FailId_isLoaded = false;
  nJet20BadFastsim_isLoaded = false;
  nJet200MuFrac50DphiMet_isLoaded = false;
  nMuons10_isLoaded = false;
  nBadMuons20_isLoaded = false;
  nElectrons10_isLoaded = false;
  nLepLowMT_isLoaded = false;
  nTaus20_isLoaded = false;
  nGammas20_isLoaded = false;
  nPFCHCand3_isLoaded = false;
  deltaPhiMin_isLoaded = false;
  deltaPhiMin_genmet_isLoaded = false;
  diffMetMht_isLoaded = false;
  diffMetMht_genmet_isLoaded = false;
  deltaPhiMinJECup_isLoaded = false;
  deltaPhiMinJECdn_isLoaded = false;
  diffMetMhtJECup_isLoaded = false;
  diffMetMhtJECdn_isLoaded = false;
  minMTBMet_isLoaded = false;
  zll_minMTBMet_isLoaded = false;
  gamma_minMTBMet_isLoaded = false;
  ht_isLoaded = false;
  htJECup_isLoaded = false;
  htJECdn_isLoaded = false;
  mt2_isLoaded = false;
  mt2JECup_isLoaded = false;
  mt2JECdn_isLoaded = false;
  mt2_gen_isLoaded = false;
  mt2_genmet_isLoaded = false;
  jet1_pt_isLoaded = false;
  jet2_pt_isLoaded = false;
  jet1_ptJECup_isLoaded = false;
  jet2_ptJECup_isLoaded = false;
  jet1_ptJECdn_isLoaded = false;
  jet2_ptJECdn_isLoaded = false;
  jet_failFSveto_isLoaded = false;
  gamma_jet1_pt_isLoaded = false;
  gamma_jet2_pt_isLoaded = false;
  pseudoJet1_pt_isLoaded = false;
  pseudoJet1_eta_isLoaded = false;
  pseudoJet1_phi_isLoaded = false;
  pseudoJet1_mass_isLoaded = false;
  pseudoJet2_pt_isLoaded = false;
  pseudoJet2_eta_isLoaded = false;
  pseudoJet2_phi_isLoaded = false;
  pseudoJet2_mass_isLoaded = false;
  mht_pt_isLoaded = false;
  mht_phi_isLoaded = false;
  mht_ptJECup_isLoaded = false;
  mht_phiJECup_isLoaded = false;
  mht_ptJECdn_isLoaded = false;
  mht_phiJECdn_isLoaded = false;
  met_pt_isLoaded = false;
  met_phi_isLoaded = false;
  met_ptJECup_isLoaded = false;
  met_phiJECup_isLoaded = false;
  met_ptJECdn_isLoaded = false;
  met_phiJECdn_isLoaded = false;
  met_rawPt_isLoaded = false;
  met_rawPhi_isLoaded = false;
  met_caloPt_isLoaded = false;
  met_caloPhi_isLoaded = false;
  met_trkPt_isLoaded = false;
  met_trkPhi_isLoaded = false;
  met_genPt_isLoaded = false;
  met_genPhi_isLoaded = false;
  met_miniaodPt_isLoaded = false;
  met_miniaodPhi_isLoaded = false;
  Flag_EcalDeadCellTriggerPrimitiveFilter_isLoaded = false;
  Flag_trkPOG_manystripclus53X_isLoaded = false;
  Flag_ecalLaserCorrFilter_isLoaded = false;
  Flag_trkPOG_toomanystripclus53X_isLoaded = false;
  Flag_hcalLaserEventFilter_isLoaded = false;
  Flag_trkPOG_logErrorTooManyClusters_isLoaded = false;
  Flag_trkPOGFilters_isLoaded = false;
  Flag_trackingFailureFilter_isLoaded = false;
  Flag_CSCTightHalo2015Filter_isLoaded = false;
  Flag_CSCTightHaloFilter_isLoaded = false;
  Flag_globalTightHalo2016Filter_isLoaded = false;
  Flag_globalSuperTightHalo2016Filter_isLoaded = false;
  Flag_HBHENoiseFilter_isLoaded = false;
  Flag_HBHENoiseIsoFilter_isLoaded = false;
  Flag_goodVertices_isLoaded = false;
  Flag_eeBadScFilter_isLoaded = false;
  Flag_ecalBadCalibFilter_isLoaded = false;
  Flag_badMuonFilter_isLoaded = false;
  Flag_badMuonFilterV2_isLoaded = false;
  Flag_badMuons_isLoaded = false;
  Flag_duplicateMuons_isLoaded = false;
  Flag_noBadMuons_isLoaded = false;
  Flag_badChargedCandidateFilter_isLoaded = false;
  Flag_badChargedHadronFilter_isLoaded = false;
  Flag_badChargedHadronFilterV2_isLoaded = false;
  Flag_METFilters_isLoaded = false;
  HLT_PFHT1050_isLoaded = false;
  HLT_PFHT500_PFMET100_PFMHT100_isLoaded = false;
  HLT_PFHT700_PFMET85_PFMHT85_isLoaded = false;
  HLT_PFHT800_PFMET75_PFMHT75_isLoaded = false;
  HLT_PFMET170_isLoaded = false;
  HLT_PFHT300_PFMET100_isLoaded = false;
  HLT_PFHT300_PFMET110_isLoaded = false;
  HLT_PFHT350_PFMET100_isLoaded = false;
  HLT_PFHT350_PFMET120_isLoaded = false;
  HLT_PFMETNoMu90_PFMHTNoMu90_isLoaded = false;
  HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_isLoaded = false;
  HLT_PFMETNoMu100_PFMHTNoMu100_isLoaded = false;
  HLT_PFMETNoMu110_PFMHTNoMu110_isLoaded = false;
  HLT_PFMETNoMu120_PFMHTNoMu120_isLoaded = false;
  HLT_PFMETNoMu130_PFMHTNoMu130_isLoaded = false;
  HLT_PFMETNoMu140_PFMHTNoMu140_isLoaded = false;
  HLT_PFMET90_PFMHT90_isLoaded = false;
  HLT_PFMET100_PFMHT100_isLoaded = false;
  HLT_PFMET110_PFMHT110_isLoaded = false;
  HLT_PFMET120_PFMHT120_isLoaded = false;
  HLT_PFMET130_PFMHT130_isLoaded = false;
  HLT_PFMET140_PFMHT140_isLoaded = false;
  HLT_PFMET100_PFMHT100_PFHT60_isLoaded = false;
  HLT_PFMET120_PFMHT120_PFHT60_isLoaded = false;
  HLT_PFJet450_isLoaded = false;
  HLT_PFJet500_isLoaded = false;
  HLT_ECALHT800_isLoaded = false;
  HLT_SingleMu_isLoaded = false;
  HLT_SingleMu_NonIso_isLoaded = false;
  HLT_SingleEl_isLoaded = false;
  HLT_SingleEl_NonIso_isLoaded = false;
  HLT_DoubleEl_isLoaded = false;
  HLT_DoubleEl33_isLoaded = false;
  HLT_MuX_Ele12_isLoaded = false;
  HLT_Mu8_EleX_isLoaded = false;
  HLT_Mu12_EleX_isLoaded = false;
  HLT_Mu30_Ele30_NonIso_isLoaded = false;
  HLT_Mu33_Ele33_NonIso_isLoaded = false;
  HLT_Mu37_Ele27_NonIso_isLoaded = false;
  HLT_Mu27_Ele37_NonIso_isLoaded = false;
  HLT_DoubleMu_isLoaded = false;
  HLT_DoubleMu_NonIso_isLoaded = false;
  HLT_Photon120_isLoaded = false;
  HLT_Photon200_isLoaded = false;
  HLT_Photon175_Prescale_isLoaded = false;
  HLT_Photon165_HE10_isLoaded = false;
  HLT_Photon250_NoHE_isLoaded = false;
  HLT_PFHT180_Prescale_isLoaded = false;
  HLT_PFHT250_Prescale_isLoaded = false;
  HLT_PFHT370_Prescale_isLoaded = false;
  HLT_PFHT430_Prescale_isLoaded = false;
  HLT_PFHT510_Prescale_isLoaded = false;
  HLT_PFHT590_Prescale_isLoaded = false;
  HLT_PFHT680_Prescale_isLoaded = false;
  HLT_PFHT780_Prescale_isLoaded = false;
  HLT_PFHT890_Prescale_isLoaded = false;
  HLT_DiCentralPFJet70_PFMET120_isLoaded = false;
  HLT_DiCentralPFJet55_PFMET110_isLoaded = false;
  nlep_isLoaded = false;
  lep_pt_isLoaded = false;
  lep_eta_isLoaded = false;
  lep_phi_isLoaded = false;
  lep_mass_isLoaded = false;
  lep_charge_isLoaded = false;
  lep_pdgId_isLoaded = false;
  lep_dxy_isLoaded = false;
  lep_dz_isLoaded = false;
  lep_tightId_isLoaded = false;
  lep_heepId_isLoaded = false;
  lep_highPtFit_pt_isLoaded = false;
  lep_highPtFit_eta_isLoaded = false;
  lep_highPtFit_phi_isLoaded = false;
  lep_relIso03_isLoaded = false;
  lep_relIso04_isLoaded = false;
  lep_miniRelIso_isLoaded = false;
  lep_mcMatchId_isLoaded = false;
  lep_lostHits_isLoaded = false;
  lep_convVeto_isLoaded = false;
  lep_tightCharge_isLoaded = false;
  nisoTrack_isLoaded = false;
  isoTrack_pt_isLoaded = false;
  isoTrack_eta_isLoaded = false;
  isoTrack_phi_isLoaded = false;
  isoTrack_mass_isLoaded = false;
  isoTrack_absIso_isLoaded = false;
  isoTrack_dz_isLoaded = false;
  isoTrack_pdgId_isLoaded = false;
  isoTrack_mcMatchId_isLoaded = false;
  nhighPtPFcands_isLoaded = false;
  highPtPFcands_pt_isLoaded = false;
  highPtPFcands_eta_isLoaded = false;
  highPtPFcands_phi_isLoaded = false;
  highPtPFcands_mass_isLoaded = false;
  highPtPFcands_absIso_isLoaded = false;
  highPtPFcands_dz_isLoaded = false;
  highPtPFcands_pdgId_isLoaded = false;
  highPtPFcands_mcMatchId_isLoaded = false;
  nPFLep5LowMT_isLoaded = false;
  nPFHad10LowMT_isLoaded = false;
  ntau_isLoaded = false;
  tau_pt_isLoaded = false;
  tau_eta_isLoaded = false;
  tau_phi_isLoaded = false;
  tau_mass_isLoaded = false;
  tau_charge_isLoaded = false;
  tau_dxy_isLoaded = false;
  tau_dz_isLoaded = false;
  tau_idCI3hit_isLoaded = false;
  tau_isoCI3hit_isLoaded = false;
  tau_mcMatchId_isLoaded = false;
  ngamma_isLoaded = false;
  gamma_pt_isLoaded = false;
  gamma_eta_isLoaded = false;
  gamma_phi_isLoaded = false;
  gamma_mass_isLoaded = false;
  gamma_mcMatchId_isLoaded = false;
  gamma_genIso04_isLoaded = false;
  gamma_drMinParton_isLoaded = false;
  gamma_chHadIso_isLoaded = false;
  gamma_neuHadIso_isLoaded = false;
  gamma_phIso_isLoaded = false;
  gamma_sigmaIetaIeta_isLoaded = false;
  gamma_r9_isLoaded = false;
  gamma_hOverE_isLoaded = false;
  gamma_hOverE015_isLoaded = false;
  gamma_idCutBased_isLoaded = false;
  gamma_mt2_isLoaded = false;
  gamma_nJet30_isLoaded = false;
  gamma_nJet40_isLoaded = false;
  gamma_nJet30FailId_isLoaded = false;
  gamma_nJet100FailId_isLoaded = false;
  gamma_nBJet20_isLoaded = false;
  gamma_nBJet20csv_isLoaded = false;
  gamma_nBJet20mva_isLoaded = false;
  gamma_nBJet25_isLoaded = false;
  gamma_nBJet30_isLoaded = false;
  gamma_nBJet40_isLoaded = false;
  gamma_ht_isLoaded = false;
  gamma_deltaPhiMin_isLoaded = false;
  gamma_diffMetMht_isLoaded = false;
  gamma_mht_pt_isLoaded = false;
  gamma_mht_phi_isLoaded = false;
  gamma_met_pt_isLoaded = false;
  gamma_met_phi_isLoaded = false;
  npfPhoton_isLoaded = false;
  pfPhoton_pt_isLoaded = false;
  pfPhoton_eta_isLoaded = false;
  pfPhoton_phi_isLoaded = false;
  zll_mt2_isLoaded = false;
  zll_deltaPhiMin_isLoaded = false;
  zll_diffMetMht_isLoaded = false;
  zll_met_pt_isLoaded = false;
  zll_met_phi_isLoaded = false;
  zll_mht_pt_isLoaded = false;
  zll_mht_phi_isLoaded = false;
  zll_mass_isLoaded = false;
  zll_pt_isLoaded = false;
  zll_eta_isLoaded = false;
  zll_phi_isLoaded = false;
  zll_ht_isLoaded = false;
  zll_mt2JECup_isLoaded = false;
  zll_deltaPhiMinJECup_isLoaded = false;
  zll_diffMetMhtJECup_isLoaded = false;
  zll_met_ptJECup_isLoaded = false;
  zll_met_phiJECup_isLoaded = false;
  zll_mht_ptJECup_isLoaded = false;
  zll_mht_phiJECup_isLoaded = false;
  zll_htJECup_isLoaded = false;
  zll_mt2JECdn_isLoaded = false;
  zll_deltaPhiMinJECdn_isLoaded = false;
  zll_diffMetMhtJECdn_isLoaded = false;
  zll_met_ptJECdn_isLoaded = false;
  zll_met_phiJECdn_isLoaded = false;
  zll_mht_ptJECdn_isLoaded = false;
  zll_mht_phiJECdn_isLoaded = false;
  zll_htJECdn_isLoaded = false;
  zllmt_mt2_isLoaded = false;
  zllmt_deltaPhiMin_isLoaded = false;
  zllmt_diffMetMht_isLoaded = false;
  zllmt_met_pt_isLoaded = false;
  zllmt_met_phi_isLoaded = false;
  zllmt_mht_pt_isLoaded = false;
  zllmt_mht_phi_isLoaded = false;
  zllmt_ht_isLoaded = false;
  zllmt_mt_isLoaded = false;
  rl_mt2_isLoaded = false;
  rl_deltaPhiMin_isLoaded = false;
  rl_diffMetMht_isLoaded = false;
  rl_met_pt_isLoaded = false;
  rl_met_phi_isLoaded = false;
  rl_mht_pt_isLoaded = false;
  rl_mht_phi_isLoaded = false;
  rl_mass_isLoaded = false;
  rl_pt_isLoaded = false;
  rl_eta_isLoaded = false;
  rl_phi_isLoaded = false;
  rl_ht_isLoaded = false;
  njet_isLoaded = false;
  jet_pt_isLoaded = false;
  jet_eta_isLoaded = false;
  jet_phi_isLoaded = false;
  jet_mass_isLoaded = false;
  jet_btagCSV_isLoaded = false;
  jet_btagMVA_isLoaded = false;
  jet_chFrac_isLoaded = false;
  jet_nhFrac_isLoaded = false;
  jet_cemFrac_isLoaded = false;
  jet_nemFrac_isLoaded = false;
  jet_muFrac_isLoaded = false;
  jet_rawPt_isLoaded = false;
  jet_mcPt_isLoaded = false;
  jet_mcFlavour_isLoaded = false;
  jet_hadronFlavour_isLoaded = false;
  jet_qgl_isLoaded = false;
  jet_area_isLoaded = false;
  jet_id_isLoaded = false;
  jet_puId_isLoaded = false;
  jet_muf_isLoaded = false;
  weight_lepsf_isLoaded = false;
  weight_lepsf_UP_isLoaded = false;
  weight_lepsf_DN_isLoaded = false;
  weight_lepsf_0l_isLoaded = false;
  weight_lepsf_0l_UP_isLoaded = false;
  weight_lepsf_0l_DN_isLoaded = false;
  weight_btagsf_isLoaded = false;
  weight_btagsf_heavy_UP_isLoaded = false;
  weight_btagsf_light_UP_isLoaded = false;
  weight_btagsf_heavy_DN_isLoaded = false;
  weight_btagsf_light_DN_isLoaded = false;
  weight_sigtrigsf_isLoaded = false;
  weight_dileptrigsf_isLoaded = false;
  weight_phottrigsf_isLoaded = false;
  weight_pu_isLoaded = false;
  weight_isr_isLoaded = false;
  weight_isr_UP_isLoaded = false;
  weight_isr_DN_isLoaded = false;
  weight_scales_UP_isLoaded = false;
  weight_scales_DN_isLoaded = false;
  weight_pdfs_UP_isLoaded = false;
  weight_pdfs_DN_isLoaded = false;
  weight_toppt_isLoaded = false;
  genRecoil_pt_isLoaded = false;
  genTop_pt_isLoaded = false;
  genTbar_pt_isLoaded = false;
  genProd_pdgId_isLoaded = false;
  weight_pol_L_isLoaded = false;
  weight_pol_R_isLoaded = false;
  nisrMatch_isLoaded = false;
}

void CMS3::LoadAllBranches() {
  // load all branches
  if (run_branch != 0) run();
  if (lumi_branch != 0) lumi();
  if (evt_branch != 0) evt();
  if (isData_branch != 0) isData();
  if (isGolden_branch != 0) isGolden();
  if (evt_scale1fb_branch != 0) evt_scale1fb();
  if (evt_xsec_branch != 0) evt_xsec();
  if (evt_kfactor_branch != 0) evt_kfactor();
  if (evt_filter_branch != 0) evt_filter();
  if (evt_nEvts_branch != 0) evt_nEvts();
  if (evt_id_branch != 0) evt_id();
  if (genWeight_branch != 0) genWeight();
  if (puWeight_branch != 0) puWeight();
  if (nVert_branch != 0) nVert();
  if (nTrueInt_branch != 0) nTrueInt();
  if (rho_branch != 0) rho();
  if (nJet30_branch != 0) nJet30();
  if (nJet30JECup_branch != 0) nJet30JECup();
  if (nJet30JECdn_branch != 0) nJet30JECdn();
  if (nJet40_branch != 0) nJet40();
  if (nBJet20_branch != 0) nBJet20();
  if (nBJet20csv_branch != 0) nBJet20csv();
  if (nBJet20mva_branch != 0) nBJet20mva();
  if (nBJet20JECup_branch != 0) nBJet20JECup();
  if (nBJet20JECdn_branch != 0) nBJet20JECdn();
  if (nBJet25_branch != 0) nBJet25();
  if (nBJet30_branch != 0) nBJet30();
  if (nBJet30csv_branch != 0) nBJet30csv();
  if (nBJet30mva_branch != 0) nBJet30mva();
  if (nBJet40_branch != 0) nBJet40();
  if (nJet30FailId_branch != 0) nJet30FailId();
  if (nJet100FailId_branch != 0) nJet100FailId();
  if (nJet20BadFastsim_branch != 0) nJet20BadFastsim();
  if (nJet200MuFrac50DphiMet_branch != 0) nJet200MuFrac50DphiMet();
  if (nMuons10_branch != 0) nMuons10();
  if (nBadMuons20_branch != 0) nBadMuons20();
  if (nElectrons10_branch != 0) nElectrons10();
  if (nLepLowMT_branch != 0) nLepLowMT();
  if (nTaus20_branch != 0) nTaus20();
  if (nGammas20_branch != 0) nGammas20();
  if (nPFCHCand3_branch != 0) nPFCHCand3();
  if (deltaPhiMin_branch != 0) deltaPhiMin();
  if (deltaPhiMin_genmet_branch != 0) deltaPhiMin_genmet();
  if (diffMetMht_branch != 0) diffMetMht();
  if (diffMetMht_genmet_branch != 0) diffMetMht_genmet();
  if (deltaPhiMinJECup_branch != 0) deltaPhiMinJECup();
  if (deltaPhiMinJECdn_branch != 0) deltaPhiMinJECdn();
  if (diffMetMhtJECup_branch != 0) diffMetMhtJECup();
  if (diffMetMhtJECdn_branch != 0) diffMetMhtJECdn();
  if (minMTBMet_branch != 0) minMTBMet();
  if (zll_minMTBMet_branch != 0) zll_minMTBMet();
  if (gamma_minMTBMet_branch != 0) gamma_minMTBMet();
  if (ht_branch != 0) ht();
  if (htJECup_branch != 0) htJECup();
  if (htJECdn_branch != 0) htJECdn();
  if (mt2_branch != 0) mt2();
  if (mt2JECup_branch != 0) mt2JECup();
  if (mt2JECdn_branch != 0) mt2JECdn();
  if (mt2_gen_branch != 0) mt2_gen();
  if (mt2_genmet_branch != 0) mt2_genmet();
  if (jet1_pt_branch != 0) jet1_pt();
  if (jet2_pt_branch != 0) jet2_pt();
  if (jet1_ptJECup_branch != 0) jet1_ptJECup();
  if (jet2_ptJECup_branch != 0) jet2_ptJECup();
  if (jet1_ptJECdn_branch != 0) jet1_ptJECdn();
  if (jet2_ptJECdn_branch != 0) jet2_ptJECdn();
  if (jet_failFSveto_branch != 0) jet_failFSveto();
  if (gamma_jet1_pt_branch != 0) gamma_jet1_pt();
  if (gamma_jet2_pt_branch != 0) gamma_jet2_pt();
  if (pseudoJet1_pt_branch != 0) pseudoJet1_pt();
  if (pseudoJet1_eta_branch != 0) pseudoJet1_eta();
  if (pseudoJet1_phi_branch != 0) pseudoJet1_phi();
  if (pseudoJet1_mass_branch != 0) pseudoJet1_mass();
  if (pseudoJet2_pt_branch != 0) pseudoJet2_pt();
  if (pseudoJet2_eta_branch != 0) pseudoJet2_eta();
  if (pseudoJet2_phi_branch != 0) pseudoJet2_phi();
  if (pseudoJet2_mass_branch != 0) pseudoJet2_mass();
  if (mht_pt_branch != 0) mht_pt();
  if (mht_phi_branch != 0) mht_phi();
  if (mht_ptJECup_branch != 0) mht_ptJECup();
  if (mht_phiJECup_branch != 0) mht_phiJECup();
  if (mht_ptJECdn_branch != 0) mht_ptJECdn();
  if (mht_phiJECdn_branch != 0) mht_phiJECdn();
  if (met_pt_branch != 0) met_pt();
  if (met_phi_branch != 0) met_phi();
  if (met_ptJECup_branch != 0) met_ptJECup();
  if (met_phiJECup_branch != 0) met_phiJECup();
  if (met_ptJECdn_branch != 0) met_ptJECdn();
  if (met_phiJECdn_branch != 0) met_phiJECdn();
  if (met_rawPt_branch != 0) met_rawPt();
  if (met_rawPhi_branch != 0) met_rawPhi();
  if (met_caloPt_branch != 0) met_caloPt();
  if (met_caloPhi_branch != 0) met_caloPhi();
  if (met_trkPt_branch != 0) met_trkPt();
  if (met_trkPhi_branch != 0) met_trkPhi();
  if (met_genPt_branch != 0) met_genPt();
  if (met_genPhi_branch != 0) met_genPhi();
  if (met_miniaodPt_branch != 0) met_miniaodPt();
  if (met_miniaodPhi_branch != 0) met_miniaodPhi();
  if (Flag_EcalDeadCellTriggerPrimitiveFilter_branch != 0) Flag_EcalDeadCellTriggerPrimitiveFilter();
  if (Flag_trkPOG_manystripclus53X_branch != 0) Flag_trkPOG_manystripclus53X();
  if (Flag_ecalLaserCorrFilter_branch != 0) Flag_ecalLaserCorrFilter();
  if (Flag_trkPOG_toomanystripclus53X_branch != 0) Flag_trkPOG_toomanystripclus53X();
  if (Flag_hcalLaserEventFilter_branch != 0) Flag_hcalLaserEventFilter();
  if (Flag_trkPOG_logErrorTooManyClusters_branch != 0) Flag_trkPOG_logErrorTooManyClusters();
  if (Flag_trkPOGFilters_branch != 0) Flag_trkPOGFilters();
  if (Flag_trackingFailureFilter_branch != 0) Flag_trackingFailureFilter();
  if (Flag_CSCTightHalo2015Filter_branch != 0) Flag_CSCTightHalo2015Filter();
  if (Flag_CSCTightHaloFilter_branch != 0) Flag_CSCTightHaloFilter();
  if (Flag_globalTightHalo2016Filter_branch != 0) Flag_globalTightHalo2016Filter();
  if (Flag_globalSuperTightHalo2016Filter_branch != 0) Flag_globalSuperTightHalo2016Filter();
  if (Flag_HBHENoiseFilter_branch != 0) Flag_HBHENoiseFilter();
  if (Flag_HBHENoiseIsoFilter_branch != 0) Flag_HBHENoiseIsoFilter();
  if (Flag_goodVertices_branch != 0) Flag_goodVertices();
  if (Flag_eeBadScFilter_branch != 0) Flag_eeBadScFilter();
  if (Flag_ecalBadCalibFilter_branch != 0) Flag_ecalBadCalibFilter();
  if (Flag_badMuonFilter_branch != 0) Flag_badMuonFilter();
  if (Flag_badMuonFilterV2_branch != 0) Flag_badMuonFilterV2();
  if (Flag_badMuons_branch != 0) Flag_badMuons();
  if (Flag_duplicateMuons_branch != 0) Flag_duplicateMuons();
  if (Flag_noBadMuons_branch != 0) Flag_noBadMuons();
  if (Flag_badChargedCandidateFilter_branch != 0) Flag_badChargedCandidateFilter();
  if (Flag_badChargedHadronFilter_branch != 0) Flag_badChargedHadronFilter();
  if (Flag_badChargedHadronFilterV2_branch != 0) Flag_badChargedHadronFilterV2();
  if (Flag_METFilters_branch != 0) Flag_METFilters();
  if (HLT_PFHT1050_branch != 0) HLT_PFHT1050();
  if (HLT_PFHT500_PFMET100_PFMHT100_branch != 0) HLT_PFHT500_PFMET100_PFMHT100();
  if (HLT_PFHT700_PFMET85_PFMHT85_branch != 0) HLT_PFHT700_PFMET85_PFMHT85();
  if (HLT_PFHT800_PFMET75_PFMHT75_branch != 0) HLT_PFHT800_PFMET75_PFMHT75();
  if (HLT_PFMET170_branch != 0) HLT_PFMET170();
  if (HLT_PFHT300_PFMET100_branch != 0) HLT_PFHT300_PFMET100();
  if (HLT_PFHT300_PFMET110_branch != 0) HLT_PFHT300_PFMET110();
  if (HLT_PFHT350_PFMET100_branch != 0) HLT_PFHT350_PFMET100();
  if (HLT_PFHT350_PFMET120_branch != 0) HLT_PFHT350_PFMET120();
  if (HLT_PFMETNoMu90_PFMHTNoMu90_branch != 0) HLT_PFMETNoMu90_PFMHTNoMu90();
  if (HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_branch != 0) HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90();
  if (HLT_PFMETNoMu100_PFMHTNoMu100_branch != 0) HLT_PFMETNoMu100_PFMHTNoMu100();
  if (HLT_PFMETNoMu110_PFMHTNoMu110_branch != 0) HLT_PFMETNoMu110_PFMHTNoMu110();
  if (HLT_PFMETNoMu120_PFMHTNoMu120_branch != 0) HLT_PFMETNoMu120_PFMHTNoMu120();
  if (HLT_PFMETNoMu130_PFMHTNoMu130_branch != 0) HLT_PFMETNoMu130_PFMHTNoMu130();
  if (HLT_PFMETNoMu140_PFMHTNoMu140_branch != 0) HLT_PFMETNoMu140_PFMHTNoMu140();
  if (HLT_PFMET90_PFMHT90_branch != 0) HLT_PFMET90_PFMHT90();
  if (HLT_PFMET100_PFMHT100_branch != 0) HLT_PFMET100_PFMHT100();
  if (HLT_PFMET110_PFMHT110_branch != 0) HLT_PFMET110_PFMHT110();
  if (HLT_PFMET120_PFMHT120_branch != 0) HLT_PFMET120_PFMHT120();
  if (HLT_PFMET130_PFMHT130_branch != 0) HLT_PFMET130_PFMHT130();
  if (HLT_PFMET140_PFMHT140_branch != 0) HLT_PFMET140_PFMHT140();
  if (HLT_PFMET100_PFMHT100_PFHT60_branch != 0) HLT_PFMET100_PFMHT100_PFHT60();
  if (HLT_PFMET120_PFMHT120_PFHT60_branch != 0) HLT_PFMET120_PFMHT120_PFHT60();
  if (HLT_PFJet450_branch != 0) HLT_PFJet450();
  if (HLT_PFJet500_branch != 0) HLT_PFJet500();
  if (HLT_ECALHT800_branch != 0) HLT_ECALHT800();
  if (HLT_SingleMu_branch != 0) HLT_SingleMu();
  if (HLT_SingleMu_NonIso_branch != 0) HLT_SingleMu_NonIso();
  if (HLT_SingleEl_branch != 0) HLT_SingleEl();
  if (HLT_SingleEl_NonIso_branch != 0) HLT_SingleEl_NonIso();
  if (HLT_DoubleEl_branch != 0) HLT_DoubleEl();
  if (HLT_DoubleEl33_branch != 0) HLT_DoubleEl33();
  if (HLT_MuX_Ele12_branch != 0) HLT_MuX_Ele12();
  if (HLT_Mu8_EleX_branch != 0) HLT_Mu8_EleX();
  if (HLT_Mu12_EleX_branch != 0) HLT_Mu12_EleX();
  if (HLT_Mu30_Ele30_NonIso_branch != 0) HLT_Mu30_Ele30_NonIso();
  if (HLT_Mu33_Ele33_NonIso_branch != 0) HLT_Mu33_Ele33_NonIso();
  if (HLT_Mu37_Ele27_NonIso_branch != 0) HLT_Mu37_Ele27_NonIso();
  if (HLT_Mu27_Ele37_NonIso_branch != 0) HLT_Mu27_Ele37_NonIso();
  if (HLT_DoubleMu_branch != 0) HLT_DoubleMu();
  if (HLT_DoubleMu_NonIso_branch != 0) HLT_DoubleMu_NonIso();
  if (HLT_Photon120_branch != 0) HLT_Photon120();
  if (HLT_Photon200_branch != 0) HLT_Photon200();
  if (HLT_Photon175_Prescale_branch != 0) HLT_Photon175_Prescale();
  if (HLT_Photon165_HE10_branch != 0) HLT_Photon165_HE10();
  if (HLT_Photon250_NoHE_branch != 0) HLT_Photon250_NoHE();
  if (HLT_PFHT180_Prescale_branch != 0) HLT_PFHT180_Prescale();
  if (HLT_PFHT250_Prescale_branch != 0) HLT_PFHT250_Prescale();
  if (HLT_PFHT370_Prescale_branch != 0) HLT_PFHT370_Prescale();
  if (HLT_PFHT430_Prescale_branch != 0) HLT_PFHT430_Prescale();
  if (HLT_PFHT510_Prescale_branch != 0) HLT_PFHT510_Prescale();
  if (HLT_PFHT590_Prescale_branch != 0) HLT_PFHT590_Prescale();
  if (HLT_PFHT680_Prescale_branch != 0) HLT_PFHT680_Prescale();
  if (HLT_PFHT780_Prescale_branch != 0) HLT_PFHT780_Prescale();
  if (HLT_PFHT890_Prescale_branch != 0) HLT_PFHT890_Prescale();
  if (HLT_DiCentralPFJet70_PFMET120_branch != 0) HLT_DiCentralPFJet70_PFMET120();
  if (HLT_DiCentralPFJet55_PFMET110_branch != 0) HLT_DiCentralPFJet55_PFMET110();
  if (nlep_branch != 0) nlep();
  if (lep_pt_branch != 0) lep_pt();
  if (lep_eta_branch != 0) lep_eta();
  if (lep_phi_branch != 0) lep_phi();
  if (lep_mass_branch != 0) lep_mass();
  if (lep_charge_branch != 0) lep_charge();
  if (lep_pdgId_branch != 0) lep_pdgId();
  if (lep_dxy_branch != 0) lep_dxy();
  if (lep_dz_branch != 0) lep_dz();
  if (lep_tightId_branch != 0) lep_tightId();
  if (lep_heepId_branch != 0) lep_heepId();
  if (lep_highPtFit_pt_branch != 0) lep_highPtFit_pt();
  if (lep_highPtFit_eta_branch != 0) lep_highPtFit_eta();
  if (lep_highPtFit_phi_branch != 0) lep_highPtFit_phi();
  if (lep_relIso03_branch != 0) lep_relIso03();
  if (lep_relIso04_branch != 0) lep_relIso04();
  if (lep_miniRelIso_branch != 0) lep_miniRelIso();
  if (lep_mcMatchId_branch != 0) lep_mcMatchId();
  if (lep_lostHits_branch != 0) lep_lostHits();
  if (lep_convVeto_branch != 0) lep_convVeto();
  if (lep_tightCharge_branch != 0) lep_tightCharge();
  if (nisoTrack_branch != 0) nisoTrack();
  if (isoTrack_pt_branch != 0) isoTrack_pt();
  if (isoTrack_eta_branch != 0) isoTrack_eta();
  if (isoTrack_phi_branch != 0) isoTrack_phi();
  if (isoTrack_mass_branch != 0) isoTrack_mass();
  if (isoTrack_absIso_branch != 0) isoTrack_absIso();
  if (isoTrack_dz_branch != 0) isoTrack_dz();
  if (isoTrack_pdgId_branch != 0) isoTrack_pdgId();
  if (isoTrack_mcMatchId_branch != 0) isoTrack_mcMatchId();
  if (nhighPtPFcands_branch != 0) nhighPtPFcands();
  if (highPtPFcands_pt_branch != 0) highPtPFcands_pt();
  if (highPtPFcands_eta_branch != 0) highPtPFcands_eta();
  if (highPtPFcands_phi_branch != 0) highPtPFcands_phi();
  if (highPtPFcands_mass_branch != 0) highPtPFcands_mass();
  if (highPtPFcands_absIso_branch != 0) highPtPFcands_absIso();
  if (highPtPFcands_dz_branch != 0) highPtPFcands_dz();
  if (highPtPFcands_pdgId_branch != 0) highPtPFcands_pdgId();
  if (highPtPFcands_mcMatchId_branch != 0) highPtPFcands_mcMatchId();
  if (nPFLep5LowMT_branch != 0) nPFLep5LowMT();
  if (nPFHad10LowMT_branch != 0) nPFHad10LowMT();
  if (ntau_branch != 0) ntau();
  if (tau_pt_branch != 0) tau_pt();
  if (tau_eta_branch != 0) tau_eta();
  if (tau_phi_branch != 0) tau_phi();
  if (tau_mass_branch != 0) tau_mass();
  if (tau_charge_branch != 0) tau_charge();
  if (tau_dxy_branch != 0) tau_dxy();
  if (tau_dz_branch != 0) tau_dz();
  if (tau_idCI3hit_branch != 0) tau_idCI3hit();
  if (tau_isoCI3hit_branch != 0) tau_isoCI3hit();
  if (tau_mcMatchId_branch != 0) tau_mcMatchId();
  if (ngamma_branch != 0) ngamma();
  if (gamma_pt_branch != 0) gamma_pt();
  if (gamma_eta_branch != 0) gamma_eta();
  if (gamma_phi_branch != 0) gamma_phi();
  if (gamma_mass_branch != 0) gamma_mass();
  if (gamma_mcMatchId_branch != 0) gamma_mcMatchId();
  if (gamma_genIso04_branch != 0) gamma_genIso04();
  if (gamma_drMinParton_branch != 0) gamma_drMinParton();
  if (gamma_chHadIso_branch != 0) gamma_chHadIso();
  if (gamma_neuHadIso_branch != 0) gamma_neuHadIso();
  if (gamma_phIso_branch != 0) gamma_phIso();
  if (gamma_sigmaIetaIeta_branch != 0) gamma_sigmaIetaIeta();
  if (gamma_r9_branch != 0) gamma_r9();
  if (gamma_hOverE_branch != 0) gamma_hOverE();
  if (gamma_hOverE015_branch != 0) gamma_hOverE015();
  if (gamma_idCutBased_branch != 0) gamma_idCutBased();
  if (gamma_mt2_branch != 0) gamma_mt2();
  if (gamma_nJet30_branch != 0) gamma_nJet30();
  if (gamma_nJet40_branch != 0) gamma_nJet40();
  if (gamma_nJet30FailId_branch != 0) gamma_nJet30FailId();
  if (gamma_nJet100FailId_branch != 0) gamma_nJet100FailId();
  if (gamma_nBJet20_branch != 0) gamma_nBJet20();
  if (gamma_nBJet20csv_branch != 0) gamma_nBJet20csv();
  if (gamma_nBJet20mva_branch != 0) gamma_nBJet20mva();
  if (gamma_nBJet25_branch != 0) gamma_nBJet25();
  if (gamma_nBJet30_branch != 0) gamma_nBJet30();
  if (gamma_nBJet40_branch != 0) gamma_nBJet40();
  if (gamma_ht_branch != 0) gamma_ht();
  if (gamma_deltaPhiMin_branch != 0) gamma_deltaPhiMin();
  if (gamma_diffMetMht_branch != 0) gamma_diffMetMht();
  if (gamma_mht_pt_branch != 0) gamma_mht_pt();
  if (gamma_mht_phi_branch != 0) gamma_mht_phi();
  if (gamma_met_pt_branch != 0) gamma_met_pt();
  if (gamma_met_phi_branch != 0) gamma_met_phi();
  if (npfPhoton_branch != 0) npfPhoton();
  if (pfPhoton_pt_branch != 0) pfPhoton_pt();
  if (pfPhoton_eta_branch != 0) pfPhoton_eta();
  if (pfPhoton_phi_branch != 0) pfPhoton_phi();
  if (zll_mt2_branch != 0) zll_mt2();
  if (zll_deltaPhiMin_branch != 0) zll_deltaPhiMin();
  if (zll_diffMetMht_branch != 0) zll_diffMetMht();
  if (zll_met_pt_branch != 0) zll_met_pt();
  if (zll_met_phi_branch != 0) zll_met_phi();
  if (zll_mht_pt_branch != 0) zll_mht_pt();
  if (zll_mht_phi_branch != 0) zll_mht_phi();
  if (zll_mass_branch != 0) zll_mass();
  if (zll_pt_branch != 0) zll_pt();
  if (zll_eta_branch != 0) zll_eta();
  if (zll_phi_branch != 0) zll_phi();
  if (zll_ht_branch != 0) zll_ht();
  if (zll_mt2JECup_branch != 0) zll_mt2JECup();
  if (zll_deltaPhiMinJECup_branch != 0) zll_deltaPhiMinJECup();
  if (zll_diffMetMhtJECup_branch != 0) zll_diffMetMhtJECup();
  if (zll_met_ptJECup_branch != 0) zll_met_ptJECup();
  if (zll_met_phiJECup_branch != 0) zll_met_phiJECup();
  if (zll_mht_ptJECup_branch != 0) zll_mht_ptJECup();
  if (zll_mht_phiJECup_branch != 0) zll_mht_phiJECup();
  if (zll_htJECup_branch != 0) zll_htJECup();
  if (zll_mt2JECdn_branch != 0) zll_mt2JECdn();
  if (zll_deltaPhiMinJECdn_branch != 0) zll_deltaPhiMinJECdn();
  if (zll_diffMetMhtJECdn_branch != 0) zll_diffMetMhtJECdn();
  if (zll_met_ptJECdn_branch != 0) zll_met_ptJECdn();
  if (zll_met_phiJECdn_branch != 0) zll_met_phiJECdn();
  if (zll_mht_ptJECdn_branch != 0) zll_mht_ptJECdn();
  if (zll_mht_phiJECdn_branch != 0) zll_mht_phiJECdn();
  if (zll_htJECdn_branch != 0) zll_htJECdn();
  if (zllmt_mt2_branch != 0) zllmt_mt2();
  if (zllmt_deltaPhiMin_branch != 0) zllmt_deltaPhiMin();
  if (zllmt_diffMetMht_branch != 0) zllmt_diffMetMht();
  if (zllmt_met_pt_branch != 0) zllmt_met_pt();
  if (zllmt_met_phi_branch != 0) zllmt_met_phi();
  if (zllmt_mht_pt_branch != 0) zllmt_mht_pt();
  if (zllmt_mht_phi_branch != 0) zllmt_mht_phi();
  if (zllmt_ht_branch != 0) zllmt_ht();
  if (zllmt_mt_branch != 0) zllmt_mt();
  if (rl_mt2_branch != 0) rl_mt2();
  if (rl_deltaPhiMin_branch != 0) rl_deltaPhiMin();
  if (rl_diffMetMht_branch != 0) rl_diffMetMht();
  if (rl_met_pt_branch != 0) rl_met_pt();
  if (rl_met_phi_branch != 0) rl_met_phi();
  if (rl_mht_pt_branch != 0) rl_mht_pt();
  if (rl_mht_phi_branch != 0) rl_mht_phi();
  if (rl_mass_branch != 0) rl_mass();
  if (rl_pt_branch != 0) rl_pt();
  if (rl_eta_branch != 0) rl_eta();
  if (rl_phi_branch != 0) rl_phi();
  if (rl_ht_branch != 0) rl_ht();
  if (njet_branch != 0) njet();
  if (jet_pt_branch != 0) jet_pt();
  if (jet_eta_branch != 0) jet_eta();
  if (jet_phi_branch != 0) jet_phi();
  if (jet_mass_branch != 0) jet_mass();
  if (jet_btagCSV_branch != 0) jet_btagCSV();
  if (jet_btagMVA_branch != 0) jet_btagMVA();
  if (jet_chFrac_branch != 0) jet_chFrac();
  if (jet_nhFrac_branch != 0) jet_nhFrac();
  if (jet_cemFrac_branch != 0) jet_cemFrac();
  if (jet_nemFrac_branch != 0) jet_nemFrac();
  if (jet_muFrac_branch != 0) jet_muFrac();
  if (jet_rawPt_branch != 0) jet_rawPt();
  if (jet_mcPt_branch != 0) jet_mcPt();
  if (jet_mcFlavour_branch != 0) jet_mcFlavour();
  if (jet_hadronFlavour_branch != 0) jet_hadronFlavour();
  if (jet_qgl_branch != 0) jet_qgl();
  if (jet_area_branch != 0) jet_area();
  if (jet_id_branch != 0) jet_id();
  if (jet_puId_branch != 0) jet_puId();
  if (jet_muf_branch != 0) jet_muf();
  if (weight_lepsf_branch != 0) weight_lepsf();
  if (weight_lepsf_UP_branch != 0) weight_lepsf_UP();
  if (weight_lepsf_DN_branch != 0) weight_lepsf_DN();
  if (weight_lepsf_0l_branch != 0) weight_lepsf_0l();
  if (weight_lepsf_0l_UP_branch != 0) weight_lepsf_0l_UP();
  if (weight_lepsf_0l_DN_branch != 0) weight_lepsf_0l_DN();
  if (weight_btagsf_branch != 0) weight_btagsf();
  if (weight_btagsf_heavy_UP_branch != 0) weight_btagsf_heavy_UP();
  if (weight_btagsf_light_UP_branch != 0) weight_btagsf_light_UP();
  if (weight_btagsf_heavy_DN_branch != 0) weight_btagsf_heavy_DN();
  if (weight_btagsf_light_DN_branch != 0) weight_btagsf_light_DN();
  if (weight_sigtrigsf_branch != 0) weight_sigtrigsf();
  if (weight_dileptrigsf_branch != 0) weight_dileptrigsf();
  if (weight_phottrigsf_branch != 0) weight_phottrigsf();
  if (weight_pu_branch != 0) weight_pu();
  if (weight_isr_branch != 0) weight_isr();
  if (weight_isr_UP_branch != 0) weight_isr_UP();
  if (weight_isr_DN_branch != 0) weight_isr_DN();
  if (weight_scales_UP_branch != 0) weight_scales_UP();
  if (weight_scales_DN_branch != 0) weight_scales_DN();
  if (weight_pdfs_UP_branch != 0) weight_pdfs_UP();
  if (weight_pdfs_DN_branch != 0) weight_pdfs_DN();
  if (weight_toppt_branch != 0) weight_toppt();
  if (genRecoil_pt_branch != 0) genRecoil_pt();
  if (genTop_pt_branch != 0) genTop_pt();
  if (genTbar_pt_branch != 0) genTbar_pt();
  if (genProd_pdgId_branch != 0) genProd_pdgId();
  if (weight_pol_L_branch != 0) weight_pol_L();
  if (weight_pol_R_branch != 0) weight_pol_R();
  if (nisrMatch_branch != 0) nisrMatch();
}

const int &CMS3::run() {
  if (not run_isLoaded) {
    if (run_branch != 0) {
      run_branch->GetEntry(index);
    } else {
      printf("branch run_branch does not exist!\n");
      exit(1);
    }
    run_isLoaded = true;
  }
  return run_;
}

const int &CMS3::lumi() {
  if (not lumi_isLoaded) {
    if (lumi_branch != 0) {
      lumi_branch->GetEntry(index);
    } else {
      printf("branch lumi_branch does not exist!\n");
      exit(1);
    }
    lumi_isLoaded = true;
  }
  return lumi_;
}

const unsigned long long &CMS3::evt() {
  if (not evt_isLoaded) {
    if (evt_branch != 0) {
      evt_branch->GetEntry(index);
    } else {
      printf("branch evt_branch does not exist!\n");
      exit(1);
    }
    evt_isLoaded = true;
  }
  return evt_;
}

const int &CMS3::isData() {
  if (not isData_isLoaded) {
    if (isData_branch != 0) {
      isData_branch->GetEntry(index);
    } else {
      printf("branch isData_branch does not exist!\n");
      exit(1);
    }
    isData_isLoaded = true;
  }
  return isData_;
}

const int &CMS3::isGolden() {
  if (not isGolden_isLoaded) {
    if (isGolden_branch != 0) {
      isGolden_branch->GetEntry(index);
    } else {
      printf("branch isGolden_branch does not exist!\n");
      exit(1);
    }
    isGolden_isLoaded = true;
  }
  return isGolden_;
}

const float &CMS3::evt_scale1fb() {
  if (not evt_scale1fb_isLoaded) {
    if (evt_scale1fb_branch != 0) {
      evt_scale1fb_branch->GetEntry(index);
    } else {
      printf("branch evt_scale1fb_branch does not exist!\n");
      exit(1);
    }
    evt_scale1fb_isLoaded = true;
  }
  return evt_scale1fb_;
}

const float &CMS3::evt_xsec() {
  if (not evt_xsec_isLoaded) {
    if (evt_xsec_branch != 0) {
      evt_xsec_branch->GetEntry(index);
    } else {
      printf("branch evt_xsec_branch does not exist!\n");
      exit(1);
    }
    evt_xsec_isLoaded = true;
  }
  return evt_xsec_;
}

const float &CMS3::evt_kfactor() {
  if (not evt_kfactor_isLoaded) {
    if (evt_kfactor_branch != 0) {
      evt_kfactor_branch->GetEntry(index);
    } else {
      printf("branch evt_kfactor_branch does not exist!\n");
      exit(1);
    }
    evt_kfactor_isLoaded = true;
  }
  return evt_kfactor_;
}

const float &CMS3::evt_filter() {
  if (not evt_filter_isLoaded) {
    if (evt_filter_branch != 0) {
      evt_filter_branch->GetEntry(index);
    } else {
      printf("branch evt_filter_branch does not exist!\n");
      exit(1);
    }
    evt_filter_isLoaded = true;
  }
  return evt_filter_;
}

const unsigned long long &CMS3::evt_nEvts() {
  if (not evt_nEvts_isLoaded) {
    if (evt_nEvts_branch != 0) {
      evt_nEvts_branch->GetEntry(index);
    } else {
      printf("branch evt_nEvts_branch does not exist!\n");
      exit(1);
    }
    evt_nEvts_isLoaded = true;
  }
  return evt_nEvts_;
}

const int &CMS3::evt_id() {
  if (not evt_id_isLoaded) {
    if (evt_id_branch != 0) {
      evt_id_branch->GetEntry(index);
    } else {
      printf("branch evt_id_branch does not exist!\n");
      exit(1);
    }
    evt_id_isLoaded = true;
  }
  return evt_id_;
}

const float &CMS3::genWeight() {
  if (not genWeight_isLoaded) {
    if (genWeight_branch != 0) {
      genWeight_branch->GetEntry(index);
    } else {
      printf("branch genWeight_branch does not exist!\n");
      exit(1);
    }
    genWeight_isLoaded = true;
  }
  return genWeight_;
}

const float &CMS3::puWeight() {
  if (not puWeight_isLoaded) {
    if (puWeight_branch != 0) {
      puWeight_branch->GetEntry(index);
    } else {
      printf("branch puWeight_branch does not exist!\n");
      exit(1);
    }
    puWeight_isLoaded = true;
  }
  return puWeight_;
}

const int &CMS3::nVert() {
  if (not nVert_isLoaded) {
    if (nVert_branch != 0) {
      nVert_branch->GetEntry(index);
    } else {
      printf("branch nVert_branch does not exist!\n");
      exit(1);
    }
    nVert_isLoaded = true;
  }
  return nVert_;
}

const int &CMS3::nTrueInt() {
  if (not nTrueInt_isLoaded) {
    if (nTrueInt_branch != 0) {
      nTrueInt_branch->GetEntry(index);
    } else {
      printf("branch nTrueInt_branch does not exist!\n");
      exit(1);
    }
    nTrueInt_isLoaded = true;
  }
  return nTrueInt_;
}

const float &CMS3::rho() {
  if (not rho_isLoaded) {
    if (rho_branch != 0) {
      rho_branch->GetEntry(index);
    } else {
      printf("branch rho_branch does not exist!\n");
      exit(1);
    }
    rho_isLoaded = true;
  }
  return rho_;
}

const int &CMS3::nJet30() {
  if (not nJet30_isLoaded) {
    if (nJet30_branch != 0) {
      nJet30_branch->GetEntry(index);
    } else {
      printf("branch nJet30_branch does not exist!\n");
      exit(1);
    }
    nJet30_isLoaded = true;
  }
  return nJet30_;
}

const int &CMS3::nJet30JECup() {
  if (not nJet30JECup_isLoaded) {
    if (nJet30JECup_branch != 0) {
      nJet30JECup_branch->GetEntry(index);
    } else {
      printf("branch nJet30JECup_branch does not exist!\n");
      exit(1);
    }
    nJet30JECup_isLoaded = true;
  }
  return nJet30JECup_;
}

const int &CMS3::nJet30JECdn() {
  if (not nJet30JECdn_isLoaded) {
    if (nJet30JECdn_branch != 0) {
      nJet30JECdn_branch->GetEntry(index);
    } else {
      printf("branch nJet30JECdn_branch does not exist!\n");
      exit(1);
    }
    nJet30JECdn_isLoaded = true;
  }
  return nJet30JECdn_;
}

const int &CMS3::nJet40() {
  if (not nJet40_isLoaded) {
    if (nJet40_branch != 0) {
      nJet40_branch->GetEntry(index);
    } else {
      printf("branch nJet40_branch does not exist!\n");
      exit(1);
    }
    nJet40_isLoaded = true;
  }
  return nJet40_;
}

const int &CMS3::nBJet20() {
  if (not nBJet20_isLoaded) {
    if (nBJet20_branch != 0) {
      nBJet20_branch->GetEntry(index);
    } else {
      printf("branch nBJet20_branch does not exist!\n");
      exit(1);
    }
    nBJet20_isLoaded = true;
  }
  return nBJet20_;
}

const int &CMS3::nBJet20csv() {
  if (not nBJet20csv_isLoaded) {
    if (nBJet20csv_branch != 0) {
      nBJet20csv_branch->GetEntry(index);
    } else {
      printf("branch nBJet20csv_branch does not exist!\n");
      exit(1);
    }
    nBJet20csv_isLoaded = true;
  }
  return nBJet20csv_;
}

const int &CMS3::nBJet20mva() {
  if (not nBJet20mva_isLoaded) {
    if (nBJet20mva_branch != 0) {
      nBJet20mva_branch->GetEntry(index);
    } else {
      printf("branch nBJet20mva_branch does not exist!\n");
      exit(1);
    }
    nBJet20mva_isLoaded = true;
  }
  return nBJet20mva_;
}

const int &CMS3::nBJet20JECup() {
  if (not nBJet20JECup_isLoaded) {
    if (nBJet20JECup_branch != 0) {
      nBJet20JECup_branch->GetEntry(index);
    } else {
      printf("branch nBJet20JECup_branch does not exist!\n");
      exit(1);
    }
    nBJet20JECup_isLoaded = true;
  }
  return nBJet20JECup_;
}

const int &CMS3::nBJet20JECdn() {
  if (not nBJet20JECdn_isLoaded) {
    if (nBJet20JECdn_branch != 0) {
      nBJet20JECdn_branch->GetEntry(index);
    } else {
      printf("branch nBJet20JECdn_branch does not exist!\n");
      exit(1);
    }
    nBJet20JECdn_isLoaded = true;
  }
  return nBJet20JECdn_;
}

const int &CMS3::nBJet25() {
  if (not nBJet25_isLoaded) {
    if (nBJet25_branch != 0) {
      nBJet25_branch->GetEntry(index);
    } else {
      printf("branch nBJet25_branch does not exist!\n");
      exit(1);
    }
    nBJet25_isLoaded = true;
  }
  return nBJet25_;
}

const int &CMS3::nBJet30() {
  if (not nBJet30_isLoaded) {
    if (nBJet30_branch != 0) {
      nBJet30_branch->GetEntry(index);
    } else {
      printf("branch nBJet30_branch does not exist!\n");
      exit(1);
    }
    nBJet30_isLoaded = true;
  }
  return nBJet30_;
}

const int &CMS3::nBJet30csv() {
  if (not nBJet30csv_isLoaded) {
    if (nBJet30csv_branch != 0) {
      nBJet30csv_branch->GetEntry(index);
    } else {
      printf("branch nBJet30csv_branch does not exist!\n");
      exit(1);
    }
    nBJet30csv_isLoaded = true;
  }
  return nBJet30csv_;
}

const int &CMS3::nBJet30mva() {
  if (not nBJet30mva_isLoaded) {
    if (nBJet30mva_branch != 0) {
      nBJet30mva_branch->GetEntry(index);
    } else {
      printf("branch nBJet30mva_branch does not exist!\n");
      exit(1);
    }
    nBJet30mva_isLoaded = true;
  }
  return nBJet30mva_;
}

const int &CMS3::nBJet40() {
  if (not nBJet40_isLoaded) {
    if (nBJet40_branch != 0) {
      nBJet40_branch->GetEntry(index);
    } else {
      printf("branch nBJet40_branch does not exist!\n");
      exit(1);
    }
    nBJet40_isLoaded = true;
  }
  return nBJet40_;
}

const int &CMS3::nJet30FailId() {
  if (not nJet30FailId_isLoaded) {
    if (nJet30FailId_branch != 0) {
      nJet30FailId_branch->GetEntry(index);
    } else {
      printf("branch nJet30FailId_branch does not exist!\n");
      exit(1);
    }
    nJet30FailId_isLoaded = true;
  }
  return nJet30FailId_;
}

const int &CMS3::nJet100FailId() {
  if (not nJet100FailId_isLoaded) {
    if (nJet100FailId_branch != 0) {
      nJet100FailId_branch->GetEntry(index);
    } else {
      printf("branch nJet100FailId_branch does not exist!\n");
      exit(1);
    }
    nJet100FailId_isLoaded = true;
  }
  return nJet100FailId_;
}

const int &CMS3::nJet20BadFastsim() {
  if (not nJet20BadFastsim_isLoaded) {
    if (nJet20BadFastsim_branch != 0) {
      nJet20BadFastsim_branch->GetEntry(index);
    } else {
      printf("branch nJet20BadFastsim_branch does not exist!\n");
      exit(1);
    }
    nJet20BadFastsim_isLoaded = true;
  }
  return nJet20BadFastsim_;
}

const int &CMS3::nJet200MuFrac50DphiMet() {
  if (not nJet200MuFrac50DphiMet_isLoaded) {
    if (nJet200MuFrac50DphiMet_branch != 0) {
      nJet200MuFrac50DphiMet_branch->GetEntry(index);
    } else {
      printf("branch nJet200MuFrac50DphiMet_branch does not exist!\n");
      exit(1);
    }
    nJet200MuFrac50DphiMet_isLoaded = true;
  }
  return nJet200MuFrac50DphiMet_;
}

const int &CMS3::nMuons10() {
  if (not nMuons10_isLoaded) {
    if (nMuons10_branch != 0) {
      nMuons10_branch->GetEntry(index);
    } else {
      printf("branch nMuons10_branch does not exist!\n");
      exit(1);
    }
    nMuons10_isLoaded = true;
  }
  return nMuons10_;
}

const int &CMS3::nBadMuons20() {
  if (not nBadMuons20_isLoaded) {
    if (nBadMuons20_branch != 0) {
      nBadMuons20_branch->GetEntry(index);
    } else {
      printf("branch nBadMuons20_branch does not exist!\n");
      exit(1);
    }
    nBadMuons20_isLoaded = true;
  }
  return nBadMuons20_;
}

const int &CMS3::nElectrons10() {
  if (not nElectrons10_isLoaded) {
    if (nElectrons10_branch != 0) {
      nElectrons10_branch->GetEntry(index);
    } else {
      printf("branch nElectrons10_branch does not exist!\n");
      exit(1);
    }
    nElectrons10_isLoaded = true;
  }
  return nElectrons10_;
}

const int &CMS3::nLepLowMT() {
  if (not nLepLowMT_isLoaded) {
    if (nLepLowMT_branch != 0) {
      nLepLowMT_branch->GetEntry(index);
    } else {
      printf("branch nLepLowMT_branch does not exist!\n");
      exit(1);
    }
    nLepLowMT_isLoaded = true;
  }
  return nLepLowMT_;
}

const int &CMS3::nTaus20() {
  if (not nTaus20_isLoaded) {
    if (nTaus20_branch != 0) {
      nTaus20_branch->GetEntry(index);
    } else {
      printf("branch nTaus20_branch does not exist!\n");
      exit(1);
    }
    nTaus20_isLoaded = true;
  }
  return nTaus20_;
}

const int &CMS3::nGammas20() {
  if (not nGammas20_isLoaded) {
    if (nGammas20_branch != 0) {
      nGammas20_branch->GetEntry(index);
    } else {
      printf("branch nGammas20_branch does not exist!\n");
      exit(1);
    }
    nGammas20_isLoaded = true;
  }
  return nGammas20_;
}

const int &CMS3::nPFCHCand3() {
  if (not nPFCHCand3_isLoaded) {
    if (nPFCHCand3_branch != 0) {
      nPFCHCand3_branch->GetEntry(index);
    } else {
      printf("branch nPFCHCand3_branch does not exist!\n");
      exit(1);
    }
    nPFCHCand3_isLoaded = true;
  }
  return nPFCHCand3_;
}

const float &CMS3::deltaPhiMin() {
  if (not deltaPhiMin_isLoaded) {
    if (deltaPhiMin_branch != 0) {
      deltaPhiMin_branch->GetEntry(index);
    } else {
      printf("branch deltaPhiMin_branch does not exist!\n");
      exit(1);
    }
    deltaPhiMin_isLoaded = true;
  }
  return deltaPhiMin_;
}

const float &CMS3::deltaPhiMin_genmet() {
  if (not deltaPhiMin_genmet_isLoaded) {
    if (deltaPhiMin_genmet_branch != 0) {
      deltaPhiMin_genmet_branch->GetEntry(index);
    } else {
      printf("branch deltaPhiMin_genmet_branch does not exist!\n");
      exit(1);
    }
    deltaPhiMin_genmet_isLoaded = true;
  }
  return deltaPhiMin_genmet_;
}

const float &CMS3::diffMetMht() {
  if (not diffMetMht_isLoaded) {
    if (diffMetMht_branch != 0) {
      diffMetMht_branch->GetEntry(index);
    } else {
      printf("branch diffMetMht_branch does not exist!\n");
      exit(1);
    }
    diffMetMht_isLoaded = true;
  }
  return diffMetMht_;
}

const float &CMS3::diffMetMht_genmet() {
  if (not diffMetMht_genmet_isLoaded) {
    if (diffMetMht_genmet_branch != 0) {
      diffMetMht_genmet_branch->GetEntry(index);
    } else {
      printf("branch diffMetMht_genmet_branch does not exist!\n");
      exit(1);
    }
    diffMetMht_genmet_isLoaded = true;
  }
  return diffMetMht_genmet_;
}

const float &CMS3::deltaPhiMinJECup() {
  if (not deltaPhiMinJECup_isLoaded) {
    if (deltaPhiMinJECup_branch != 0) {
      deltaPhiMinJECup_branch->GetEntry(index);
    } else {
      printf("branch deltaPhiMinJECup_branch does not exist!\n");
      exit(1);
    }
    deltaPhiMinJECup_isLoaded = true;
  }
  return deltaPhiMinJECup_;
}

const float &CMS3::deltaPhiMinJECdn() {
  if (not deltaPhiMinJECdn_isLoaded) {
    if (deltaPhiMinJECdn_branch != 0) {
      deltaPhiMinJECdn_branch->GetEntry(index);
    } else {
      printf("branch deltaPhiMinJECdn_branch does not exist!\n");
      exit(1);
    }
    deltaPhiMinJECdn_isLoaded = true;
  }
  return deltaPhiMinJECdn_;
}

const float &CMS3::diffMetMhtJECup() {
  if (not diffMetMhtJECup_isLoaded) {
    if (diffMetMhtJECup_branch != 0) {
      diffMetMhtJECup_branch->GetEntry(index);
    } else {
      printf("branch diffMetMhtJECup_branch does not exist!\n");
      exit(1);
    }
    diffMetMhtJECup_isLoaded = true;
  }
  return diffMetMhtJECup_;
}

const float &CMS3::diffMetMhtJECdn() {
  if (not diffMetMhtJECdn_isLoaded) {
    if (diffMetMhtJECdn_branch != 0) {
      diffMetMhtJECdn_branch->GetEntry(index);
    } else {
      printf("branch diffMetMhtJECdn_branch does not exist!\n");
      exit(1);
    }
    diffMetMhtJECdn_isLoaded = true;
  }
  return diffMetMhtJECdn_;
}

const float &CMS3::minMTBMet() {
  if (not minMTBMet_isLoaded) {
    if (minMTBMet_branch != 0) {
      minMTBMet_branch->GetEntry(index);
    } else {
      printf("branch minMTBMet_branch does not exist!\n");
      exit(1);
    }
    minMTBMet_isLoaded = true;
  }
  return minMTBMet_;
}

const float &CMS3::zll_minMTBMet() {
  if (not zll_minMTBMet_isLoaded) {
    if (zll_minMTBMet_branch != 0) {
      zll_minMTBMet_branch->GetEntry(index);
    } else {
      printf("branch zll_minMTBMet_branch does not exist!\n");
      exit(1);
    }
    zll_minMTBMet_isLoaded = true;
  }
  return zll_minMTBMet_;
}

const float &CMS3::gamma_minMTBMet() {
  if (not gamma_minMTBMet_isLoaded) {
    if (gamma_minMTBMet_branch != 0) {
      gamma_minMTBMet_branch->GetEntry(index);
    } else {
      printf("branch gamma_minMTBMet_branch does not exist!\n");
      exit(1);
    }
    gamma_minMTBMet_isLoaded = true;
  }
  return gamma_minMTBMet_;
}

const float &CMS3::ht() {
  if (not ht_isLoaded) {
    if (ht_branch != 0) {
      ht_branch->GetEntry(index);
    } else {
      printf("branch ht_branch does not exist!\n");
      exit(1);
    }
    ht_isLoaded = true;
  }
  return ht_;
}

const float &CMS3::htJECup() {
  if (not htJECup_isLoaded) {
    if (htJECup_branch != 0) {
      htJECup_branch->GetEntry(index);
    } else {
      printf("branch htJECup_branch does not exist!\n");
      exit(1);
    }
    htJECup_isLoaded = true;
  }
  return htJECup_;
}

const float &CMS3::htJECdn() {
  if (not htJECdn_isLoaded) {
    if (htJECdn_branch != 0) {
      htJECdn_branch->GetEntry(index);
    } else {
      printf("branch htJECdn_branch does not exist!\n");
      exit(1);
    }
    htJECdn_isLoaded = true;
  }
  return htJECdn_;
}

const float &CMS3::mt2() {
  if (not mt2_isLoaded) {
    if (mt2_branch != 0) {
      mt2_branch->GetEntry(index);
    } else {
      printf("branch mt2_branch does not exist!\n");
      exit(1);
    }
    mt2_isLoaded = true;
  }
  return mt2_;
}

const float &CMS3::mt2JECup() {
  if (not mt2JECup_isLoaded) {
    if (mt2JECup_branch != 0) {
      mt2JECup_branch->GetEntry(index);
    } else {
      printf("branch mt2JECup_branch does not exist!\n");
      exit(1);
    }
    mt2JECup_isLoaded = true;
  }
  return mt2JECup_;
}

const float &CMS3::mt2JECdn() {
  if (not mt2JECdn_isLoaded) {
    if (mt2JECdn_branch != 0) {
      mt2JECdn_branch->GetEntry(index);
    } else {
      printf("branch mt2JECdn_branch does not exist!\n");
      exit(1);
    }
    mt2JECdn_isLoaded = true;
  }
  return mt2JECdn_;
}

const float &CMS3::mt2_gen() {
  if (not mt2_gen_isLoaded) {
    if (mt2_gen_branch != 0) {
      mt2_gen_branch->GetEntry(index);
    } else {
      printf("branch mt2_gen_branch does not exist!\n");
      exit(1);
    }
    mt2_gen_isLoaded = true;
  }
  return mt2_gen_;
}

const float &CMS3::mt2_genmet() {
  if (not mt2_genmet_isLoaded) {
    if (mt2_genmet_branch != 0) {
      mt2_genmet_branch->GetEntry(index);
    } else {
      printf("branch mt2_genmet_branch does not exist!\n");
      exit(1);
    }
    mt2_genmet_isLoaded = true;
  }
  return mt2_genmet_;
}

const float &CMS3::jet1_pt() {
  if (not jet1_pt_isLoaded) {
    if (jet1_pt_branch != 0) {
      jet1_pt_branch->GetEntry(index);
    } else {
      printf("branch jet1_pt_branch does not exist!\n");
      exit(1);
    }
    jet1_pt_isLoaded = true;
  }
  return jet1_pt_;
}

const float &CMS3::jet2_pt() {
  if (not jet2_pt_isLoaded) {
    if (jet2_pt_branch != 0) {
      jet2_pt_branch->GetEntry(index);
    } else {
      printf("branch jet2_pt_branch does not exist!\n");
      exit(1);
    }
    jet2_pt_isLoaded = true;
  }
  return jet2_pt_;
}

const float &CMS3::jet1_ptJECup() {
  if (not jet1_ptJECup_isLoaded) {
    if (jet1_ptJECup_branch != 0) {
      jet1_ptJECup_branch->GetEntry(index);
    } else {
      printf("branch jet1_ptJECup_branch does not exist!\n");
      exit(1);
    }
    jet1_ptJECup_isLoaded = true;
  }
  return jet1_ptJECup_;
}

const float &CMS3::jet2_ptJECup() {
  if (not jet2_ptJECup_isLoaded) {
    if (jet2_ptJECup_branch != 0) {
      jet2_ptJECup_branch->GetEntry(index);
    } else {
      printf("branch jet2_ptJECup_branch does not exist!\n");
      exit(1);
    }
    jet2_ptJECup_isLoaded = true;
  }
  return jet2_ptJECup_;
}

const float &CMS3::jet1_ptJECdn() {
  if (not jet1_ptJECdn_isLoaded) {
    if (jet1_ptJECdn_branch != 0) {
      jet1_ptJECdn_branch->GetEntry(index);
    } else {
      printf("branch jet1_ptJECdn_branch does not exist!\n");
      exit(1);
    }
    jet1_ptJECdn_isLoaded = true;
  }
  return jet1_ptJECdn_;
}

const float &CMS3::jet2_ptJECdn() {
  if (not jet2_ptJECdn_isLoaded) {
    if (jet2_ptJECdn_branch != 0) {
      jet2_ptJECdn_branch->GetEntry(index);
    } else {
      printf("branch jet2_ptJECdn_branch does not exist!\n");
      exit(1);
    }
    jet2_ptJECdn_isLoaded = true;
  }
  return jet2_ptJECdn_;
}

const int &CMS3::jet_failFSveto() {
  if (not jet_failFSveto_isLoaded) {
    if (jet_failFSveto_branch != 0) {
      jet_failFSveto_branch->GetEntry(index);
    } else {
      printf("branch jet_failFSveto_branch does not exist!\n");
      exit(1);
    }
    jet_failFSveto_isLoaded = true;
  }
  return jet_failFSveto_;
}

const float &CMS3::gamma_jet1_pt() {
  if (not gamma_jet1_pt_isLoaded) {
    if (gamma_jet1_pt_branch != 0) {
      gamma_jet1_pt_branch->GetEntry(index);
    } else {
      printf("branch gamma_jet1_pt_branch does not exist!\n");
      exit(1);
    }
    gamma_jet1_pt_isLoaded = true;
  }
  return gamma_jet1_pt_;
}

const float &CMS3::gamma_jet2_pt() {
  if (not gamma_jet2_pt_isLoaded) {
    if (gamma_jet2_pt_branch != 0) {
      gamma_jet2_pt_branch->GetEntry(index);
    } else {
      printf("branch gamma_jet2_pt_branch does not exist!\n");
      exit(1);
    }
    gamma_jet2_pt_isLoaded = true;
  }
  return gamma_jet2_pt_;
}

const float &CMS3::pseudoJet1_pt() {
  if (not pseudoJet1_pt_isLoaded) {
    if (pseudoJet1_pt_branch != 0) {
      pseudoJet1_pt_branch->GetEntry(index);
    } else {
      printf("branch pseudoJet1_pt_branch does not exist!\n");
      exit(1);
    }
    pseudoJet1_pt_isLoaded = true;
  }
  return pseudoJet1_pt_;
}

const float &CMS3::pseudoJet1_eta() {
  if (not pseudoJet1_eta_isLoaded) {
    if (pseudoJet1_eta_branch != 0) {
      pseudoJet1_eta_branch->GetEntry(index);
    } else {
      printf("branch pseudoJet1_eta_branch does not exist!\n");
      exit(1);
    }
    pseudoJet1_eta_isLoaded = true;
  }
  return pseudoJet1_eta_;
}

const float &CMS3::pseudoJet1_phi() {
  if (not pseudoJet1_phi_isLoaded) {
    if (pseudoJet1_phi_branch != 0) {
      pseudoJet1_phi_branch->GetEntry(index);
    } else {
      printf("branch pseudoJet1_phi_branch does not exist!\n");
      exit(1);
    }
    pseudoJet1_phi_isLoaded = true;
  }
  return pseudoJet1_phi_;
}

const float &CMS3::pseudoJet1_mass() {
  if (not pseudoJet1_mass_isLoaded) {
    if (pseudoJet1_mass_branch != 0) {
      pseudoJet1_mass_branch->GetEntry(index);
    } else {
      printf("branch pseudoJet1_mass_branch does not exist!\n");
      exit(1);
    }
    pseudoJet1_mass_isLoaded = true;
  }
  return pseudoJet1_mass_;
}

const float &CMS3::pseudoJet2_pt() {
  if (not pseudoJet2_pt_isLoaded) {
    if (pseudoJet2_pt_branch != 0) {
      pseudoJet2_pt_branch->GetEntry(index);
    } else {
      printf("branch pseudoJet2_pt_branch does not exist!\n");
      exit(1);
    }
    pseudoJet2_pt_isLoaded = true;
  }
  return pseudoJet2_pt_;
}

const float &CMS3::pseudoJet2_eta() {
  if (not pseudoJet2_eta_isLoaded) {
    if (pseudoJet2_eta_branch != 0) {
      pseudoJet2_eta_branch->GetEntry(index);
    } else {
      printf("branch pseudoJet2_eta_branch does not exist!\n");
      exit(1);
    }
    pseudoJet2_eta_isLoaded = true;
  }
  return pseudoJet2_eta_;
}

const float &CMS3::pseudoJet2_phi() {
  if (not pseudoJet2_phi_isLoaded) {
    if (pseudoJet2_phi_branch != 0) {
      pseudoJet2_phi_branch->GetEntry(index);
    } else {
      printf("branch pseudoJet2_phi_branch does not exist!\n");
      exit(1);
    }
    pseudoJet2_phi_isLoaded = true;
  }
  return pseudoJet2_phi_;
}

const float &CMS3::pseudoJet2_mass() {
  if (not pseudoJet2_mass_isLoaded) {
    if (pseudoJet2_mass_branch != 0) {
      pseudoJet2_mass_branch->GetEntry(index);
    } else {
      printf("branch pseudoJet2_mass_branch does not exist!\n");
      exit(1);
    }
    pseudoJet2_mass_isLoaded = true;
  }
  return pseudoJet2_mass_;
}

const float &CMS3::mht_pt() {
  if (not mht_pt_isLoaded) {
    if (mht_pt_branch != 0) {
      mht_pt_branch->GetEntry(index);
    } else {
      printf("branch mht_pt_branch does not exist!\n");
      exit(1);
    }
    mht_pt_isLoaded = true;
  }
  return mht_pt_;
}

const float &CMS3::mht_phi() {
  if (not mht_phi_isLoaded) {
    if (mht_phi_branch != 0) {
      mht_phi_branch->GetEntry(index);
    } else {
      printf("branch mht_phi_branch does not exist!\n");
      exit(1);
    }
    mht_phi_isLoaded = true;
  }
  return mht_phi_;
}

const float &CMS3::mht_ptJECup() {
  if (not mht_ptJECup_isLoaded) {
    if (mht_ptJECup_branch != 0) {
      mht_ptJECup_branch->GetEntry(index);
    } else {
      printf("branch mht_ptJECup_branch does not exist!\n");
      exit(1);
    }
    mht_ptJECup_isLoaded = true;
  }
  return mht_ptJECup_;
}

const float &CMS3::mht_phiJECup() {
  if (not mht_phiJECup_isLoaded) {
    if (mht_phiJECup_branch != 0) {
      mht_phiJECup_branch->GetEntry(index);
    } else {
      printf("branch mht_phiJECup_branch does not exist!\n");
      exit(1);
    }
    mht_phiJECup_isLoaded = true;
  }
  return mht_phiJECup_;
}

const float &CMS3::mht_ptJECdn() {
  if (not mht_ptJECdn_isLoaded) {
    if (mht_ptJECdn_branch != 0) {
      mht_ptJECdn_branch->GetEntry(index);
    } else {
      printf("branch mht_ptJECdn_branch does not exist!\n");
      exit(1);
    }
    mht_ptJECdn_isLoaded = true;
  }
  return mht_ptJECdn_;
}

const float &CMS3::mht_phiJECdn() {
  if (not mht_phiJECdn_isLoaded) {
    if (mht_phiJECdn_branch != 0) {
      mht_phiJECdn_branch->GetEntry(index);
    } else {
      printf("branch mht_phiJECdn_branch does not exist!\n");
      exit(1);
    }
    mht_phiJECdn_isLoaded = true;
  }
  return mht_phiJECdn_;
}

const float &CMS3::met_pt() {
  if (not met_pt_isLoaded) {
    if (met_pt_branch != 0) {
      met_pt_branch->GetEntry(index);
    } else {
      printf("branch met_pt_branch does not exist!\n");
      exit(1);
    }
    met_pt_isLoaded = true;
  }
  return met_pt_;
}

const float &CMS3::met_phi() {
  if (not met_phi_isLoaded) {
    if (met_phi_branch != 0) {
      met_phi_branch->GetEntry(index);
    } else {
      printf("branch met_phi_branch does not exist!\n");
      exit(1);
    }
    met_phi_isLoaded = true;
  }
  return met_phi_;
}

const float &CMS3::met_ptJECup() {
  if (not met_ptJECup_isLoaded) {
    if (met_ptJECup_branch != 0) {
      met_ptJECup_branch->GetEntry(index);
    } else {
      printf("branch met_ptJECup_branch does not exist!\n");
      exit(1);
    }
    met_ptJECup_isLoaded = true;
  }
  return met_ptJECup_;
}

const float &CMS3::met_phiJECup() {
  if (not met_phiJECup_isLoaded) {
    if (met_phiJECup_branch != 0) {
      met_phiJECup_branch->GetEntry(index);
    } else {
      printf("branch met_phiJECup_branch does not exist!\n");
      exit(1);
    }
    met_phiJECup_isLoaded = true;
  }
  return met_phiJECup_;
}

const float &CMS3::met_ptJECdn() {
  if (not met_ptJECdn_isLoaded) {
    if (met_ptJECdn_branch != 0) {
      met_ptJECdn_branch->GetEntry(index);
    } else {
      printf("branch met_ptJECdn_branch does not exist!\n");
      exit(1);
    }
    met_ptJECdn_isLoaded = true;
  }
  return met_ptJECdn_;
}

const float &CMS3::met_phiJECdn() {
  if (not met_phiJECdn_isLoaded) {
    if (met_phiJECdn_branch != 0) {
      met_phiJECdn_branch->GetEntry(index);
    } else {
      printf("branch met_phiJECdn_branch does not exist!\n");
      exit(1);
    }
    met_phiJECdn_isLoaded = true;
  }
  return met_phiJECdn_;
}

const float &CMS3::met_rawPt() {
  if (not met_rawPt_isLoaded) {
    if (met_rawPt_branch != 0) {
      met_rawPt_branch->GetEntry(index);
    } else {
      printf("branch met_rawPt_branch does not exist!\n");
      exit(1);
    }
    met_rawPt_isLoaded = true;
  }
  return met_rawPt_;
}

const float &CMS3::met_rawPhi() {
  if (not met_rawPhi_isLoaded) {
    if (met_rawPhi_branch != 0) {
      met_rawPhi_branch->GetEntry(index);
    } else {
      printf("branch met_rawPhi_branch does not exist!\n");
      exit(1);
    }
    met_rawPhi_isLoaded = true;
  }
  return met_rawPhi_;
}

const float &CMS3::met_caloPt() {
  if (not met_caloPt_isLoaded) {
    if (met_caloPt_branch != 0) {
      met_caloPt_branch->GetEntry(index);
    } else {
      printf("branch met_caloPt_branch does not exist!\n");
      exit(1);
    }
    met_caloPt_isLoaded = true;
  }
  return met_caloPt_;
}

const float &CMS3::met_caloPhi() {
  if (not met_caloPhi_isLoaded) {
    if (met_caloPhi_branch != 0) {
      met_caloPhi_branch->GetEntry(index);
    } else {
      printf("branch met_caloPhi_branch does not exist!\n");
      exit(1);
    }
    met_caloPhi_isLoaded = true;
  }
  return met_caloPhi_;
}

const float &CMS3::met_trkPt() {
  if (not met_trkPt_isLoaded) {
    if (met_trkPt_branch != 0) {
      met_trkPt_branch->GetEntry(index);
    } else {
      printf("branch met_trkPt_branch does not exist!\n");
      exit(1);
    }
    met_trkPt_isLoaded = true;
  }
  return met_trkPt_;
}

const float &CMS3::met_trkPhi() {
  if (not met_trkPhi_isLoaded) {
    if (met_trkPhi_branch != 0) {
      met_trkPhi_branch->GetEntry(index);
    } else {
      printf("branch met_trkPhi_branch does not exist!\n");
      exit(1);
    }
    met_trkPhi_isLoaded = true;
  }
  return met_trkPhi_;
}

const float &CMS3::met_genPt() {
  if (not met_genPt_isLoaded) {
    if (met_genPt_branch != 0) {
      met_genPt_branch->GetEntry(index);
    } else {
      printf("branch met_genPt_branch does not exist!\n");
      exit(1);
    }
    met_genPt_isLoaded = true;
  }
  return met_genPt_;
}

const float &CMS3::met_genPhi() {
  if (not met_genPhi_isLoaded) {
    if (met_genPhi_branch != 0) {
      met_genPhi_branch->GetEntry(index);
    } else {
      printf("branch met_genPhi_branch does not exist!\n");
      exit(1);
    }
    met_genPhi_isLoaded = true;
  }
  return met_genPhi_;
}

const float &CMS3::met_miniaodPt() {
  if (not met_miniaodPt_isLoaded) {
    if (met_miniaodPt_branch != 0) {
      met_miniaodPt_branch->GetEntry(index);
    } else {
      printf("branch met_miniaodPt_branch does not exist!\n");
      exit(1);
    }
    met_miniaodPt_isLoaded = true;
  }
  return met_miniaodPt_;
}

const float &CMS3::met_miniaodPhi() {
  if (not met_miniaodPhi_isLoaded) {
    if (met_miniaodPhi_branch != 0) {
      met_miniaodPhi_branch->GetEntry(index);
    } else {
      printf("branch met_miniaodPhi_branch does not exist!\n");
      exit(1);
    }
    met_miniaodPhi_isLoaded = true;
  }
  return met_miniaodPhi_;
}

const int &CMS3::Flag_EcalDeadCellTriggerPrimitiveFilter() {
  if (not Flag_EcalDeadCellTriggerPrimitiveFilter_isLoaded) {
    if (Flag_EcalDeadCellTriggerPrimitiveFilter_branch != 0) {
      Flag_EcalDeadCellTriggerPrimitiveFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_EcalDeadCellTriggerPrimitiveFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_EcalDeadCellTriggerPrimitiveFilter_isLoaded = true;
  }
  return Flag_EcalDeadCellTriggerPrimitiveFilter_;
}

const int &CMS3::Flag_trkPOG_manystripclus53X() {
  if (not Flag_trkPOG_manystripclus53X_isLoaded) {
    if (Flag_trkPOG_manystripclus53X_branch != 0) {
      Flag_trkPOG_manystripclus53X_branch->GetEntry(index);
    } else {
      printf("branch Flag_trkPOG_manystripclus53X_branch does not exist!\n");
      exit(1);
    }
    Flag_trkPOG_manystripclus53X_isLoaded = true;
  }
  return Flag_trkPOG_manystripclus53X_;
}

const int &CMS3::Flag_ecalLaserCorrFilter() {
  if (not Flag_ecalLaserCorrFilter_isLoaded) {
    if (Flag_ecalLaserCorrFilter_branch != 0) {
      Flag_ecalLaserCorrFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_ecalLaserCorrFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_ecalLaserCorrFilter_isLoaded = true;
  }
  return Flag_ecalLaserCorrFilter_;
}

const int &CMS3::Flag_trkPOG_toomanystripclus53X() {
  if (not Flag_trkPOG_toomanystripclus53X_isLoaded) {
    if (Flag_trkPOG_toomanystripclus53X_branch != 0) {
      Flag_trkPOG_toomanystripclus53X_branch->GetEntry(index);
    } else {
      printf("branch Flag_trkPOG_toomanystripclus53X_branch does not exist!\n");
      exit(1);
    }
    Flag_trkPOG_toomanystripclus53X_isLoaded = true;
  }
  return Flag_trkPOG_toomanystripclus53X_;
}

const int &CMS3::Flag_hcalLaserEventFilter() {
  if (not Flag_hcalLaserEventFilter_isLoaded) {
    if (Flag_hcalLaserEventFilter_branch != 0) {
      Flag_hcalLaserEventFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_hcalLaserEventFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_hcalLaserEventFilter_isLoaded = true;
  }
  return Flag_hcalLaserEventFilter_;
}

const int &CMS3::Flag_trkPOG_logErrorTooManyClusters() {
  if (not Flag_trkPOG_logErrorTooManyClusters_isLoaded) {
    if (Flag_trkPOG_logErrorTooManyClusters_branch != 0) {
      Flag_trkPOG_logErrorTooManyClusters_branch->GetEntry(index);
    } else {
      printf("branch Flag_trkPOG_logErrorTooManyClusters_branch does not exist!\n");
      exit(1);
    }
    Flag_trkPOG_logErrorTooManyClusters_isLoaded = true;
  }
  return Flag_trkPOG_logErrorTooManyClusters_;
}

const int &CMS3::Flag_trkPOGFilters() {
  if (not Flag_trkPOGFilters_isLoaded) {
    if (Flag_trkPOGFilters_branch != 0) {
      Flag_trkPOGFilters_branch->GetEntry(index);
    } else {
      printf("branch Flag_trkPOGFilters_branch does not exist!\n");
      exit(1);
    }
    Flag_trkPOGFilters_isLoaded = true;
  }
  return Flag_trkPOGFilters_;
}

const int &CMS3::Flag_trackingFailureFilter() {
  if (not Flag_trackingFailureFilter_isLoaded) {
    if (Flag_trackingFailureFilter_branch != 0) {
      Flag_trackingFailureFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_trackingFailureFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_trackingFailureFilter_isLoaded = true;
  }
  return Flag_trackingFailureFilter_;
}

const int &CMS3::Flag_CSCTightHalo2015Filter() {
  if (not Flag_CSCTightHalo2015Filter_isLoaded) {
    if (Flag_CSCTightHalo2015Filter_branch != 0) {
      Flag_CSCTightHalo2015Filter_branch->GetEntry(index);
    } else {
      printf("branch Flag_CSCTightHalo2015Filter_branch does not exist!\n");
      exit(1);
    }
    Flag_CSCTightHalo2015Filter_isLoaded = true;
  }
  return Flag_CSCTightHalo2015Filter_;
}

const int &CMS3::Flag_CSCTightHaloFilter() {
  if (not Flag_CSCTightHaloFilter_isLoaded) {
    if (Flag_CSCTightHaloFilter_branch != 0) {
      Flag_CSCTightHaloFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_CSCTightHaloFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_CSCTightHaloFilter_isLoaded = true;
  }
  return Flag_CSCTightHaloFilter_;
}

const int &CMS3::Flag_globalTightHalo2016Filter() {
  if (not Flag_globalTightHalo2016Filter_isLoaded) {
    if (Flag_globalTightHalo2016Filter_branch != 0) {
      Flag_globalTightHalo2016Filter_branch->GetEntry(index);
    } else {
      printf("branch Flag_globalTightHalo2016Filter_branch does not exist!\n");
      exit(1);
    }
    Flag_globalTightHalo2016Filter_isLoaded = true;
  }
  return Flag_globalTightHalo2016Filter_;
}

const int &CMS3::Flag_globalSuperTightHalo2016Filter() {
  if (not Flag_globalSuperTightHalo2016Filter_isLoaded) {
    if (Flag_globalSuperTightHalo2016Filter_branch != 0) {
      Flag_globalSuperTightHalo2016Filter_branch->GetEntry(index);
    } else {
      printf("branch Flag_globalSuperTightHalo2016Filter_branch does not exist!\n");
      exit(1);
    }
    Flag_globalSuperTightHalo2016Filter_isLoaded = true;
  }
  return Flag_globalSuperTightHalo2016Filter_;
}

const int &CMS3::Flag_HBHENoiseFilter() {
  if (not Flag_HBHENoiseFilter_isLoaded) {
    if (Flag_HBHENoiseFilter_branch != 0) {
      Flag_HBHENoiseFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_HBHENoiseFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_HBHENoiseFilter_isLoaded = true;
  }
  return Flag_HBHENoiseFilter_;
}

const int &CMS3::Flag_HBHENoiseIsoFilter() {
  if (not Flag_HBHENoiseIsoFilter_isLoaded) {
    if (Flag_HBHENoiseIsoFilter_branch != 0) {
      Flag_HBHENoiseIsoFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_HBHENoiseIsoFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_HBHENoiseIsoFilter_isLoaded = true;
  }
  return Flag_HBHENoiseIsoFilter_;
}

const int &CMS3::Flag_goodVertices() {
  if (not Flag_goodVertices_isLoaded) {
    if (Flag_goodVertices_branch != 0) {
      Flag_goodVertices_branch->GetEntry(index);
    } else {
      printf("branch Flag_goodVertices_branch does not exist!\n");
      exit(1);
    }
    Flag_goodVertices_isLoaded = true;
  }
  return Flag_goodVertices_;
}

const int &CMS3::Flag_eeBadScFilter() {
  if (not Flag_eeBadScFilter_isLoaded) {
    if (Flag_eeBadScFilter_branch != 0) {
      Flag_eeBadScFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_eeBadScFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_eeBadScFilter_isLoaded = true;
  }
  return Flag_eeBadScFilter_;
}

const int &CMS3::Flag_ecalBadCalibFilter() {
  if (not Flag_ecalBadCalibFilter_isLoaded) {
    if (Flag_ecalBadCalibFilter_branch != 0) {
      Flag_ecalBadCalibFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_ecalBadCalibFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_ecalBadCalibFilter_isLoaded = true;
  }
  return Flag_ecalBadCalibFilter_;
}

const int &CMS3::Flag_badMuonFilter() {
  if (not Flag_badMuonFilter_isLoaded) {
    if (Flag_badMuonFilter_branch != 0) {
      Flag_badMuonFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_badMuonFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_badMuonFilter_isLoaded = true;
  }
  return Flag_badMuonFilter_;
}

const int &CMS3::Flag_badMuonFilterV2() {
  if (not Flag_badMuonFilterV2_isLoaded) {
    if (Flag_badMuonFilterV2_branch != 0) {
      Flag_badMuonFilterV2_branch->GetEntry(index);
    } else {
      printf("branch Flag_badMuonFilterV2_branch does not exist!\n");
      exit(1);
    }
    Flag_badMuonFilterV2_isLoaded = true;
  }
  return Flag_badMuonFilterV2_;
}

const int &CMS3::Flag_badMuons() {
  if (not Flag_badMuons_isLoaded) {
    if (Flag_badMuons_branch != 0) {
      Flag_badMuons_branch->GetEntry(index);
    } else {
      printf("branch Flag_badMuons_branch does not exist!\n");
      exit(1);
    }
    Flag_badMuons_isLoaded = true;
  }
  return Flag_badMuons_;
}

const int &CMS3::Flag_duplicateMuons() {
  if (not Flag_duplicateMuons_isLoaded) {
    if (Flag_duplicateMuons_branch != 0) {
      Flag_duplicateMuons_branch->GetEntry(index);
    } else {
      printf("branch Flag_duplicateMuons_branch does not exist!\n");
      exit(1);
    }
    Flag_duplicateMuons_isLoaded = true;
  }
  return Flag_duplicateMuons_;
}

const int &CMS3::Flag_noBadMuons() {
  if (not Flag_noBadMuons_isLoaded) {
    if (Flag_noBadMuons_branch != 0) {
      Flag_noBadMuons_branch->GetEntry(index);
    } else {
      printf("branch Flag_noBadMuons_branch does not exist!\n");
      exit(1);
    }
    Flag_noBadMuons_isLoaded = true;
  }
  return Flag_noBadMuons_;
}

const int &CMS3::Flag_badChargedCandidateFilter() {
  if (not Flag_badChargedCandidateFilter_isLoaded) {
    if (Flag_badChargedCandidateFilter_branch != 0) {
      Flag_badChargedCandidateFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_badChargedCandidateFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_badChargedCandidateFilter_isLoaded = true;
  }
  return Flag_badChargedCandidateFilter_;
}

const int &CMS3::Flag_badChargedHadronFilter() {
  if (not Flag_badChargedHadronFilter_isLoaded) {
    if (Flag_badChargedHadronFilter_branch != 0) {
      Flag_badChargedHadronFilter_branch->GetEntry(index);
    } else {
      printf("branch Flag_badChargedHadronFilter_branch does not exist!\n");
      exit(1);
    }
    Flag_badChargedHadronFilter_isLoaded = true;
  }
  return Flag_badChargedHadronFilter_;
}

const int &CMS3::Flag_badChargedHadronFilterV2() {
  if (not Flag_badChargedHadronFilterV2_isLoaded) {
    if (Flag_badChargedHadronFilterV2_branch != 0) {
      Flag_badChargedHadronFilterV2_branch->GetEntry(index);
    } else {
      printf("branch Flag_badChargedHadronFilterV2_branch does not exist!\n");
      exit(1);
    }
    Flag_badChargedHadronFilterV2_isLoaded = true;
  }
  return Flag_badChargedHadronFilterV2_;
}

const int &CMS3::Flag_METFilters() {
  if (not Flag_METFilters_isLoaded) {
    if (Flag_METFilters_branch != 0) {
      Flag_METFilters_branch->GetEntry(index);
    } else {
      printf("branch Flag_METFilters_branch does not exist!\n");
      exit(1);
    }
    Flag_METFilters_isLoaded = true;
  }
  return Flag_METFilters_;
}

const int &CMS3::HLT_PFHT1050() {
  if (not HLT_PFHT1050_isLoaded) {
    if (HLT_PFHT1050_branch != 0) {
      HLT_PFHT1050_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT1050_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT1050_isLoaded = true;
  }
  return HLT_PFHT1050_;
}

const int &CMS3::HLT_PFHT500_PFMET100_PFMHT100() {
  if (not HLT_PFHT500_PFMET100_PFMHT100_isLoaded) {
    if (HLT_PFHT500_PFMET100_PFMHT100_branch != 0) {
      HLT_PFHT500_PFMET100_PFMHT100_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT500_PFMET100_PFMHT100_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT500_PFMET100_PFMHT100_isLoaded = true;
  }
  return HLT_PFHT500_PFMET100_PFMHT100_;
}

const int &CMS3::HLT_PFHT700_PFMET85_PFMHT85() {
  if (not HLT_PFHT700_PFMET85_PFMHT85_isLoaded) {
    if (HLT_PFHT700_PFMET85_PFMHT85_branch != 0) {
      HLT_PFHT700_PFMET85_PFMHT85_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT700_PFMET85_PFMHT85_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT700_PFMET85_PFMHT85_isLoaded = true;
  }
  return HLT_PFHT700_PFMET85_PFMHT85_;
}

const int &CMS3::HLT_PFHT800_PFMET75_PFMHT75() {
  if (not HLT_PFHT800_PFMET75_PFMHT75_isLoaded) {
    if (HLT_PFHT800_PFMET75_PFMHT75_branch != 0) {
      HLT_PFHT800_PFMET75_PFMHT75_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT800_PFMET75_PFMHT75_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT800_PFMET75_PFMHT75_isLoaded = true;
  }
  return HLT_PFHT800_PFMET75_PFMHT75_;
}

const int &CMS3::HLT_PFMET170() {
  if (not HLT_PFMET170_isLoaded) {
    if (HLT_PFMET170_branch != 0) {
      HLT_PFMET170_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET170_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET170_isLoaded = true;
  }
  return HLT_PFMET170_;
}

const int &CMS3::HLT_PFHT300_PFMET100() {
  if (not HLT_PFHT300_PFMET100_isLoaded) {
    if (HLT_PFHT300_PFMET100_branch != 0) {
      HLT_PFHT300_PFMET100_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT300_PFMET100_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT300_PFMET100_isLoaded = true;
  }
  return HLT_PFHT300_PFMET100_;
}

const int &CMS3::HLT_PFHT300_PFMET110() {
  if (not HLT_PFHT300_PFMET110_isLoaded) {
    if (HLT_PFHT300_PFMET110_branch != 0) {
      HLT_PFHT300_PFMET110_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT300_PFMET110_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT300_PFMET110_isLoaded = true;
  }
  return HLT_PFHT300_PFMET110_;
}

const int &CMS3::HLT_PFHT350_PFMET100() {
  if (not HLT_PFHT350_PFMET100_isLoaded) {
    if (HLT_PFHT350_PFMET100_branch != 0) {
      HLT_PFHT350_PFMET100_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT350_PFMET100_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT350_PFMET100_isLoaded = true;
  }
  return HLT_PFHT350_PFMET100_;
}

const int &CMS3::HLT_PFHT350_PFMET120() {
  if (not HLT_PFHT350_PFMET120_isLoaded) {
    if (HLT_PFHT350_PFMET120_branch != 0) {
      HLT_PFHT350_PFMET120_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT350_PFMET120_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT350_PFMET120_isLoaded = true;
  }
  return HLT_PFHT350_PFMET120_;
}

const int &CMS3::HLT_PFMETNoMu90_PFMHTNoMu90() {
  if (not HLT_PFMETNoMu90_PFMHTNoMu90_isLoaded) {
    if (HLT_PFMETNoMu90_PFMHTNoMu90_branch != 0) {
      HLT_PFMETNoMu90_PFMHTNoMu90_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMETNoMu90_PFMHTNoMu90_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMETNoMu90_PFMHTNoMu90_isLoaded = true;
  }
  return HLT_PFMETNoMu90_PFMHTNoMu90_;
}

const int &CMS3::HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90() {
  if (not HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_isLoaded) {
    if (HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_branch != 0) {
      HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_branch->GetEntry(index);
    } else {
      printf("branch HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_branch does not exist!\n");
      exit(1);
    }
    HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_isLoaded = true;
  }
  return HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_;
}

const int &CMS3::HLT_PFMETNoMu100_PFMHTNoMu100() {
  if (not HLT_PFMETNoMu100_PFMHTNoMu100_isLoaded) {
    if (HLT_PFMETNoMu100_PFMHTNoMu100_branch != 0) {
      HLT_PFMETNoMu100_PFMHTNoMu100_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMETNoMu100_PFMHTNoMu100_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMETNoMu100_PFMHTNoMu100_isLoaded = true;
  }
  return HLT_PFMETNoMu100_PFMHTNoMu100_;
}

const int &CMS3::HLT_PFMETNoMu110_PFMHTNoMu110() {
  if (not HLT_PFMETNoMu110_PFMHTNoMu110_isLoaded) {
    if (HLT_PFMETNoMu110_PFMHTNoMu110_branch != 0) {
      HLT_PFMETNoMu110_PFMHTNoMu110_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMETNoMu110_PFMHTNoMu110_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMETNoMu110_PFMHTNoMu110_isLoaded = true;
  }
  return HLT_PFMETNoMu110_PFMHTNoMu110_;
}

const int &CMS3::HLT_PFMETNoMu120_PFMHTNoMu120() {
  if (not HLT_PFMETNoMu120_PFMHTNoMu120_isLoaded) {
    if (HLT_PFMETNoMu120_PFMHTNoMu120_branch != 0) {
      HLT_PFMETNoMu120_PFMHTNoMu120_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMETNoMu120_PFMHTNoMu120_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMETNoMu120_PFMHTNoMu120_isLoaded = true;
  }
  return HLT_PFMETNoMu120_PFMHTNoMu120_;
}

const int &CMS3::HLT_PFMETNoMu130_PFMHTNoMu130() {
  if (not HLT_PFMETNoMu130_PFMHTNoMu130_isLoaded) {
    if (HLT_PFMETNoMu130_PFMHTNoMu130_branch != 0) {
      HLT_PFMETNoMu130_PFMHTNoMu130_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMETNoMu130_PFMHTNoMu130_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMETNoMu130_PFMHTNoMu130_isLoaded = true;
  }
  return HLT_PFMETNoMu130_PFMHTNoMu130_;
}

const int &CMS3::HLT_PFMETNoMu140_PFMHTNoMu140() {
  if (not HLT_PFMETNoMu140_PFMHTNoMu140_isLoaded) {
    if (HLT_PFMETNoMu140_PFMHTNoMu140_branch != 0) {
      HLT_PFMETNoMu140_PFMHTNoMu140_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMETNoMu140_PFMHTNoMu140_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMETNoMu140_PFMHTNoMu140_isLoaded = true;
  }
  return HLT_PFMETNoMu140_PFMHTNoMu140_;
}

const int &CMS3::HLT_PFMET90_PFMHT90() {
  if (not HLT_PFMET90_PFMHT90_isLoaded) {
    if (HLT_PFMET90_PFMHT90_branch != 0) {
      HLT_PFMET90_PFMHT90_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET90_PFMHT90_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET90_PFMHT90_isLoaded = true;
  }
  return HLT_PFMET90_PFMHT90_;
}

const int &CMS3::HLT_PFMET100_PFMHT100() {
  if (not HLT_PFMET100_PFMHT100_isLoaded) {
    if (HLT_PFMET100_PFMHT100_branch != 0) {
      HLT_PFMET100_PFMHT100_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET100_PFMHT100_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET100_PFMHT100_isLoaded = true;
  }
  return HLT_PFMET100_PFMHT100_;
}

const int &CMS3::HLT_PFMET110_PFMHT110() {
  if (not HLT_PFMET110_PFMHT110_isLoaded) {
    if (HLT_PFMET110_PFMHT110_branch != 0) {
      HLT_PFMET110_PFMHT110_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET110_PFMHT110_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET110_PFMHT110_isLoaded = true;
  }
  return HLT_PFMET110_PFMHT110_;
}

const int &CMS3::HLT_PFMET120_PFMHT120() {
  if (not HLT_PFMET120_PFMHT120_isLoaded) {
    if (HLT_PFMET120_PFMHT120_branch != 0) {
      HLT_PFMET120_PFMHT120_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET120_PFMHT120_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET120_PFMHT120_isLoaded = true;
  }
  return HLT_PFMET120_PFMHT120_;
}

const int &CMS3::HLT_PFMET130_PFMHT130() {
  if (not HLT_PFMET130_PFMHT130_isLoaded) {
    if (HLT_PFMET130_PFMHT130_branch != 0) {
      HLT_PFMET130_PFMHT130_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET130_PFMHT130_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET130_PFMHT130_isLoaded = true;
  }
  return HLT_PFMET130_PFMHT130_;
}

const int &CMS3::HLT_PFMET140_PFMHT140() {
  if (not HLT_PFMET140_PFMHT140_isLoaded) {
    if (HLT_PFMET140_PFMHT140_branch != 0) {
      HLT_PFMET140_PFMHT140_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET140_PFMHT140_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET140_PFMHT140_isLoaded = true;
  }
  return HLT_PFMET140_PFMHT140_;
}

const int &CMS3::HLT_PFMET100_PFMHT100_PFHT60() {
  if (not HLT_PFMET100_PFMHT100_PFHT60_isLoaded) {
    if (HLT_PFMET100_PFMHT100_PFHT60_branch != 0) {
      HLT_PFMET100_PFMHT100_PFHT60_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET100_PFMHT100_PFHT60_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET100_PFMHT100_PFHT60_isLoaded = true;
  }
  return HLT_PFMET100_PFMHT100_PFHT60_;
}

const int &CMS3::HLT_PFMET120_PFMHT120_PFHT60() {
  if (not HLT_PFMET120_PFMHT120_PFHT60_isLoaded) {
    if (HLT_PFMET120_PFMHT120_PFHT60_branch != 0) {
      HLT_PFMET120_PFMHT120_PFHT60_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFMET120_PFMHT120_PFHT60_branch does not exist!\n");
      exit(1);
    }
    HLT_PFMET120_PFMHT120_PFHT60_isLoaded = true;
  }
  return HLT_PFMET120_PFMHT120_PFHT60_;
}

const int &CMS3::HLT_PFJet450() {
  if (not HLT_PFJet450_isLoaded) {
    if (HLT_PFJet450_branch != 0) {
      HLT_PFJet450_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFJet450_branch does not exist!\n");
      exit(1);
    }
    HLT_PFJet450_isLoaded = true;
  }
  return HLT_PFJet450_;
}

const int &CMS3::HLT_PFJet500() {
  if (not HLT_PFJet500_isLoaded) {
    if (HLT_PFJet500_branch != 0) {
      HLT_PFJet500_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFJet500_branch does not exist!\n");
      exit(1);
    }
    HLT_PFJet500_isLoaded = true;
  }
  return HLT_PFJet500_;
}

const int &CMS3::HLT_ECALHT800() {
  if (not HLT_ECALHT800_isLoaded) {
    if (HLT_ECALHT800_branch != 0) {
      HLT_ECALHT800_branch->GetEntry(index);
    } else {
      printf("branch HLT_ECALHT800_branch does not exist!\n");
      exit(1);
    }
    HLT_ECALHT800_isLoaded = true;
  }
  return HLT_ECALHT800_;
}

const int &CMS3::HLT_SingleMu() {
  if (not HLT_SingleMu_isLoaded) {
    if (HLT_SingleMu_branch != 0) {
      HLT_SingleMu_branch->GetEntry(index);
    } else {
      printf("branch HLT_SingleMu_branch does not exist!\n");
      exit(1);
    }
    HLT_SingleMu_isLoaded = true;
  }
  return HLT_SingleMu_;
}

const int &CMS3::HLT_SingleMu_NonIso() {
  if (not HLT_SingleMu_NonIso_isLoaded) {
    if (HLT_SingleMu_NonIso_branch != 0) {
      HLT_SingleMu_NonIso_branch->GetEntry(index);
    } else {
      printf("branch HLT_SingleMu_NonIso_branch does not exist!\n");
      exit(1);
    }
    HLT_SingleMu_NonIso_isLoaded = true;
  }
  return HLT_SingleMu_NonIso_;
}

const int &CMS3::HLT_SingleEl() {
  if (not HLT_SingleEl_isLoaded) {
    if (HLT_SingleEl_branch != 0) {
      HLT_SingleEl_branch->GetEntry(index);
    } else {
      printf("branch HLT_SingleEl_branch does not exist!\n");
      exit(1);
    }
    HLT_SingleEl_isLoaded = true;
  }
  return HLT_SingleEl_;
}

const int &CMS3::HLT_SingleEl_NonIso() {
  if (not HLT_SingleEl_NonIso_isLoaded) {
    if (HLT_SingleEl_NonIso_branch != 0) {
      HLT_SingleEl_NonIso_branch->GetEntry(index);
    } else {
      printf("branch HLT_SingleEl_NonIso_branch does not exist!\n");
      exit(1);
    }
    HLT_SingleEl_NonIso_isLoaded = true;
  }
  return HLT_SingleEl_NonIso_;
}

const int &CMS3::HLT_DoubleEl() {
  if (not HLT_DoubleEl_isLoaded) {
    if (HLT_DoubleEl_branch != 0) {
      HLT_DoubleEl_branch->GetEntry(index);
    } else {
      printf("branch HLT_DoubleEl_branch does not exist!\n");
      exit(1);
    }
    HLT_DoubleEl_isLoaded = true;
  }
  return HLT_DoubleEl_;
}

const int &CMS3::HLT_DoubleEl33() {
  if (not HLT_DoubleEl33_isLoaded) {
    if (HLT_DoubleEl33_branch != 0) {
      HLT_DoubleEl33_branch->GetEntry(index);
    } else {
      printf("branch HLT_DoubleEl33_branch does not exist!\n");
      exit(1);
    }
    HLT_DoubleEl33_isLoaded = true;
  }
  return HLT_DoubleEl33_;
}

const int &CMS3::HLT_MuX_Ele12() {
  if (not HLT_MuX_Ele12_isLoaded) {
    if (HLT_MuX_Ele12_branch != 0) {
      HLT_MuX_Ele12_branch->GetEntry(index);
    } else {
      printf("branch HLT_MuX_Ele12_branch does not exist!\n");
      exit(1);
    }
    HLT_MuX_Ele12_isLoaded = true;
  }
  return HLT_MuX_Ele12_;
}

const int &CMS3::HLT_Mu8_EleX() {
  if (not HLT_Mu8_EleX_isLoaded) {
    if (HLT_Mu8_EleX_branch != 0) {
      HLT_Mu8_EleX_branch->GetEntry(index);
    } else {
      printf("branch HLT_Mu8_EleX_branch does not exist!\n");
      exit(1);
    }
    HLT_Mu8_EleX_isLoaded = true;
  }
  return HLT_Mu8_EleX_;
}

const int &CMS3::HLT_Mu12_EleX() {
  if (not HLT_Mu12_EleX_isLoaded) {
    if (HLT_Mu12_EleX_branch != 0) {
      HLT_Mu12_EleX_branch->GetEntry(index);
    } else {
      printf("branch HLT_Mu12_EleX_branch does not exist!\n");
      exit(1);
    }
    HLT_Mu12_EleX_isLoaded = true;
  }
  return HLT_Mu12_EleX_;
}

const int &CMS3::HLT_Mu30_Ele30_NonIso() {
  if (not HLT_Mu30_Ele30_NonIso_isLoaded) {
    if (HLT_Mu30_Ele30_NonIso_branch != 0) {
      HLT_Mu30_Ele30_NonIso_branch->GetEntry(index);
    } else {
      printf("branch HLT_Mu30_Ele30_NonIso_branch does not exist!\n");
      exit(1);
    }
    HLT_Mu30_Ele30_NonIso_isLoaded = true;
  }
  return HLT_Mu30_Ele30_NonIso_;
}

const int &CMS3::HLT_Mu33_Ele33_NonIso() {
  if (not HLT_Mu33_Ele33_NonIso_isLoaded) {
    if (HLT_Mu33_Ele33_NonIso_branch != 0) {
      HLT_Mu33_Ele33_NonIso_branch->GetEntry(index);
    } else {
      printf("branch HLT_Mu33_Ele33_NonIso_branch does not exist!\n");
      exit(1);
    }
    HLT_Mu33_Ele33_NonIso_isLoaded = true;
  }
  return HLT_Mu33_Ele33_NonIso_;
}

const int &CMS3::HLT_Mu37_Ele27_NonIso() {
  if (not HLT_Mu37_Ele27_NonIso_isLoaded) {
    if (HLT_Mu37_Ele27_NonIso_branch != 0) {
      HLT_Mu37_Ele27_NonIso_branch->GetEntry(index);
    } else {
      printf("branch HLT_Mu37_Ele27_NonIso_branch does not exist!\n");
      exit(1);
    }
    HLT_Mu37_Ele27_NonIso_isLoaded = true;
  }
  return HLT_Mu37_Ele27_NonIso_;
}

const int &CMS3::HLT_Mu27_Ele37_NonIso() {
  if (not HLT_Mu27_Ele37_NonIso_isLoaded) {
    if (HLT_Mu27_Ele37_NonIso_branch != 0) {
      HLT_Mu27_Ele37_NonIso_branch->GetEntry(index);
    } else {
      printf("branch HLT_Mu27_Ele37_NonIso_branch does not exist!\n");
      exit(1);
    }
    HLT_Mu27_Ele37_NonIso_isLoaded = true;
  }
  return HLT_Mu27_Ele37_NonIso_;
}

const int &CMS3::HLT_DoubleMu() {
  if (not HLT_DoubleMu_isLoaded) {
    if (HLT_DoubleMu_branch != 0) {
      HLT_DoubleMu_branch->GetEntry(index);
    } else {
      printf("branch HLT_DoubleMu_branch does not exist!\n");
      exit(1);
    }
    HLT_DoubleMu_isLoaded = true;
  }
  return HLT_DoubleMu_;
}

const int &CMS3::HLT_DoubleMu_NonIso() {
  if (not HLT_DoubleMu_NonIso_isLoaded) {
    if (HLT_DoubleMu_NonIso_branch != 0) {
      HLT_DoubleMu_NonIso_branch->GetEntry(index);
    } else {
      printf("branch HLT_DoubleMu_NonIso_branch does not exist!\n");
      exit(1);
    }
    HLT_DoubleMu_NonIso_isLoaded = true;
  }
  return HLT_DoubleMu_NonIso_;
}

const int &CMS3::HLT_Photon120() {
  if (not HLT_Photon120_isLoaded) {
    if (HLT_Photon120_branch != 0) {
      HLT_Photon120_branch->GetEntry(index);
    } else {
      printf("branch HLT_Photon120_branch does not exist!\n");
      exit(1);
    }
    HLT_Photon120_isLoaded = true;
  }
  return HLT_Photon120_;
}

const int &CMS3::HLT_Photon200() {
  if (not HLT_Photon200_isLoaded) {
    if (HLT_Photon200_branch != 0) {
      HLT_Photon200_branch->GetEntry(index);
    } else {
      printf("branch HLT_Photon200_branch does not exist!\n");
      exit(1);
    }
    HLT_Photon200_isLoaded = true;
  }
  return HLT_Photon200_;
}

const int &CMS3::HLT_Photon175_Prescale() {
  if (not HLT_Photon175_Prescale_isLoaded) {
    if (HLT_Photon175_Prescale_branch != 0) {
      HLT_Photon175_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_Photon175_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_Photon175_Prescale_isLoaded = true;
  }
  return HLT_Photon175_Prescale_;
}

const int &CMS3::HLT_Photon165_HE10() {
  if (not HLT_Photon165_HE10_isLoaded) {
    if (HLT_Photon165_HE10_branch != 0) {
      HLT_Photon165_HE10_branch->GetEntry(index);
    } else {
      printf("branch HLT_Photon165_HE10_branch does not exist!\n");
      exit(1);
    }
    HLT_Photon165_HE10_isLoaded = true;
  }
  return HLT_Photon165_HE10_;
}

const int &CMS3::HLT_Photon250_NoHE() {
  if (not HLT_Photon250_NoHE_isLoaded) {
    if (HLT_Photon250_NoHE_branch != 0) {
      HLT_Photon250_NoHE_branch->GetEntry(index);
    } else {
      printf("branch HLT_Photon250_NoHE_branch does not exist!\n");
      exit(1);
    }
    HLT_Photon250_NoHE_isLoaded = true;
  }
  return HLT_Photon250_NoHE_;
}

const int &CMS3::HLT_PFHT180_Prescale() {
  if (not HLT_PFHT180_Prescale_isLoaded) {
    if (HLT_PFHT180_Prescale_branch != 0) {
      HLT_PFHT180_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT180_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT180_Prescale_isLoaded = true;
  }
  return HLT_PFHT180_Prescale_;
}

const int &CMS3::HLT_PFHT250_Prescale() {
  if (not HLT_PFHT250_Prescale_isLoaded) {
    if (HLT_PFHT250_Prescale_branch != 0) {
      HLT_PFHT250_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT250_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT250_Prescale_isLoaded = true;
  }
  return HLT_PFHT250_Prescale_;
}

const int &CMS3::HLT_PFHT370_Prescale() {
  if (not HLT_PFHT370_Prescale_isLoaded) {
    if (HLT_PFHT370_Prescale_branch != 0) {
      HLT_PFHT370_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT370_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT370_Prescale_isLoaded = true;
  }
  return HLT_PFHT370_Prescale_;
}

const int &CMS3::HLT_PFHT430_Prescale() {
  if (not HLT_PFHT430_Prescale_isLoaded) {
    if (HLT_PFHT430_Prescale_branch != 0) {
      HLT_PFHT430_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT430_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT430_Prescale_isLoaded = true;
  }
  return HLT_PFHT430_Prescale_;
}

const int &CMS3::HLT_PFHT510_Prescale() {
  if (not HLT_PFHT510_Prescale_isLoaded) {
    if (HLT_PFHT510_Prescale_branch != 0) {
      HLT_PFHT510_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT510_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT510_Prescale_isLoaded = true;
  }
  return HLT_PFHT510_Prescale_;
}

const int &CMS3::HLT_PFHT590_Prescale() {
  if (not HLT_PFHT590_Prescale_isLoaded) {
    if (HLT_PFHT590_Prescale_branch != 0) {
      HLT_PFHT590_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT590_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT590_Prescale_isLoaded = true;
  }
  return HLT_PFHT590_Prescale_;
}

const int &CMS3::HLT_PFHT680_Prescale() {
  if (not HLT_PFHT680_Prescale_isLoaded) {
    if (HLT_PFHT680_Prescale_branch != 0) {
      HLT_PFHT680_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT680_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT680_Prescale_isLoaded = true;
  }
  return HLT_PFHT680_Prescale_;
}

const int &CMS3::HLT_PFHT780_Prescale() {
  if (not HLT_PFHT780_Prescale_isLoaded) {
    if (HLT_PFHT780_Prescale_branch != 0) {
      HLT_PFHT780_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT780_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT780_Prescale_isLoaded = true;
  }
  return HLT_PFHT780_Prescale_;
}

const int &CMS3::HLT_PFHT890_Prescale() {
  if (not HLT_PFHT890_Prescale_isLoaded) {
    if (HLT_PFHT890_Prescale_branch != 0) {
      HLT_PFHT890_Prescale_branch->GetEntry(index);
    } else {
      printf("branch HLT_PFHT890_Prescale_branch does not exist!\n");
      exit(1);
    }
    HLT_PFHT890_Prescale_isLoaded = true;
  }
  return HLT_PFHT890_Prescale_;
}

const int &CMS3::HLT_DiCentralPFJet70_PFMET120() {
  if (not HLT_DiCentralPFJet70_PFMET120_isLoaded) {
    if (HLT_DiCentralPFJet70_PFMET120_branch != 0) {
      HLT_DiCentralPFJet70_PFMET120_branch->GetEntry(index);
    } else {
      printf("branch HLT_DiCentralPFJet70_PFMET120_branch does not exist!\n");
      exit(1);
    }
    HLT_DiCentralPFJet70_PFMET120_isLoaded = true;
  }
  return HLT_DiCentralPFJet70_PFMET120_;
}

const int &CMS3::HLT_DiCentralPFJet55_PFMET110() {
  if (not HLT_DiCentralPFJet55_PFMET110_isLoaded) {
    if (HLT_DiCentralPFJet55_PFMET110_branch != 0) {
      HLT_DiCentralPFJet55_PFMET110_branch->GetEntry(index);
    } else {
      printf("branch HLT_DiCentralPFJet55_PFMET110_branch does not exist!\n");
      exit(1);
    }
    HLT_DiCentralPFJet55_PFMET110_isLoaded = true;
  }
  return HLT_DiCentralPFJet55_PFMET110_;
}

const int &CMS3::nlep() {
  if (not nlep_isLoaded) {
    if (nlep_branch != 0) {
      nlep_branch->GetEntry(index);
    } else {
      printf("branch nlep_branch does not exist!\n");
      exit(1);
    }
    nlep_isLoaded = true;
  }
  return nlep_;
}

const float &CMS3::lep_pt() {
  if (not lep_pt_isLoaded) {
    if (lep_pt_branch != 0) {
      lep_pt_branch->GetEntry(index);
    } else {
      printf("branch lep_pt_branch does not exist!\n");
      exit(1);
    }
    lep_pt_isLoaded = true;
  }
  return lep_pt_;
}

const float &CMS3::lep_eta() {
  if (not lep_eta_isLoaded) {
    if (lep_eta_branch != 0) {
      lep_eta_branch->GetEntry(index);
    } else {
      printf("branch lep_eta_branch does not exist!\n");
      exit(1);
    }
    lep_eta_isLoaded = true;
  }
  return lep_eta_;
}

const float &CMS3::lep_phi() {
  if (not lep_phi_isLoaded) {
    if (lep_phi_branch != 0) {
      lep_phi_branch->GetEntry(index);
    } else {
      printf("branch lep_phi_branch does not exist!\n");
      exit(1);
    }
    lep_phi_isLoaded = true;
  }
  return lep_phi_;
}

const float &CMS3::lep_mass() {
  if (not lep_mass_isLoaded) {
    if (lep_mass_branch != 0) {
      lep_mass_branch->GetEntry(index);
    } else {
      printf("branch lep_mass_branch does not exist!\n");
      exit(1);
    }
    lep_mass_isLoaded = true;
  }
  return lep_mass_;
}

const int &CMS3::lep_charge() {
  if (not lep_charge_isLoaded) {
    if (lep_charge_branch != 0) {
      lep_charge_branch->GetEntry(index);
    } else {
      printf("branch lep_charge_branch does not exist!\n");
      exit(1);
    }
    lep_charge_isLoaded = true;
  }
  return lep_charge_;
}

const int &CMS3::lep_pdgId() {
  if (not lep_pdgId_isLoaded) {
    if (lep_pdgId_branch != 0) {
      lep_pdgId_branch->GetEntry(index);
    } else {
      printf("branch lep_pdgId_branch does not exist!\n");
      exit(1);
    }
    lep_pdgId_isLoaded = true;
  }
  return lep_pdgId_;
}

const float &CMS3::lep_dxy() {
  if (not lep_dxy_isLoaded) {
    if (lep_dxy_branch != 0) {
      lep_dxy_branch->GetEntry(index);
    } else {
      printf("branch lep_dxy_branch does not exist!\n");
      exit(1);
    }
    lep_dxy_isLoaded = true;
  }
  return lep_dxy_;
}

const float &CMS3::lep_dz() {
  if (not lep_dz_isLoaded) {
    if (lep_dz_branch != 0) {
      lep_dz_branch->GetEntry(index);
    } else {
      printf("branch lep_dz_branch does not exist!\n");
      exit(1);
    }
    lep_dz_isLoaded = true;
  }
  return lep_dz_;
}

const int &CMS3::lep_tightId() {
  if (not lep_tightId_isLoaded) {
    if (lep_tightId_branch != 0) {
      lep_tightId_branch->GetEntry(index);
    } else {
      printf("branch lep_tightId_branch does not exist!\n");
      exit(1);
    }
    lep_tightId_isLoaded = true;
  }
  return lep_tightId_;
}

const int &CMS3::lep_heepId() {
  if (not lep_heepId_isLoaded) {
    if (lep_heepId_branch != 0) {
      lep_heepId_branch->GetEntry(index);
    } else {
      printf("branch lep_heepId_branch does not exist!\n");
      exit(1);
    }
    lep_heepId_isLoaded = true;
  }
  return lep_heepId_;
}

const float &CMS3::lep_highPtFit_pt() {
  if (not lep_highPtFit_pt_isLoaded) {
    if (lep_highPtFit_pt_branch != 0) {
      lep_highPtFit_pt_branch->GetEntry(index);
    } else {
      printf("branch lep_highPtFit_pt_branch does not exist!\n");
      exit(1);
    }
    lep_highPtFit_pt_isLoaded = true;
  }
  return lep_highPtFit_pt_;
}

const float &CMS3::lep_highPtFit_eta() {
  if (not lep_highPtFit_eta_isLoaded) {
    if (lep_highPtFit_eta_branch != 0) {
      lep_highPtFit_eta_branch->GetEntry(index);
    } else {
      printf("branch lep_highPtFit_eta_branch does not exist!\n");
      exit(1);
    }
    lep_highPtFit_eta_isLoaded = true;
  }
  return lep_highPtFit_eta_;
}

const float &CMS3::lep_highPtFit_phi() {
  if (not lep_highPtFit_phi_isLoaded) {
    if (lep_highPtFit_phi_branch != 0) {
      lep_highPtFit_phi_branch->GetEntry(index);
    } else {
      printf("branch lep_highPtFit_phi_branch does not exist!\n");
      exit(1);
    }
    lep_highPtFit_phi_isLoaded = true;
  }
  return lep_highPtFit_phi_;
}

const float &CMS3::lep_relIso03() {
  if (not lep_relIso03_isLoaded) {
    if (lep_relIso03_branch != 0) {
      lep_relIso03_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso03_branch does not exist!\n");
      exit(1);
    }
    lep_relIso03_isLoaded = true;
  }
  return lep_relIso03_;
}

const float &CMS3::lep_relIso04() {
  if (not lep_relIso04_isLoaded) {
    if (lep_relIso04_branch != 0) {
      lep_relIso04_branch->GetEntry(index);
    } else {
      printf("branch lep_relIso04_branch does not exist!\n");
      exit(1);
    }
    lep_relIso04_isLoaded = true;
  }
  return lep_relIso04_;
}

const float &CMS3::lep_miniRelIso() {
  if (not lep_miniRelIso_isLoaded) {
    if (lep_miniRelIso_branch != 0) {
      lep_miniRelIso_branch->GetEntry(index);
    } else {
      printf("branch lep_miniRelIso_branch does not exist!\n");
      exit(1);
    }
    lep_miniRelIso_isLoaded = true;
  }
  return lep_miniRelIso_;
}

const int &CMS3::lep_mcMatchId() {
  if (not lep_mcMatchId_isLoaded) {
    if (lep_mcMatchId_branch != 0) {
      lep_mcMatchId_branch->GetEntry(index);
    } else {
      printf("branch lep_mcMatchId_branch does not exist!\n");
      exit(1);
    }
    lep_mcMatchId_isLoaded = true;
  }
  return lep_mcMatchId_;
}

const int &CMS3::lep_lostHits() {
  if (not lep_lostHits_isLoaded) {
    if (lep_lostHits_branch != 0) {
      lep_lostHits_branch->GetEntry(index);
    } else {
      printf("branch lep_lostHits_branch does not exist!\n");
      exit(1);
    }
    lep_lostHits_isLoaded = true;
  }
  return lep_lostHits_;
}

const int &CMS3::lep_convVeto() {
  if (not lep_convVeto_isLoaded) {
    if (lep_convVeto_branch != 0) {
      lep_convVeto_branch->GetEntry(index);
    } else {
      printf("branch lep_convVeto_branch does not exist!\n");
      exit(1);
    }
    lep_convVeto_isLoaded = true;
  }
  return lep_convVeto_;
}

const int &CMS3::lep_tightCharge() {
  if (not lep_tightCharge_isLoaded) {
    if (lep_tightCharge_branch != 0) {
      lep_tightCharge_branch->GetEntry(index);
    } else {
      printf("branch lep_tightCharge_branch does not exist!\n");
      exit(1);
    }
    lep_tightCharge_isLoaded = true;
  }
  return lep_tightCharge_;
}

const int &CMS3::nisoTrack() {
  if (not nisoTrack_isLoaded) {
    if (nisoTrack_branch != 0) {
      nisoTrack_branch->GetEntry(index);
    } else {
      printf("branch nisoTrack_branch does not exist!\n");
      exit(1);
    }
    nisoTrack_isLoaded = true;
  }
  return nisoTrack_;
}

const float &CMS3::isoTrack_pt() {
  if (not isoTrack_pt_isLoaded) {
    if (isoTrack_pt_branch != 0) {
      isoTrack_pt_branch->GetEntry(index);
    } else {
      printf("branch isoTrack_pt_branch does not exist!\n");
      exit(1);
    }
    isoTrack_pt_isLoaded = true;
  }
  return isoTrack_pt_;
}

const float &CMS3::isoTrack_eta() {
  if (not isoTrack_eta_isLoaded) {
    if (isoTrack_eta_branch != 0) {
      isoTrack_eta_branch->GetEntry(index);
    } else {
      printf("branch isoTrack_eta_branch does not exist!\n");
      exit(1);
    }
    isoTrack_eta_isLoaded = true;
  }
  return isoTrack_eta_;
}

const float &CMS3::isoTrack_phi() {
  if (not isoTrack_phi_isLoaded) {
    if (isoTrack_phi_branch != 0) {
      isoTrack_phi_branch->GetEntry(index);
    } else {
      printf("branch isoTrack_phi_branch does not exist!\n");
      exit(1);
    }
    isoTrack_phi_isLoaded = true;
  }
  return isoTrack_phi_;
}

const float &CMS3::isoTrack_mass() {
  if (not isoTrack_mass_isLoaded) {
    if (isoTrack_mass_branch != 0) {
      isoTrack_mass_branch->GetEntry(index);
    } else {
      printf("branch isoTrack_mass_branch does not exist!\n");
      exit(1);
    }
    isoTrack_mass_isLoaded = true;
  }
  return isoTrack_mass_;
}

const float &CMS3::isoTrack_absIso() {
  if (not isoTrack_absIso_isLoaded) {
    if (isoTrack_absIso_branch != 0) {
      isoTrack_absIso_branch->GetEntry(index);
    } else {
      printf("branch isoTrack_absIso_branch does not exist!\n");
      exit(1);
    }
    isoTrack_absIso_isLoaded = true;
  }
  return isoTrack_absIso_;
}

const float &CMS3::isoTrack_dz() {
  if (not isoTrack_dz_isLoaded) {
    if (isoTrack_dz_branch != 0) {
      isoTrack_dz_branch->GetEntry(index);
    } else {
      printf("branch isoTrack_dz_branch does not exist!\n");
      exit(1);
    }
    isoTrack_dz_isLoaded = true;
  }
  return isoTrack_dz_;
}

const int &CMS3::isoTrack_pdgId() {
  if (not isoTrack_pdgId_isLoaded) {
    if (isoTrack_pdgId_branch != 0) {
      isoTrack_pdgId_branch->GetEntry(index);
    } else {
      printf("branch isoTrack_pdgId_branch does not exist!\n");
      exit(1);
    }
    isoTrack_pdgId_isLoaded = true;
  }
  return isoTrack_pdgId_;
}

const int &CMS3::isoTrack_mcMatchId() {
  if (not isoTrack_mcMatchId_isLoaded) {
    if (isoTrack_mcMatchId_branch != 0) {
      isoTrack_mcMatchId_branch->GetEntry(index);
    } else {
      printf("branch isoTrack_mcMatchId_branch does not exist!\n");
      exit(1);
    }
    isoTrack_mcMatchId_isLoaded = true;
  }
  return isoTrack_mcMatchId_;
}

const int &CMS3::nhighPtPFcands() {
  if (not nhighPtPFcands_isLoaded) {
    if (nhighPtPFcands_branch != 0) {
      nhighPtPFcands_branch->GetEntry(index);
    } else {
      printf("branch nhighPtPFcands_branch does not exist!\n");
      exit(1);
    }
    nhighPtPFcands_isLoaded = true;
  }
  return nhighPtPFcands_;
}

const float &CMS3::highPtPFcands_pt() {
  if (not highPtPFcands_pt_isLoaded) {
    if (highPtPFcands_pt_branch != 0) {
      highPtPFcands_pt_branch->GetEntry(index);
    } else {
      printf("branch highPtPFcands_pt_branch does not exist!\n");
      exit(1);
    }
    highPtPFcands_pt_isLoaded = true;
  }
  return highPtPFcands_pt_;
}

const float &CMS3::highPtPFcands_eta() {
  if (not highPtPFcands_eta_isLoaded) {
    if (highPtPFcands_eta_branch != 0) {
      highPtPFcands_eta_branch->GetEntry(index);
    } else {
      printf("branch highPtPFcands_eta_branch does not exist!\n");
      exit(1);
    }
    highPtPFcands_eta_isLoaded = true;
  }
  return highPtPFcands_eta_;
}

const float &CMS3::highPtPFcands_phi() {
  if (not highPtPFcands_phi_isLoaded) {
    if (highPtPFcands_phi_branch != 0) {
      highPtPFcands_phi_branch->GetEntry(index);
    } else {
      printf("branch highPtPFcands_phi_branch does not exist!\n");
      exit(1);
    }
    highPtPFcands_phi_isLoaded = true;
  }
  return highPtPFcands_phi_;
}

const float &CMS3::highPtPFcands_mass() {
  if (not highPtPFcands_mass_isLoaded) {
    if (highPtPFcands_mass_branch != 0) {
      highPtPFcands_mass_branch->GetEntry(index);
    } else {
      printf("branch highPtPFcands_mass_branch does not exist!\n");
      exit(1);
    }
    highPtPFcands_mass_isLoaded = true;
  }
  return highPtPFcands_mass_;
}

const float &CMS3::highPtPFcands_absIso() {
  if (not highPtPFcands_absIso_isLoaded) {
    if (highPtPFcands_absIso_branch != 0) {
      highPtPFcands_absIso_branch->GetEntry(index);
    } else {
      printf("branch highPtPFcands_absIso_branch does not exist!\n");
      exit(1);
    }
    highPtPFcands_absIso_isLoaded = true;
  }
  return highPtPFcands_absIso_;
}

const float &CMS3::highPtPFcands_dz() {
  if (not highPtPFcands_dz_isLoaded) {
    if (highPtPFcands_dz_branch != 0) {
      highPtPFcands_dz_branch->GetEntry(index);
    } else {
      printf("branch highPtPFcands_dz_branch does not exist!\n");
      exit(1);
    }
    highPtPFcands_dz_isLoaded = true;
  }
  return highPtPFcands_dz_;
}

const int &CMS3::highPtPFcands_pdgId() {
  if (not highPtPFcands_pdgId_isLoaded) {
    if (highPtPFcands_pdgId_branch != 0) {
      highPtPFcands_pdgId_branch->GetEntry(index);
    } else {
      printf("branch highPtPFcands_pdgId_branch does not exist!\n");
      exit(1);
    }
    highPtPFcands_pdgId_isLoaded = true;
  }
  return highPtPFcands_pdgId_;
}

const int &CMS3::highPtPFcands_mcMatchId() {
  if (not highPtPFcands_mcMatchId_isLoaded) {
    if (highPtPFcands_mcMatchId_branch != 0) {
      highPtPFcands_mcMatchId_branch->GetEntry(index);
    } else {
      printf("branch highPtPFcands_mcMatchId_branch does not exist!\n");
      exit(1);
    }
    highPtPFcands_mcMatchId_isLoaded = true;
  }
  return highPtPFcands_mcMatchId_;
}

const int &CMS3::nPFLep5LowMT() {
  if (not nPFLep5LowMT_isLoaded) {
    if (nPFLep5LowMT_branch != 0) {
      nPFLep5LowMT_branch->GetEntry(index);
    } else {
      printf("branch nPFLep5LowMT_branch does not exist!\n");
      exit(1);
    }
    nPFLep5LowMT_isLoaded = true;
  }
  return nPFLep5LowMT_;
}

const int &CMS3::nPFHad10LowMT() {
  if (not nPFHad10LowMT_isLoaded) {
    if (nPFHad10LowMT_branch != 0) {
      nPFHad10LowMT_branch->GetEntry(index);
    } else {
      printf("branch nPFHad10LowMT_branch does not exist!\n");
      exit(1);
    }
    nPFHad10LowMT_isLoaded = true;
  }
  return nPFHad10LowMT_;
}

const int &CMS3::ntau() {
  if (not ntau_isLoaded) {
    if (ntau_branch != 0) {
      ntau_branch->GetEntry(index);
    } else {
      printf("branch ntau_branch does not exist!\n");
      exit(1);
    }
    ntau_isLoaded = true;
  }
  return ntau_;
}

const float &CMS3::tau_pt() {
  if (not tau_pt_isLoaded) {
    if (tau_pt_branch != 0) {
      tau_pt_branch->GetEntry(index);
    } else {
      printf("branch tau_pt_branch does not exist!\n");
      exit(1);
    }
    tau_pt_isLoaded = true;
  }
  return tau_pt_;
}

const float &CMS3::tau_eta() {
  if (not tau_eta_isLoaded) {
    if (tau_eta_branch != 0) {
      tau_eta_branch->GetEntry(index);
    } else {
      printf("branch tau_eta_branch does not exist!\n");
      exit(1);
    }
    tau_eta_isLoaded = true;
  }
  return tau_eta_;
}

const float &CMS3::tau_phi() {
  if (not tau_phi_isLoaded) {
    if (tau_phi_branch != 0) {
      tau_phi_branch->GetEntry(index);
    } else {
      printf("branch tau_phi_branch does not exist!\n");
      exit(1);
    }
    tau_phi_isLoaded = true;
  }
  return tau_phi_;
}

const float &CMS3::tau_mass() {
  if (not tau_mass_isLoaded) {
    if (tau_mass_branch != 0) {
      tau_mass_branch->GetEntry(index);
    } else {
      printf("branch tau_mass_branch does not exist!\n");
      exit(1);
    }
    tau_mass_isLoaded = true;
  }
  return tau_mass_;
}

const int &CMS3::tau_charge() {
  if (not tau_charge_isLoaded) {
    if (tau_charge_branch != 0) {
      tau_charge_branch->GetEntry(index);
    } else {
      printf("branch tau_charge_branch does not exist!\n");
      exit(1);
    }
    tau_charge_isLoaded = true;
  }
  return tau_charge_;
}

const float &CMS3::tau_dxy() {
  if (not tau_dxy_isLoaded) {
    if (tau_dxy_branch != 0) {
      tau_dxy_branch->GetEntry(index);
    } else {
      printf("branch tau_dxy_branch does not exist!\n");
      exit(1);
    }
    tau_dxy_isLoaded = true;
  }
  return tau_dxy_;
}

const float &CMS3::tau_dz() {
  if (not tau_dz_isLoaded) {
    if (tau_dz_branch != 0) {
      tau_dz_branch->GetEntry(index);
    } else {
      printf("branch tau_dz_branch does not exist!\n");
      exit(1);
    }
    tau_dz_isLoaded = true;
  }
  return tau_dz_;
}

const int &CMS3::tau_idCI3hit() {
  if (not tau_idCI3hit_isLoaded) {
    if (tau_idCI3hit_branch != 0) {
      tau_idCI3hit_branch->GetEntry(index);
    } else {
      printf("branch tau_idCI3hit_branch does not exist!\n");
      exit(1);
    }
    tau_idCI3hit_isLoaded = true;
  }
  return tau_idCI3hit_;
}

const float &CMS3::tau_isoCI3hit() {
  if (not tau_isoCI3hit_isLoaded) {
    if (tau_isoCI3hit_branch != 0) {
      tau_isoCI3hit_branch->GetEntry(index);
    } else {
      printf("branch tau_isoCI3hit_branch does not exist!\n");
      exit(1);
    }
    tau_isoCI3hit_isLoaded = true;
  }
  return tau_isoCI3hit_;
}

const int &CMS3::tau_mcMatchId() {
  if (not tau_mcMatchId_isLoaded) {
    if (tau_mcMatchId_branch != 0) {
      tau_mcMatchId_branch->GetEntry(index);
    } else {
      printf("branch tau_mcMatchId_branch does not exist!\n");
      exit(1);
    }
    tau_mcMatchId_isLoaded = true;
  }
  return tau_mcMatchId_;
}

const int &CMS3::ngamma() {
  if (not ngamma_isLoaded) {
    if (ngamma_branch != 0) {
      ngamma_branch->GetEntry(index);
    } else {
      printf("branch ngamma_branch does not exist!\n");
      exit(1);
    }
    ngamma_isLoaded = true;
  }
  return ngamma_;
}

const float &CMS3::gamma_pt() {
  if (not gamma_pt_isLoaded) {
    if (gamma_pt_branch != 0) {
      gamma_pt_branch->GetEntry(index);
    } else {
      printf("branch gamma_pt_branch does not exist!\n");
      exit(1);
    }
    gamma_pt_isLoaded = true;
  }
  return gamma_pt_;
}

const float &CMS3::gamma_eta() {
  if (not gamma_eta_isLoaded) {
    if (gamma_eta_branch != 0) {
      gamma_eta_branch->GetEntry(index);
    } else {
      printf("branch gamma_eta_branch does not exist!\n");
      exit(1);
    }
    gamma_eta_isLoaded = true;
  }
  return gamma_eta_;
}

const float &CMS3::gamma_phi() {
  if (not gamma_phi_isLoaded) {
    if (gamma_phi_branch != 0) {
      gamma_phi_branch->GetEntry(index);
    } else {
      printf("branch gamma_phi_branch does not exist!\n");
      exit(1);
    }
    gamma_phi_isLoaded = true;
  }
  return gamma_phi_;
}

const float &CMS3::gamma_mass() {
  if (not gamma_mass_isLoaded) {
    if (gamma_mass_branch != 0) {
      gamma_mass_branch->GetEntry(index);
    } else {
      printf("branch gamma_mass_branch does not exist!\n");
      exit(1);
    }
    gamma_mass_isLoaded = true;
  }
  return gamma_mass_;
}

const int &CMS3::gamma_mcMatchId() {
  if (not gamma_mcMatchId_isLoaded) {
    if (gamma_mcMatchId_branch != 0) {
      gamma_mcMatchId_branch->GetEntry(index);
    } else {
      printf("branch gamma_mcMatchId_branch does not exist!\n");
      exit(1);
    }
    gamma_mcMatchId_isLoaded = true;
  }
  return gamma_mcMatchId_;
}

const float &CMS3::gamma_genIso04() {
  if (not gamma_genIso04_isLoaded) {
    if (gamma_genIso04_branch != 0) {
      gamma_genIso04_branch->GetEntry(index);
    } else {
      printf("branch gamma_genIso04_branch does not exist!\n");
      exit(1);
    }
    gamma_genIso04_isLoaded = true;
  }
  return gamma_genIso04_;
}

const float &CMS3::gamma_drMinParton() {
  if (not gamma_drMinParton_isLoaded) {
    if (gamma_drMinParton_branch != 0) {
      gamma_drMinParton_branch->GetEntry(index);
    } else {
      printf("branch gamma_drMinParton_branch does not exist!\n");
      exit(1);
    }
    gamma_drMinParton_isLoaded = true;
  }
  return gamma_drMinParton_;
}

const float &CMS3::gamma_chHadIso() {
  if (not gamma_chHadIso_isLoaded) {
    if (gamma_chHadIso_branch != 0) {
      gamma_chHadIso_branch->GetEntry(index);
    } else {
      printf("branch gamma_chHadIso_branch does not exist!\n");
      exit(1);
    }
    gamma_chHadIso_isLoaded = true;
  }
  return gamma_chHadIso_;
}

const float &CMS3::gamma_neuHadIso() {
  if (not gamma_neuHadIso_isLoaded) {
    if (gamma_neuHadIso_branch != 0) {
      gamma_neuHadIso_branch->GetEntry(index);
    } else {
      printf("branch gamma_neuHadIso_branch does not exist!\n");
      exit(1);
    }
    gamma_neuHadIso_isLoaded = true;
  }
  return gamma_neuHadIso_;
}

const float &CMS3::gamma_phIso() {
  if (not gamma_phIso_isLoaded) {
    if (gamma_phIso_branch != 0) {
      gamma_phIso_branch->GetEntry(index);
    } else {
      printf("branch gamma_phIso_branch does not exist!\n");
      exit(1);
    }
    gamma_phIso_isLoaded = true;
  }
  return gamma_phIso_;
}

const float &CMS3::gamma_sigmaIetaIeta() {
  if (not gamma_sigmaIetaIeta_isLoaded) {
    if (gamma_sigmaIetaIeta_branch != 0) {
      gamma_sigmaIetaIeta_branch->GetEntry(index);
    } else {
      printf("branch gamma_sigmaIetaIeta_branch does not exist!\n");
      exit(1);
    }
    gamma_sigmaIetaIeta_isLoaded = true;
  }
  return gamma_sigmaIetaIeta_;
}

const float &CMS3::gamma_r9() {
  if (not gamma_r9_isLoaded) {
    if (gamma_r9_branch != 0) {
      gamma_r9_branch->GetEntry(index);
    } else {
      printf("branch gamma_r9_branch does not exist!\n");
      exit(1);
    }
    gamma_r9_isLoaded = true;
  }
  return gamma_r9_;
}

const float &CMS3::gamma_hOverE() {
  if (not gamma_hOverE_isLoaded) {
    if (gamma_hOverE_branch != 0) {
      gamma_hOverE_branch->GetEntry(index);
    } else {
      printf("branch gamma_hOverE_branch does not exist!\n");
      exit(1);
    }
    gamma_hOverE_isLoaded = true;
  }
  return gamma_hOverE_;
}

const float &CMS3::gamma_hOverE015() {
  if (not gamma_hOverE015_isLoaded) {
    if (gamma_hOverE015_branch != 0) {
      gamma_hOverE015_branch->GetEntry(index);
    } else {
      printf("branch gamma_hOverE015_branch does not exist!\n");
      exit(1);
    }
    gamma_hOverE015_isLoaded = true;
  }
  return gamma_hOverE015_;
}

const int &CMS3::gamma_idCutBased() {
  if (not gamma_idCutBased_isLoaded) {
    if (gamma_idCutBased_branch != 0) {
      gamma_idCutBased_branch->GetEntry(index);
    } else {
      printf("branch gamma_idCutBased_branch does not exist!\n");
      exit(1);
    }
    gamma_idCutBased_isLoaded = true;
  }
  return gamma_idCutBased_;
}

const float &CMS3::gamma_mt2() {
  if (not gamma_mt2_isLoaded) {
    if (gamma_mt2_branch != 0) {
      gamma_mt2_branch->GetEntry(index);
    } else {
      printf("branch gamma_mt2_branch does not exist!\n");
      exit(1);
    }
    gamma_mt2_isLoaded = true;
  }
  return gamma_mt2_;
}

const int &CMS3::gamma_nJet30() {
  if (not gamma_nJet30_isLoaded) {
    if (gamma_nJet30_branch != 0) {
      gamma_nJet30_branch->GetEntry(index);
    } else {
      printf("branch gamma_nJet30_branch does not exist!\n");
      exit(1);
    }
    gamma_nJet30_isLoaded = true;
  }
  return gamma_nJet30_;
}

const int &CMS3::gamma_nJet40() {
  if (not gamma_nJet40_isLoaded) {
    if (gamma_nJet40_branch != 0) {
      gamma_nJet40_branch->GetEntry(index);
    } else {
      printf("branch gamma_nJet40_branch does not exist!\n");
      exit(1);
    }
    gamma_nJet40_isLoaded = true;
  }
  return gamma_nJet40_;
}

const int &CMS3::gamma_nJet30FailId() {
  if (not gamma_nJet30FailId_isLoaded) {
    if (gamma_nJet30FailId_branch != 0) {
      gamma_nJet30FailId_branch->GetEntry(index);
    } else {
      printf("branch gamma_nJet30FailId_branch does not exist!\n");
      exit(1);
    }
    gamma_nJet30FailId_isLoaded = true;
  }
  return gamma_nJet30FailId_;
}

const int &CMS3::gamma_nJet100FailId() {
  if (not gamma_nJet100FailId_isLoaded) {
    if (gamma_nJet100FailId_branch != 0) {
      gamma_nJet100FailId_branch->GetEntry(index);
    } else {
      printf("branch gamma_nJet100FailId_branch does not exist!\n");
      exit(1);
    }
    gamma_nJet100FailId_isLoaded = true;
  }
  return gamma_nJet100FailId_;
}

const int &CMS3::gamma_nBJet20() {
  if (not gamma_nBJet20_isLoaded) {
    if (gamma_nBJet20_branch != 0) {
      gamma_nBJet20_branch->GetEntry(index);
    } else {
      printf("branch gamma_nBJet20_branch does not exist!\n");
      exit(1);
    }
    gamma_nBJet20_isLoaded = true;
  }
  return gamma_nBJet20_;
}

const int &CMS3::gamma_nBJet20csv() {
  if (not gamma_nBJet20csv_isLoaded) {
    if (gamma_nBJet20csv_branch != 0) {
      gamma_nBJet20csv_branch->GetEntry(index);
    } else {
      printf("branch gamma_nBJet20csv_branch does not exist!\n");
      exit(1);
    }
    gamma_nBJet20csv_isLoaded = true;
  }
  return gamma_nBJet20csv_;
}

const int &CMS3::gamma_nBJet20mva() {
  if (not gamma_nBJet20mva_isLoaded) {
    if (gamma_nBJet20mva_branch != 0) {
      gamma_nBJet20mva_branch->GetEntry(index);
    } else {
      printf("branch gamma_nBJet20mva_branch does not exist!\n");
      exit(1);
    }
    gamma_nBJet20mva_isLoaded = true;
  }
  return gamma_nBJet20mva_;
}

const int &CMS3::gamma_nBJet25() {
  if (not gamma_nBJet25_isLoaded) {
    if (gamma_nBJet25_branch != 0) {
      gamma_nBJet25_branch->GetEntry(index);
    } else {
      printf("branch gamma_nBJet25_branch does not exist!\n");
      exit(1);
    }
    gamma_nBJet25_isLoaded = true;
  }
  return gamma_nBJet25_;
}

const int &CMS3::gamma_nBJet30() {
  if (not gamma_nBJet30_isLoaded) {
    if (gamma_nBJet30_branch != 0) {
      gamma_nBJet30_branch->GetEntry(index);
    } else {
      printf("branch gamma_nBJet30_branch does not exist!\n");
      exit(1);
    }
    gamma_nBJet30_isLoaded = true;
  }
  return gamma_nBJet30_;
}

const int &CMS3::gamma_nBJet40() {
  if (not gamma_nBJet40_isLoaded) {
    if (gamma_nBJet40_branch != 0) {
      gamma_nBJet40_branch->GetEntry(index);
    } else {
      printf("branch gamma_nBJet40_branch does not exist!\n");
      exit(1);
    }
    gamma_nBJet40_isLoaded = true;
  }
  return gamma_nBJet40_;
}

const float &CMS3::gamma_ht() {
  if (not gamma_ht_isLoaded) {
    if (gamma_ht_branch != 0) {
      gamma_ht_branch->GetEntry(index);
    } else {
      printf("branch gamma_ht_branch does not exist!\n");
      exit(1);
    }
    gamma_ht_isLoaded = true;
  }
  return gamma_ht_;
}

const float &CMS3::gamma_deltaPhiMin() {
  if (not gamma_deltaPhiMin_isLoaded) {
    if (gamma_deltaPhiMin_branch != 0) {
      gamma_deltaPhiMin_branch->GetEntry(index);
    } else {
      printf("branch gamma_deltaPhiMin_branch does not exist!\n");
      exit(1);
    }
    gamma_deltaPhiMin_isLoaded = true;
  }
  return gamma_deltaPhiMin_;
}

const float &CMS3::gamma_diffMetMht() {
  if (not gamma_diffMetMht_isLoaded) {
    if (gamma_diffMetMht_branch != 0) {
      gamma_diffMetMht_branch->GetEntry(index);
    } else {
      printf("branch gamma_diffMetMht_branch does not exist!\n");
      exit(1);
    }
    gamma_diffMetMht_isLoaded = true;
  }
  return gamma_diffMetMht_;
}

const float &CMS3::gamma_mht_pt() {
  if (not gamma_mht_pt_isLoaded) {
    if (gamma_mht_pt_branch != 0) {
      gamma_mht_pt_branch->GetEntry(index);
    } else {
      printf("branch gamma_mht_pt_branch does not exist!\n");
      exit(1);
    }
    gamma_mht_pt_isLoaded = true;
  }
  return gamma_mht_pt_;
}

const float &CMS3::gamma_mht_phi() {
  if (not gamma_mht_phi_isLoaded) {
    if (gamma_mht_phi_branch != 0) {
      gamma_mht_phi_branch->GetEntry(index);
    } else {
      printf("branch gamma_mht_phi_branch does not exist!\n");
      exit(1);
    }
    gamma_mht_phi_isLoaded = true;
  }
  return gamma_mht_phi_;
}

const float &CMS3::gamma_met_pt() {
  if (not gamma_met_pt_isLoaded) {
    if (gamma_met_pt_branch != 0) {
      gamma_met_pt_branch->GetEntry(index);
    } else {
      printf("branch gamma_met_pt_branch does not exist!\n");
      exit(1);
    }
    gamma_met_pt_isLoaded = true;
  }
  return gamma_met_pt_;
}

const float &CMS3::gamma_met_phi() {
  if (not gamma_met_phi_isLoaded) {
    if (gamma_met_phi_branch != 0) {
      gamma_met_phi_branch->GetEntry(index);
    } else {
      printf("branch gamma_met_phi_branch does not exist!\n");
      exit(1);
    }
    gamma_met_phi_isLoaded = true;
  }
  return gamma_met_phi_;
}

const int &CMS3::npfPhoton() {
  if (not npfPhoton_isLoaded) {
    if (npfPhoton_branch != 0) {
      npfPhoton_branch->GetEntry(index);
    } else {
      printf("branch npfPhoton_branch does not exist!\n");
      exit(1);
    }
    npfPhoton_isLoaded = true;
  }
  return npfPhoton_;
}

const float &CMS3::pfPhoton_pt() {
  if (not pfPhoton_pt_isLoaded) {
    if (pfPhoton_pt_branch != 0) {
      pfPhoton_pt_branch->GetEntry(index);
    } else {
      printf("branch pfPhoton_pt_branch does not exist!\n");
      exit(1);
    }
    pfPhoton_pt_isLoaded = true;
  }
  return pfPhoton_pt_;
}

const float &CMS3::pfPhoton_eta() {
  if (not pfPhoton_eta_isLoaded) {
    if (pfPhoton_eta_branch != 0) {
      pfPhoton_eta_branch->GetEntry(index);
    } else {
      printf("branch pfPhoton_eta_branch does not exist!\n");
      exit(1);
    }
    pfPhoton_eta_isLoaded = true;
  }
  return pfPhoton_eta_;
}

const float &CMS3::pfPhoton_phi() {
  if (not pfPhoton_phi_isLoaded) {
    if (pfPhoton_phi_branch != 0) {
      pfPhoton_phi_branch->GetEntry(index);
    } else {
      printf("branch pfPhoton_phi_branch does not exist!\n");
      exit(1);
    }
    pfPhoton_phi_isLoaded = true;
  }
  return pfPhoton_phi_;
}

const float &CMS3::zll_mt2() {
  if (not zll_mt2_isLoaded) {
    if (zll_mt2_branch != 0) {
      zll_mt2_branch->GetEntry(index);
    } else {
      printf("branch zll_mt2_branch does not exist!\n");
      exit(1);
    }
    zll_mt2_isLoaded = true;
  }
  return zll_mt2_;
}

const float &CMS3::zll_deltaPhiMin() {
  if (not zll_deltaPhiMin_isLoaded) {
    if (zll_deltaPhiMin_branch != 0) {
      zll_deltaPhiMin_branch->GetEntry(index);
    } else {
      printf("branch zll_deltaPhiMin_branch does not exist!\n");
      exit(1);
    }
    zll_deltaPhiMin_isLoaded = true;
  }
  return zll_deltaPhiMin_;
}

const float &CMS3::zll_diffMetMht() {
  if (not zll_diffMetMht_isLoaded) {
    if (zll_diffMetMht_branch != 0) {
      zll_diffMetMht_branch->GetEntry(index);
    } else {
      printf("branch zll_diffMetMht_branch does not exist!\n");
      exit(1);
    }
    zll_diffMetMht_isLoaded = true;
  }
  return zll_diffMetMht_;
}

const float &CMS3::zll_met_pt() {
  if (not zll_met_pt_isLoaded) {
    if (zll_met_pt_branch != 0) {
      zll_met_pt_branch->GetEntry(index);
    } else {
      printf("branch zll_met_pt_branch does not exist!\n");
      exit(1);
    }
    zll_met_pt_isLoaded = true;
  }
  return zll_met_pt_;
}

const float &CMS3::zll_met_phi() {
  if (not zll_met_phi_isLoaded) {
    if (zll_met_phi_branch != 0) {
      zll_met_phi_branch->GetEntry(index);
    } else {
      printf("branch zll_met_phi_branch does not exist!\n");
      exit(1);
    }
    zll_met_phi_isLoaded = true;
  }
  return zll_met_phi_;
}

const float &CMS3::zll_mht_pt() {
  if (not zll_mht_pt_isLoaded) {
    if (zll_mht_pt_branch != 0) {
      zll_mht_pt_branch->GetEntry(index);
    } else {
      printf("branch zll_mht_pt_branch does not exist!\n");
      exit(1);
    }
    zll_mht_pt_isLoaded = true;
  }
  return zll_mht_pt_;
}

const float &CMS3::zll_mht_phi() {
  if (not zll_mht_phi_isLoaded) {
    if (zll_mht_phi_branch != 0) {
      zll_mht_phi_branch->GetEntry(index);
    } else {
      printf("branch zll_mht_phi_branch does not exist!\n");
      exit(1);
    }
    zll_mht_phi_isLoaded = true;
  }
  return zll_mht_phi_;
}

const float &CMS3::zll_mass() {
  if (not zll_mass_isLoaded) {
    if (zll_mass_branch != 0) {
      zll_mass_branch->GetEntry(index);
    } else {
      printf("branch zll_mass_branch does not exist!\n");
      exit(1);
    }
    zll_mass_isLoaded = true;
  }
  return zll_mass_;
}

const float &CMS3::zll_pt() {
  if (not zll_pt_isLoaded) {
    if (zll_pt_branch != 0) {
      zll_pt_branch->GetEntry(index);
    } else {
      printf("branch zll_pt_branch does not exist!\n");
      exit(1);
    }
    zll_pt_isLoaded = true;
  }
  return zll_pt_;
}

const float &CMS3::zll_eta() {
  if (not zll_eta_isLoaded) {
    if (zll_eta_branch != 0) {
      zll_eta_branch->GetEntry(index);
    } else {
      printf("branch zll_eta_branch does not exist!\n");
      exit(1);
    }
    zll_eta_isLoaded = true;
  }
  return zll_eta_;
}

const float &CMS3::zll_phi() {
  if (not zll_phi_isLoaded) {
    if (zll_phi_branch != 0) {
      zll_phi_branch->GetEntry(index);
    } else {
      printf("branch zll_phi_branch does not exist!\n");
      exit(1);
    }
    zll_phi_isLoaded = true;
  }
  return zll_phi_;
}

const float &CMS3::zll_ht() {
  if (not zll_ht_isLoaded) {
    if (zll_ht_branch != 0) {
      zll_ht_branch->GetEntry(index);
    } else {
      printf("branch zll_ht_branch does not exist!\n");
      exit(1);
    }
    zll_ht_isLoaded = true;
  }
  return zll_ht_;
}

const float &CMS3::zll_mt2JECup() {
  if (not zll_mt2JECup_isLoaded) {
    if (zll_mt2JECup_branch != 0) {
      zll_mt2JECup_branch->GetEntry(index);
    } else {
      printf("branch zll_mt2JECup_branch does not exist!\n");
      exit(1);
    }
    zll_mt2JECup_isLoaded = true;
  }
  return zll_mt2JECup_;
}

const float &CMS3::zll_deltaPhiMinJECup() {
  if (not zll_deltaPhiMinJECup_isLoaded) {
    if (zll_deltaPhiMinJECup_branch != 0) {
      zll_deltaPhiMinJECup_branch->GetEntry(index);
    } else {
      printf("branch zll_deltaPhiMinJECup_branch does not exist!\n");
      exit(1);
    }
    zll_deltaPhiMinJECup_isLoaded = true;
  }
  return zll_deltaPhiMinJECup_;
}

const float &CMS3::zll_diffMetMhtJECup() {
  if (not zll_diffMetMhtJECup_isLoaded) {
    if (zll_diffMetMhtJECup_branch != 0) {
      zll_diffMetMhtJECup_branch->GetEntry(index);
    } else {
      printf("branch zll_diffMetMhtJECup_branch does not exist!\n");
      exit(1);
    }
    zll_diffMetMhtJECup_isLoaded = true;
  }
  return zll_diffMetMhtJECup_;
}

const float &CMS3::zll_met_ptJECup() {
  if (not zll_met_ptJECup_isLoaded) {
    if (zll_met_ptJECup_branch != 0) {
      zll_met_ptJECup_branch->GetEntry(index);
    } else {
      printf("branch zll_met_ptJECup_branch does not exist!\n");
      exit(1);
    }
    zll_met_ptJECup_isLoaded = true;
  }
  return zll_met_ptJECup_;
}

const float &CMS3::zll_met_phiJECup() {
  if (not zll_met_phiJECup_isLoaded) {
    if (zll_met_phiJECup_branch != 0) {
      zll_met_phiJECup_branch->GetEntry(index);
    } else {
      printf("branch zll_met_phiJECup_branch does not exist!\n");
      exit(1);
    }
    zll_met_phiJECup_isLoaded = true;
  }
  return zll_met_phiJECup_;
}

const float &CMS3::zll_mht_ptJECup() {
  if (not zll_mht_ptJECup_isLoaded) {
    if (zll_mht_ptJECup_branch != 0) {
      zll_mht_ptJECup_branch->GetEntry(index);
    } else {
      printf("branch zll_mht_ptJECup_branch does not exist!\n");
      exit(1);
    }
    zll_mht_ptJECup_isLoaded = true;
  }
  return zll_mht_ptJECup_;
}

const float &CMS3::zll_mht_phiJECup() {
  if (not zll_mht_phiJECup_isLoaded) {
    if (zll_mht_phiJECup_branch != 0) {
      zll_mht_phiJECup_branch->GetEntry(index);
    } else {
      printf("branch zll_mht_phiJECup_branch does not exist!\n");
      exit(1);
    }
    zll_mht_phiJECup_isLoaded = true;
  }
  return zll_mht_phiJECup_;
}

const float &CMS3::zll_htJECup() {
  if (not zll_htJECup_isLoaded) {
    if (zll_htJECup_branch != 0) {
      zll_htJECup_branch->GetEntry(index);
    } else {
      printf("branch zll_htJECup_branch does not exist!\n");
      exit(1);
    }
    zll_htJECup_isLoaded = true;
  }
  return zll_htJECup_;
}

const float &CMS3::zll_mt2JECdn() {
  if (not zll_mt2JECdn_isLoaded) {
    if (zll_mt2JECdn_branch != 0) {
      zll_mt2JECdn_branch->GetEntry(index);
    } else {
      printf("branch zll_mt2JECdn_branch does not exist!\n");
      exit(1);
    }
    zll_mt2JECdn_isLoaded = true;
  }
  return zll_mt2JECdn_;
}

const float &CMS3::zll_deltaPhiMinJECdn() {
  if (not zll_deltaPhiMinJECdn_isLoaded) {
    if (zll_deltaPhiMinJECdn_branch != 0) {
      zll_deltaPhiMinJECdn_branch->GetEntry(index);
    } else {
      printf("branch zll_deltaPhiMinJECdn_branch does not exist!\n");
      exit(1);
    }
    zll_deltaPhiMinJECdn_isLoaded = true;
  }
  return zll_deltaPhiMinJECdn_;
}

const float &CMS3::zll_diffMetMhtJECdn() {
  if (not zll_diffMetMhtJECdn_isLoaded) {
    if (zll_diffMetMhtJECdn_branch != 0) {
      zll_diffMetMhtJECdn_branch->GetEntry(index);
    } else {
      printf("branch zll_diffMetMhtJECdn_branch does not exist!\n");
      exit(1);
    }
    zll_diffMetMhtJECdn_isLoaded = true;
  }
  return zll_diffMetMhtJECdn_;
}

const float &CMS3::zll_met_ptJECdn() {
  if (not zll_met_ptJECdn_isLoaded) {
    if (zll_met_ptJECdn_branch != 0) {
      zll_met_ptJECdn_branch->GetEntry(index);
    } else {
      printf("branch zll_met_ptJECdn_branch does not exist!\n");
      exit(1);
    }
    zll_met_ptJECdn_isLoaded = true;
  }
  return zll_met_ptJECdn_;
}

const float &CMS3::zll_met_phiJECdn() {
  if (not zll_met_phiJECdn_isLoaded) {
    if (zll_met_phiJECdn_branch != 0) {
      zll_met_phiJECdn_branch->GetEntry(index);
    } else {
      printf("branch zll_met_phiJECdn_branch does not exist!\n");
      exit(1);
    }
    zll_met_phiJECdn_isLoaded = true;
  }
  return zll_met_phiJECdn_;
}

const float &CMS3::zll_mht_ptJECdn() {
  if (not zll_mht_ptJECdn_isLoaded) {
    if (zll_mht_ptJECdn_branch != 0) {
      zll_mht_ptJECdn_branch->GetEntry(index);
    } else {
      printf("branch zll_mht_ptJECdn_branch does not exist!\n");
      exit(1);
    }
    zll_mht_ptJECdn_isLoaded = true;
  }
  return zll_mht_ptJECdn_;
}

const float &CMS3::zll_mht_phiJECdn() {
  if (not zll_mht_phiJECdn_isLoaded) {
    if (zll_mht_phiJECdn_branch != 0) {
      zll_mht_phiJECdn_branch->GetEntry(index);
    } else {
      printf("branch zll_mht_phiJECdn_branch does not exist!\n");
      exit(1);
    }
    zll_mht_phiJECdn_isLoaded = true;
  }
  return zll_mht_phiJECdn_;
}

const float &CMS3::zll_htJECdn() {
  if (not zll_htJECdn_isLoaded) {
    if (zll_htJECdn_branch != 0) {
      zll_htJECdn_branch->GetEntry(index);
    } else {
      printf("branch zll_htJECdn_branch does not exist!\n");
      exit(1);
    }
    zll_htJECdn_isLoaded = true;
  }
  return zll_htJECdn_;
}

const float &CMS3::zllmt_mt2() {
  if (not zllmt_mt2_isLoaded) {
    if (zllmt_mt2_branch != 0) {
      zllmt_mt2_branch->GetEntry(index);
    } else {
      printf("branch zllmt_mt2_branch does not exist!\n");
      exit(1);
    }
    zllmt_mt2_isLoaded = true;
  }
  return zllmt_mt2_;
}

const float &CMS3::zllmt_deltaPhiMin() {
  if (not zllmt_deltaPhiMin_isLoaded) {
    if (zllmt_deltaPhiMin_branch != 0) {
      zllmt_deltaPhiMin_branch->GetEntry(index);
    } else {
      printf("branch zllmt_deltaPhiMin_branch does not exist!\n");
      exit(1);
    }
    zllmt_deltaPhiMin_isLoaded = true;
  }
  return zllmt_deltaPhiMin_;
}

const float &CMS3::zllmt_diffMetMht() {
  if (not zllmt_diffMetMht_isLoaded) {
    if (zllmt_diffMetMht_branch != 0) {
      zllmt_diffMetMht_branch->GetEntry(index);
    } else {
      printf("branch zllmt_diffMetMht_branch does not exist!\n");
      exit(1);
    }
    zllmt_diffMetMht_isLoaded = true;
  }
  return zllmt_diffMetMht_;
}

const float &CMS3::zllmt_met_pt() {
  if (not zllmt_met_pt_isLoaded) {
    if (zllmt_met_pt_branch != 0) {
      zllmt_met_pt_branch->GetEntry(index);
    } else {
      printf("branch zllmt_met_pt_branch does not exist!\n");
      exit(1);
    }
    zllmt_met_pt_isLoaded = true;
  }
  return zllmt_met_pt_;
}

const float &CMS3::zllmt_met_phi() {
  if (not zllmt_met_phi_isLoaded) {
    if (zllmt_met_phi_branch != 0) {
      zllmt_met_phi_branch->GetEntry(index);
    } else {
      printf("branch zllmt_met_phi_branch does not exist!\n");
      exit(1);
    }
    zllmt_met_phi_isLoaded = true;
  }
  return zllmt_met_phi_;
}

const float &CMS3::zllmt_mht_pt() {
  if (not zllmt_mht_pt_isLoaded) {
    if (zllmt_mht_pt_branch != 0) {
      zllmt_mht_pt_branch->GetEntry(index);
    } else {
      printf("branch zllmt_mht_pt_branch does not exist!\n");
      exit(1);
    }
    zllmt_mht_pt_isLoaded = true;
  }
  return zllmt_mht_pt_;
}

const float &CMS3::zllmt_mht_phi() {
  if (not zllmt_mht_phi_isLoaded) {
    if (zllmt_mht_phi_branch != 0) {
      zllmt_mht_phi_branch->GetEntry(index);
    } else {
      printf("branch zllmt_mht_phi_branch does not exist!\n");
      exit(1);
    }
    zllmt_mht_phi_isLoaded = true;
  }
  return zllmt_mht_phi_;
}

const float &CMS3::zllmt_ht() {
  if (not zllmt_ht_isLoaded) {
    if (zllmt_ht_branch != 0) {
      zllmt_ht_branch->GetEntry(index);
    } else {
      printf("branch zllmt_ht_branch does not exist!\n");
      exit(1);
    }
    zllmt_ht_isLoaded = true;
  }
  return zllmt_ht_;
}

const float &CMS3::zllmt_mt() {
  if (not zllmt_mt_isLoaded) {
    if (zllmt_mt_branch != 0) {
      zllmt_mt_branch->GetEntry(index);
    } else {
      printf("branch zllmt_mt_branch does not exist!\n");
      exit(1);
    }
    zllmt_mt_isLoaded = true;
  }
  return zllmt_mt_;
}

const float &CMS3::rl_mt2() {
  if (not rl_mt2_isLoaded) {
    if (rl_mt2_branch != 0) {
      rl_mt2_branch->GetEntry(index);
    } else {
      printf("branch rl_mt2_branch does not exist!\n");
      exit(1);
    }
    rl_mt2_isLoaded = true;
  }
  return rl_mt2_;
}

const float &CMS3::rl_deltaPhiMin() {
  if (not rl_deltaPhiMin_isLoaded) {
    if (rl_deltaPhiMin_branch != 0) {
      rl_deltaPhiMin_branch->GetEntry(index);
    } else {
      printf("branch rl_deltaPhiMin_branch does not exist!\n");
      exit(1);
    }
    rl_deltaPhiMin_isLoaded = true;
  }
  return rl_deltaPhiMin_;
}

const float &CMS3::rl_diffMetMht() {
  if (not rl_diffMetMht_isLoaded) {
    if (rl_diffMetMht_branch != 0) {
      rl_diffMetMht_branch->GetEntry(index);
    } else {
      printf("branch rl_diffMetMht_branch does not exist!\n");
      exit(1);
    }
    rl_diffMetMht_isLoaded = true;
  }
  return rl_diffMetMht_;
}

const float &CMS3::rl_met_pt() {
  if (not rl_met_pt_isLoaded) {
    if (rl_met_pt_branch != 0) {
      rl_met_pt_branch->GetEntry(index);
    } else {
      printf("branch rl_met_pt_branch does not exist!\n");
      exit(1);
    }
    rl_met_pt_isLoaded = true;
  }
  return rl_met_pt_;
}

const float &CMS3::rl_met_phi() {
  if (not rl_met_phi_isLoaded) {
    if (rl_met_phi_branch != 0) {
      rl_met_phi_branch->GetEntry(index);
    } else {
      printf("branch rl_met_phi_branch does not exist!\n");
      exit(1);
    }
    rl_met_phi_isLoaded = true;
  }
  return rl_met_phi_;
}

const float &CMS3::rl_mht_pt() {
  if (not rl_mht_pt_isLoaded) {
    if (rl_mht_pt_branch != 0) {
      rl_mht_pt_branch->GetEntry(index);
    } else {
      printf("branch rl_mht_pt_branch does not exist!\n");
      exit(1);
    }
    rl_mht_pt_isLoaded = true;
  }
  return rl_mht_pt_;
}

const float &CMS3::rl_mht_phi() {
  if (not rl_mht_phi_isLoaded) {
    if (rl_mht_phi_branch != 0) {
      rl_mht_phi_branch->GetEntry(index);
    } else {
      printf("branch rl_mht_phi_branch does not exist!\n");
      exit(1);
    }
    rl_mht_phi_isLoaded = true;
  }
  return rl_mht_phi_;
}

const float &CMS3::rl_mass() {
  if (not rl_mass_isLoaded) {
    if (rl_mass_branch != 0) {
      rl_mass_branch->GetEntry(index);
    } else {
      printf("branch rl_mass_branch does not exist!\n");
      exit(1);
    }
    rl_mass_isLoaded = true;
  }
  return rl_mass_;
}

const float &CMS3::rl_pt() {
  if (not rl_pt_isLoaded) {
    if (rl_pt_branch != 0) {
      rl_pt_branch->GetEntry(index);
    } else {
      printf("branch rl_pt_branch does not exist!\n");
      exit(1);
    }
    rl_pt_isLoaded = true;
  }
  return rl_pt_;
}

const float &CMS3::rl_eta() {
  if (not rl_eta_isLoaded) {
    if (rl_eta_branch != 0) {
      rl_eta_branch->GetEntry(index);
    } else {
      printf("branch rl_eta_branch does not exist!\n");
      exit(1);
    }
    rl_eta_isLoaded = true;
  }
  return rl_eta_;
}

const float &CMS3::rl_phi() {
  if (not rl_phi_isLoaded) {
    if (rl_phi_branch != 0) {
      rl_phi_branch->GetEntry(index);
    } else {
      printf("branch rl_phi_branch does not exist!\n");
      exit(1);
    }
    rl_phi_isLoaded = true;
  }
  return rl_phi_;
}

const float &CMS3::rl_ht() {
  if (not rl_ht_isLoaded) {
    if (rl_ht_branch != 0) {
      rl_ht_branch->GetEntry(index);
    } else {
      printf("branch rl_ht_branch does not exist!\n");
      exit(1);
    }
    rl_ht_isLoaded = true;
  }
  return rl_ht_;
}

const int &CMS3::njet() {
  if (not njet_isLoaded) {
    if (njet_branch != 0) {
      njet_branch->GetEntry(index);
    } else {
      printf("branch njet_branch does not exist!\n");
      exit(1);
    }
    njet_isLoaded = true;
  }
  return njet_;
}

const float &CMS3::jet_pt() {
  if (not jet_pt_isLoaded) {
    if (jet_pt_branch != 0) {
      jet_pt_branch->GetEntry(index);
    } else {
      printf("branch jet_pt_branch does not exist!\n");
      exit(1);
    }
    jet_pt_isLoaded = true;
  }
  return jet_pt_;
}

const float &CMS3::jet_eta() {
  if (not jet_eta_isLoaded) {
    if (jet_eta_branch != 0) {
      jet_eta_branch->GetEntry(index);
    } else {
      printf("branch jet_eta_branch does not exist!\n");
      exit(1);
    }
    jet_eta_isLoaded = true;
  }
  return jet_eta_;
}

const float &CMS3::jet_phi() {
  if (not jet_phi_isLoaded) {
    if (jet_phi_branch != 0) {
      jet_phi_branch->GetEntry(index);
    } else {
      printf("branch jet_phi_branch does not exist!\n");
      exit(1);
    }
    jet_phi_isLoaded = true;
  }
  return jet_phi_;
}

const float &CMS3::jet_mass() {
  if (not jet_mass_isLoaded) {
    if (jet_mass_branch != 0) {
      jet_mass_branch->GetEntry(index);
    } else {
      printf("branch jet_mass_branch does not exist!\n");
      exit(1);
    }
    jet_mass_isLoaded = true;
  }
  return jet_mass_;
}

const float &CMS3::jet_btagCSV() {
  if (not jet_btagCSV_isLoaded) {
    if (jet_btagCSV_branch != 0) {
      jet_btagCSV_branch->GetEntry(index);
    } else {
      printf("branch jet_btagCSV_branch does not exist!\n");
      exit(1);
    }
    jet_btagCSV_isLoaded = true;
  }
  return jet_btagCSV_;
}

const float &CMS3::jet_btagMVA() {
  if (not jet_btagMVA_isLoaded) {
    if (jet_btagMVA_branch != 0) {
      jet_btagMVA_branch->GetEntry(index);
    } else {
      printf("branch jet_btagMVA_branch does not exist!\n");
      exit(1);
    }
    jet_btagMVA_isLoaded = true;
  }
  return jet_btagMVA_;
}

const float &CMS3::jet_chFrac() {
  if (not jet_chFrac_isLoaded) {
    if (jet_chFrac_branch != 0) {
      jet_chFrac_branch->GetEntry(index);
    } else {
      printf("branch jet_chFrac_branch does not exist!\n");
      exit(1);
    }
    jet_chFrac_isLoaded = true;
  }
  return jet_chFrac_;
}

const float &CMS3::jet_nhFrac() {
  if (not jet_nhFrac_isLoaded) {
    if (jet_nhFrac_branch != 0) {
      jet_nhFrac_branch->GetEntry(index);
    } else {
      printf("branch jet_nhFrac_branch does not exist!\n");
      exit(1);
    }
    jet_nhFrac_isLoaded = true;
  }
  return jet_nhFrac_;
}

const float &CMS3::jet_cemFrac() {
  if (not jet_cemFrac_isLoaded) {
    if (jet_cemFrac_branch != 0) {
      jet_cemFrac_branch->GetEntry(index);
    } else {
      printf("branch jet_cemFrac_branch does not exist!\n");
      exit(1);
    }
    jet_cemFrac_isLoaded = true;
  }
  return jet_cemFrac_;
}

const float &CMS3::jet_nemFrac() {
  if (not jet_nemFrac_isLoaded) {
    if (jet_nemFrac_branch != 0) {
      jet_nemFrac_branch->GetEntry(index);
    } else {
      printf("branch jet_nemFrac_branch does not exist!\n");
      exit(1);
    }
    jet_nemFrac_isLoaded = true;
  }
  return jet_nemFrac_;
}

const float &CMS3::jet_muFrac() {
  if (not jet_muFrac_isLoaded) {
    if (jet_muFrac_branch != 0) {
      jet_muFrac_branch->GetEntry(index);
    } else {
      printf("branch jet_muFrac_branch does not exist!\n");
      exit(1);
    }
    jet_muFrac_isLoaded = true;
  }
  return jet_muFrac_;
}

const float &CMS3::jet_rawPt() {
  if (not jet_rawPt_isLoaded) {
    if (jet_rawPt_branch != 0) {
      jet_rawPt_branch->GetEntry(index);
    } else {
      printf("branch jet_rawPt_branch does not exist!\n");
      exit(1);
    }
    jet_rawPt_isLoaded = true;
  }
  return jet_rawPt_;
}

const float &CMS3::jet_mcPt() {
  if (not jet_mcPt_isLoaded) {
    if (jet_mcPt_branch != 0) {
      jet_mcPt_branch->GetEntry(index);
    } else {
      printf("branch jet_mcPt_branch does not exist!\n");
      exit(1);
    }
    jet_mcPt_isLoaded = true;
  }
  return jet_mcPt_;
}

const int &CMS3::jet_mcFlavour() {
  if (not jet_mcFlavour_isLoaded) {
    if (jet_mcFlavour_branch != 0) {
      jet_mcFlavour_branch->GetEntry(index);
    } else {
      printf("branch jet_mcFlavour_branch does not exist!\n");
      exit(1);
    }
    jet_mcFlavour_isLoaded = true;
  }
  return jet_mcFlavour_;
}

const int &CMS3::jet_hadronFlavour() {
  if (not jet_hadronFlavour_isLoaded) {
    if (jet_hadronFlavour_branch != 0) {
      jet_hadronFlavour_branch->GetEntry(index);
    } else {
      printf("branch jet_hadronFlavour_branch does not exist!\n");
      exit(1);
    }
    jet_hadronFlavour_isLoaded = true;
  }
  return jet_hadronFlavour_;
}

const float &CMS3::jet_qgl() {
  if (not jet_qgl_isLoaded) {
    if (jet_qgl_branch != 0) {
      jet_qgl_branch->GetEntry(index);
    } else {
      printf("branch jet_qgl_branch does not exist!\n");
      exit(1);
    }
    jet_qgl_isLoaded = true;
  }
  return jet_qgl_;
}

const float &CMS3::jet_area() {
  if (not jet_area_isLoaded) {
    if (jet_area_branch != 0) {
      jet_area_branch->GetEntry(index);
    } else {
      printf("branch jet_area_branch does not exist!\n");
      exit(1);
    }
    jet_area_isLoaded = true;
  }
  return jet_area_;
}

const int &CMS3::jet_id() {
  if (not jet_id_isLoaded) {
    if (jet_id_branch != 0) {
      jet_id_branch->GetEntry(index);
    } else {
      printf("branch jet_id_branch does not exist!\n");
      exit(1);
    }
    jet_id_isLoaded = true;
  }
  return jet_id_;
}

const int &CMS3::jet_puId() {
  if (not jet_puId_isLoaded) {
    if (jet_puId_branch != 0) {
      jet_puId_branch->GetEntry(index);
    } else {
      printf("branch jet_puId_branch does not exist!\n");
      exit(1);
    }
    jet_puId_isLoaded = true;
  }
  return jet_puId_;
}

const float &CMS3::jet_muf() {
  if (not jet_muf_isLoaded) {
    if (jet_muf_branch != 0) {
      jet_muf_branch->GetEntry(index);
    } else {
      printf("branch jet_muf_branch does not exist!\n");
      exit(1);
    }
    jet_muf_isLoaded = true;
  }
  return jet_muf_;
}

const float &CMS3::weight_lepsf() {
  if (not weight_lepsf_isLoaded) {
    if (weight_lepsf_branch != 0) {
      weight_lepsf_branch->GetEntry(index);
    } else {
      printf("branch weight_lepsf_branch does not exist!\n");
      exit(1);
    }
    weight_lepsf_isLoaded = true;
  }
  return weight_lepsf_;
}

const float &CMS3::weight_lepsf_UP() {
  if (not weight_lepsf_UP_isLoaded) {
    if (weight_lepsf_UP_branch != 0) {
      weight_lepsf_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_lepsf_UP_branch does not exist!\n");
      exit(1);
    }
    weight_lepsf_UP_isLoaded = true;
  }
  return weight_lepsf_UP_;
}

const float &CMS3::weight_lepsf_DN() {
  if (not weight_lepsf_DN_isLoaded) {
    if (weight_lepsf_DN_branch != 0) {
      weight_lepsf_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_lepsf_DN_branch does not exist!\n");
      exit(1);
    }
    weight_lepsf_DN_isLoaded = true;
  }
  return weight_lepsf_DN_;
}

const float &CMS3::weight_lepsf_0l() {
  if (not weight_lepsf_0l_isLoaded) {
    if (weight_lepsf_0l_branch != 0) {
      weight_lepsf_0l_branch->GetEntry(index);
    } else {
      printf("branch weight_lepsf_0l_branch does not exist!\n");
      exit(1);
    }
    weight_lepsf_0l_isLoaded = true;
  }
  return weight_lepsf_0l_;
}

const float &CMS3::weight_lepsf_0l_UP() {
  if (not weight_lepsf_0l_UP_isLoaded) {
    if (weight_lepsf_0l_UP_branch != 0) {
      weight_lepsf_0l_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_lepsf_0l_UP_branch does not exist!\n");
      exit(1);
    }
    weight_lepsf_0l_UP_isLoaded = true;
  }
  return weight_lepsf_0l_UP_;
}

const float &CMS3::weight_lepsf_0l_DN() {
  if (not weight_lepsf_0l_DN_isLoaded) {
    if (weight_lepsf_0l_DN_branch != 0) {
      weight_lepsf_0l_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_lepsf_0l_DN_branch does not exist!\n");
      exit(1);
    }
    weight_lepsf_0l_DN_isLoaded = true;
  }
  return weight_lepsf_0l_DN_;
}

const float &CMS3::weight_btagsf() {
  if (not weight_btagsf_isLoaded) {
    if (weight_btagsf_branch != 0) {
      weight_btagsf_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_isLoaded = true;
  }
  return weight_btagsf_;
}

const float &CMS3::weight_btagsf_heavy_UP() {
  if (not weight_btagsf_heavy_UP_isLoaded) {
    if (weight_btagsf_heavy_UP_branch != 0) {
      weight_btagsf_heavy_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_heavy_UP_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_heavy_UP_isLoaded = true;
  }
  return weight_btagsf_heavy_UP_;
}

const float &CMS3::weight_btagsf_light_UP() {
  if (not weight_btagsf_light_UP_isLoaded) {
    if (weight_btagsf_light_UP_branch != 0) {
      weight_btagsf_light_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_light_UP_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_light_UP_isLoaded = true;
  }
  return weight_btagsf_light_UP_;
}

const float &CMS3::weight_btagsf_heavy_DN() {
  if (not weight_btagsf_heavy_DN_isLoaded) {
    if (weight_btagsf_heavy_DN_branch != 0) {
      weight_btagsf_heavy_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_heavy_DN_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_heavy_DN_isLoaded = true;
  }
  return weight_btagsf_heavy_DN_;
}

const float &CMS3::weight_btagsf_light_DN() {
  if (not weight_btagsf_light_DN_isLoaded) {
    if (weight_btagsf_light_DN_branch != 0) {
      weight_btagsf_light_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_btagsf_light_DN_branch does not exist!\n");
      exit(1);
    }
    weight_btagsf_light_DN_isLoaded = true;
  }
  return weight_btagsf_light_DN_;
}

const float &CMS3::weight_sigtrigsf() {
  if (not weight_sigtrigsf_isLoaded) {
    if (weight_sigtrigsf_branch != 0) {
      weight_sigtrigsf_branch->GetEntry(index);
    } else {
      printf("branch weight_sigtrigsf_branch does not exist!\n");
      exit(1);
    }
    weight_sigtrigsf_isLoaded = true;
  }
  return weight_sigtrigsf_;
}

const float &CMS3::weight_dileptrigsf() {
  if (not weight_dileptrigsf_isLoaded) {
    if (weight_dileptrigsf_branch != 0) {
      weight_dileptrigsf_branch->GetEntry(index);
    } else {
      printf("branch weight_dileptrigsf_branch does not exist!\n");
      exit(1);
    }
    weight_dileptrigsf_isLoaded = true;
  }
  return weight_dileptrigsf_;
}

const float &CMS3::weight_phottrigsf() {
  if (not weight_phottrigsf_isLoaded) {
    if (weight_phottrigsf_branch != 0) {
      weight_phottrigsf_branch->GetEntry(index);
    } else {
      printf("branch weight_phottrigsf_branch does not exist!\n");
      exit(1);
    }
    weight_phottrigsf_isLoaded = true;
  }
  return weight_phottrigsf_;
}

const float &CMS3::weight_pu() {
  if (not weight_pu_isLoaded) {
    if (weight_pu_branch != 0) {
      weight_pu_branch->GetEntry(index);
    } else {
      printf("branch weight_pu_branch does not exist!\n");
      exit(1);
    }
    weight_pu_isLoaded = true;
  }
  return weight_pu_;
}

const float &CMS3::weight_isr() {
  if (not weight_isr_isLoaded) {
    if (weight_isr_branch != 0) {
      weight_isr_branch->GetEntry(index);
    } else {
      printf("branch weight_isr_branch does not exist!\n");
      exit(1);
    }
    weight_isr_isLoaded = true;
  }
  return weight_isr_;
}

const float &CMS3::weight_isr_UP() {
  if (not weight_isr_UP_isLoaded) {
    if (weight_isr_UP_branch != 0) {
      weight_isr_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_isr_UP_branch does not exist!\n");
      exit(1);
    }
    weight_isr_UP_isLoaded = true;
  }
  return weight_isr_UP_;
}

const float &CMS3::weight_isr_DN() {
  if (not weight_isr_DN_isLoaded) {
    if (weight_isr_DN_branch != 0) {
      weight_isr_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_isr_DN_branch does not exist!\n");
      exit(1);
    }
    weight_isr_DN_isLoaded = true;
  }
  return weight_isr_DN_;
}

const float &CMS3::weight_scales_UP() {
  if (not weight_scales_UP_isLoaded) {
    if (weight_scales_UP_branch != 0) {
      weight_scales_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_scales_UP_branch does not exist!\n");
      exit(1);
    }
    weight_scales_UP_isLoaded = true;
  }
  return weight_scales_UP_;
}

const float &CMS3::weight_scales_DN() {
  if (not weight_scales_DN_isLoaded) {
    if (weight_scales_DN_branch != 0) {
      weight_scales_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_scales_DN_branch does not exist!\n");
      exit(1);
    }
    weight_scales_DN_isLoaded = true;
  }
  return weight_scales_DN_;
}

const float &CMS3::weight_pdfs_UP() {
  if (not weight_pdfs_UP_isLoaded) {
    if (weight_pdfs_UP_branch != 0) {
      weight_pdfs_UP_branch->GetEntry(index);
    } else {
      printf("branch weight_pdfs_UP_branch does not exist!\n");
      exit(1);
    }
    weight_pdfs_UP_isLoaded = true;
  }
  return weight_pdfs_UP_;
}

const float &CMS3::weight_pdfs_DN() {
  if (not weight_pdfs_DN_isLoaded) {
    if (weight_pdfs_DN_branch != 0) {
      weight_pdfs_DN_branch->GetEntry(index);
    } else {
      printf("branch weight_pdfs_DN_branch does not exist!\n");
      exit(1);
    }
    weight_pdfs_DN_isLoaded = true;
  }
  return weight_pdfs_DN_;
}

const float &CMS3::weight_toppt() {
  if (not weight_toppt_isLoaded) {
    if (weight_toppt_branch != 0) {
      weight_toppt_branch->GetEntry(index);
    } else {
      printf("branch weight_toppt_branch does not exist!\n");
      exit(1);
    }
    weight_toppt_isLoaded = true;
  }
  return weight_toppt_;
}

const float &CMS3::genRecoil_pt() {
  if (not genRecoil_pt_isLoaded) {
    if (genRecoil_pt_branch != 0) {
      genRecoil_pt_branch->GetEntry(index);
    } else {
      printf("branch genRecoil_pt_branch does not exist!\n");
      exit(1);
    }
    genRecoil_pt_isLoaded = true;
  }
  return genRecoil_pt_;
}

const float &CMS3::genTop_pt() {
  if (not genTop_pt_isLoaded) {
    if (genTop_pt_branch != 0) {
      genTop_pt_branch->GetEntry(index);
    } else {
      printf("branch genTop_pt_branch does not exist!\n");
      exit(1);
    }
    genTop_pt_isLoaded = true;
  }
  return genTop_pt_;
}

const float &CMS3::genTbar_pt() {
  if (not genTbar_pt_isLoaded) {
    if (genTbar_pt_branch != 0) {
      genTbar_pt_branch->GetEntry(index);
    } else {
      printf("branch genTbar_pt_branch does not exist!\n");
      exit(1);
    }
    genTbar_pt_isLoaded = true;
  }
  return genTbar_pt_;
}

const int &CMS3::genProd_pdgId() {
  if (not genProd_pdgId_isLoaded) {
    if (genProd_pdgId_branch != 0) {
      genProd_pdgId_branch->GetEntry(index);
    } else {
      printf("branch genProd_pdgId_branch does not exist!\n");
      exit(1);
    }
    genProd_pdgId_isLoaded = true;
  }
  return genProd_pdgId_;
}

const float &CMS3::weight_pol_L() {
  if (not weight_pol_L_isLoaded) {
    if (weight_pol_L_branch != 0) {
      weight_pol_L_branch->GetEntry(index);
    } else {
      printf("branch weight_pol_L_branch does not exist!\n");
      exit(1);
    }
    weight_pol_L_isLoaded = true;
  }
  return weight_pol_L_;
}

const float &CMS3::weight_pol_R() {
  if (not weight_pol_R_isLoaded) {
    if (weight_pol_R_branch != 0) {
      weight_pol_R_branch->GetEntry(index);
    } else {
      printf("branch weight_pol_R_branch does not exist!\n");
      exit(1);
    }
    weight_pol_R_isLoaded = true;
  }
  return weight_pol_R_;
}

const int &CMS3::nisrMatch() {
  if (not nisrMatch_isLoaded) {
    if (nisrMatch_branch != 0) {
      nisrMatch_branch->GetEntry(index);
    } else {
      printf("branch nisrMatch_branch does not exist!\n");
      exit(1);
    }
    nisrMatch_isLoaded = true;
  }
  return nisrMatch_;
}


void CMS3::progress( int nEventsTotal, int nEventsChain ){
  int period = 1000;
  if (nEventsTotal%1000 == 0) {
    // xterm magic from L. Vacavant and A. Cerri
    if (isatty(1)) {
      if ((nEventsChain - nEventsTotal) > period) {
        float frac = (float)nEventsTotal/(nEventsChain*0.01);
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
             "\033[0m\033[32m <---\033[0m\015", frac);
        fflush(stdout);
      }
      else {
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", 100.);
        cout << endl;
      }
    }
  }
}

namespace tas {

const int &run() { return cms3.run(); }
const int &lumi() { return cms3.lumi(); }
const unsigned long long &evt() { return cms3.evt(); }
const int &isData() { return cms3.isData(); }
const int &isGolden() { return cms3.isGolden(); }
const float &evt_scale1fb() { return cms3.evt_scale1fb(); }
const float &evt_xsec() { return cms3.evt_xsec(); }
const float &evt_kfactor() { return cms3.evt_kfactor(); }
const float &evt_filter() { return cms3.evt_filter(); }
const unsigned long long &evt_nEvts() { return cms3.evt_nEvts(); }
const int &evt_id() { return cms3.evt_id(); }
const float &genWeight() { return cms3.genWeight(); }
const float &puWeight() { return cms3.puWeight(); }
const int &nVert() { return cms3.nVert(); }
const int &nTrueInt() { return cms3.nTrueInt(); }
const float &rho() { return cms3.rho(); }
const int &nJet30() { return cms3.nJet30(); }
const int &nJet30JECup() { return cms3.nJet30JECup(); }
const int &nJet30JECdn() { return cms3.nJet30JECdn(); }
const int &nJet40() { return cms3.nJet40(); }
const int &nBJet20() { return cms3.nBJet20(); }
const int &nBJet20csv() { return cms3.nBJet20csv(); }
const int &nBJet20mva() { return cms3.nBJet20mva(); }
const int &nBJet20JECup() { return cms3.nBJet20JECup(); }
const int &nBJet20JECdn() { return cms3.nBJet20JECdn(); }
const int &nBJet25() { return cms3.nBJet25(); }
const int &nBJet30() { return cms3.nBJet30(); }
const int &nBJet30csv() { return cms3.nBJet30csv(); }
const int &nBJet30mva() { return cms3.nBJet30mva(); }
const int &nBJet40() { return cms3.nBJet40(); }
const int &nJet30FailId() { return cms3.nJet30FailId(); }
const int &nJet100FailId() { return cms3.nJet100FailId(); }
const int &nJet20BadFastsim() { return cms3.nJet20BadFastsim(); }
const int &nJet200MuFrac50DphiMet() { return cms3.nJet200MuFrac50DphiMet(); }
const int &nMuons10() { return cms3.nMuons10(); }
const int &nBadMuons20() { return cms3.nBadMuons20(); }
const int &nElectrons10() { return cms3.nElectrons10(); }
const int &nLepLowMT() { return cms3.nLepLowMT(); }
const int &nTaus20() { return cms3.nTaus20(); }
const int &nGammas20() { return cms3.nGammas20(); }
const int &nPFCHCand3() { return cms3.nPFCHCand3(); }
const float &deltaPhiMin() { return cms3.deltaPhiMin(); }
const float &deltaPhiMin_genmet() { return cms3.deltaPhiMin_genmet(); }
const float &diffMetMht() { return cms3.diffMetMht(); }
const float &diffMetMht_genmet() { return cms3.diffMetMht_genmet(); }
const float &deltaPhiMinJECup() { return cms3.deltaPhiMinJECup(); }
const float &deltaPhiMinJECdn() { return cms3.deltaPhiMinJECdn(); }
const float &diffMetMhtJECup() { return cms3.diffMetMhtJECup(); }
const float &diffMetMhtJECdn() { return cms3.diffMetMhtJECdn(); }
const float &minMTBMet() { return cms3.minMTBMet(); }
const float &zll_minMTBMet() { return cms3.zll_minMTBMet(); }
const float &gamma_minMTBMet() { return cms3.gamma_minMTBMet(); }
const float &ht() { return cms3.ht(); }
const float &htJECup() { return cms3.htJECup(); }
const float &htJECdn() { return cms3.htJECdn(); }
const float &mt2() { return cms3.mt2(); }
const float &mt2JECup() { return cms3.mt2JECup(); }
const float &mt2JECdn() { return cms3.mt2JECdn(); }
const float &mt2_gen() { return cms3.mt2_gen(); }
const float &mt2_genmet() { return cms3.mt2_genmet(); }
const float &jet1_pt() { return cms3.jet1_pt(); }
const float &jet2_pt() { return cms3.jet2_pt(); }
const float &jet1_ptJECup() { return cms3.jet1_ptJECup(); }
const float &jet2_ptJECup() { return cms3.jet2_ptJECup(); }
const float &jet1_ptJECdn() { return cms3.jet1_ptJECdn(); }
const float &jet2_ptJECdn() { return cms3.jet2_ptJECdn(); }
const int &jet_failFSveto() { return cms3.jet_failFSveto(); }
const float &gamma_jet1_pt() { return cms3.gamma_jet1_pt(); }
const float &gamma_jet2_pt() { return cms3.gamma_jet2_pt(); }
const float &pseudoJet1_pt() { return cms3.pseudoJet1_pt(); }
const float &pseudoJet1_eta() { return cms3.pseudoJet1_eta(); }
const float &pseudoJet1_phi() { return cms3.pseudoJet1_phi(); }
const float &pseudoJet1_mass() { return cms3.pseudoJet1_mass(); }
const float &pseudoJet2_pt() { return cms3.pseudoJet2_pt(); }
const float &pseudoJet2_eta() { return cms3.pseudoJet2_eta(); }
const float &pseudoJet2_phi() { return cms3.pseudoJet2_phi(); }
const float &pseudoJet2_mass() { return cms3.pseudoJet2_mass(); }
const float &mht_pt() { return cms3.mht_pt(); }
const float &mht_phi() { return cms3.mht_phi(); }
const float &mht_ptJECup() { return cms3.mht_ptJECup(); }
const float &mht_phiJECup() { return cms3.mht_phiJECup(); }
const float &mht_ptJECdn() { return cms3.mht_ptJECdn(); }
const float &mht_phiJECdn() { return cms3.mht_phiJECdn(); }
const float &met_pt() { return cms3.met_pt(); }
const float &met_phi() { return cms3.met_phi(); }
const float &met_ptJECup() { return cms3.met_ptJECup(); }
const float &met_phiJECup() { return cms3.met_phiJECup(); }
const float &met_ptJECdn() { return cms3.met_ptJECdn(); }
const float &met_phiJECdn() { return cms3.met_phiJECdn(); }
const float &met_rawPt() { return cms3.met_rawPt(); }
const float &met_rawPhi() { return cms3.met_rawPhi(); }
const float &met_caloPt() { return cms3.met_caloPt(); }
const float &met_caloPhi() { return cms3.met_caloPhi(); }
const float &met_trkPt() { return cms3.met_trkPt(); }
const float &met_trkPhi() { return cms3.met_trkPhi(); }
const float &met_genPt() { return cms3.met_genPt(); }
const float &met_genPhi() { return cms3.met_genPhi(); }
const float &met_miniaodPt() { return cms3.met_miniaodPt(); }
const float &met_miniaodPhi() { return cms3.met_miniaodPhi(); }
const int &Flag_EcalDeadCellTriggerPrimitiveFilter() { return cms3.Flag_EcalDeadCellTriggerPrimitiveFilter(); }
const int &Flag_trkPOG_manystripclus53X() { return cms3.Flag_trkPOG_manystripclus53X(); }
const int &Flag_ecalLaserCorrFilter() { return cms3.Flag_ecalLaserCorrFilter(); }
const int &Flag_trkPOG_toomanystripclus53X() { return cms3.Flag_trkPOG_toomanystripclus53X(); }
const int &Flag_hcalLaserEventFilter() { return cms3.Flag_hcalLaserEventFilter(); }
const int &Flag_trkPOG_logErrorTooManyClusters() { return cms3.Flag_trkPOG_logErrorTooManyClusters(); }
const int &Flag_trkPOGFilters() { return cms3.Flag_trkPOGFilters(); }
const int &Flag_trackingFailureFilter() { return cms3.Flag_trackingFailureFilter(); }
const int &Flag_CSCTightHalo2015Filter() { return cms3.Flag_CSCTightHalo2015Filter(); }
const int &Flag_CSCTightHaloFilter() { return cms3.Flag_CSCTightHaloFilter(); }
const int &Flag_globalTightHalo2016Filter() { return cms3.Flag_globalTightHalo2016Filter(); }
const int &Flag_globalSuperTightHalo2016Filter() { return cms3.Flag_globalSuperTightHalo2016Filter(); }
const int &Flag_HBHENoiseFilter() { return cms3.Flag_HBHENoiseFilter(); }
const int &Flag_HBHENoiseIsoFilter() { return cms3.Flag_HBHENoiseIsoFilter(); }
const int &Flag_goodVertices() { return cms3.Flag_goodVertices(); }
const int &Flag_eeBadScFilter() { return cms3.Flag_eeBadScFilter(); }
const int &Flag_ecalBadCalibFilter() { return cms3.Flag_ecalBadCalibFilter(); }
const int &Flag_badMuonFilter() { return cms3.Flag_badMuonFilter(); }
const int &Flag_badMuonFilterV2() { return cms3.Flag_badMuonFilterV2(); }
const int &Flag_badMuons() { return cms3.Flag_badMuons(); }
const int &Flag_duplicateMuons() { return cms3.Flag_duplicateMuons(); }
const int &Flag_noBadMuons() { return cms3.Flag_noBadMuons(); }
const int &Flag_badChargedCandidateFilter() { return cms3.Flag_badChargedCandidateFilter(); }
const int &Flag_badChargedHadronFilter() { return cms3.Flag_badChargedHadronFilter(); }
const int &Flag_badChargedHadronFilterV2() { return cms3.Flag_badChargedHadronFilterV2(); }
const int &Flag_METFilters() { return cms3.Flag_METFilters(); }
const int &HLT_PFHT1050() { return cms3.HLT_PFHT1050(); }
const int &HLT_PFHT500_PFMET100_PFMHT100() { return cms3.HLT_PFHT500_PFMET100_PFMHT100(); }
const int &HLT_PFHT700_PFMET85_PFMHT85() { return cms3.HLT_PFHT700_PFMET85_PFMHT85(); }
const int &HLT_PFHT800_PFMET75_PFMHT75() { return cms3.HLT_PFHT800_PFMET75_PFMHT75(); }
const int &HLT_PFMET170() { return cms3.HLT_PFMET170(); }
const int &HLT_PFHT300_PFMET100() { return cms3.HLT_PFHT300_PFMET100(); }
const int &HLT_PFHT300_PFMET110() { return cms3.HLT_PFHT300_PFMET110(); }
const int &HLT_PFHT350_PFMET100() { return cms3.HLT_PFHT350_PFMET100(); }
const int &HLT_PFHT350_PFMET120() { return cms3.HLT_PFHT350_PFMET120(); }
const int &HLT_PFMETNoMu90_PFMHTNoMu90() { return cms3.HLT_PFMETNoMu90_PFMHTNoMu90(); }
const int &HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90() { return cms3.HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90(); }
const int &HLT_PFMETNoMu100_PFMHTNoMu100() { return cms3.HLT_PFMETNoMu100_PFMHTNoMu100(); }
const int &HLT_PFMETNoMu110_PFMHTNoMu110() { return cms3.HLT_PFMETNoMu110_PFMHTNoMu110(); }
const int &HLT_PFMETNoMu120_PFMHTNoMu120() { return cms3.HLT_PFMETNoMu120_PFMHTNoMu120(); }
const int &HLT_PFMETNoMu130_PFMHTNoMu130() { return cms3.HLT_PFMETNoMu130_PFMHTNoMu130(); }
const int &HLT_PFMETNoMu140_PFMHTNoMu140() { return cms3.HLT_PFMETNoMu140_PFMHTNoMu140(); }
const int &HLT_PFMET90_PFMHT90() { return cms3.HLT_PFMET90_PFMHT90(); }
const int &HLT_PFMET100_PFMHT100() { return cms3.HLT_PFMET100_PFMHT100(); }
const int &HLT_PFMET110_PFMHT110() { return cms3.HLT_PFMET110_PFMHT110(); }
const int &HLT_PFMET120_PFMHT120() { return cms3.HLT_PFMET120_PFMHT120(); }
const int &HLT_PFMET130_PFMHT130() { return cms3.HLT_PFMET130_PFMHT130(); }
const int &HLT_PFMET140_PFMHT140() { return cms3.HLT_PFMET140_PFMHT140(); }
const int &HLT_PFMET100_PFMHT100_PFHT60() { return cms3.HLT_PFMET100_PFMHT100_PFHT60(); }
const int &HLT_PFMET120_PFMHT120_PFHT60() { return cms3.HLT_PFMET120_PFMHT120_PFHT60(); }
const int &HLT_PFJet450() { return cms3.HLT_PFJet450(); }
const int &HLT_PFJet500() { return cms3.HLT_PFJet500(); }
const int &HLT_ECALHT800() { return cms3.HLT_ECALHT800(); }
const int &HLT_SingleMu() { return cms3.HLT_SingleMu(); }
const int &HLT_SingleMu_NonIso() { return cms3.HLT_SingleMu_NonIso(); }
const int &HLT_SingleEl() { return cms3.HLT_SingleEl(); }
const int &HLT_SingleEl_NonIso() { return cms3.HLT_SingleEl_NonIso(); }
const int &HLT_DoubleEl() { return cms3.HLT_DoubleEl(); }
const int &HLT_DoubleEl33() { return cms3.HLT_DoubleEl33(); }
const int &HLT_MuX_Ele12() { return cms3.HLT_MuX_Ele12(); }
const int &HLT_Mu8_EleX() { return cms3.HLT_Mu8_EleX(); }
const int &HLT_Mu12_EleX() { return cms3.HLT_Mu12_EleX(); }
const int &HLT_Mu30_Ele30_NonIso() { return cms3.HLT_Mu30_Ele30_NonIso(); }
const int &HLT_Mu33_Ele33_NonIso() { return cms3.HLT_Mu33_Ele33_NonIso(); }
const int &HLT_Mu37_Ele27_NonIso() { return cms3.HLT_Mu37_Ele27_NonIso(); }
const int &HLT_Mu27_Ele37_NonIso() { return cms3.HLT_Mu27_Ele37_NonIso(); }
const int &HLT_DoubleMu() { return cms3.HLT_DoubleMu(); }
const int &HLT_DoubleMu_NonIso() { return cms3.HLT_DoubleMu_NonIso(); }
const int &HLT_Photon120() { return cms3.HLT_Photon120(); }
const int &HLT_Photon200() { return cms3.HLT_Photon200(); }
const int &HLT_Photon175_Prescale() { return cms3.HLT_Photon175_Prescale(); }
const int &HLT_Photon165_HE10() { return cms3.HLT_Photon165_HE10(); }
const int &HLT_Photon250_NoHE() { return cms3.HLT_Photon250_NoHE(); }
const int &HLT_PFHT180_Prescale() { return cms3.HLT_PFHT180_Prescale(); }
const int &HLT_PFHT250_Prescale() { return cms3.HLT_PFHT250_Prescale(); }
const int &HLT_PFHT370_Prescale() { return cms3.HLT_PFHT370_Prescale(); }
const int &HLT_PFHT430_Prescale() { return cms3.HLT_PFHT430_Prescale(); }
const int &HLT_PFHT510_Prescale() { return cms3.HLT_PFHT510_Prescale(); }
const int &HLT_PFHT590_Prescale() { return cms3.HLT_PFHT590_Prescale(); }
const int &HLT_PFHT680_Prescale() { return cms3.HLT_PFHT680_Prescale(); }
const int &HLT_PFHT780_Prescale() { return cms3.HLT_PFHT780_Prescale(); }
const int &HLT_PFHT890_Prescale() { return cms3.HLT_PFHT890_Prescale(); }
const int &HLT_DiCentralPFJet70_PFMET120() { return cms3.HLT_DiCentralPFJet70_PFMET120(); }
const int &HLT_DiCentralPFJet55_PFMET110() { return cms3.HLT_DiCentralPFJet55_PFMET110(); }
const int &nlep() { return cms3.nlep(); }
const float &lep_pt() { return cms3.lep_pt(); }
const float &lep_eta() { return cms3.lep_eta(); }
const float &lep_phi() { return cms3.lep_phi(); }
const float &lep_mass() { return cms3.lep_mass(); }
const int &lep_charge() { return cms3.lep_charge(); }
const int &lep_pdgId() { return cms3.lep_pdgId(); }
const float &lep_dxy() { return cms3.lep_dxy(); }
const float &lep_dz() { return cms3.lep_dz(); }
const int &lep_tightId() { return cms3.lep_tightId(); }
const int &lep_heepId() { return cms3.lep_heepId(); }
const float &lep_highPtFit_pt() { return cms3.lep_highPtFit_pt(); }
const float &lep_highPtFit_eta() { return cms3.lep_highPtFit_eta(); }
const float &lep_highPtFit_phi() { return cms3.lep_highPtFit_phi(); }
const float &lep_relIso03() { return cms3.lep_relIso03(); }
const float &lep_relIso04() { return cms3.lep_relIso04(); }
const float &lep_miniRelIso() { return cms3.lep_miniRelIso(); }
const int &lep_mcMatchId() { return cms3.lep_mcMatchId(); }
const int &lep_lostHits() { return cms3.lep_lostHits(); }
const int &lep_convVeto() { return cms3.lep_convVeto(); }
const int &lep_tightCharge() { return cms3.lep_tightCharge(); }
const int &nisoTrack() { return cms3.nisoTrack(); }
const float &isoTrack_pt() { return cms3.isoTrack_pt(); }
const float &isoTrack_eta() { return cms3.isoTrack_eta(); }
const float &isoTrack_phi() { return cms3.isoTrack_phi(); }
const float &isoTrack_mass() { return cms3.isoTrack_mass(); }
const float &isoTrack_absIso() { return cms3.isoTrack_absIso(); }
const float &isoTrack_dz() { return cms3.isoTrack_dz(); }
const int &isoTrack_pdgId() { return cms3.isoTrack_pdgId(); }
const int &isoTrack_mcMatchId() { return cms3.isoTrack_mcMatchId(); }
const int &nhighPtPFcands() { return cms3.nhighPtPFcands(); }
const float &highPtPFcands_pt() { return cms3.highPtPFcands_pt(); }
const float &highPtPFcands_eta() { return cms3.highPtPFcands_eta(); }
const float &highPtPFcands_phi() { return cms3.highPtPFcands_phi(); }
const float &highPtPFcands_mass() { return cms3.highPtPFcands_mass(); }
const float &highPtPFcands_absIso() { return cms3.highPtPFcands_absIso(); }
const float &highPtPFcands_dz() { return cms3.highPtPFcands_dz(); }
const int &highPtPFcands_pdgId() { return cms3.highPtPFcands_pdgId(); }
const int &highPtPFcands_mcMatchId() { return cms3.highPtPFcands_mcMatchId(); }
const int &nPFLep5LowMT() { return cms3.nPFLep5LowMT(); }
const int &nPFHad10LowMT() { return cms3.nPFHad10LowMT(); }
const int &ntau() { return cms3.ntau(); }
const float &tau_pt() { return cms3.tau_pt(); }
const float &tau_eta() { return cms3.tau_eta(); }
const float &tau_phi() { return cms3.tau_phi(); }
const float &tau_mass() { return cms3.tau_mass(); }
const int &tau_charge() { return cms3.tau_charge(); }
const float &tau_dxy() { return cms3.tau_dxy(); }
const float &tau_dz() { return cms3.tau_dz(); }
const int &tau_idCI3hit() { return cms3.tau_idCI3hit(); }
const float &tau_isoCI3hit() { return cms3.tau_isoCI3hit(); }
const int &tau_mcMatchId() { return cms3.tau_mcMatchId(); }
const int &ngamma() { return cms3.ngamma(); }
const float &gamma_pt() { return cms3.gamma_pt(); }
const float &gamma_eta() { return cms3.gamma_eta(); }
const float &gamma_phi() { return cms3.gamma_phi(); }
const float &gamma_mass() { return cms3.gamma_mass(); }
const int &gamma_mcMatchId() { return cms3.gamma_mcMatchId(); }
const float &gamma_genIso04() { return cms3.gamma_genIso04(); }
const float &gamma_drMinParton() { return cms3.gamma_drMinParton(); }
const float &gamma_chHadIso() { return cms3.gamma_chHadIso(); }
const float &gamma_neuHadIso() { return cms3.gamma_neuHadIso(); }
const float &gamma_phIso() { return cms3.gamma_phIso(); }
const float &gamma_sigmaIetaIeta() { return cms3.gamma_sigmaIetaIeta(); }
const float &gamma_r9() { return cms3.gamma_r9(); }
const float &gamma_hOverE() { return cms3.gamma_hOverE(); }
const float &gamma_hOverE015() { return cms3.gamma_hOverE015(); }
const int &gamma_idCutBased() { return cms3.gamma_idCutBased(); }
const float &gamma_mt2() { return cms3.gamma_mt2(); }
const int &gamma_nJet30() { return cms3.gamma_nJet30(); }
const int &gamma_nJet40() { return cms3.gamma_nJet40(); }
const int &gamma_nJet30FailId() { return cms3.gamma_nJet30FailId(); }
const int &gamma_nJet100FailId() { return cms3.gamma_nJet100FailId(); }
const int &gamma_nBJet20() { return cms3.gamma_nBJet20(); }
const int &gamma_nBJet20csv() { return cms3.gamma_nBJet20csv(); }
const int &gamma_nBJet20mva() { return cms3.gamma_nBJet20mva(); }
const int &gamma_nBJet25() { return cms3.gamma_nBJet25(); }
const int &gamma_nBJet30() { return cms3.gamma_nBJet30(); }
const int &gamma_nBJet40() { return cms3.gamma_nBJet40(); }
const float &gamma_ht() { return cms3.gamma_ht(); }
const float &gamma_deltaPhiMin() { return cms3.gamma_deltaPhiMin(); }
const float &gamma_diffMetMht() { return cms3.gamma_diffMetMht(); }
const float &gamma_mht_pt() { return cms3.gamma_mht_pt(); }
const float &gamma_mht_phi() { return cms3.gamma_mht_phi(); }
const float &gamma_met_pt() { return cms3.gamma_met_pt(); }
const float &gamma_met_phi() { return cms3.gamma_met_phi(); }
const int &npfPhoton() { return cms3.npfPhoton(); }
const float &pfPhoton_pt() { return cms3.pfPhoton_pt(); }
const float &pfPhoton_eta() { return cms3.pfPhoton_eta(); }
const float &pfPhoton_phi() { return cms3.pfPhoton_phi(); }
const float &zll_mt2() { return cms3.zll_mt2(); }
const float &zll_deltaPhiMin() { return cms3.zll_deltaPhiMin(); }
const float &zll_diffMetMht() { return cms3.zll_diffMetMht(); }
const float &zll_met_pt() { return cms3.zll_met_pt(); }
const float &zll_met_phi() { return cms3.zll_met_phi(); }
const float &zll_mht_pt() { return cms3.zll_mht_pt(); }
const float &zll_mht_phi() { return cms3.zll_mht_phi(); }
const float &zll_mass() { return cms3.zll_mass(); }
const float &zll_pt() { return cms3.zll_pt(); }
const float &zll_eta() { return cms3.zll_eta(); }
const float &zll_phi() { return cms3.zll_phi(); }
const float &zll_ht() { return cms3.zll_ht(); }
const float &zll_mt2JECup() { return cms3.zll_mt2JECup(); }
const float &zll_deltaPhiMinJECup() { return cms3.zll_deltaPhiMinJECup(); }
const float &zll_diffMetMhtJECup() { return cms3.zll_diffMetMhtJECup(); }
const float &zll_met_ptJECup() { return cms3.zll_met_ptJECup(); }
const float &zll_met_phiJECup() { return cms3.zll_met_phiJECup(); }
const float &zll_mht_ptJECup() { return cms3.zll_mht_ptJECup(); }
const float &zll_mht_phiJECup() { return cms3.zll_mht_phiJECup(); }
const float &zll_htJECup() { return cms3.zll_htJECup(); }
const float &zll_mt2JECdn() { return cms3.zll_mt2JECdn(); }
const float &zll_deltaPhiMinJECdn() { return cms3.zll_deltaPhiMinJECdn(); }
const float &zll_diffMetMhtJECdn() { return cms3.zll_diffMetMhtJECdn(); }
const float &zll_met_ptJECdn() { return cms3.zll_met_ptJECdn(); }
const float &zll_met_phiJECdn() { return cms3.zll_met_phiJECdn(); }
const float &zll_mht_ptJECdn() { return cms3.zll_mht_ptJECdn(); }
const float &zll_mht_phiJECdn() { return cms3.zll_mht_phiJECdn(); }
const float &zll_htJECdn() { return cms3.zll_htJECdn(); }
const float &zllmt_mt2() { return cms3.zllmt_mt2(); }
const float &zllmt_deltaPhiMin() { return cms3.zllmt_deltaPhiMin(); }
const float &zllmt_diffMetMht() { return cms3.zllmt_diffMetMht(); }
const float &zllmt_met_pt() { return cms3.zllmt_met_pt(); }
const float &zllmt_met_phi() { return cms3.zllmt_met_phi(); }
const float &zllmt_mht_pt() { return cms3.zllmt_mht_pt(); }
const float &zllmt_mht_phi() { return cms3.zllmt_mht_phi(); }
const float &zllmt_ht() { return cms3.zllmt_ht(); }
const float &zllmt_mt() { return cms3.zllmt_mt(); }
const float &rl_mt2() { return cms3.rl_mt2(); }
const float &rl_deltaPhiMin() { return cms3.rl_deltaPhiMin(); }
const float &rl_diffMetMht() { return cms3.rl_diffMetMht(); }
const float &rl_met_pt() { return cms3.rl_met_pt(); }
const float &rl_met_phi() { return cms3.rl_met_phi(); }
const float &rl_mht_pt() { return cms3.rl_mht_pt(); }
const float &rl_mht_phi() { return cms3.rl_mht_phi(); }
const float &rl_mass() { return cms3.rl_mass(); }
const float &rl_pt() { return cms3.rl_pt(); }
const float &rl_eta() { return cms3.rl_eta(); }
const float &rl_phi() { return cms3.rl_phi(); }
const float &rl_ht() { return cms3.rl_ht(); }
const int &njet() { return cms3.njet(); }
const float &jet_pt() { return cms3.jet_pt(); }
const float &jet_eta() { return cms3.jet_eta(); }
const float &jet_phi() { return cms3.jet_phi(); }
const float &jet_mass() { return cms3.jet_mass(); }
const float &jet_btagCSV() { return cms3.jet_btagCSV(); }
const float &jet_btagMVA() { return cms3.jet_btagMVA(); }
const float &jet_chFrac() { return cms3.jet_chFrac(); }
const float &jet_nhFrac() { return cms3.jet_nhFrac(); }
const float &jet_cemFrac() { return cms3.jet_cemFrac(); }
const float &jet_nemFrac() { return cms3.jet_nemFrac(); }
const float &jet_muFrac() { return cms3.jet_muFrac(); }
const float &jet_rawPt() { return cms3.jet_rawPt(); }
const float &jet_mcPt() { return cms3.jet_mcPt(); }
const int &jet_mcFlavour() { return cms3.jet_mcFlavour(); }
const int &jet_hadronFlavour() { return cms3.jet_hadronFlavour(); }
const float &jet_qgl() { return cms3.jet_qgl(); }
const float &jet_area() { return cms3.jet_area(); }
const int &jet_id() { return cms3.jet_id(); }
const int &jet_puId() { return cms3.jet_puId(); }
const float &jet_muf() { return cms3.jet_muf(); }
const float &weight_lepsf() { return cms3.weight_lepsf(); }
const float &weight_lepsf_UP() { return cms3.weight_lepsf_UP(); }
const float &weight_lepsf_DN() { return cms3.weight_lepsf_DN(); }
const float &weight_lepsf_0l() { return cms3.weight_lepsf_0l(); }
const float &weight_lepsf_0l_UP() { return cms3.weight_lepsf_0l_UP(); }
const float &weight_lepsf_0l_DN() { return cms3.weight_lepsf_0l_DN(); }
const float &weight_btagsf() { return cms3.weight_btagsf(); }
const float &weight_btagsf_heavy_UP() { return cms3.weight_btagsf_heavy_UP(); }
const float &weight_btagsf_light_UP() { return cms3.weight_btagsf_light_UP(); }
const float &weight_btagsf_heavy_DN() { return cms3.weight_btagsf_heavy_DN(); }
const float &weight_btagsf_light_DN() { return cms3.weight_btagsf_light_DN(); }
const float &weight_sigtrigsf() { return cms3.weight_sigtrigsf(); }
const float &weight_dileptrigsf() { return cms3.weight_dileptrigsf(); }
const float &weight_phottrigsf() { return cms3.weight_phottrigsf(); }
const float &weight_pu() { return cms3.weight_pu(); }
const float &weight_isr() { return cms3.weight_isr(); }
const float &weight_isr_UP() { return cms3.weight_isr_UP(); }
const float &weight_isr_DN() { return cms3.weight_isr_DN(); }
const float &weight_scales_UP() { return cms3.weight_scales_UP(); }
const float &weight_scales_DN() { return cms3.weight_scales_DN(); }
const float &weight_pdfs_UP() { return cms3.weight_pdfs_UP(); }
const float &weight_pdfs_DN() { return cms3.weight_pdfs_DN(); }
const float &weight_toppt() { return cms3.weight_toppt(); }
const float &genRecoil_pt() { return cms3.genRecoil_pt(); }
const float &genTop_pt() { return cms3.genTop_pt(); }
const float &genTbar_pt() { return cms3.genTbar_pt(); }
const int &genProd_pdgId() { return cms3.genProd_pdgId(); }
const float &weight_pol_L() { return cms3.weight_pol_L(); }
const float &weight_pol_R() { return cms3.weight_pol_R(); }
const int &nisrMatch() { return cms3.nisrMatch(); }

}
