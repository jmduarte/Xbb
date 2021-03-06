{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Apr  7 17:12:20 2016) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,700,476);
   c1->SetHighLightColor(2);
   c1->Range(462.5,-2.779314,737.5,-0.8632869);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);

   TH1F *lheLowMET = new TH1F("lheLowMET"," lheHT  {(met_pt > 80) && (mhtJet30 > 80) && !((met_pt > 120) && (mhtJet30 > 120)) && nhJCidx>=2 && Jet_btagCSV[hJCidx[1]]>0.460 && abs(Jet_eta[hJCidx[0]])<2.4 && abs(Jet_eta[hJCidx[1]])<2.4 && abs(Jet_eta[0])<2.4 && Jet_pt[hJCidx[0]]>20 && Jet_pt[hJCidx[1]]>20 && Jet_pt[0]>20  && Jet_id[hJCidx[1]]>=4 && Jet_id[hJCidx[0]]>=4 && Jet_id[0]>=4 && Jet_puId[hJCidx[1]]>=1 && Jet_puId[hJCidx[0]]>=1 && Jet_puId[0]>=1 && (HLT_BIT_HLT_PFMET90_PFMHT90_IDTight_v||HLT_BIT_HLT_PFMET170_NoiseCleaned_v) && json && Flag_HBHENoiseIsoFilter && Flag_HBHENoiseFilter && Flag_CSCTightHalo2015Filter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_goodVertices && Flag_eeBadScFilter && (1) && (MaxIf$((abs(Jet_pt-GenJet_wNuPt[Jet_mcIdx])),Jet_mcIdx>=0)==abs(Jet_pt-GenJet_wNuPt[Jet_mcIdx]))}",40,490,710);
   lheLowMET->SetBinContent(2,0.0129199);
   lheLowMET->SetBinContent(3,0.04651163);
   lheLowMET->SetBinContent(4,0.03617571);
   lheLowMET->SetBinContent(5,0.02842377);
   lheLowMET->SetBinContent(6,0.01808785);
   lheLowMET->SetBinContent(7,0.03100775);
   lheLowMET->SetBinContent(8,0.01808785);
   lheLowMET->SetBinContent(9,0.03100775);
   lheLowMET->SetBinContent(10,0.01808785);
   lheLowMET->SetBinContent(11,0.03100775);
   lheLowMET->SetBinContent(12,0.03359173);
   lheLowMET->SetBinContent(13,0.02067184);
   lheLowMET->SetBinContent(14,0.02325581);
   lheLowMET->SetBinContent(15,0.04651163);
   lheLowMET->SetBinContent(16,0.03875969);
   lheLowMET->SetBinContent(17,0.03617571);
   lheLowMET->SetBinContent(18,0.02842377);
   lheLowMET->SetBinContent(19,0.03100775);
   lheLowMET->SetBinContent(20,0.02842377);
   lheLowMET->SetBinContent(21,0.01550388);
   lheLowMET->SetBinContent(22,0.03617571);
   lheLowMET->SetBinContent(23,0.01808785);
   lheLowMET->SetBinContent(24,0.02583979);
   lheLowMET->SetBinContent(25,0.03100775);
   lheLowMET->SetBinContent(26,0.0129199);
   lheLowMET->SetBinContent(27,0.03875969);
   lheLowMET->SetBinContent(28,0.01550388);
   lheLowMET->SetBinContent(29,0.02583979);
   lheLowMET->SetBinContent(30,0.03359173);
   lheLowMET->SetBinContent(31,0.01808785);
   lheLowMET->SetBinContent(32,0.02325581);
   lheLowMET->SetBinContent(33,0.03875969);
   lheLowMET->SetBinContent(34,0.03100775);
   lheLowMET->SetBinContent(35,0.01033592);
   lheLowMET->SetBinContent(36,0.0129199);
   lheLowMET->SetBinContent(37,0.03100775);
   lheLowMET->SetBinContent(38,0.01808785);
   lheLowMET->SetBinContent(39,0.005167959);
   lheLowMET->SetEntries(387);

   TF1 *expoLowMET = new TF1("expoLowMET","expo",501,699);
   expoLowMET->SetFillColor(19);
   expoLowMET->SetFillStyle(0);
   expoLowMET->SetLineColor(2);
   expoLowMET->SetLineWidth(2);
   expoLowMET->SetChisquare(0.1128786);
   expoLowMET->SetNDF(34);
   expoLowMET->GetXaxis()->SetLabelFont(42);
   expoLowMET->GetXaxis()->SetLabelSize(0.035);
   expoLowMET->GetXaxis()->SetTitleSize(0.035);
   expoLowMET->GetXaxis()->SetTitleFont(42);
   expoLowMET->GetYaxis()->SetLabelFont(42);
   expoLowMET->GetYaxis()->SetLabelSize(0.035);
   expoLowMET->GetYaxis()->SetTitleSize(0.035);
   expoLowMET->GetYaxis()->SetTitleFont(42);
   expoLowMET->SetParameter(0,-2.370005);
   expoLowMET->SetParError(0,13.45294);
   expoLowMET->SetParLimits(0,0,0);
   expoLowMET->SetParameter(1,-0.002270471);
   expoLowMET->SetParError(1,0.02259123);
   expoLowMET->SetParLimits(1,0,0);
   lheLowMET->GetListOfFunctions()->Add(expoLowMET);

   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("lheLowMET");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 387    ");
   text = ptstats->AddText("Mean  =  593.4");
   text = ptstats->AddText("RMS   =  57.43");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   lheLowMET->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(lheLowMET);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   lheLowMET->SetLineColor(ci);
   lheLowMET->GetXaxis()->SetRange(1,40);
   lheLowMET->GetXaxis()->SetLabelFont(42);
   lheLowMET->GetXaxis()->SetLabelSize(0.035);
   lheLowMET->GetXaxis()->SetTitleSize(0.035);
   lheLowMET->GetXaxis()->SetTitleFont(42);
   lheLowMET->GetYaxis()->SetLabelFont(42);
   lheLowMET->GetYaxis()->SetLabelSize(0.035);
   lheLowMET->GetYaxis()->SetTitleSize(0.035);
   lheLowMET->GetYaxis()->SetTitleFont(42);
   lheLowMET->GetZaxis()->SetLabelFont(42);
   lheLowMET->GetZaxis()->SetLabelSize(0.035);
   lheLowMET->GetZaxis()->SetTitleSize(0.035);
   lheLowMET->GetZaxis()->SetTitleFont(42);
   lheLowMET->Draw("");

   TPaveText *pt = new TPaveText(0.15,0.9314407,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText(" lheHT  {(met_pt > 80) && (mhtJet30 > 80) && !((met_pt > 120) && (mhtJet30 > 120)) && nhJCidx>=2 && Jet_btagCSV[hJCidx[1]]>0.460 && abs(Jet_eta[hJCidx[0]])<2.4 && abs(Jet_eta[hJCidx[1]])<2.4 && abs(Jet_eta[0])<2.4 && Jet_pt[hJCidx[0]]>20 && Jet_pt[hJCidx[1]]>20 && Jet_pt[0]>20  && Jet_id[hJCidx[1]]>=4 && Jet_id[hJCidx[0]]>=4 && Jet_id[0]>=4 && Jet_puId[hJCidx[1]]>=1 && Jet_puId[hJCidx[0]]>=1 && Jet_puId[0]>=1 && (HLT_BIT_HLT_PFMET90_PFMHT90_IDTight_v||HLT_BIT_HLT_PFMET170_NoiseCleaned_v) && json && Flag_HBHENoiseIsoFilter && Flag_HBHENoiseFilter && Flag_CSCTightHalo2015Filter && Flag_EcalDeadCellTriggerPrimitiveFilter && Flag_goodVertices && Flag_eeBadScFilter && (1) && (MaxIf$((abs(Jet_pt-GenJet_wNuPt[Jet_mcIdx])),Jet_mcIdx>=0)==abs(Jet_pt-GenJet_wNuPt[Jet_mcIdx]))}");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
