#include "../rebin.C"

void pp_plot()
{
   TFile *fp_CT10 = new TFile("W_only_tota_CT10nlo_80__80__Wp_CT10nlo.root");
   TFile *fm_CT10 = new TFile("W_only_tota_CT10nlo_80__80__Wm_CT10nlo.root");
   TFile *fp_estar = new TFile("W_only_tota_eSTARn1_80__80__Wp_eSTARn11_1_1.root");
   TFile *fm_estar = new TFile("W_only_tota_eSTARn1_80__80__Wm_eSTARn11_1_1.root");
   TFile *fp_hera = new TFile("W_only_tota_HERAPDF_80__80__Wp_HERAPDF15NLO_EIG.root");
   TFile *fm_hera = new TFile("W_only_tota_HERAPDF_80__80__Wm_HERAPDF15NLO_EIG.root");
   TFile *fp_mstwdeut = new TFile("W_only_tota_MSTW200_80__80__Wp_MSTW2008CPdeutnlo68cl.root");
   TFile *fm_mstwdeut = new TFile("W_only_tota_MSTW200_80__80__Wm_MSTW2008CPdeutnlo68cl.root");
   TFile *fp_mstw = new TFile("W_only_tota_MSTW200_80__80__Wp_MSTW2008nlo68cl.root");
   TFile *fm_mstw = new TFile("W_only_tota_MSTW200_80__80__Wm_MSTW2008nlo68cl.root");
   TFile *fp_nnpdf = new TFile("W_only_tota_NNPDF23_80__80__Wp_NNPDF23_nlo_as_0114.root");
   TFile *fm_nnpdf = new TFile("W_only_tota_NNPDF23_80__80__Wm_NNPDF23_nlo_as_0114.root");

   TH1F *hp_CT10 = rebin(fp_CT10->GetName());
   TH1F *hm_CT10 = rebin(fm_CT10->GetName());
   TH1F *hch_CT10 = chasym(fp_CT10->GetName(),fm_CT10->GetName());
   TH1F *hp_estar = rebin(fp_estar->GetName());
   TH1F *hm_estar = rebin(fm_estar->GetName());
   TH1F *hch_estar = chasym(fp_estar->GetName(),fm_estar->GetName());
   TH1F *hp_hera = rebin(fp_hera->GetName());
   TH1F *hm_hera = rebin(fm_hera->GetName());
   TH1F *hch_hera = chasym(fp_hera->GetName(),fm_hera->GetName());
   TH1F *hp_mstwdeut = rebin(fp_mstwdeut->GetName());
   TH1F *hm_mstwdeut = rebin(fm_mstwdeut->GetName());
   TH1F *hch_mstwdeut = chasym(fp_mstwdeut->GetName(),fm_mstwdeut->GetName());
   TH1F *hp_mstw = rebin(fp_mstw->GetName());
   TH1F *hm_mstw = rebin(fm_mstw->GetName());
   TH1F *hch_mstw = chasym(fp_mstw->GetName(),fm_mstw->GetName());
   TH1F *hp_nnpdf = rebin(fp_nnpdf->GetName());
   TH1F *hm_nnpdf = rebin(fm_nnpdf->GetName());
   TH1F *hch_nnpdf = chasym(fp_nnpdf->GetName(),fm_nnpdf->GetName());

   TCanvas *cp = new TCanvas();
   cp->cd();
   hp_CT10->SetMarkerColor(kYellow+1);
   hp_CT10->SetMarkerStyle(20);
   hp_CT10->SetLineColor(kYellow+1);
   hp_CT10->Draw();
   hp_CT10->GetYaxis()->SetRangeUser(0.,140.);
   hp_CT10->GetYaxis()->SetTitle("d#sigma(W^{+}#rightarrow l^{+}#nu) / d#eta_{lab} [nb]");
   hp_CT10->GetXaxis()->SetTitle("#eta_{lab}");
   hp_estar->SetMarkerColor(kBlack);
   hp_estar->SetMarkerStyle(21);
   hp_estar->SetLineColor(kBlack);
   hp_estar->Draw("same");
   hp_hera->SetMarkerColor(kCyan);
   hp_hera->SetMarkerStyle(22);
   hp_hera->SetLineColor(kCyan);
   hp_hera->Draw("same");
   hp_mstwdeut->SetMarkerColor(kViolet);
   hp_mstwdeut->SetMarkerStyle(23);
   hp_mstwdeut->SetLineColor(kViolet);
   hp_mstwdeut->Draw("same");
   hp_mstw->SetMarkerColor(kGreen+3);
   hp_mstw->SetMarkerStyle(24);
   hp_mstw->SetLineColor(kGreen+3);
   hp_mstw->Draw("same");
   hp_nnpdf->SetMarkerColor(kRed);
   hp_nnpdf->SetMarkerStyle(25);
   hp_nnpdf->SetLineColor(kRed);
   hp_nnpdf->Draw("same");

   TLegend *tlegp = new TLegend(0.4,0.4,0.8,0.8);
   tlegp->AddEntry(hp_CT10,"CT10","lp");
   tlegp->AddEntry(hp_nnpdf,"NNPDF23","lp");
   tlegp->AddEntry(hp_hera,"HERAPDF15","lp");
   tlegp->AddEntry(hp_mstw,"MSTW2008","lp");
   tlegp->AddEntry(hp_mstwdeut,"MSTW2008CPdeut","lp");
   tlegp->AddEntry(hp_estar,"eSTARn11","lp");
   tlegp->Draw();

   TCanvas *cm = new TCanvas();
   cm->cd();
   hm_CT10->SetMarkerColor(kYellow+1);
   hm_CT10->SetMarkerStyle(20);
   hm_CT10->SetLineColor(kYellow+1);
   hm_CT10->Draw();
   hm_CT10->GetYaxis()->SetRangeUser(0.,140.);
   hm_CT10->GetYaxis()->SetTitle("d#sigma(W^{-}#rightarrow l^{-}#nu) / d#eta_{lab} [nb]");
   hm_CT10->GetXaxis()->SetTitle("#eta_{lab}");
   hm_estar->SetMarkerColor(kBlack);
   hm_estar->SetMarkerStyle(21);
   hm_estar->SetLineColor(kBlack);
   hm_estar->Draw("same");
   hm_hera->SetMarkerColor(kCyan);
   hm_hera->SetMarkerStyle(22);
   hm_hera->SetLineColor(kCyan);
   hm_hera->Draw("same");
   hm_mstwdeut->SetMarkerColor(kViolet);
   hm_mstwdeut->SetMarkerStyle(23);
   hm_mstwdeut->SetLineColor(kViolet);
   hm_mstwdeut->Draw("same");
   hm_mstw->SetMarkerColor(kGreen+3);
   hm_mstw->SetMarkerStyle(24);
   hm_mstw->SetLineColor(kGreen+3);
   hm_mstw->Draw("same");
   hm_nnpdf->SetMarkerColor(kRed);
   hm_nnpdf->SetMarkerStyle(25);
   hm_nnpdf->SetLineColor(kRed);
   hm_nnpdf->Draw("same");

   TLegend *tlegm = new TLegend(0.4,0.4,0.8,0.8);
   tlegm->AddEntry(hm_CT10,"CT10","lp");
   tlegm->AddEntry(hm_nnpdf,"NNPDF23","lp");
   tlegm->AddEntry(hm_hera,"HERAPDF15","lp");
   tlegm->AddEntry(hm_mstw,"MSTW2008","lp");
   tlegm->AddEntry(hm_mstwdeut,"MSTW2008CPdeut","lp");
   tlegm->AddEntry(hm_estar,"eSTARn11","lp");
   tlegm->Draw();

   TCanvas *cch = new TCanvas();
   cch->cd();
   hch_CT10->SetMarkerColor(kYellow+1);
   hch_CT10->SetMarkerStyle(20);
   hch_CT10->SetLineColor(kYellow+1);
   hch_CT10->Draw();
   hch_CT10->GetYaxis()->SetRangeUser(-0.4,0.4);
   hch_CT10->GetYaxis()->SetTitle("(N^{+} - N^{-})/(N^{+} + N^{-})");
   hch_CT10->GetXaxis()->SetTitle("#eta_{lab}");
   hch_estar->SetMarkerColor(kBlack);
   hch_estar->SetMarkerStyle(21);
   hch_estar->SetLineColor(kBlack);
   hch_estar->Draw("same");
   hch_hera->SetMarkerColor(kCyan);
   hch_hera->SetMarkerStyle(22);
   hch_hera->SetLineColor(kCyan);
   hch_hera->Draw("same");
   hch_mstwdeut->SetMarkerColor(kViolet);
   hch_mstwdeut->SetMarkerStyle(23);
   hch_mstwdeut->SetLineColor(kViolet);
   hch_mstwdeut->Draw("same");
   hch_mstw->SetMarkerColor(kGreen+3);
   hch_mstw->SetMarkerStyle(24);
   hch_mstw->SetLineColor(kGreen+3);
   hch_mstw->Draw("same");
   hch_nnpdf->SetMarkerColor(kRed);
   hch_nnpdf->SetMarkerStyle(25);
   hch_nnpdf->SetLineColor(kRed);
   hch_nnpdf->Draw("same");

   TLegend *tlegch = new TLegend(0.4,0.4,0.8,0.8);
   tlegch->AddEntry(hch_CT10,"CT10","lp");
   tlegch->AddEntry(hch_nnpdf,"NNPDF23","lp");
   tlegch->AddEntry(hch_hera,"HERAPDF15","lp");
   tlegch->AddEntry(hch_mstw,"MSTW2008","lp");
   tlegch->AddEntry(hch_mstwdeut,"MSTW2008CPdeut","lp");
   tlegch->AddEntry(hch_estar,"eSTARn11","lp");
   tlegch->Draw();
}
