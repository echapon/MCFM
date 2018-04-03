#ifndef lhapdf_utils_h
#define lhapdf_utils_h


#include "TH1.h"
#include "TGraphAsymmErrors.h"

#include "LHAPDF/PDFSet.h"

#include <iostream>

using namespace std;
using namespace LHAPDF;

TGraphAsymmErrors* pdfuncert(vector<TH1F*> h, const char* pdfname) {
   PDFSet pdfset(pdfname);
   size_t nm = pdfset.size();
   if (h.size() != nm) {
      cout << "Error, expected " << nm << " histos for " << pdfname << ", but I got << " << h.size() << endl;
      return NULL;
   }

   int n = h[0]->GetNbinsX();
   TGraphAsymmErrors *g = new TGraphAsymmErrors(n);
   g->SetName(Form("%s_pdf",h[0]->GetName()));

   for (int i=0; i<n; i++) { // loop on the bins
      double x = h[0]->GetBinCenter(i+1);
      double exl = h[0]->GetBinWidth(i+1)/2.;
      double exh = exl;

      // loop on the members to get the PDF uncertainty
      vector<double> y;
      for (int j=0; j<nm; j++) y.push_back(h[j]->GetBinContent(i+1));
      PDFUncertainty u = pdfset.uncertainty(y);

      // set point
      g->SetPoint(i,x,y[0]);
      // set error
      g->SetPointError(i,exl,exh,u.errminus,u.errplus);
   }

   return g;
}

TGraphAsymmErrors* pdfuncert_EPS09(vector<TH1F*> h, const char* pdfname) {
   size_t nm_CT10 = 53;
   size_t nm_EPS09 = 30;
   PDFSet pdfset("CT10nlo");
   int n = h[0]->GetNbinsX();
   TGraphAsymmErrors *g = new TGraphAsymmErrors(n);
   g->SetName(Form("%s_pdf",h[0]->GetName()));

   for (int i=0; i<n; i++) { // loop on the bins
      double x = h[0]->GetBinCenter(i+1);
      double exl = h[0]->GetBinWidth(i+1)/2.;
      double exh = exl;

      // loop on the members to get the PDF uncertainty for CT10
      vector<double> y;
      for (int j=0; j<nm_CT10; j++) y.push_back(h[j]->GetBinContent(i+1));
      PDFUncertainty u = pdfset.uncertainty(y);
      for (int j=nm_CT10; j<nm_CT10+nm_EPS09; j++) y.push_back(h[j]->GetBinContent(i+1));

      // for EPS09, we need to do it by hand.
      // eq. 5 of the CT10 paper https://arxiv.org/pdf/1007.2241.pdf
      double dfp=0, dfm=0;
      for (int j=1; j<=nm_EPS09/2; j++) { // from 1 to 15
         int j1 = nm_CT10-2+2*j;          // from 53 to 81
         int j2 = nm_CT10-2+2*j+1;        // from 54 to 82
         dfp += pow(max(max(y[j1]-y[0],y[j2]-y[0]),0.),2);
         dfm += pow(max(max(y[0]-y[j1],y[0]-y[j2]),0.),2);
         // cout << j1 << " " << j2 << ", ";
         cout << y[0] << " " << y[j1] << " " << y[j2] << ", ";
      }
      dfp = sqrt(dfp);
      dfm = sqrt(dfm);
      cout << y[0] << " " << dfp << " " << dfm << endl;

      // set point
      g->SetPoint(i,x,y[0]);
      // set error
      g->SetPointError(i,exl,exh,sqrt(pow(u.errminus,2)+dfm*dfm),sqrt(pow(u.errplus,2)+dfp*dfp));
   }

   return g;
}

TGraphAsymmErrors* hist2graph(TH1 *hist, double syst=0) {
   int n = hist->GetNbinsX();
   TGraphAsymmErrors *ans = new TGraphAsymmErrors(n);
   ans->SetName(TString(hist->GetName()) + "_graph");
   for (int i=0; i<n; i++) {
      double x = hist->GetBinCenter(i+1);
      double ex = hist->GetBinWidth(i+1)/2.;
      double y = hist->GetBinContent(i+1);
      double ey = sqrt(pow(hist->GetBinError(i+1),2)+syst*syst);
      ans->SetPoint(i,x,y);
      ans->SetPointError(i,ex,ex,ey,ey);
   }

   return ans;
}

#endif // #ifndef lhapdf_utils_h
