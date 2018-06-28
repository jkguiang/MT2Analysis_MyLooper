{

  gROOT->ProcessLine(".L ScanChain.C+");

  // DATA
  TChain *data = new TChain("mt2"); 
  data->Add("/home/users/jguiang/projects/MT2Analysis/MyLooper/data/data_Run2017B_31Mar2018_data_Run2017B_JetHT.root");
  ScanChain(data, "data.root"); 
  // END DATA
}
