// Cross-section is:      3913926.8317137496 +/-         1502.9869965952)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |     -146337.78449   -3.74%
//        GQB    |      -97513.81447   -2.49%
//        QG     |     -123159.19402   -3.15%
//        QBG    |      -94450.48154   -2.41%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1981065.14188   50.62%
//        QBQ    |     2413662.22073   61.67%

 // Run corresponds to this input file)

 // [Flags to specify the mode in which MCFM is run] )
//                  -1            [nevtrequested]  
//                   F            [creatent]  
//                   F            [skipnt]  
//                   F            [dswhisto]  
//                   F            [creategrid]  
//                   F            [writetop]  
//                   T            [writedat]  
//                   F            [writegnu]  
//                   T            [writeroot]  
//                   F            [writepwg]  

 // [General options to specify the process and execution] )
//                   6            [nproc]  
//                tota            [part]  
//Wm_CT10nlo_8TeV                 [runstring]  
//           8160.0000            [sqrts]  
//                   1            [ih1]  
//               82208            [ih2]  
//            126.0000            [hmass]  
//             -1.0000            [scale]  
//             -1.0000            [facscale]  
//no                              [dynamicscale]  
//                   F            [zerowidth]  
//                   F            [removebr]  
//                  10            [itmx1]  
//              100000            [ncall1]  
//                  10            [itmx2]  
//              100000            [ncall2]  
//                1089            [ij]  
//                   F            [dryrun]  
//                   T            [Qflag]  
//                   T            [Gflag]  

 // [Heavy quark masses] )
//            173.2000            [top mass]  
//              4.7500            [bottom mass]  
//              1.5000            [charm mass]  

 // [Pdf selection] )
//             CT10nlo            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//CT10nlo.LHpdf                   [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//CT10nlo.LHpdf                   [LHAPDF group 2]  
//                   0            [LHAPDF set 2]  

 // [Jet definition and event cuts] )
//              0.0000            [m34min]  
//           8160.0000            [m34max]  
//             60.0000            [m56min]  
//            120.0000            [m56max]  
//                   T            [inclusive]  
//                ankt            [algorithm]  
//             25.0000            [ptjetmin]  
//              0.0000            [etajetmin]  
//              6.0000            [etajetmax]  
//              0.5000            [Rcut]  
//                   T            [makecuts]  
//             25.0000            [leptpt]  
//              6.0000            [leptrap]  
//   0.000,   0.000                [leptveto]  
//              0.0000            [misspt]  
//              0.0000            [leptpt2]  
//             10.0000            [leptrap2]  
//   0.000,   0.000                [leptveto2]  
//              0.0000            [mtrans34cut]  
//              0.0000            [Rjlmin]  
//              0.0000            [Rllmin]  
//              0.0000            [delyjjmin]  
//                   F            [jetsopphem]  
//                   0            [lbjscheme]  
//              0.0000            [ptbjetmin]  
//             99.0000            [etabjetmax]  

 // [Settings for photon processes] )
//                   F            [frag]  
//            GdRG__LO            [fragset]  
//             80.0000            [frag_scale]  
//             20.0000            [gammpt]  
//              2.5000            [gammrap]  
//             20.0000            [gammpt2]  
//             20.0000            [gammpt3]  
//              0.0000            [Rgalmin]  
//              0.4000            [Rgagamin]  
//              0.4000            [Rgajetmin]  
//              0.4000            [cone_ang]  
//              0.5000            [epsilon_h]  

 // [Anomalous couplings of the W and Z] )
//              0.0000            [delg1_z]  
//              0.0000            [delk_z]  
//              0.0000            [delk_g]  
//              0.0000            [lambda_z]  
//              0.0000            [lambda_g]  
//              0.0000            [h1Z]  
//              0.0000            [h1gam]  
//              0.0000            [h2Z]  
//              0.0000            [h2gam]  
//              0.0000            [h3Z]  
//              0.0000            [h3gam]  
//              0.0000            [h4Z]  
//              0.0000            [h4gam]  
//              2.0000            [tevscale]  
//              1.0000            [cttH]  
//              1.0000            [cWWH]  
//              1.0000            [Gamma_H/Gamma_H(SM)]  

 // [How to resume/save a run] )
//                   F            [readin]  
//                   F            [writeout]  
//dvegas_real.grid                [ingridfile]  
//dvegas_real.grid                [outgridfile]  

 // [Technical parameters that should not normally be changed]
//                   F            [debug]  
//                   T            [verbose]  
//                   F            [new_pspace]  
//                   F            [virtonly]  
//                   F            [realonly]  
//                   T            [spira]  
//                   F            [noglue]  
//                   F            [ggonly]  
//                   F            [gqonly]  
//                   F            [omitgg]  
//                   F            [vanillafiles]  
//                   1            [nmin]  
//                   2            [nmax]  
//                   T            [clustering]  
//                   F            [realwt]  
//                   0            [colourchoice]  
//              0.0100            [rtsmin]  
//              0.0017            [cutoff]  
//              0.1000            [aii]  
//              0.1000            [aif]  
//              0.1000            [afi]  
//              1.0000            [aff]  
//              1.0000            [bfi]  
//              1.0000            [bff]  


  {
  TFile *mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wm_CT10nlo_8TeV.root", "recreate");
  mcfmhisto -> cd();
  TObjArray *histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *id1 = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
  int xbin = id1->FindBin(  -5.2999999999999998      );
  id1 -> SetBinContent( xbin,    2.5673566845929655E-003 );
  id1 -> SetBinError( xbin,    2.5673565458997657E-003 );
   xbin = id1->FindBin(  -5.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.72442601685449270      );
  id1 -> SetBinError( xbin,   0.42110018359378715      );
   xbin = id1->FindBin(  -4.9000000000000004      );
  id1 -> SetBinContent( xbin,    4.6191980863723741      );
  id1 -> SetBinError( xbin,    1.8170526680276420      );
   xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    74.164686644286405      );
  id1 -> SetBinError( xbin,    27.667953325229330      );
   xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,    1702.5130734401403      );
  id1 -> SetBinError( xbin,    144.96227414759829      );
   xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    16797.070298060797      );
  id1 -> SetBinError( xbin,    590.12098158022593      );
   xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    61439.593934492630      );
  id1 -> SetBinError( xbin,    1459.6464904901609      );
   xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    134572.22526562362      );
  id1 -> SetBinError( xbin,    2321.4144330713802      );
   xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    227104.34387245320      );
  id1 -> SetBinError( xbin,    2838.3281592511998      );
   xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    309898.38455568405      );
  id1 -> SetBinError( xbin,    3056.4217553742683      );
   xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    395827.66535284230      );
  id1 -> SetBinError( xbin,    3118.2224112395629      );
   xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    468596.54927473620      );
  id1 -> SetBinError( xbin,    3218.0824357187644      );
   xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    513062.25200143404      );
  id1 -> SetBinError( xbin,    3380.5819866551192      );
   xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    553843.73631980282      );
  id1 -> SetBinError( xbin,    3432.7297882773087      );
   xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    573923.80588661786      );
  id1 -> SetBinError( xbin,    3461.3704588654000      );
   xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    598943.27619535744      );
  id1 -> SetBinError( xbin,    3512.6625302633197      );
   xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    612969.10679770296      );
  id1 -> SetBinError( xbin,    3563.9021671595806      );
   xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    620483.45108043845      );
  id1 -> SetBinError( xbin,    3522.0743463539461      );
   xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    623818.62369648821      );
  id1 -> SetBinError( xbin,    3428.6854631400297      );
   xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    631589.57548369770      );
  id1 -> SetBinError( xbin,    3429.7752646478202      );
   xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    634218.15573180187      );
  id1 -> SetBinError( xbin,    3420.5793816455707      );
   xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    645706.48226412851      );
  id1 -> SetBinError( xbin,    3462.5544968254876      );
   xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    636194.28202614037      );
  id1 -> SetBinError( xbin,    3492.2461212718363      );
   xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    647942.52017712453      );
  id1 -> SetBinError( xbin,    3487.2544632670697      );
   xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    631492.84717589372      );
  id1 -> SetBinError( xbin,    3451.2714095500405      );
   xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    636981.15700314054      );
  id1 -> SetBinError( xbin,    3435.5917079420046      );
   xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    634349.86118379340      );
  id1 -> SetBinError( xbin,    3393.5952903474126      );
   xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    626938.86606784561      );
  id1 -> SetBinError( xbin,    3430.6763589587508      );
   xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    623873.18337230757      );
  id1 -> SetBinError( xbin,    3441.4202281381768      );
   xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    616918.27296112548      );
  id1 -> SetBinError( xbin,    3449.7758421516996      );
   xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    610833.38912918954      );
  id1 -> SetBinError( xbin,    3423.7402458737070      );
   xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    597525.89973994798      );
  id1 -> SetBinError( xbin,    3388.9308887533243      );
   xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    580504.65763151320      );
  id1 -> SetBinError( xbin,    3351.5398008567854      );
   xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    568915.19928683585      );
  id1 -> SetBinError( xbin,    3291.9401445036319      );
   xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    548091.18451140949      );
  id1 -> SetBinError( xbin,    3247.8389122785852      );
   xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    535926.24446084700      );
  id1 -> SetBinError( xbin,    3224.5398822387365      );
   xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    511020.91617426771      );
  id1 -> SetBinError( xbin,    3290.1163454355551      );
   xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    481878.31890002463      );
  id1 -> SetBinError( xbin,    3435.9964114697009      );
   xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    454707.61272771034      );
  id1 -> SetBinError( xbin,    3425.7973281664185      );
   xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    422471.05797765648      );
  id1 -> SetBinError( xbin,    3145.3839301748758      );
   xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    378229.80691758957      );
  id1 -> SetBinError( xbin,    3054.3925220895276      );
   xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    333066.97013616248      );
  id1 -> SetBinError( xbin,    2838.1779178919528      );
   xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    286210.53167120268      );
  id1 -> SetBinError( xbin,    2595.3221549099735      );
   xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    226830.63801666978      );
  id1 -> SetBinError( xbin,    2386.8037593463287      );
   xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    166098.86217334389      );
  id1 -> SetBinError( xbin,    2076.8235594966964      );
   xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    107391.24076835476      );
  id1 -> SetBinError( xbin,    1899.8395535158495      );
   xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    53195.694550654996      );
  id1 -> SetBinError( xbin,    1474.4547548108173      );
   xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    21923.953574104449      );
  id1 -> SetBinError( xbin,    747.66993236630810      );
   xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,    5513.8087329939681      );
  id1 -> SetBinError( xbin,    241.17461284789499      );
   xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    748.42575864463242      );
  id1 -> SetBinError( xbin,    49.757611234193817      );
   xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    37.668157435025613      );
  id1 -> SetBinError( xbin,    9.2392315848612760      );
   xbin = id1->FindBin(   4.9000000000000004      );
  id1 -> SetBinContent( xbin,    1.5604715371059978      );
  id1 -> SetBinError( xbin,   0.98403858088568541      );
   xbin = id1->FindBin(   5.1000000000000014      );
  id1 -> SetBinContent( xbin,    2.8221781662516605E-002 );
  id1 -> SetBinError( xbin,    1.6920010787883452E-002 );
   xbin = id1->FindBin(   5.3000000000000007      );
  id1 -> SetBinContent( xbin,    3.7103612524280200E-003 );
  id1 -> SetBinError( xbin,    3.7103610519876691E-003 );
  histos -> Add(id1); 
 
 

  mcfmhisto -> cd();
  TH1F *id2 = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1549022.2903062664      );
  id2 -> SetBinError( xbin,    13087.562307741617      );
   xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    1491045.1872167762      );
  id2 -> SetBinError( xbin,    14986.301707484567      );
   xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1412691.1393920975      );
  id2 -> SetBinError( xbin,    11559.864651589047      );
   xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    1344494.7139195327      );
  id2 -> SetBinError( xbin,    11043.909062379547      );
   xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    1246113.2761388833      );
  id2 -> SetBinError( xbin,    9158.1682850910765      );
   xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    1181625.4410189074      );
  id2 -> SetBinError( xbin,    8378.1648543593765      );
   xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    1125030.7893687449      );
  id2 -> SetBinError( xbin,    8027.5749251554271      );
   xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    1066063.6372414443      );
  id2 -> SetBinError( xbin,    11403.419006327153      );
   xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    980583.66933804774      );
  id2 -> SetBinError( xbin,    6661.3371719744400      );
   xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    918387.92464251071      );
  id2 -> SetBinError( xbin,    6338.1531438318334      );
   xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    845139.63649373967      );
  id2 -> SetBinError( xbin,    5083.7410246734307      );
   xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    772402.44608933816      );
  id2 -> SetBinError( xbin,    5438.4828614281296      );
   xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    728946.92959816812      );
  id2 -> SetBinError( xbin,    5109.6236822178635      );
   xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    665956.16905781801      );
  id2 -> SetBinError( xbin,    4369.0969560238873      );
   xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    602873.58076863294      );
  id2 -> SetBinError( xbin,    3827.3326129995912      );
   xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    550508.74335735466      );
  id2 -> SetBinError( xbin,    3743.8898236396517      );
   xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    491528.18674489576      );
  id2 -> SetBinError( xbin,    3352.2012576805805      );
   xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    433948.61386550847      );
  id2 -> SetBinError( xbin,    2590.8758945332711      );
   xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    391747.85644706414      );
  id2 -> SetBinError( xbin,    2571.1614149002257      );
   xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    348892.44110515417      );
  id2 -> SetBinError( xbin,    2550.3512610130292      );
   xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    304336.13947966963      );
  id2 -> SetBinError( xbin,    2124.2840698491732      );
   xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    265131.46034672740      );
  id2 -> SetBinError( xbin,    1840.7950892059366      );
   xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    236337.15524653831      );
  id2 -> SetBinError( xbin,    1804.5655457990131      );
   xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    205760.11441237715      );
  id2 -> SetBinError( xbin,    1599.6882246011157      );
   xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    184567.48419640691      );
  id2 -> SetBinError( xbin,    1502.2076230778341      );
   xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    160938.99290105019      );
  id2 -> SetBinError( xbin,    1332.0777487355458      );
   xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    144000.46852370547      );
  id2 -> SetBinError( xbin,    1236.6183092220954      );
   xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    132529.05638689414      );
  id2 -> SetBinError( xbin,    1409.0232719116850      );
   xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    123516.45728658378      );
  id2 -> SetBinError( xbin,    1647.2305105136868      );
   xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    121289.98463140478      );
  id2 -> SetBinError( xbin,    1840.1691296253716      );
   xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    119418.25588053088      );
  id2 -> SetBinError( xbin,    1284.9732782460833      );
   xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    123218.79060537787      );
  id2 -> SetBinError( xbin,    1230.9681986767182      );
   xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    130334.17975648798      );
  id2 -> SetBinError( xbin,    1262.7918398200961      );
   xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    141929.39407890069      );
  id2 -> SetBinError( xbin,    1459.0263300528579      );
   xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    156629.20166754117      );
  id2 -> SetBinError( xbin,    1455.7819916114133      );
   xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    177104.71969294650      );
  id2 -> SetBinError( xbin,    1777.2404397715318      );
   xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    199513.47404987388      );
  id2 -> SetBinError( xbin,    1659.4902204020857      );
   xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    231272.62639729946      );
  id2 -> SetBinError( xbin,    2360.0165407719905      );
   xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    256633.69490661431      );
  id2 -> SetBinError( xbin,    2077.7000402550739      );
   xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    295568.86997668241      );
  id2 -> SetBinError( xbin,    3190.8936495098792      );
   xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    324700.18759671372      );
  id2 -> SetBinError( xbin,    2583.7307703103629      );
   xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    368394.78467668337      );
  id2 -> SetBinError( xbin,    2599.4539955514761      );
   xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    411336.80326635711      );
  id2 -> SetBinError( xbin,    2901.0978413275220      );
   xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    447275.36108606134      );
  id2 -> SetBinError( xbin,    2917.9047664510363      );
   xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    499907.88013674814      );
  id2 -> SetBinError( xbin,    3626.4981038653000      );
   xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    554622.57460390078      );
  id2 -> SetBinError( xbin,    4632.1225879970289      );
   xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    600612.65932457638      );
  id2 -> SetBinError( xbin,    4106.5791608587351      );
   xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    650977.47411642084      );
  id2 -> SetBinError( xbin,    4521.4693442198768      );
   xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    709191.45680336817      );
  id2 -> SetBinError( xbin,    5189.1917864074021      );
   xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    758880.91243421601      );
  id2 -> SetBinError( xbin,    6590.8960942664098      );
   xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    822870.37445191224      );
  id2 -> SetBinError( xbin,    5931.2403907773669      );
   xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    881514.09714903869      );
  id2 -> SetBinError( xbin,    7013.8844852364919      );
   xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    926870.39347650413      );
  id2 -> SetBinError( xbin,    7791.5286660871425      );
   xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    990576.51976971887      );
  id2 -> SetBinError( xbin,    7820.6635014416006      );
   xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    1046954.1793043973      );
  id2 -> SetBinError( xbin,    9164.6431534423864      );
   xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    1123244.0923683292      );
  id2 -> SetBinError( xbin,    13314.223775925453      );
   xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    1172454.4644655359      );
  id2 -> SetBinError( xbin,    13018.130155970444      );
   xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1211088.2663730481      );
  id2 -> SetBinError( xbin,    10591.739089317136      );
   xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    1262143.3339290058      );
  id2 -> SetBinError( xbin,    11154.173448653066      );
   xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1334651.7266488392      );
  id2 -> SetBinError( xbin,    12937.599148291261      );
  histos -> Add(id2); 
 
 

  mcfmhisto -> cd();
  TH1F *id3 = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   xbin = id3->FindBin(  -5.7000000000000002      );
  id3 -> SetBinContent( xbin,   0.38400737907973997      );
  id3 -> SetBinError( xbin,   0.25121854845291247      );
   xbin = id3->FindBin(  -5.5000000000000000      );
  id3 -> SetBinContent( xbin,    238.26054744215594      );
  id3 -> SetBinError( xbin,    58.549061251526844      );
   xbin = id3->FindBin(  -5.2999999999999998      );
  id3 -> SetBinContent( xbin,    2007.5167363869573      );
  id3 -> SetBinError( xbin,    216.28144397538756      );
   xbin = id3->FindBin(  -5.0999999999999996      );
  id3 -> SetBinContent( xbin,    9111.2290504049433      );
  id3 -> SetBinError( xbin,    685.33042083844089      );
   xbin = id3->FindBin(  -4.9000000000000004      );
  id3 -> SetBinContent( xbin,    26699.379250719463      );
  id3 -> SetBinError( xbin,    1182.6801372118994      );
   xbin = id3->FindBin(  -4.7000000000000002      );
  id3 -> SetBinContent( xbin,    57789.503275834759      );
  id3 -> SetBinError( xbin,    1596.7855638448900      );
   xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,    97000.150026502379      );
  id3 -> SetBinError( xbin,    2042.2505835896886      );
   xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,    157836.55494302415      );
  id3 -> SetBinError( xbin,    2548.2202216429405      );
   xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    223237.25279882015      );
  id3 -> SetBinError( xbin,    2799.2481601846698      );
   xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    282765.47947813704      );
  id3 -> SetBinError( xbin,    3125.8199134724900      );
   xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    343678.00319315470      );
  id3 -> SetBinError( xbin,    3281.2927344533482      );
   xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    389097.86309297587      );
  id3 -> SetBinError( xbin,    3342.4813859936730      );
   xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    432472.81769323855      );
  id3 -> SetBinError( xbin,    3506.7661089606372      );
   xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    459333.24687686417      );
  id3 -> SetBinError( xbin,    3639.4480777600875      );
   xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    494164.75143302087      );
  id3 -> SetBinError( xbin,    3853.2251003200859      );
   xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    501769.39029986935      );
  id3 -> SetBinError( xbin,    3741.2447056909064      );
   xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    522639.97318553738      );
  id3 -> SetBinError( xbin,    3554.3883697809733      );
   xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    533578.83677289728      );
  id3 -> SetBinError( xbin,    3449.9166524236571      );
   xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    545570.35307112173      );
  id3 -> SetBinError( xbin,    3416.6020885404673      );
   xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    553728.57547395898      );
  id3 -> SetBinError( xbin,    3791.3160107519261      );
   xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    563032.62742942781      );
  id3 -> SetBinError( xbin,    3772.1030047235522      );
   xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    566163.10745825921      );
  id3 -> SetBinError( xbin,    3293.3454775854439      );
   xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    572376.43170067517      );
  id3 -> SetBinError( xbin,    3320.7708284204441      );
   xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    580238.68335122522      );
  id3 -> SetBinError( xbin,    3404.2711115174429      );
   xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    579177.62908952869      );
  id3 -> SetBinError( xbin,    3547.6166003801327      );
   xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    576078.16901261208      );
  id3 -> SetBinError( xbin,    3566.3566504512382      );
   xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    586784.96437112370      );
  id3 -> SetBinError( xbin,    3487.4957717189795      );
   xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    581833.65084483649      );
  id3 -> SetBinError( xbin,    3391.7566293546188      );
   xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    580501.11645660293      );
  id3 -> SetBinError( xbin,    3366.0239556647689      );
   xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    575856.11106247222      );
  id3 -> SetBinError( xbin,    3386.6527253245135      );
   xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    570585.79363572656      );
  id3 -> SetBinError( xbin,    3340.2049888617262      );
   xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    561267.73255501199      );
  id3 -> SetBinError( xbin,    3362.5813750360521      );
   xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    557772.59698956029      );
  id3 -> SetBinError( xbin,    3446.1999598085522      );
   xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    545502.75286184740      );
  id3 -> SetBinError( xbin,    3315.5333642621945      );
   xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    534576.67324791825      );
  id3 -> SetBinError( xbin,    3349.2486250739867      );
   xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    511466.84776639624      );
  id3 -> SetBinError( xbin,    3383.2069674163927      );
   xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    499427.43506618077      );
  id3 -> SetBinError( xbin,    3300.0267153543628      );
   xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    478935.11838704464      );
  id3 -> SetBinError( xbin,    3234.2278151799451      );
   xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    467434.95962768776      );
  id3 -> SetBinError( xbin,    3276.4453603056036      );
   xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    440452.03104086447      );
  id3 -> SetBinError( xbin,    3321.0209974052827      );
   xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    423933.03169066156      );
  id3 -> SetBinError( xbin,    3316.2507917614939      );
   xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    405527.89176088519      );
  id3 -> SetBinError( xbin,    3103.4426293326396      );
   xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    373771.85140877531      );
  id3 -> SetBinError( xbin,    3190.3962394968553      );
   xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    352242.26574857789      );
  id3 -> SetBinError( xbin,    3127.4371917000281      );
   xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    315431.51301797619      );
  id3 -> SetBinError( xbin,    3007.4862211944933      );
   xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    272588.71538508142      );
  id3 -> SetBinError( xbin,    2839.5338801170487      );
   xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    236559.74155126524      );
  id3 -> SetBinError( xbin,    2903.7840850527805      );
   xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    198048.69649199629      );
  id3 -> SetBinError( xbin,    2816.1641363865879      );
   xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    157608.94081528229      );
  id3 -> SetBinError( xbin,    2519.9389744083778      );
   xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    115711.60353307410      );
  id3 -> SetBinError( xbin,    2210.3187435574819      );
   xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,    75971.898616973529      );
  id3 -> SetBinError( xbin,    1932.7905581598466      );
   xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    45586.532736581517      );
  id3 -> SetBinError( xbin,    1490.9484897570244      );
   xbin = id3->FindBin(   4.7000000000000011      );
  id3 -> SetBinContent( xbin,    22919.967512190287      );
  id3 -> SetBinError( xbin,    1075.8719993938787      );
   xbin = id3->FindBin(   4.9000000000000004      );
  id3 -> SetBinContent( xbin,    8555.6628815719796      );
  id3 -> SetBinError( xbin,    661.65951704833515      );
   xbin = id3->FindBin(   5.1000000000000014      );
  id3 -> SetBinContent( xbin,    3095.9519325596366      );
  id3 -> SetBinError( xbin,    353.56606473322347      );
   xbin = id3->FindBin(   5.3000000000000007      );
  id3 -> SetBinContent( xbin,    618.12368987000502      );
  id3 -> SetBinError( xbin,    79.693036600929659      );
   xbin = id3->FindBin(   5.5000000000000000      );
  id3 -> SetBinContent( xbin,    33.330639110329855      );
  id3 -> SetBinError( xbin,    9.3706185723228881      );
   xbin = id3->FindBin(   5.7000000000000011      );
  id3 -> SetBinContent( xbin,    1.3127558719682717      );
  id3 -> SetBinError( xbin,   0.53486528808238953      );
  histos -> Add(id3); 
 
 

  mcfmhisto -> cd();
  TH1F *id4 = new TH1F( "id4", "etalab(lep)", 20,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   xbin = id4->FindBin(  -4.7500000000000000      );
  id4 -> SetBinContent( xbin,    5919.6546338694898      );
  id4 -> SetBinError( xbin,    313.09253140686002      );
   xbin = id4->FindBin(  -4.2500000000000000      );
  id4 -> SetBinContent( xbin,    56834.748093530259      );
  id4 -> SetBinError( xbin,    987.82750769756592      );
   xbin = id4->FindBin(  -3.7500000000000000      );
  id4 -> SetBinContent( xbin,    184774.07500040394      );
  id4 -> SetBinError( xbin,    1575.4189599253109      );
   xbin = id4->FindBin(  -3.2500000000000000      );
  id4 -> SetBinContent( xbin,    334869.77612585697      );
  id4 -> SetBinError( xbin,    1924.0467910019815      );
   xbin = id4->FindBin(  -2.7500000000000000      );
  id4 -> SetBinContent( xbin,    443305.14079758211      );
  id4 -> SetBinError( xbin,    2275.7782275097316      );
   xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    506194.95779241866      );
  id4 -> SetBinError( xbin,    2271.4999479476442      );
   xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    538360.74017229094      );
  id4 -> SetBinError( xbin,    1936.4006915336142      );
   xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    560378.28506293311      );
  id4 -> SetBinError( xbin,    1905.8627089345134      );
   xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    574456.28311737708      );
  id4 -> SetBinError( xbin,    1921.4000323529629      );
   xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    581475.23816863471      );
  id4 -> SetBinError( xbin,    1937.8694999215847      );
   xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    580685.82712664374      );
  id4 -> SetBinError( xbin,    1952.8095852847414      );
   xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    569813.43656745926      );
  id4 -> SetBinError( xbin,    1924.1592644399791      );
   xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    552815.58883311041      );
  id4 -> SetBinError( xbin,    1912.8497544375800      );
   xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    516810.05495452660      );
  id4 -> SetBinError( xbin,    1846.3913864733067      );
   xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    473279.07476908027      );
  id4 -> SetBinError( xbin,    1809.6800106411226      );
   xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    425705.56898792862      );
  id4 -> SetBinError( xbin,    1844.6480266569861      );
   xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    364485.00243171648      );
  id4 -> SetBinError( xbin,    1834.3653482837994      );
   xbin = id4->FindBin(   3.7500000000000000      );
  id4 -> SetBinContent( xbin,    277793.98277295235      );
  id4 -> SetBinError( xbin,    1707.3462237439358      );
   xbin = id4->FindBin(   4.2500000000000000      );
  id4 -> SetBinContent( xbin,    180415.34390792029      );
  id4 -> SetBinError( xbin,    1486.4973199292103      );
   xbin = id4->FindBin(   4.7500000000000000      );
  id4 -> SetBinContent( xbin,    81256.324612705226      );
  id4 -> SetBinError( xbin,    1105.2688595500410      );
  histos -> Add(id4); 
 
 

  mcfmhisto -> cd();
  TH1F *id5 = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    67053.878055007692      );
  id5 -> SetBinError( xbin,    720.38177536266960      );
   xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    144389.70582574481      );
  id5 -> SetBinError( xbin,    939.81023627707827      );
   xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    158645.86123561327      );
  id5 -> SetBinError( xbin,    1147.6734847145931      );
   xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    172661.60630754067      );
  id5 -> SetBinError( xbin,    1256.6843415557209      );
   xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    192692.29698234331      );
  id5 -> SetBinError( xbin,    1351.1008139625185      );
   xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    214686.37606903387      );
  id5 -> SetBinError( xbin,    1409.9037208404782      );
   xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    244886.60824225127      );
  id5 -> SetBinError( xbin,    1659.7889080248528      );
   xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    227639.15619236292      );
  id5 -> SetBinError( xbin,    1907.5745877623165      );
   xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    190246.41390240399      );
  id5 -> SetBinError( xbin,    1373.3682828228971      );
   xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    101549.88517899654      );
  id5 -> SetBinError( xbin,    491.45886979251600      );
   xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    56281.349676984180      );
  id5 -> SetBinError( xbin,    292.21619609488891      );
   xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    36105.356424579433      );
  id5 -> SetBinError( xbin,    289.59706271592836      );
   xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    25936.333930091947      );
  id5 -> SetBinError( xbin,    251.74744857664521      );
   xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    19688.054403429564      );
  id5 -> SetBinError( xbin,    142.24672985190614      );
   xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    15242.780603706611      );
  id5 -> SetBinError( xbin,    121.25724855035354      );
   xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    12205.594668269812      );
  id5 -> SetBinError( xbin,    134.12495349796578      );
   xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    9974.0492821369644      );
  id5 -> SetBinError( xbin,    123.55420209216072      );
   xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    8294.0163698248289      );
  id5 -> SetBinError( xbin,    85.117661847591478      );
   xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    6838.9625783734946      );
  id5 -> SetBinError( xbin,    70.764260631099916      );
   xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    5917.2218891538105      );
  id5 -> SetBinError( xbin,    65.096050752026855      );
   xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    5155.2074034463858      );
  id5 -> SetBinError( xbin,    155.24135049061553      );
   xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    4316.4436738376453      );
  id5 -> SetBinError( xbin,    160.09555619468017      );
   xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    3676.5703217707583      );
  id5 -> SetBinError( xbin,    67.193144050685447      );
   xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    3223.0987117003574      );
  id5 -> SetBinError( xbin,    46.690658430891524      );
   xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    2889.6915794728243      );
  id5 -> SetBinError( xbin,    43.194297778010487      );
   xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    2553.6814383505989      );
  id5 -> SetBinError( xbin,    40.707962029592274      );
   xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    2202.9998687492330      );
  id5 -> SetBinError( xbin,    38.486203298333386      );
   xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    1998.6550344074419      );
  id5 -> SetBinError( xbin,    35.377219322581134      );
   xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    1746.3617377138050      );
  id5 -> SetBinError( xbin,    32.337444774313312      );
   xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    1554.8351101419876      );
  id5 -> SetBinError( xbin,    59.676176119984127      );
   xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    1407.5102943013499      );
  id5 -> SetBinError( xbin,    66.104348843442224      );
   xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    1327.7027964659942      );
  id5 -> SetBinError( xbin,    47.598921400909191      );
   xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    1110.0323420273378      );
  id5 -> SetBinError( xbin,    36.212588175191314      );
   xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    1028.2049154106605      );
  id5 -> SetBinError( xbin,    24.946598888158853      );
   xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    922.34382783406807      );
  id5 -> SetBinError( xbin,    26.835130450215136      );
   xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    816.53058887481552      );
  id5 -> SetBinError( xbin,    27.120093002330002      );
   xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    770.21318742702272      );
  id5 -> SetBinError( xbin,    23.761290524209308      );
   xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    679.02622116749183      );
  id5 -> SetBinError( xbin,    22.667036840083902      );
  histos -> Add(id5); 
 
 

  mcfmhisto -> cd();
  TH1F *id6 = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    4602.4653593826160      );
  id6 -> SetBinError( xbin,    88.509221489171793      );
   xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    14853.981652707036      );
  id6 -> SetBinError( xbin,    159.33879925121715      );
   xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    29588.482344475913      );
  id6 -> SetBinError( xbin,    224.80802038738494      );
   xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    52143.636614679941      );
  id6 -> SetBinError( xbin,    288.79340492842618      );
   xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    85494.978765894397      );
  id6 -> SetBinError( xbin,    351.99980436276928      );
   xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    139778.17346151601      );
  id6 -> SetBinError( xbin,    426.26604409564021      );
   xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    241491.96613447406      );
  id6 -> SetBinError( xbin,    555.26696516769300      );
   xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    395735.04355250834      );
  id6 -> SetBinError( xbin,    754.30564049922020      );
   xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    188365.96093231364      );
  id6 -> SetBinError( xbin,    616.26364442582985      );
   xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    79418.823440800625      );
  id6 -> SetBinError( xbin,    466.40898348905375      );
   xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    36564.482160832871      );
  id6 -> SetBinError( xbin,    353.65493631576214      );
   xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    17050.438843199045      );
  id6 -> SetBinError( xbin,    265.93757618939742      );
  histos -> Add(id6); 
 
 

  mcfmhisto -> cd();
  TH1F *id7 = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    40071.645352326770      );
  id7 -> SetBinError( xbin,    312.55631307982753      );
   xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    48454.990305527659      );
  id7 -> SetBinError( xbin,    350.28020476741818      );
   xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    57245.513444096934      );
  id7 -> SetBinError( xbin,    388.57954094710141      );
   xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    65007.349222099343      );
  id7 -> SetBinError( xbin,    424.43785304475080      );
   xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    74198.995798667267      );
  id7 -> SetBinError( xbin,    466.33741473448254      );
   xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    81267.196080397465      );
  id7 -> SetBinError( xbin,    502.68208447741546      );
   xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    88412.574287622367      );
  id7 -> SetBinError( xbin,    537.71750057613053      );
   xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    93772.749148732881      );
  id7 -> SetBinError( xbin,    559.62671561551497      );
   xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    100901.88733147713      );
  id7 -> SetBinError( xbin,    600.02393435539148      );
   xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    103755.93106738746      );
  id7 -> SetBinError( xbin,    612.98947505900128      );
   xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    106898.14999873308      );
  id7 -> SetBinError( xbin,    629.12321652522553      );
   xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    109112.14728101267      );
  id7 -> SetBinError( xbin,    643.49588768422984      );
   xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    111825.78421671044      );
  id7 -> SetBinError( xbin,    661.64739226049085      );
   xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    111642.15113539709      );
  id7 -> SetBinError( xbin,    667.86626811578128      );
   xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    111772.87045187071      );
  id7 -> SetBinError( xbin,    665.63705530264065      );
   xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    110389.61453039528      );
  id7 -> SetBinError( xbin,    659.96922012426865      );
   xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    109134.06028695829      );
  id7 -> SetBinError( xbin,    661.76631235905359      );
   xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    105153.98234330086      );
  id7 -> SetBinError( xbin,    643.15955302852399      );
   xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    101633.95789950923      );
  id7 -> SetBinError( xbin,    632.83828605549388      );
   xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    97686.903136141365      );
  id7 -> SetBinError( xbin,    619.80687018994104      );
   xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    91564.254882284935      );
  id7 -> SetBinError( xbin,    585.02120277811946      );
   xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    84522.611403824936      );
  id7 -> SetBinError( xbin,    557.74184536707730      );
   xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    78540.461586935140      );
  id7 -> SetBinError( xbin,    524.19283848943371      );
   xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    71103.563783416525      );
  id7 -> SetBinError( xbin,    491.30355771644270      );
   xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    64186.224449752539      );
  id7 -> SetBinError( xbin,    456.94857259486935      );
   xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    55556.114151237940      );
  id7 -> SetBinError( xbin,    414.43170727146645      );
   xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    48640.000218118927      );
  id7 -> SetBinError( xbin,    383.69907997015463      );
   xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    40711.595637435923      );
  id7 -> SetBinError( xbin,    343.70343707875287      );
   xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    34087.813138414691      );
  id7 -> SetBinError( xbin,    308.35362683996237      );
   xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    27084.609296369279      );
  id7 -> SetBinError( xbin,    268.13562297114254      );
  histos -> Add(id7); 
 
 

  mcfmhisto -> cd();
  TH1F *hid8 = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    13891.676201917453      );
  id8 -> SetBinError( xbin,    77.055615422568749      );
   xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    24829.972831864958      );
  id8 -> SetBinError( xbin,    101.15065302920087      );
   xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    21707.076580508932      );
  id8 -> SetBinError( xbin,    93.950317205519070      );
   xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    19059.193504908351      );
  id8 -> SetBinError( xbin,    86.422585162065843      );
   xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    16735.688188981199      );
  id8 -> SetBinError( xbin,    79.933060395787379      );
   xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    14790.584952570580      );
  id8 -> SetBinError( xbin,    74.039959619384220      );
   xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    13070.328849670132      );
  id8 -> SetBinError( xbin,    68.635603928331989      );
   xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    11691.706274092008      );
  id8 -> SetBinError( xbin,    64.662115284794240      );
   xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    10349.893177744127      );
  id8 -> SetBinError( xbin,    59.955119437411675      );
   xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    9293.9598016759355      );
  id8 -> SetBinError( xbin,    56.510478063357624      );
   xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    8392.6773107789468      );
  id8 -> SetBinError( xbin,    53.700973158430109      );
   xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    7578.0408936063868      );
  id8 -> SetBinError( xbin,    49.598448943269680      );
   xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    6896.5488611437368      );
  id8 -> SetBinError( xbin,    46.992583501481057      );
   xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    6233.6630590109307      );
  id8 -> SetBinError( xbin,    44.399236386656192      );
   xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    5624.4528428166195      );
  id8 -> SetBinError( xbin,    41.169597030299073      );
   xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    5135.1551327104380      );
  id8 -> SetBinError( xbin,    39.660037946337241      );
   xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    4728.9959179659318      );
  id8 -> SetBinError( xbin,    38.004408976652932      );
   xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    4280.3205435058489      );
  id8 -> SetBinError( xbin,    34.855129599509432      );
   xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    3894.2808825042553      );
  id8 -> SetBinError( xbin,    33.191706365043551      );
   xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    3620.1380698248381      );
  id8 -> SetBinError( xbin,    32.206405564999869      );
   xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    3258.1499336548304      );
  id8 -> SetBinError( xbin,    29.951522105190282      );
   xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    3034.5328166516247      );
  id8 -> SetBinError( xbin,    28.776319550791641      );
   xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    2831.2696848734349      );
  id8 -> SetBinError( xbin,    27.908410674853812      );
   xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    2534.3014560826741      );
  id8 -> SetBinError( xbin,    25.971505187974838      );
   xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    2424.9241297135936      );
  id8 -> SetBinError( xbin,    25.326326170409015      );
   xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    2230.0935203431036      );
  id8 -> SetBinError( xbin,    24.357910867241579      );
   xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    2029.7315972125025      );
  id8 -> SetBinError( xbin,    22.952911148390758      );
   xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    1891.9971340456036      );
  id8 -> SetBinError( xbin,    21.982110014588219      );
  histos -> Add(id8); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 )  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
