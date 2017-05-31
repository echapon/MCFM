// Cross-section is:      2371701.8699181001 +/-          970.0333590622)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -81913.42845   -3.45%
//        GQB    |      -44842.10256   -1.89%
//        QG     |      -98446.08799   -4.15%
//        QBG    |      -49031.89442   -2.07%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1380541.52466   58.21%
//        QBQ    |     1271533.96261   53.61%

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
//                   1            [nproc]  
//                tota            [part]  
//Wp_EPS09                        [runstring]  
//           5020.0000            [sqrts]  
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
//             CT10.LH            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//CT10.LHgrid                     [LHAPDF group]  
//                   0            [LHAPDF set]  

 // [Jet definition and event cuts] )
//              0.0000            [m34min]  
//           5020.0000            [m34max]  
//             60.0000            [m56min]  
//            120.0000            [m56max]  
//                   T            [inclusive]  
//                ankt            [algorithm]  
//             25.0000            [ptjetmin]  
//              0.0000            [etajetmin]  
//              3.0000            [etajetmax]  
//              0.5000            [Rcut]  
//                   T            [makecuts]  
//             25.0000            [leptpt]  
//              3.0000            [leptrap]  
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
//              0.0006            [cutoff]  
//              0.1000            [aii]  
//              0.1000            [aif]  
//              0.1000            [afi]  
//              1.0000            [aff]  
//              1.0000            [bfi]  
//              1.0000            [bff]  


  {
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wp_EPS09.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    13.119084704849863      );
  id1 -> SetBinError( xbin,    4.7944703378297673      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    609.48444203259385      );
  id1 -> SetBinError( xbin,    76.707788112185654      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4661.1941433748925      );
  id1 -> SetBinError( xbin,    362.60894412909681      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    22427.351193306713      );
  id1 -> SetBinError( xbin,    929.61452900584709      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    56804.555046563270      );
  id1 -> SetBinError( xbin,    1298.9303695035305      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    110740.59565112786      );
  id1 -> SetBinError( xbin,    1504.5151882108926      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    169851.66612353065      );
  id1 -> SetBinError( xbin,    1786.4014794267264      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    225335.72457726361      );
  id1 -> SetBinError( xbin,    1983.2278824366908      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    275980.95764310024      );
  id1 -> SetBinError( xbin,    2107.7637423173342      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    315372.60364943516      );
  id1 -> SetBinError( xbin,    2158.0672117342469      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    352258.71077426302      );
  id1 -> SetBinError( xbin,    2212.7056041964593      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    376248.99837457179      );
  id1 -> SetBinError( xbin,    2273.2782881391813      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    397997.52081366081      );
  id1 -> SetBinError( xbin,    2278.9830482419402      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    411779.51505896659      );
  id1 -> SetBinError( xbin,    2602.4526187653510      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    422032.64219565300      );
  id1 -> SetBinError( xbin,    2597.9815669804725      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    422962.38296387135      );
  id1 -> SetBinError( xbin,    2302.3647813070343      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    427601.12439711142      );
  id1 -> SetBinError( xbin,    2272.2320574908931      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    433391.21123396116      );
  id1 -> SetBinError( xbin,    2251.6483732200722      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    433118.79560894222      );
  id1 -> SetBinError( xbin,    2484.0569471377094      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    429936.34304245369      );
  id1 -> SetBinError( xbin,    2211.5063122913848      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    424057.54515723878      );
  id1 -> SetBinError( xbin,    2219.8215042442653      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    421098.67941567342      );
  id1 -> SetBinError( xbin,    2232.3916583175746      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    425474.65518329834      );
  id1 -> SetBinError( xbin,    2246.8781336416414      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    420123.57772527402      );
  id1 -> SetBinError( xbin,    2245.5669519432809      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    421511.72128996579      );
  id1 -> SetBinError( xbin,    2229.2755207110317      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    415493.34590188228      );
  id1 -> SetBinError( xbin,    2227.6109407188833      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    420447.88732126495      );
  id1 -> SetBinError( xbin,    2251.7482262433282      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    423845.95751508698      );
  id1 -> SetBinError( xbin,    2301.3779830057615      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    414784.78752297483      );
  id1 -> SetBinError( xbin,    2266.9764055940295      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    415393.60997563443      );
  id1 -> SetBinError( xbin,    2297.4461807803450      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    413305.43607179279      );
  id1 -> SetBinError( xbin,    2316.6931807656961      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    396557.64937086729      );
  id1 -> SetBinError( xbin,    2327.8475470679232      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    374524.04175849073      );
  id1 -> SetBinError( xbin,    2326.7073864109693      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    340766.55089912040      );
  id1 -> SetBinError( xbin,    2266.7716105845352      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    296447.42321180378      );
  id1 -> SetBinError( xbin,    2183.1588553399042      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    236199.78041772899      );
  id1 -> SetBinError( xbin,    2348.1248457446213      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    169843.03543125477      );
  id1 -> SetBinError( xbin,    2158.3095022217149      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    94101.007519162522      );
  id1 -> SetBinError( xbin,    1601.4332787164260      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    37768.057602771667      );
  id1 -> SetBinError( xbin,    1168.6952922317519      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    7995.2082052430596      );
  id1 -> SetBinError( xbin,    513.79285354823605      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    774.31585978052090      );
  id1 -> SetBinError( xbin,    107.30585614582567      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.1202391544024810      );
  id1 -> SetBinError( xbin,    1.1634908354019826      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    894504.42047688912      );
  id2 -> SetBinError( xbin,    10708.219835833199      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    852501.30352666776      );
  id2 -> SetBinError( xbin,    9120.1044161761256      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    810139.30716412433      );
  id2 -> SetBinError( xbin,    8901.1506640834814      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    758588.58334801800      );
  id2 -> SetBinError( xbin,    6452.2223764106429      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    716432.42362284835      );
  id2 -> SetBinError( xbin,    5834.9190828905448      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    684366.34820818284      );
  id2 -> SetBinError( xbin,    5291.6563684828252      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    646330.73012892518      );
  id2 -> SetBinError( xbin,    6079.0677777471292      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    618549.52125302004      );
  id2 -> SetBinError( xbin,    5530.6080600197911      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    576506.59281648265      );
  id2 -> SetBinError( xbin,    5550.1530577881922      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    537655.71968651272      );
  id2 -> SetBinError( xbin,    4278.5053013354936      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    495334.06581013225      );
  id2 -> SetBinError( xbin,    3347.1405191465096      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    459149.69441080885      );
  id2 -> SetBinError( xbin,    3248.8600604460325      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    421737.19611770730      );
  id2 -> SetBinError( xbin,    2984.8003383480864      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    386172.66229715850      );
  id2 -> SetBinError( xbin,    2572.7940929166298      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    362734.78005878354      );
  id2 -> SetBinError( xbin,    6006.2121161248033      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    321034.99838078232      );
  id2 -> SetBinError( xbin,    3240.4561303550317      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    292469.04901343939      );
  id2 -> SetBinError( xbin,    2499.7951926805486      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    260083.10058686067      );
  id2 -> SetBinError( xbin,    1841.9472786723554      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    235749.28415755235      );
  id2 -> SetBinError( xbin,    1766.8652995028467      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    204754.84663553443      );
  id2 -> SetBinError( xbin,    1507.5367509445698      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    181235.38017727490      );
  id2 -> SetBinError( xbin,    1474.6529967611878      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    160615.03964579673      );
  id2 -> SetBinError( xbin,    1319.6859909601819      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    140692.58609149352      );
  id2 -> SetBinError( xbin,    1117.6834921420534      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    125179.29009033288      );
  id2 -> SetBinError( xbin,    1179.6504785777852      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    109047.72391175886      );
  id2 -> SetBinError( xbin,    1066.2665058684340      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    98944.094727261414      );
  id2 -> SetBinError( xbin,    1183.9223533924717      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    86945.408429308285      );
  id2 -> SetBinError( xbin,    863.44020509753261      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    78863.634414689499      );
  id2 -> SetBinError( xbin,    854.26330798645074      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    76439.971825724046      );
  id2 -> SetBinError( xbin,    917.53268500766296      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    73459.380020698285      );
  id2 -> SetBinError( xbin,    763.52070294906002      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    71963.095990169255      );
  id2 -> SetBinError( xbin,    696.39419791441071      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    77086.211552120483      );
  id2 -> SetBinError( xbin,    821.91178377744063      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    82240.080549481441      );
  id2 -> SetBinError( xbin,    904.52461655527668      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    88542.520595288588      );
  id2 -> SetBinError( xbin,    895.89320405170110      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    97285.581085678539      );
  id2 -> SetBinError( xbin,    894.69871512682789      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    109702.23540935792      );
  id2 -> SetBinError( xbin,    901.76844792183408      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    127559.77472837125      );
  id2 -> SetBinError( xbin,    1023.6495198277701      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    144540.77556167400      );
  id2 -> SetBinError( xbin,    1221.1371912982077      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    165885.48958025928      );
  id2 -> SetBinError( xbin,    1271.3142169382938      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    193634.11273778393      );
  id2 -> SetBinError( xbin,    5871.8119919787787      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    212333.22631248401      );
  id2 -> SetBinError( xbin,    1554.3728804239520      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    239503.32908589227      );
  id2 -> SetBinError( xbin,    1778.7400530232626      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    274922.69024367945      );
  id2 -> SetBinError( xbin,    2425.2299657823305      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    304875.48059181607      );
  id2 -> SetBinError( xbin,    2607.4844547796502      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    338093.43140944181      );
  id2 -> SetBinError( xbin,    2885.9975865213187      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    372684.70851221221      );
  id2 -> SetBinError( xbin,    2883.5258416592756      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    405921.33372072666      );
  id2 -> SetBinError( xbin,    2828.4070677934346      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    448848.34523723816      );
  id2 -> SetBinError( xbin,    3195.9719968179415      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    481665.82092814363      );
  id2 -> SetBinError( xbin,    3152.1147314952291      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    527052.02169247170      );
  id2 -> SetBinError( xbin,    4048.5400806968764      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    562577.40043910069      );
  id2 -> SetBinError( xbin,    4364.6914960084914      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    604487.81155818934      );
  id2 -> SetBinError( xbin,    4498.1385081340986      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    647118.94740163395      );
  id2 -> SetBinError( xbin,    5386.3216447234490      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    670983.31426144484      );
  id2 -> SetBinError( xbin,    5290.8478880744024      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    744985.83289639954      );
  id2 -> SetBinError( xbin,    6248.9294340719161      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    771221.75047271687      );
  id2 -> SetBinError( xbin,    5854.6772460785141      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    809255.99301461899      );
  id2 -> SetBinError( xbin,    7095.5231515205087      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    852569.60580259736      );
  id2 -> SetBinError( xbin,    7897.9726020349908      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    887790.40162252320      );
  id2 -> SetBinError( xbin,    7569.3149225154229      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    936900.46207895526      );
  id2 -> SetBinError( xbin,    9097.2239809459606      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    141501.48484674256      );
  id3 -> SetBinError( xbin,    1388.2019656476357      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    192696.31593754468      );
  id3 -> SetBinError( xbin,    1741.6451153322198      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    253692.04704933643      );
  id3 -> SetBinError( xbin,    2201.9529498279303      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    303531.88519983168      );
  id3 -> SetBinError( xbin,    2356.3110545778914      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    342587.16979169217      );
  id3 -> SetBinError( xbin,    2401.9404589814717      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    382832.78712800588      );
  id3 -> SetBinError( xbin,    2529.7174555455535      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    416524.29665649525      );
  id3 -> SetBinError( xbin,    2610.5983501004157      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    437559.91461920657      );
  id3 -> SetBinError( xbin,    2708.0252577290858      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    447413.58740258752      );
  id3 -> SetBinError( xbin,    2783.8816066008462      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    460060.24517092737      );
  id3 -> SetBinError( xbin,    2754.9956773127651      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    466288.78788653755      );
  id3 -> SetBinError( xbin,    2707.2900611849955      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    467431.48115998693      );
  id3 -> SetBinError( xbin,    2942.0015860030257      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    473358.23659048212      );
  id3 -> SetBinError( xbin,    2913.9268858367041      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    465169.29440795188      );
  id3 -> SetBinError( xbin,    2772.5195440595626      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    465465.36507987411      );
  id3 -> SetBinError( xbin,    2925.0348724276987      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    463432.50208384881      );
  id3 -> SetBinError( xbin,    2849.4009609018890      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    468858.43834900914      );
  id3 -> SetBinError( xbin,    2826.0128561800939      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    464877.30711527565      );
  id3 -> SetBinError( xbin,    2747.7029080499501      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    468157.59856600402      );
  id3 -> SetBinError( xbin,    3691.0603876645664      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    463400.93551306933      );
  id3 -> SetBinError( xbin,    3674.3188987161766      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    468722.66214218712      );
  id3 -> SetBinError( xbin,    2753.2174013422896      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    464093.51819642721      );
  id3 -> SetBinError( xbin,    2769.0588025064935      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    459647.56962006475      );
  id3 -> SetBinError( xbin,    2870.5430504922824      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    452856.27569013799      );
  id3 -> SetBinError( xbin,    2794.7376883918919      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    431129.75457087607      );
  id3 -> SetBinError( xbin,    2723.9261164274990      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    407981.88207631017      );
  id3 -> SetBinError( xbin,    2650.1747881321876      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    366850.15524895274      );
  id3 -> SetBinError( xbin,    2506.7769466397540      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    314999.15791430295      );
  id3 -> SetBinError( xbin,    2377.1015672755552      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    256904.11463465865      );
  id3 -> SetBinError( xbin,    2049.7735611137723      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    191615.11896497017      );
  id3 -> SetBinError( xbin,    1721.5209718471410      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    44741.537707266536      );
  id4 -> SetBinError( xbin,    1503.7346970573335      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    134521.60073065406      );
  id4 -> SetBinError( xbin,    2184.5321863465715      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    163168.71087090566      );
  id4 -> SetBinError( xbin,    2475.9244974631688      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    185631.55660817403      );
  id4 -> SetBinError( xbin,    2775.4114144440528      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    223819.44329576186      );
  id4 -> SetBinError( xbin,    3061.3717446811988      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    243260.77465995727      );
  id4 -> SetBinError( xbin,    3143.6785732544718      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    280971.62861620908      );
  id4 -> SetBinError( xbin,    3467.4592455954380      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    299471.52710989781      );
  id4 -> SetBinError( xbin,    4032.6943698818100      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    321040.73138683685      );
  id4 -> SetBinError( xbin,    4047.2332143567992      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    336903.84895518341      );
  id4 -> SetBinError( xbin,    3862.5620914169349      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    359129.24870868336      );
  id4 -> SetBinError( xbin,    3881.4545479306744      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    380987.40824131074      );
  id4 -> SetBinError( xbin,    4021.7922649107836      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    399422.11548209010      );
  id4 -> SetBinError( xbin,    4247.7708427306798      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    417042.74735216785      );
  id4 -> SetBinError( xbin,    4477.7127185101399      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    427361.38371312426      );
  id4 -> SetBinError( xbin,    4676.8132299849221      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    431896.10406168469      );
  id4 -> SetBinError( xbin,    4678.9261233478701      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    444595.31409584987      );
  id4 -> SetBinError( xbin,    4559.3790326351982      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    451715.70481065981      );
  id4 -> SetBinError( xbin,    4339.3787448320500      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    451174.67186765868      );
  id4 -> SetBinError( xbin,    4410.0148120779450      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    460976.44351493439      );
  id4 -> SetBinError( xbin,    4423.8902316580197      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    462343.74739431572      );
  id4 -> SetBinError( xbin,    4589.4143878947116      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    468137.17453789921      );
  id4 -> SetBinError( xbin,    4918.0096757748333      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    468238.23778097052      );
  id4 -> SetBinError( xbin,    5083.1029835643931      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    467071.02735911834      );
  id4 -> SetBinError( xbin,    4648.2149953709459      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    469324.51751335710      );
  id4 -> SetBinError( xbin,    4429.6519850404402      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    468870.32721555867      );
  id4 -> SetBinError( xbin,    4540.6441029521111      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    475903.64839632029      );
  id4 -> SetBinError( xbin,    4992.1909100307930      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    461986.21261598286      );
  id4 -> SetBinError( xbin,    5103.5138297131543      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    464865.54506273405      );
  id4 -> SetBinError( xbin,    4467.0723031014704      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    465237.94758114801      );
  id4 -> SetBinError( xbin,    4702.4478925418516      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    468744.45280706306      );
  id4 -> SetBinError( xbin,    4528.4565309010313      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    463220.01001188764      );
  id4 -> SetBinError( xbin,    4353.7829238505738      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    466324.70379065239      );
  id4 -> SetBinError( xbin,    4747.5469680057504      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    465922.19069270394      );
  id4 -> SetBinError( xbin,    4832.0187557267000      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    470498.66967325174      );
  id4 -> SetBinError( xbin,    7208.1380586013256      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    458599.62187466287      );
  id4 -> SetBinError( xbin,    7194.4085906129667      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    469061.20999211376      );
  id4 -> SetBinError( xbin,    4423.5981068761994      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    468156.38486234192      );
  id4 -> SetBinError( xbin,    4470.6924215804202      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    461656.44790023903      );
  id4 -> SetBinError( xbin,    4962.4794901724736      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    466446.37964050774      );
  id4 -> SetBinError( xbin,    5390.0852006625555      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    464650.90670772293      );
  id4 -> SetBinError( xbin,    4926.2326014287391      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    470643.26296147000      );
  id4 -> SetBinError( xbin,    4608.4717171833299      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    464311.83861775318      );
  id4 -> SetBinError( xbin,    5598.5925927584804      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    465054.26051960629      );
  id4 -> SetBinError( xbin,    5447.6947163998893      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    464461.84320788854      );
  id4 -> SetBinError( xbin,    4561.4737798660080      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    456287.78226545744      );
  id4 -> SetBinError( xbin,    4675.0134217182322      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    462862.93509852607      );
  id4 -> SetBinError( xbin,    4963.5748258477461      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    457328.77235907811      );
  id4 -> SetBinError( xbin,    4777.9683913312783      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    444551.48937029979      );
  id4 -> SetBinError( xbin,    4443.7674611934626      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    432699.37189465587      );
  id4 -> SetBinError( xbin,    4386.4120931981151      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    419995.84290019260      );
  id4 -> SetBinError( xbin,    4259.4496756991293      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    400826.50985626125      );
  id4 -> SetBinError( xbin,    4601.8781951637829      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    401583.36055497802      );
  id4 -> SetBinError( xbin,    4640.8980148535102      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    371319.40739467507      );
  id4 -> SetBinError( xbin,    4200.0911793895320      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    347265.58841084130      );
  id4 -> SetBinError( xbin,    3882.5336069589644      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    316475.34016534378      );
  id4 -> SetBinError( xbin,    3829.4218239510428      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    42040.162703381422      );
  id5 -> SetBinError( xbin,    439.89376197874611      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    91009.342853704278      );
  id5 -> SetBinError( xbin,    585.26204369720779      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    101025.09738741477      );
  id5 -> SetBinError( xbin,    773.29498152957581      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    109668.57127365391      );
  id5 -> SetBinError( xbin,    933.59514831188642      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    118703.43269441757      );
  id5 -> SetBinError( xbin,    923.23689038778457      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    135417.06514408998      );
  id5 -> SetBinError( xbin,    926.72907925108291      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    152097.99300410549      );
  id5 -> SetBinError( xbin,    1003.0209765401456      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    146442.83706652114      );
  id5 -> SetBinError( xbin,    1167.5325056269410      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    113474.99997629554      );
  id5 -> SetBinError( xbin,    923.67437659948166      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    58152.948837533782      );
  id5 -> SetBinError( xbin,    272.80450855368127      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    30584.265858596293      );
  id5 -> SetBinError( xbin,    168.48738222782092      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19455.122980642995      );
  id5 -> SetBinError( xbin,    129.34416650626258      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13436.479369856650      );
  id5 -> SetBinError( xbin,    95.392738348141094      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9794.1414136895746      );
  id5 -> SetBinError( xbin,    77.361916666071323      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7506.9475439048902      );
  id5 -> SetBinError( xbin,    62.930464908794661      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5831.7571373821038      );
  id5 -> SetBinError( xbin,    56.688203598295097      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4563.5098214703530      );
  id5 -> SetBinError( xbin,    46.634460411277452      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3770.4009353719830      );
  id5 -> SetBinError( xbin,    47.630871361950668      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3173.5174191888823      );
  id5 -> SetBinError( xbin,    49.441951036643808      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2503.0804007281045      );
  id5 -> SetBinError( xbin,    39.799090955898841      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2175.6182309541923      );
  id5 -> SetBinError( xbin,    31.523324977508647      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1824.6848024512155      );
  id5 -> SetBinError( xbin,    30.396376031752286      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1518.5989324261579      );
  id5 -> SetBinError( xbin,    27.914135165254944      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1307.1153373480402      );
  id5 -> SetBinError( xbin,    23.262340476429141      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1125.7799982674226      );
  id5 -> SetBinError( xbin,    22.764488715440418      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    978.59092973799898      );
  id5 -> SetBinError( xbin,    23.864706921518781      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    870.36573495810319      );
  id5 -> SetBinError( xbin,    25.558973687896774      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    780.29883401432107      );
  id5 -> SetBinError( xbin,    22.165845855984667      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    688.17365038366256      );
  id5 -> SetBinError( xbin,    21.743221867937944      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    566.54470959172454      );
  id5 -> SetBinError( xbin,    20.444163666790743      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    533.81098014783083      );
  id5 -> SetBinError( xbin,    20.078116543888651      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    429.04517628355393      );
  id5 -> SetBinError( xbin,    19.245507913225083      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    412.43552350124878      );
  id5 -> SetBinError( xbin,    12.860228340466438      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    368.40653289785701      );
  id5 -> SetBinError( xbin,    13.408523462672912      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    311.01750095545685      );
  id5 -> SetBinError( xbin,    17.213329281298432      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    273.15801086076203      );
  id5 -> SetBinError( xbin,    16.063192110840923      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    257.90385992785116      );
  id5 -> SetBinError( xbin,    11.465061826407023      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    241.81146975610068      );
  id5 -> SetBinError( xbin,    9.4721380562397783      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2884.8562894357601      );
  id6 -> SetBinError( xbin,    55.797477932817621      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9614.1455099699706      );
  id6 -> SetBinError( xbin,    105.62650272204981      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19121.124733120021      );
  id6 -> SetBinError( xbin,    152.22270034282153      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33955.760745686406      );
  id6 -> SetBinError( xbin,    202.13634132648431      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    55225.296656643091      );
  id6 -> SetBinError( xbin,    247.97626882854661      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    86173.198549437860      );
  id6 -> SetBinError( xbin,    293.95928739968537      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    131772.79426335616      );
  id6 -> SetBinError( xbin,    353.78125106966769      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    184480.39656483033      );
  id6 -> SetBinError( xbin,    424.97917780159599      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    72069.878951888633      );
  id6 -> SetBinError( xbin,    296.87558321753664      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24681.731415262690      );
  id6 -> SetBinError( xbin,    199.12012164065189      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    8916.2820210585578      );
  id6 -> SetBinError( xbin,    126.60318737105160      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3553.0470153341776      );
  id6 -> SetBinError( xbin,    83.358521786772570      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11181.577382192598      );
  id7 -> SetBinError( xbin,    143.42869853482688      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15112.201700227784      );
  id7 -> SetBinError( xbin,    166.43627006223673      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    18983.779451100869      );
  id7 -> SetBinError( xbin,    189.94130122258005      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23288.708104708832      );
  id7 -> SetBinError( xbin,    210.10193116579711      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28361.175843819332      );
  id7 -> SetBinError( xbin,    238.20348334613143      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33140.678120380224      );
  id7 -> SetBinError( xbin,    259.72665043724282      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    38273.987028569580      );
  id7 -> SetBinError( xbin,    285.87421160069198      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    42415.803738595758      );
  id7 -> SetBinError( xbin,    301.04731835179933      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    46728.742462417460      );
  id7 -> SetBinError( xbin,    321.03789853567071      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    50763.815708682334      );
  id7 -> SetBinError( xbin,    338.64647233165886      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    53953.541095227229      );
  id7 -> SetBinError( xbin,    353.06399500865456      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    56774.980208534180      );
  id7 -> SetBinError( xbin,    363.66098701863768      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58661.548833539448      );
  id7 -> SetBinError( xbin,    371.41934942816277      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    61231.102950228546      );
  id7 -> SetBinError( xbin,    383.33033370859238      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    62259.343551929800      );
  id7 -> SetBinError( xbin,    385.92168261109629      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    62319.974831115564      );
  id7 -> SetBinError( xbin,    384.08286853554159      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    62247.554996160630      );
  id7 -> SetBinError( xbin,    382.47997719536829      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    60973.696443515553      );
  id7 -> SetBinError( xbin,    376.78849595122307      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    59568.646546979449      );
  id7 -> SetBinError( xbin,    369.40174997308350      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    57853.225438136666      );
  id7 -> SetBinError( xbin,    362.98042341499109      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    54692.564994789849      );
  id7 -> SetBinError( xbin,    348.09712159665821      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    51789.863543137981      );
  id7 -> SetBinError( xbin,    335.86365618843598      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    48563.872848175430      );
  id7 -> SetBinError( xbin,    318.39285932988685      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    43843.210349046029      );
  id7 -> SetBinError( xbin,    295.86506952530590      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    40188.387330621306      );
  id7 -> SetBinError( xbin,    281.61240971824702      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    34442.402352725207      );
  id7 -> SetBinError( xbin,    254.33978544974275      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    29935.534390187458      );
  id7 -> SetBinError( xbin,    235.21780501341135      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    24860.930668601795      );
  id7 -> SetBinError( xbin,    212.83974577232098      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    20076.692191463306      );
  id7 -> SetBinError( xbin,    193.03104998754662      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    15928.192383146816      );
  id7 -> SetBinError( xbin,    169.24677512342274      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7128.4119865500252      );
  id8 -> SetBinError( xbin,    44.995680925003157      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12673.796652061570      );
  id8 -> SetBinError( xbin,    58.604338918181291      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    11070.963502204069      );
  id8 -> SetBinError( xbin,    54.122370032685566      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9689.3453974189833      );
  id8 -> SetBinError( xbin,    49.473594373876679      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8496.1742143816064      );
  id8 -> SetBinError( xbin,    45.734266638783566      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7440.8670946872317      );
  id8 -> SetBinError( xbin,    41.880161717750418      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6539.8374853657187      );
  id8 -> SetBinError( xbin,    38.637221863255398      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5841.4876296854563      );
  id8 -> SetBinError( xbin,    36.252625275087837      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5129.3304488585072      );
  id8 -> SetBinError( xbin,    33.141944288239728      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4621.1260526689430      );
  id8 -> SetBinError( xbin,    31.328985907083041      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4107.9134041493844      );
  id8 -> SetBinError( xbin,    28.978672024503627      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3635.4274773700945      );
  id8 -> SetBinError( xbin,    26.875779821522389      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3248.7759705586004      );
  id8 -> SetBinError( xbin,    25.203294456890355      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2981.5619443110627      );
  id8 -> SetBinError( xbin,    23.840737119168487      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2680.1020102008433      );
  id8 -> SetBinError( xbin,    22.460931577611909      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2428.9363680276815      );
  id8 -> SetBinError( xbin,    20.981497672514863      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2219.7115939966666      );
  id8 -> SetBinError( xbin,    19.760033632633345      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2003.5679294951087      );
  id8 -> SetBinError( xbin,    18.469091874002199      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1861.0709901681639      );
  id8 -> SetBinError( xbin,    17.575047987507002      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1697.9485547627535      );
  id8 -> SetBinError( xbin,    17.046692288334498      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1541.7614630529488      );
  id8 -> SetBinError( xbin,    16.114978752424118      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1403.6470949864722      );
  id8 -> SetBinError( xbin,    15.066855964615103      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1292.8818232608141      );
  id8 -> SetBinError( xbin,    14.184428025698095      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1187.3681698994978      );
  id8 -> SetBinError( xbin,    13.675860540946591      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1106.2152583072386      );
  id8 -> SetBinError( xbin,    13.083557400273495      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    997.21601780491039      );
  id8 -> SetBinError( xbin,    12.373139928312369      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    931.19081630251821      );
  id8 -> SetBinError( xbin,    12.137883161093573      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    876.81956322127235      );
  id8 -> SetBinError( xbin,    11.794209071778139      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
