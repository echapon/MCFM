// to compile:
//   g++ plot_multi.C `lhapdf-config --cflags --libs` `root-config --cflags --libs` -o plot_multi
//
// to run:
//   ./plot_multi CT14nlo,EPPS16nlo_CT14nlo_Pb208

#include "rebin.C"
#include "lhapdf_utils.h"
#include "TCanvas.h"
#include "TColor.h"
#include "TLegend.h"
#include "TGraphAsymmErrors.h"
#include "TH1F.h"
#include "TString.h"

#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <cstdlib>

#define NCT14 57
#define NEPPS16 97

void plot_graphs(vector<TGraphAsymmErrors*> graphs, vector<string> names, vector<Color_t> colors, vector<int> fillstyles, double ymin, double ymax, const char* xtitle, const char* ytitle, const char* cname);
void plot(TString pdfnames, double lumi);

int main(int argc, const char** argv) {
   if (argc<2) {
      cout << "Usage: " << argv[0] << " PDF1,PDF2,..." << endl;
      cout << "  Optional additional argument: luminosity for pseudo-data (in nb-1)" << endl;
      return -1;
   }
   double lumi=-1;
   if (argc==3) lumi = atof(argv[2]);
   plot(argv[1],lumi);
}

void plot(TString pdfnames, double lumi)
{
   map<string,bool> Use;
   Use["CT14nlo"]=false;
   Use["EPPS16nlo_CT14nlo_Pb208"]=false;

   TString tok;
   Ssiz_t from = 0;
   while (pdfnames.Tokenize(tok, from, ",")) {
      // Analyse tok
      if (tok=="CT14nlo") {
         Use["CT14nlo"] = true;
         cout << "using CT14nlo" << endl;

      }
      if (tok=="EPPS16nlo_CT14nlo_Pb208") {
         Use["EPPS16nlo_CT14nlo_Pb208"] = true;
         cout << "using EPPS16nlo_CT14nlo_Pb208" << endl;

      }
   }

   map<string,vector<string> > wpname, wmname;
   for (int i=0; i<NCT14; i++) {
      wpname["CT14nlo"].push_back(Form("CT14nlo/W_only_nlo_CT14nlo_80___80___W1_nlo_CT14nlo_%d.root",i));
      wmname["CT14nlo"].push_back(Form("CT14nlo/W_only_nlo_CT14nlo_80___80___W6_nlo_CT14nlo_%d.root",i));
   }

   for (int i=0; i<NEPPS16; i++) {
      int i1 = (i<=40) ? 0 : i-40;
      wpname["EPPS16nlo_CT14nlo_Pb208"].push_back(Form("EPPS16nlo/W_only_nlo_CT14nlo_80___80___W1_nlo_EPPS16nlo_%d_%d.root",i1,i));
      wmname["EPPS16nlo_CT14nlo_Pb208"].push_back(Form("EPPS16nlo/W_only_nlo_CT14nlo_80___80___W6_nlo_EPPS16nlo_%d_%d.root",i1,i));
   }

   map<string,Color_t> allcolors;
   allcolors["CT14nlo"] = kRed;
   allcolors["EPPS16nlo_CT14nlo_Pb208"] = kBlue;

   map<string,int> allstyles;
   allstyles["CT14nlo"] = 3004;
   allstyles["EPPS16nlo_CT14nlo_Pb208"] = 3005;

   vector<TGraphAsymmErrors*> gps, gms, gchs, ga1ps, ga1ms, ga3s; vector<string> names; vector<Color_t> colors; vector<int> fillstyles;
   map<string,bool>::iterator it;
   for (it = Use.begin(); it != Use.end(); it++)
   {
      vector<TH1F*> hps, hms, hchs, ha1ps, ha1ms, ha3s;
      if (!it->second) continue;
      string tag = it->first;

      // read and make the histos for all PDF members
      for (int j=0; j<wpname[tag].size(); j++) {
         const char* fwp = wpname[tag][j].c_str();
         const char* fwm = wmname[tag][j].c_str();
         hps.push_back(rebin(fwp));
         hms.push_back(rebin(fwm));
         hchs.push_back(chasym(fwp,fwm));
         ha1ps.push_back(a1plus(fwp));
         ha1ms.push_back(a1plus(fwm));
         ha3s.push_back(a3(fwp,fwm));
      }

      // now produce the final graphs with uncertainties
      gps.push_back(pdfuncert(hps,tag.c_str()));
      gms.push_back(pdfuncert(hms,tag.c_str()));
      gchs.push_back(pdfuncert(hchs,tag.c_str()));
      ga1ps.push_back(pdfuncert(ha1ps,tag.c_str()));
      ga1ms.push_back(pdfuncert(ha1ms,tag.c_str()));
      ga3s.push_back(pdfuncert(ha3s,tag.c_str()));
      names.push_back(tag);
      colors.push_back(allcolors[tag]);
      fillstyles.push_back(allstyles[tag]);
   }

   if (lumi>0) { // add pseudo-data projection
      TH1F *hplus = rebin(wpname["EPPS16nlo_CT14nlo_Pb208"][0].c_str());
      hplus->Scale(lumi);
      for (int i=1; i<=hplus->GetNbinsX(); i++) hplus->SetBinError(i,sqrt(hplus->GetBinContent(i)));
      
      TH1F *hminus = rebin(wmname["EPPS16nlo_CT14nlo_Pb208"][0].c_str());
      hminus->Scale(lumi);
      for (int i=1; i<=hminus->GetNbinsX(); i++) hminus->SetBinError(i,sqrt(hminus->GetBinContent(i)));

      // TODO FIXME add systs
      gps.push_back(hist2graph(hplus));
      gms.push_back(hist2graph(hminus));
      gchs.push_back(hist2graph(chasym(hplus,hminus),0.02));
      ga1ps.push_back(hist2graph(a1plus(hplus),0.02));
      ga1ms.push_back(hist2graph(a1plus(hminus),0.02));
      ga3s.push_back(hist2graph(a3(hplus,hminus),0.02));

      names.push_back(Form("Projection (%.0f nb^{-1})",lumi));
      colors.push_back(kBlack);
      fillstyles.push_back(0);
   }

   plot_graphs(gps, names, colors, fillstyles, 0, 200, "#eta_{cm}", "d#sigma(W^{+} #rightarrow l^{+}#nu / d#eta_{cm} [nb]","Wp");
   plot_graphs(gms, names, colors, fillstyles, 0, 200, "#eta_{cm}", "d#sigma(W^{-} #rightarrow l^{-}#nu / d#eta_{cm} [nb]","Wm");
   plot_graphs(gchs, names, colors, fillstyles, -0.4, 0.4, "#eta_{cm}", "(N^{+} - N^{-}) / (N^{+} + N^{-})","chasym");
   plot_graphs(ga1ps, names, colors, fillstyles, 0.8, 1.6, "#eta_{cm}", "N^{+} (+#eta_{cm}) / N^{+} (-#eta_{cm})","A1p");
   plot_graphs(ga1ms, names, colors, fillstyles, 0.6, 1.1, "#eta_{cm}", "N^{-} (+#eta_{cm}) / N^{-} (-#eta_{cm})","A1m");
   plot_graphs(ga3s, names, colors, fillstyles, 0.7, 1.4, "#eta_{cm}", "N (+#eta_{cm}) / N (-#eta_{cm})","A3");

}

void plot_graphs(vector<TGraphAsymmErrors*> graphs, vector<string> names, vector<Color_t> colors, vector<int> fillstyles, double ymin, double ymax, const char* xtitle, const char* ytitle, const char* cname)
{
   TCanvas *cch = new TCanvas(cname);
   cch->cd();
   
   // checks
   unsigned int nh = graphs.size();
   if (names.size() != nh) return;
   if (colors.size() != nh) return;
   if (fillstyles.size() != nh) return;

   for (int i=0; i<nh; i++)
   {
      graphs[i]->SetFillColor(colors[i]);
      graphs[i]->SetFillStyle(fillstyles[i]);
      graphs[i]->SetLineColor(colors[i]);
      graphs[i]->SetMarkerColor(colors[i]);

      if (i==0) 
      {
         graphs[i]->GetYaxis()->SetRangeUser(ymin,ymax);
         graphs[i]->GetYaxis()->SetTitle(ytitle);
         graphs[i]->GetXaxis()->SetTitle(xtitle);
         graphs[i]->Draw("a5");
      }
      else if (!TString(names[i]).Contains("Projection")) graphs[i]->Draw("5");
      else graphs[i]->Draw("P");
   }

   double x1=0.55, y1=0.17, x2=0.88, y2=0.4;
   if (TString(cname)=="A1p" || TString(cname)=="A3") {
      x1=0.2;y1=0.63;x2=0.55;y2=0.86;
   }
   if (TString(cname)=="A1m") {
      x1=0.2;y1=0.17;x2=0.55;y2=0.4;
   }

   TLegend *tlegch = new TLegend(x1,y1,x2,y2);
   tlegch->SetBorderSize(0);
   for (int i=0; i<nh; i++) {
      if (!TString(names[i]).Contains("Projection")) tlegch->AddEntry(graphs[i],names[i].c_str(),"lpf");
      else tlegch->AddEntry(graphs[i],names[i].c_str(),"lp");
   }
   tlegch->Draw();

   cch->Print(Form("%s.pdf",cname));
}
