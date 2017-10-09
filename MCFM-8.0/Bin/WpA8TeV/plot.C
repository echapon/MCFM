#include "rebin.C"
#include "TCanvas.h"
#include "TColor.h"
#include "TLegend.h"

void plot_hists(vector<TH1F*> hists, vector<string> names, vector<Color_t> colors, vector<int> markerstyles, double ymin, double ymax, const char* xtitle, const char* ytitle, const char* cname);

void plot()
{
   map<string,bool> Use;
   Use["CT10nlo"] = false;
   Use["CT14lo"] = true;
   Use["CT14nlo"] = true;
   Use["CT14nnlo"] = true;
   Use["nCTEQ15_p"] = false;
   Use["nCTEQ15_Pb"] = false;
   Use["EPPS16_Pb"] = false;
   Use["EPS09_Pb"] = false;

   map<string,string> wpname, wmname;
   wpname["CT10nlo"] = "outputs_withcuts/W_only_nlo_CT10nlo_80___80___W1_CT10nlo_NONE_0_0.root";
   wpname["CT14lo"] = "outputs_withcuts/W_only_lo_CT14lo._80___80___W1_lo_CT14lo_0_0.root";
   wpname["CT14nlo"] = "outputs_withcuts/W_only_nlo_CT14nlo_80___80___W1_nlo_CT14nlo_0_0.root";
   wpname["CT14nnlo"] = "NNLO/W_only_nnlo_CT14nnl_80___80___1.E-3_W1_nnlo_CT14nnlo.root";
   wpname["nCTEQ15_p"] = "outputs_withcuts/W_only_nlo_CT14nlo_80___80___W1_nlo_nCTEQ15FullNuc_1_1_0_0.root";
   wpname["nCTEQ15_Pb"] = "outputs_withcuts/W_only_nlo_CT14nlo_80___80___W1_nlo_nCTEQ15FullNuc_208_82_0.root";
   wpname["EPPS16_Pb"] = "outputs_withcuts/W_only_nlo_CT14nlo_80___80___W1_nlo_EPPS16nlo_CT14nlo_Pb208.root";
   wpname["EPS09_Pb"] = "outputs_withcuts/W_only_nlo_CT10nlo_80___80___W1_CT10nlo_EPS09_0_0.root";

   wmname["CT10nlo"] = "outputs_withcuts/W_only_nlo_CT10nlo_80___80___W6_CT10nlo_NONE_0_0.root";
   wmname["CT14lo"] = "outputs_withcuts/W_only_lo_CT14lo._80___80___W6_lo_CT14lo_0_0.root";
   wmname["CT14nlo"] = "outputs_withcuts/W_only_nlo_CT14nlo_80___80___W6_nlo_CT14nlo_0_0.root";
   wmname["CT14nnlo"] = "NNLO/W_only_nnlo_CT14nnl_80___80___1.E-3_W6_nnlo_CT14nnlo.root";
   wmname["nCTEQ15_p"] = "outputs_withcuts/W_only_nlo_CT14nlo_80___80___W6_nlo_nCTEQ15FullNuc_1_1_0_0.root";
   wmname["nCTEQ15_Pb"] = "outputs_withcuts/W_only_nlo_CT14nlo_80___80___W6_nlo_nCTEQ15FullNuc_208_82_0.root";
   wmname["EPPS16_Pb"] = "outputs_withcuts/W_only_nlo_CT14nlo_80___80___W6_nlo_EPPS16nlo_CT14nlo_Pb208.root";
   wmname["EPS09_Pb"] = "outputs_withcuts/W_only_nlo_CT10nlo_80___80___W6_CT10nlo_EPS09_0_0.root";

   map<string,Color_t> allcolors;
   allcolors["CT10nlo"] = kMagenta;
   allcolors["CT14lo"] = kOrange-3;
   allcolors["CT14nlo"] = kBlack;
   allcolors["CT14nnlo"] = kCyan;
   allcolors["nCTEQ15_p"] = kViolet;
   allcolors["nCTEQ15_Pb"] = kGreen-3;
   allcolors["EPPS16_Pb"] = kRed;
   allcolors["EPS09_Pb"] = kOrange;

   map<string,int> allstyles;
   allstyles["CT10nlo"] = 26;
   allstyles["CT14lo"] = 20;
   allstyles["CT14nlo"] = 21;
   allstyles["CT14nnlo"] = 22;
   allstyles["nCTEQ15_p"] = 23;
   allstyles["nCTEQ15_Pb"] = 24;
   allstyles["EPPS16_Pb"] = 25;
   allstyles["EPS09_Pb"] = 27;

   vector<TH1F*> hps, hms, hchs, ha1ps, ha1ms, ha3s; vector<string> names; vector<Color_t> colors; vector<int> markerstyles;
   map<string,bool>::iterator it;
   for (it = Use.begin(); it != Use.end(); it++)
   {
      if (!it->second) continue;
      string tag = it->first;
      TFile *fwp = TFile::Open(wpname[tag].c_str());
      TFile *fwm = TFile::Open(wmname[tag].c_str());
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

   plot_hists(hps, names, colors, markerstyles, 0, 200, "#eta_{cm}", "d#sigma(W^{+} #rightarrow l^{+}#nu / d#eta_{cm} [nb]","Wp");
   plot_hists(hms, names, colors, markerstyles, 0, 200, "#eta_{cm}", "d#sigma(W^{-} #rightarrow l^{-}#nu / d#eta_{cm} [nb]","Wm");
   plot_hists(hchs, names, colors, markerstyles, -0.4, 0.4, "#eta_{cm}", "(N^{+} - N^{-}) / (N^{+} + N^{-})","chasym");
   plot_hists(ha1ps, names, colors, markerstyles, 0.9, 1.6, "#eta_{cm}", "N^{+} (+#eta_{cm}) / N^{+} (-#eta_{cm})","A1p");
   plot_hists(ha1ms, names, colors, markerstyles, 0.7, 1.1, "#eta_{cm}", "N^{-} (+#eta_{cm}) / N^{-} (-#eta_{cm})","A1m");
   plot_hists(ha3s, names, colors, markerstyles, 0.8, 1.4, "#eta_{cm}", "N (+#eta_{cm}) / N (-#eta_{cm})","A3");

}

void plot_hists(vector<TH1F*> hists, vector<string> names, vector<Color_t> colors, vector<int> markerstyles, double ymin, double ymax, const char* xtitle, const char* ytitle, const char* cname)
{
   TCanvas *cch = new TCanvas(cname);
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

   double x1=0.55, y1=0.17, x2=0.9, y2=0.4;
   if (TString(cname)=="A1p" || TString(cname)=="A3") {
      x1=0.2;y1=0.63;x2=0.55;y2=0.86;
   }
   if (TString(cname)=="A1m") {
      x1=0.2;y1=0.17;x2=0.55;y2=0.4;
   }

   TLegend *tlegch = new TLegend(x1,y1,x2,y2);
   tlegch->SetBorderSize(0);
   for (int i=0; i<nh; i++) tlegch->AddEntry(hists[i],names[i].c_str(),"lp");
   tlegch->Draw();

   cch->SaveAs(Form("%s.pdf",cname));
}
