#include <vector>
#include <map>
#include <string>
#include <iostream>

#include "TFile.h"
#include "TH1.h"
#include "TRandom.h"

using namespace std;

const int nbins=10;
const double bins[11] = {-2.4,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.4};
const double bins2[6] = {0,0.5,1,1.5,2,2.4};

const char* RandomString(int length)
{
	char* ct = new char[length+1];
	for (int i=0; i<length; i++)
		ct[i] = (char) (97+26.*(gRandom->Rndm()));
	ct[length] = '\0';
	string result(ct);
	return result.c_str();
}

TH1F* rebin(const char* filename)
{
   TFile *f = new TFile(filename);
   cout << f << endl;
   f->ls();
   TH1F *id4 = (TH1F*) f->Get("id4");
   cout << id4 << endl;

   string hname = string("hrebin_") + string(RandomString(8));

   TH1F *hrebin = new TH1F(hname.c_str(),hname.c_str(),nbins,bins);

   for (int i=1; i<nbins+1; i++)
   {
      double bincontent=0;
      double binerr=0;
      double cnt=0;

      for (int j=1; j<id4->GetNbinsX()+1; j++)
      {
         // cout << i << " " << j << " " << id4->GetBinCenter(j) << " " << bins[i-1] << " " << bins[i] << endl;
         if (id4->GetBinCenter(j)>bins[i-1]&&id4->GetBinCenter(j)<bins[i])
         {
            bincontent+=id4->GetBinContent(j);
            binerr+=pow(id4->GetBinError(j),2);
            cnt++;
         }
      }
      binerr = sqrt(binerr);

      hrebin->SetBinContent(i,bincontent/((double) cnt));
      hrebin->SetBinError(i,binerr/((double) cnt));
      cout << hrebin->GetBinContent(i) << endl;
   }

   hrebin->Scale(208.*1e-6);

   hrebin->Draw();

   return hrebin;
}

TH1F* chasym(const char* nameplus, const char* nameminus)
{
   TH1F *hplus = rebin(nameplus);
   TH1F *hminus = rebin(nameminus);

   string hname = string("hasym_") + string(RandomString(8));

   TH1F *hasym = new TH1F(hname.c_str(),hname.c_str(),nbins,bins);

   for (int j=1; j<nbins+1; j++)
   {
      double yp = hplus->GetBinContent(j);
      double ype = hplus->GetBinError(j);
      double ym = hminus->GetBinContent(j);
      double yme = hminus->GetBinError(j);
      hasym->SetBinContent(j,(yp-ym)/(yp+ym));
      hasym->SetBinError(j,sqrt((4*ym*ym/pow(yp+ym,4))*ype*ype + (4*yp*yp/pow(yp+ym,4)*yme*yme)));
   }

   hasym->Draw();

   return hasym;
}

TH1F* a1plus(const char* nameplus)
{
   TH1F *hplus = rebin(nameplus);

   string hname = string("ha1p_") + string(RandomString(8));

   TH1F *hasym = new TH1F(hname.c_str(),hname.c_str(),nbins/2,bins2);

   for (int j=1; j<(nbins/2)+1; j++)
   {
      int nh = nbins/2;
      int jm = nh+1-j;
      int jp = nh+j;
      double ym = hplus->GetBinContent(jm);
      double yme = hplus->GetBinError(jm);
      double yp = hplus->GetBinContent(jp);
      double ype = hplus->GetBinError(jp);
      hasym->SetBinContent(j,yp/ym);
      hasym->SetBinError(j,fabs(yp/ym)*sqrt(pow(ype/yp,2) + pow(yme/ym,2)));
   }

   hasym->Draw();

   return hasym;
}

TH1F* a3(const char* nameplus, const char* nameminus)
{
   TH1F *hplus = rebin(nameplus);
   TH1F *hminus = rebin(nameminus);

   string hname = string("ha1p_") + string(RandomString(8));

   TH1F *hasym = new TH1F(hname.c_str(),hname.c_str(),nbins/2,bins2);

   for (int j=1; j<(nbins/2)+1; j++)
   {
      int nh = nbins/2;
      int jm = nh+1-j;
      int jp = nh+j;
      double ypm = hplus->GetBinContent(jm);
      double ypme = hplus->GetBinError(jm);
      double ypp = hplus->GetBinContent(jp);
      double yppe = hplus->GetBinError(jp);
      double ymm = hminus->GetBinContent(jm);
      double ymme = hminus->GetBinError(jm);
      double ymp = hminus->GetBinContent(jp);
      double ympe = hminus->GetBinError(jp);
      hasym->SetBinContent(j,(ypp+ymp)/(ypm+ymm));
      hasym->SetBinError(j,fabs((ypp+ymp)/(ypm+ymm))*sqrt((yppe*yppe+ympe*ympe)/pow(ypp+ymp,2) + (ypme*ypme+ymme*ymme)/pow(ypm+ymm,2)));
   }

   hasym->Draw();

   return hasym;
}

void reverse(TH1F *hist) {
   double n = hist->GetNbinsX();
   for (int i=1; i<=n/2; i++) {
      double c1 = hist->GetBinContent(i);
      double e1 = hist->GetBinError(i);
      double c2 = hist->GetBinContent(n+1-i);
      double e2 = hist->GetBinError(n+1-i);
      hist->SetBinContent(i,c2);
      hist->SetBinError(i,e2);
      hist->SetBinContent(n+1-i,c1);
      hist->SetBinError(n+1-i,e1);
   }
}
