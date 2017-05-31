#include "rebin.C"
#include "TCanvas.h"
#include "TColor.h"
#include "TLegend.h"

void plot_hists(vector<TH1F*> hists, vector<string> names, vector<Color_t> colors, vector<int> markerstyles, double ymin, double ymax, const char* xtitle, const char* ytitle);

void plot()
{
   map<string,bool> Use;
   Use["CT10"] = true;
   Use["eSTAR11"] = true;
   Use["HERAPDF15"] = false;
   Use["MSTW2008CPdeut"] = false;
   Use["MSTW2008"] = false;
   Use["NNPDF23"] = false;
   Use["CT10+EPS09"] = true;
   Use["CT10+DSSZ"] = false;
   Use["eSTAR11+nCTEQ"] = true;
   Use["CT10+nCTEQ"] = true;
   Use["CT10+nCTEQ_ratio"] = true;
   Use["HKN_proton"] = true;
   Use["HKN_lead"] = true;

   map<string,string> wpname, wmname;
   wpname["CT10"] = "pp/W_only_tota_CT10nlo_80__80__Wp_CT10nlo.root";
   wmname["CT10"] = "pp/W_only_tota_CT10nlo_80__80__Wm_CT10nlo.root";
   wpname["eSTAR11"] = "pp/W_only_tota_eSTARn1_80__80__Wp_eSTARn11_1_1.root";
   wmname["eSTAR11"] = "pp/W_only_tota_eSTARn1_80__80__Wm_eSTARn11_1_1.root";
   wpname["HERAPDF15"] = "pp/W_only_tota_HERAPDF_80__80__Wp_HERAPDF15NLO_EIG.root";
   wmname["HERAPDF15"] = "pp/W_only_tota_HERAPDF_80__80__Wm_HERAPDF15NLO_EIG.root";
   wpname["MSTW2008CPdeut"] = "pp/W_only_tota_MSTW200_80__80__Wp_MSTW2008CPdeutnlo68cl.root";
   wmname["MSTW2008CPdeut"] = "pp/W_only_tota_MSTW200_80__80__Wm_MSTW2008CPdeutnlo68cl.root";
   wpname["MSTW2008"] = "pp/W_only_tota_MSTW200_80__80__Wp_MSTW2008nlo68cl.root";
   wmname["MSTW2008"] = "pp/W_only_tota_MSTW200_80__80__Wm_MSTW2008nlo68cl.root";
   wpname["NNPDF23"] = "pp/W_only_tota_NNPDF23_80__80__Wp_NNPDF23_nlo_as_0114.root";
   wmname["NNPDF23"] = "pp/W_only_tota_NNPDF23_80__80__Wm_NNPDF23_nlo_as_0114.root";
   wpname["HKN_proton"] = "pp/W_only_tota_HKNnlo._80__80__Wp_HKNproton.root";
   wmname["HKN_proton"] = "pp/W_only_tota_HKNnlo._80__80__Wm_HKNproton.root";

   wpname["CT10+EPS09"] = "npdf/W_only_tota_CT10nlo_80__80__Wp_CT10_EPS09.root";
   wmname["CT10+EPS09"] = "npdf/W_only_tota_CT10nlo_80__80__Wm_CT10_EPS09.root";
   wpname["CT10+DSSZ"] = "npdf/W_only_tota_CT10nlo_80__80__Wp_CT10_DSSZ.root";
   wmname["CT10+DSSZ"] = "npdf/W_only_tota_CT10nlo_80__80__Wm_CT10_DSSZ.root";
   wpname["eSTAR11+nCTEQ"] = "npdf/W_only_tota_eSTARn1_80__80__Wp_nCTEQ.root";
   wmname["eSTAR11+nCTEQ"] = "npdf/W_only_tota_eSTARn1_80__80__Wm_nCTEQ.root";
   wpname["CT10+nCTEQ"] = "npdf/W_only_tota_CT10nlo_80__80__Wp_CT10_nCTEQ.root";
   wmname["CT10+nCTEQ"] = "npdf/W_only_tota_CT10nlo_80__80__Wm_CT10_nCTEQ.root";
   wpname["CT10+nCTEQ_ratio"] = "npdf/W_only_tota_CT10nlo_80__80__Wp_CT10_nCTEQ_ratio.root";
   wmname["CT10+nCTEQ_ratio"] = "npdf/W_only_tota_CT10nlo_80__80__Wm_CT10_nCTEQ_ratio.root";
   wpname["HKN_lead"] = "npdf/W_only_tota_HKNnlo._80__80__Wp_HKNlead.root";
   wmname["HKN_lead"] = "npdf/W_only_tota_HKNnlo._80__80__Wm_HKNlead.root";

   map<string,Color_t> allcolors;
   allcolors["CT10"] = kOrange-3;
   allcolors["eSTAR11"] = kBlack;
   allcolors["HERAPDF15"] = kCyan;
   allcolors["MSTW2008CPdeut"] = kViolet;
   allcolors["MSTW2008"] = kGreen-3;
   allcolors["NNPDF23"] = kRed;
   allcolors["CT10+EPS09"] = kGreen;
   allcolors["CT10+DSSZ"] = kMagenta;
   allcolors["eSTAR11+nCTEQ"] = kGray;
   allcolors["CT10+nCTEQ"] = kYellow+2;
   allcolors["CT10+nCTEQ_ratio"] = kMagenta+2;
   allcolors["HKN_proton"] = kGreen-2;
   allcolors["HKN_lead"] = kCyan+2;

   map<string,int> allstyles;
   allstyles["CT10"] = 20;
   allstyles["eSTAR11"] = 21;
   allstyles["HERAPDF15"] = 22;
   allstyles["MSTW2008CPdeut"] = 23;
   allstyles["MSTW2008"] = 24;
   allstyles["NNPDF23"] = 25;
   allstyles["CT10+EPS09"] = 26;
   allstyles["CT10+DSSZ"] = 27;
   allstyles["eSTAR11+nCTEQ"] = 28;
   allstyles["CT10+nCTEQ"] = 29;
   allstyles["CT10+nCTEQ_ratio"] = 30;
   allstyles["HKN_proton"] = 31;
   allstyles["HKN_lead"] = 32;

   vector<TH1F*> hps, hms, hchs, ha1ps, ha1ms, ha3s; vector<string> names; vector<Color_t> colors; vector<int> markerstyles;
   map<string,bool>::iterator it;
   for (it = Use.begin(); it != Use.end(); it++)
   {
      if (!it->second) continue;
      string tag = it->first;
      TFile *fwp = new TFile(wpname[tag].c_str());
      TFile *fwm = new TFile(wmname[tag].c_str());
      hps.push_back(rebin(fwp->GetName()));
      hms.push_back(rebin(fwm->GetName()));
      hchs.push_back(chasym(fwp->GetName(),fwm->GetName()));
      ha1ps.push_back(a1plus(fwp->GetName()));
      ha1ms.push_back(a1plus(fwm->GetName()));
      ha3s.push_back(a3(fwp->GetName(),fwm->GetName()));
      names.push_back(tag);
      colors.push_back(allcolors[tag]);
      markerstyles.push_back(allstyles[tag]);
   }

   plot_hists(hps, names, colors, markerstyles, 0, 140, "#eta_{lab}", "d#sigma(W^{+} #rightarrow l^{+}#nu / d#eta_{lab} [nb]");
   plot_hists(hms, names, colors, markerstyles, 0, 140, "#eta_{lab}", "d#sigma(W^{-} #rightarrow l^{-}#nu / d#eta_{lab} [nb]");
   plot_hists(hchs, names, colors, markerstyles, -0.4, 0.4, "#eta_{lab}", "(N^{+} - N^{-}) / (N^{+} + N^{-})");
   plot_hists(ha1ps, names, colors, markerstyles, 0.8, 3.2, "#eta_{lab}", "N^{+} (+#eta_{lab}) / N^{+} (-#eta_{lab})");
   plot_hists(ha1ms, names, colors, markerstyles, 0.6, 1.4, "#eta_{lab}", "N^{-} (+#eta_{lab}) / N^{-} (-#eta_{lab})");
   plot_hists(ha3s, names, colors, markerstyles, 0.8, 1.9, "#eta_{lab}", "N (+#eta_{lab}) / N (-#eta_{lab})");

}

void plot_hists(vector<TH1F*> hists, vector<string> names, vector<Color_t> colors, vector<int> markerstyles, double ymin, double ymax, const char* xtitle, const char* ytitle)
{
   TCanvas *cch = new TCanvas();
   cch->cd();
   
   // checks
   unsigned int nh = hists.size();
   if (names.size() != nh) return;
   if (colors.size() != nh) return;
   if (markerstyles.size() != nh) return;

   for (int i=0; i<nh; i++)
   {
      hists[i]->SetMarkerColor(colors[i]);
      hists[i]->SetMarkerStyle(markerstyles[i]);
      hists[i]->SetLineColor(colors[i]);
      if (i==0) 
      {
         hists[i]->GetYaxis()->SetRangeUser(ymin,ymax);
         hists[i]->GetYaxis()->SetTitle(ytitle);
         hists[i]->GetXaxis()->SetTitle(xtitle);
         hists[i]->Draw();
      }
      else hists[i]->Draw("same");
   }

   TLegend *tlegch = new TLegend(0.4,0.4,0.8,0.8);
   for (int i=0; i<nh; i++) tlegch->AddEntry(hists[i],names[i].c_str(),"lp");
   tlegch->Draw();
}
