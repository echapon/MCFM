// Cross-section is:      1777310.2239186219 +/-          757.7536244968)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -30810.95312   -1.73%
//        GQB    |      -27502.30674   -1.55%
//        QG     |      -29262.26274   -1.65%
//        QBG    |      -26402.23787   -1.49%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      868925.92502   48.89%
//        QBQ    |     1027345.86826   57.80%

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
//Wm_eSTARn11_1_1                 [runstring]  
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
//             eSTARn1            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//eSTARn11_1_1.LHpdf              [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//eSTARn11_1_1.LHpdf              [LHAPDF group 2]  
//                   0            [LHAPDF set 2]  

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
  mcfmhisto = new TFile("W_only_tota_eSTARn1_80__80__Wm_eSTARn11_1_1.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    1.1732237957012934E-002 );
  id1 -> SetBinError( xbin,    5.9343668691383498E-003 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    16.880056230064266      );
  id1 -> SetBinError( xbin,    2.5655387112276133      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    291.85425212575336      );
  id1 -> SetBinError( xbin,    35.703797299048844      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2421.9428700577823      );
  id1 -> SetBinError( xbin,    140.51440702275710      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    9218.7240410512950      );
  id1 -> SetBinError( xbin,    417.33406951471522      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    29460.726646995103      );
  id1 -> SetBinError( xbin,    695.42433695718364      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    69086.255827114146      );
  id1 -> SetBinError( xbin,    1136.7345596210578      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    129499.73221691337      );
  id1 -> SetBinError( xbin,    1317.3832631391751      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    198275.19389713305      );
  id1 -> SetBinError( xbin,    1502.0663765218746      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    277671.81296623748      );
  id1 -> SetBinError( xbin,    1708.6150671313160      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    334347.99528566079      );
  id1 -> SetBinError( xbin,    1989.5265137661568      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    378373.67980937025      );
  id1 -> SetBinError( xbin,    2052.0095266336498      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    385486.84894066845      );
  id1 -> SetBinError( xbin,    1899.1209910822272      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    385752.52457725361      );
  id1 -> SetBinError( xbin,    1878.1021601899545      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    387812.62216671254      );
  id1 -> SetBinError( xbin,    1879.0684248131695      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    383863.60772225040      );
  id1 -> SetBinError( xbin,    1841.5206774137100      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    385077.99925719411      );
  id1 -> SetBinError( xbin,    1856.9941051815972      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    380992.63490586774      );
  id1 -> SetBinError( xbin,    1827.1933906503068      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    379635.00581059133      );
  id1 -> SetBinError( xbin,    1811.3479429256552      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    369511.93152168416      );
  id1 -> SetBinError( xbin,    1793.2533163081866      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    373215.41345209320      );
  id1 -> SetBinError( xbin,    1832.6112574911995      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    365947.39830946818      );
  id1 -> SetBinError( xbin,    1805.8465395409623      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    358532.00073304545      );
  id1 -> SetBinError( xbin,    1758.2344153784461      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    357136.97509136499      );
  id1 -> SetBinError( xbin,    1762.3003505839695      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    350595.00384728500      );
  id1 -> SetBinError( xbin,    1836.9185839458421      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    340379.28790986049      );
  id1 -> SetBinError( xbin,    1736.2685449561834      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    331125.34449390852      );
  id1 -> SetBinError( xbin,    1750.2391182269105      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    325778.45337828103      );
  id1 -> SetBinError( xbin,    1717.9054997726835      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    312468.60186792997      );
  id1 -> SetBinError( xbin,    1697.2469236103084      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    296744.48743545817      );
  id1 -> SetBinError( xbin,    1689.9074673711734      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    281126.75792221673      );
  id1 -> SetBinError( xbin,    1679.5966029038743      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    238925.33734805399      );
  id1 -> SetBinError( xbin,    1576.0623801726842      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    184528.82795495293      );
  id1 -> SetBinError( xbin,    1409.1735402884403      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    132743.73875520640      );
  id1 -> SetBinError( xbin,    1245.0547847207183      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    82161.636059454395      );
  id1 -> SetBinError( xbin,    1088.8035914798579      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    43714.887747707588      );
  id1 -> SetBinError( xbin,    859.88231505233807      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    17854.899361194282      );
  id1 -> SetBinError( xbin,    554.05532111721732      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    5569.3630331920431      );
  id1 -> SetBinError( xbin,    262.42464070978417      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1214.6087338522818      );
  id1 -> SetBinError( xbin,    84.386183537166644      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    134.47757972818911      );
  id1 -> SetBinError( xbin,    11.224711131319417      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    4.4347812219360145      );
  id1 -> SetBinError( xbin,   0.70141334418604118      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   -1.3849696998626698E-004 );
  id1 -> SetBinError( xbin,    1.7378918526297848E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    486320.43731222436      );
  id2 -> SetBinError( xbin,    4280.0230081166237      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    452502.95793046831      );
  id2 -> SetBinError( xbin,    3540.9767392007375      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    449673.01405946352      );
  id2 -> SetBinError( xbin,    4217.2804897234482      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    432413.78696899471      );
  id2 -> SetBinError( xbin,    6048.8896454384749      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    405665.70952015958      );
  id2 -> SetBinError( xbin,    3376.7012566889803      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    389836.65710528340      );
  id2 -> SetBinError( xbin,    3321.2849000065939      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    362782.00314126193      );
  id2 -> SetBinError( xbin,    2526.6228024875504      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    342327.73056392337      );
  id2 -> SetBinError( xbin,    2542.9328070866641      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    325170.97453335614      );
  id2 -> SetBinError( xbin,    2412.3950778340773      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    305359.40345464088      );
  id2 -> SetBinError( xbin,    2747.6913456707944      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    280436.39779835416      );
  id2 -> SetBinError( xbin,    1903.2803003667523      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    262303.09470968845      );
  id2 -> SetBinError( xbin,    1686.8241712791507      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    241525.78090845642      );
  id2 -> SetBinError( xbin,    1390.5408983591594      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    223889.43597903659      );
  id2 -> SetBinError( xbin,    1836.7812080078597      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    205267.03911209555      );
  id2 -> SetBinError( xbin,    1224.8074158908296      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    184733.47200958451      );
  id2 -> SetBinError( xbin,    1107.3126443225435      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    169904.89443088177      );
  id2 -> SetBinError( xbin,    998.20537907609003      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    151172.58949542695      );
  id2 -> SetBinError( xbin,    970.42645381131513      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    133927.14617798183      );
  id2 -> SetBinError( xbin,    838.17719271624401      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    118090.12868065987      );
  id2 -> SetBinError( xbin,    783.23942908418962      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    105546.04817913329      );
  id2 -> SetBinError( xbin,    1265.9870952496233      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    91391.355211195463      );
  id2 -> SetBinError( xbin,    703.71829948346851      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    78981.221482270164      );
  id2 -> SetBinError( xbin,    685.21140632911101      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    69991.210023123407      );
  id2 -> SetBinError( xbin,    794.37730712512564      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    60558.539324814796      );
  id2 -> SetBinError( xbin,    526.09749246235356      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    53491.284523476352      );
  id2 -> SetBinError( xbin,    430.06290473488855      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    49399.568934054310      );
  id2 -> SetBinError( xbin,    1550.9750980469346      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    43623.183165299059      );
  id2 -> SetBinError( xbin,    391.98929202257409      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    41626.985857882195      );
  id2 -> SetBinError( xbin,    974.33535486742016      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    39680.918443607094      );
  id2 -> SetBinError( xbin,    513.02572497332574      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    38838.446126759831      );
  id2 -> SetBinError( xbin,    366.24338614630966      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    39766.548857794456      );
  id2 -> SetBinError( xbin,    400.87773713062751      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    42302.128807505534      );
  id2 -> SetBinError( xbin,    407.04122405814957      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    48113.185126397781      );
  id2 -> SetBinError( xbin,    863.82565093188759      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    51134.597474054208      );
  id2 -> SetBinError( xbin,    811.11239544338105      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    57674.294755930270      );
  id2 -> SetBinError( xbin,    467.33781336957458      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    66232.706539576524      );
  id2 -> SetBinError( xbin,    608.22419506968390      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    75304.956659150237      );
  id2 -> SetBinError( xbin,    1237.6265692134350      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    86284.803913350843      );
  id2 -> SetBinError( xbin,    826.81204473520722      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    94463.803897357604      );
  id2 -> SetBinError( xbin,    656.77730774250017      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    108122.82906930424      );
  id2 -> SetBinError( xbin,    762.74020573869802      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    120896.67754929082      );
  id2 -> SetBinError( xbin,    1158.6276884064312      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    136214.15952407621      );
  id2 -> SetBinError( xbin,    1633.2251286525507      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    148376.84541059675      );
  id2 -> SetBinError( xbin,    1003.1471539263424      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    164933.43064506690      );
  id2 -> SetBinError( xbin,    1079.8662541121184      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    181477.16488595877      );
  id2 -> SetBinError( xbin,    1195.7660557477402      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    198749.22793996066      );
  id2 -> SetBinError( xbin,    1437.5012266279602      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    215066.93786181847      );
  id2 -> SetBinError( xbin,    1613.4708478710866      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    228594.93915879063      );
  id2 -> SetBinError( xbin,    1632.5326945494123      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    248506.72045844022      );
  id2 -> SetBinError( xbin,    1835.2677799019978      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    265661.52614737715      );
  id2 -> SetBinError( xbin,    2709.0081875189435      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    282681.92993076792      );
  id2 -> SetBinError( xbin,    2215.9720188014953      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    300081.14343903738      );
  id2 -> SetBinError( xbin,    3231.7656780030275      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    316436.65710874903      );
  id2 -> SetBinError( xbin,    3104.4742288419966      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    335966.48066504480      );
  id2 -> SetBinError( xbin,    3284.6355290065981      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    354692.98724933225      );
  id2 -> SetBinError( xbin,    3284.6597597231284      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    367839.26234114682      );
  id2 -> SetBinError( xbin,    3326.9356033807489      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    382342.86109158181      );
  id2 -> SetBinError( xbin,    6476.1583984349299      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    395852.28231291816      );
  id2 -> SetBinError( xbin,    3860.1691114393966      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    422340.79332750844      );
  id2 -> SetBinError( xbin,    4522.7576516804666      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    278315.54175550112      );
  id3 -> SetBinError( xbin,    2277.8029388102905      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    299557.49939594109      );
  id3 -> SetBinError( xbin,    2110.8698331051132      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    313080.62733681721      );
  id3 -> SetBinError( xbin,    1961.1936018596480      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    322495.01318563172      );
  id3 -> SetBinError( xbin,    1902.9223922773240      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    327185.88523354428      );
  id3 -> SetBinError( xbin,    1880.7371839362236      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    330531.55886097543      );
  id3 -> SetBinError( xbin,    1812.6766700919582      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    332691.50942365848      );
  id3 -> SetBinError( xbin,    1756.0753815061444      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    333621.83139302087      );
  id3 -> SetBinError( xbin,    1708.4250358947800      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    333776.49553008925      );
  id3 -> SetBinError( xbin,    1818.0704638374821      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    336215.90576091397      );
  id3 -> SetBinError( xbin,    1812.9859808855838      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    335448.86103841872      );
  id3 -> SetBinError( xbin,    1660.8369305255142      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    334327.40788769204      );
  id3 -> SetBinError( xbin,    1622.1389022181959      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    330019.70890418475      );
  id3 -> SetBinError( xbin,    1598.5319236519049      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    331346.92714542855      );
  id3 -> SetBinError( xbin,    1612.6352007694791      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    327355.41920704336      );
  id3 -> SetBinError( xbin,    1613.2648628457164      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    323976.43453636090      );
  id3 -> SetBinError( xbin,    1604.1980426160569      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    320733.28825726721      );
  id3 -> SetBinError( xbin,    1653.5965183713499      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    314366.70111803547      );
  id3 -> SetBinError( xbin,    1611.4134867416608      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    308461.29473683157      );
  id3 -> SetBinError( xbin,    1604.3932015112553      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    302731.57887889992      );
  id3 -> SetBinError( xbin,    1669.1990802392663      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    291013.68505799107      );
  id3 -> SetBinError( xbin,    1647.2579493279493      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    285032.88077139662      );
  id3 -> SetBinError( xbin,    1599.5502711837164      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    275504.89502721815      );
  id3 -> SetBinError( xbin,    1616.2601139850228      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    263770.17220333044      );
  id3 -> SetBinError( xbin,    1638.2796291872517      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    258014.16737448121      );
  id3 -> SetBinError( xbin,    1624.1107362469622      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    246893.51032951908      );
  id3 -> SetBinError( xbin,    1669.3766741497334      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    235883.66198119969      );
  id3 -> SetBinError( xbin,    1678.2105519530396      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    218189.66826808476      );
  id3 -> SetBinError( xbin,    1715.3963823590359      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    196137.77084659372      );
  id3 -> SetBinError( xbin,    1777.5036370458436      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    180020.01871420737      );
  id3 -> SetBinError( xbin,    1899.5923459432149      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    93807.289630170184      );
  id4 -> SetBinError( xbin,    2615.3614354809979      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    274001.89468280482      );
  id4 -> SetBinError( xbin,    3617.5998734675609      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    293625.89544975659      );
  id4 -> SetBinError( xbin,    3361.8953035804516      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    296370.94846158434      );
  id4 -> SetBinError( xbin,    3247.3522035484434      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    305960.97062036430      );
  id4 -> SetBinError( xbin,    3226.1523450809073      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    309933.20779483661      );
  id4 -> SetBinError( xbin,    3050.0164863373820      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    321295.42371991026      );
  id4 -> SetBinError( xbin,    2889.6342957597094      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    317522.37382083473      );
  id4 -> SetBinError( xbin,    3149.5829646094599      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    329502.12319738686      );
  id4 -> SetBinError( xbin,    3182.8917941386803      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    325179.73944664182      );
  id4 -> SetBinError( xbin,    2757.7373391733822      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    327556.97439203266      );
  id4 -> SetBinError( xbin,    2684.0811251164241      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    333882.05245882954      );
  id4 -> SetBinError( xbin,    2936.9218040879700      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    330078.16102985886      );
  id4 -> SetBinError( xbin,    2931.5589793970739      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    332371.98410325928      );
  id4 -> SetBinError( xbin,    2742.6556564673174      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    331409.56215609016      );
  id4 -> SetBinError( xbin,    2643.1219338773021      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    334604.53643476148      );
  id4 -> SetBinError( xbin,    2554.3199779798006      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    335388.96924623707      );
  id4 -> SetBinError( xbin,    2555.3023495894067      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    333653.67233137635      );
  id4 -> SetBinError( xbin,    2603.5334142721535      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    335705.74344741530      );
  id4 -> SetBinError( xbin,    2599.9111741324914      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    336216.27016589628      );
  id4 -> SetBinError( xbin,    2510.4584625947823      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    334360.12303894875      );
  id4 -> SetBinError( xbin,    2465.2399456189523      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    339405.10051134037      );
  id4 -> SetBinError( xbin,    2718.5843170932176      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    332117.59278775868      );
  id4 -> SetBinError( xbin,    2900.8873092275044      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    333191.96341697045      );
  id4 -> SetBinError( xbin,    2802.5598572934841      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    330529.48644375667      );
  id4 -> SetBinError( xbin,    2645.7047415151251      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    329265.16158523574      );
  id4 -> SetBinError( xbin,    2562.1628551962690      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    335708.23968397919      );
  id4 -> SetBinError( xbin,    2515.2740075639604      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    332789.86962773744      );
  id4 -> SetBinError( xbin,    2416.7165052800474      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    325340.00805074722      );
  id4 -> SetBinError( xbin,    2468.3164550829069      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    326262.91154342110      );
  id4 -> SetBinError( xbin,    2471.4227459634058      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    328176.45050104428      );
  id4 -> SetBinError( xbin,    2414.4825614216952      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    324970.54944261874      );
  id4 -> SetBinError( xbin,    2416.6008864222376      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    321923.67796774465      );
  id4 -> SetBinError( xbin,    2538.6401661104364      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    321492.77893353015      );
  id4 -> SetBinError( xbin,    2463.8176466994951      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    316819.61496672814      );
  id4 -> SetBinError( xbin,    2449.7780362937788      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    317340.20774142211      );
  id4 -> SetBinError( xbin,    2458.5487777970247      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    310041.99672032980      );
  id4 -> SetBinError( xbin,    2373.9751409411338      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    308329.92814788775      );
  id4 -> SetBinError( xbin,    2536.7887851061528      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    309746.53955709509      );
  id4 -> SetBinError( xbin,    2611.7320753853755      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    299800.41074811312      );
  id4 -> SetBinError( xbin,    2492.9796690911098      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    299410.09429121978      );
  id4 -> SetBinError( xbin,    2426.1482720436284      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    289995.56227212504      );
  id4 -> SetBinError( xbin,    2343.1794489479348      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    290446.48646196508      );
  id4 -> SetBinError( xbin,    2388.0185446728096      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    283913.80864955310      );
  id4 -> SetBinError( xbin,    2381.6034424980307      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    280567.34576343861      );
  id4 -> SetBinError( xbin,    2344.8151951072286      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    276251.02335282316      );
  id4 -> SetBinError( xbin,    2349.3579297931610      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    271191.10366832232      );
  id4 -> SetBinError( xbin,    2371.7253556461537      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    263106.11040305777      );
  id4 -> SetBinError( xbin,    2658.6625814013623      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    262973.41882730619      );
  id4 -> SetBinError( xbin,    2560.8657918440636      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    259012.83236293556      );
  id4 -> SetBinError( xbin,    2398.4353482910119      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    253337.89427561747      );
  id4 -> SetBinError( xbin,    2432.8985428346286      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    248400.40063649762      );
  id4 -> SetBinError( xbin,    2462.2066100409520      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    242211.74696415738      );
  id4 -> SetBinError( xbin,    2505.9583695287429      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    236216.54631298591      );
  id4 -> SetBinError( xbin,    2490.0625563339977      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    231100.71771392960      );
  id4 -> SetBinError( xbin,    2599.5749500538022      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    220117.74034440704      );
  id4 -> SetBinError( xbin,    2621.5590725594852      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    26437.494837004961      );
  id5 -> SetBinError( xbin,    266.62008466267349      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    57625.286348080001      );
  id5 -> SetBinError( xbin,    325.25362220537994      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    66621.663831672631      );
  id5 -> SetBinError( xbin,    358.61088767791585      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    75556.865943910816      );
  id5 -> SetBinError( xbin,    401.34346399340393      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    85922.801715203896      );
  id5 -> SetBinError( xbin,    423.49534714968814      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    101342.42822779575      );
  id5 -> SetBinError( xbin,    452.23183862834821      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    123030.49369277619      );
  id5 -> SetBinError( xbin,    527.14087651787656      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    151410.71844705424      );
  id5 -> SetBinError( xbin,    635.46040830868901      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    94502.716713446454      );
  id5 -> SetBinError( xbin,    471.70540007646309      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    34368.194854625566      );
  id5 -> SetBinError( xbin,    163.41333946268580      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    17570.312618315682      );
  id5 -> SetBinError( xbin,    97.825952043993468      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    11229.449530508849      );
  id5 -> SetBinError( xbin,    67.720585259942879      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    7789.1025694037280      );
  id5 -> SetBinError( xbin,    51.605587140105740      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    5881.7985841045902      );
  id5 -> SetBinError( xbin,    43.501673460695940      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4501.5669299339179      );
  id5 -> SetBinError( xbin,    37.878847381142720      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3534.8290332057791      );
  id5 -> SetBinError( xbin,    31.905970946266439      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    2869.0498290593246      );
  id5 -> SetBinError( xbin,    27.330963175646311      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2349.1994582259158      );
  id5 -> SetBinError( xbin,    25.102536227129590      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2009.4613292603426      );
  id5 -> SetBinError( xbin,    23.073184177993650      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1692.2898536470327      );
  id5 -> SetBinError( xbin,    24.221968945254240      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1432.0521477946550      );
  id5 -> SetBinError( xbin,    23.295132571364228      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1209.6318858657216      );
  id5 -> SetBinError( xbin,    16.376822016080396      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1035.8084456329243      );
  id5 -> SetBinError( xbin,    15.212082400883135      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    896.31875289587288      );
  id5 -> SetBinError( xbin,    15.330661228200587      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    801.90326376931807      );
  id5 -> SetBinError( xbin,    13.619778980511235      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    708.54745251584973      );
  id5 -> SetBinError( xbin,    11.763445480720405      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    597.33468585813432      );
  id5 -> SetBinError( xbin,    11.736545316708009      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    544.41919216159056      );
  id5 -> SetBinError( xbin,    10.619848778581234      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    475.81597377757453      );
  id5 -> SetBinError( xbin,    10.032577142407792      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    441.82934459404424      );
  id5 -> SetBinError( xbin,    10.195989469876395      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    362.86699029943833      );
  id5 -> SetBinError( xbin,    10.263538287979371      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    351.01241881604511      );
  id5 -> SetBinError( xbin,    9.1593555216769023      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    298.88867865603396      );
  id5 -> SetBinError( xbin,    8.2278522273343597      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    281.76361874757350      );
  id5 -> SetBinError( xbin,    8.5952134841582541      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    247.41181519580451      );
  id5 -> SetBinError( xbin,    7.6971376526145407      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    232.23267079056100      );
  id5 -> SetBinError( xbin,    6.7957813371403528      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    208.84949980162165      );
  id5 -> SetBinError( xbin,    6.1421573929390512      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    184.88403512400907      );
  id5 -> SetBinError( xbin,    6.4353877914975062      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1304.3426751705540      );
  id6 -> SetBinError( xbin,    26.035308214902557      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    4277.7152719307924      );
  id6 -> SetBinError( xbin,    46.592197214310865      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    8266.0435008995173      );
  id6 -> SetBinError( xbin,    63.930935422355788      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    14111.134838189928      );
  id6 -> SetBinError( xbin,    80.809134198830222      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    22483.712284254118      );
  id6 -> SetBinError( xbin,    97.253265439819472      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    37064.732269664615      );
  id6 -> SetBinError( xbin,    120.64067860173627      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    63537.555391003640      );
  id6 -> SetBinError( xbin,    160.64209546962735      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    103260.29620050790      );
  id6 -> SetBinError( xbin,    224.28271623246161      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    44818.060520323292      );
  id6 -> SetBinError( xbin,    178.42680835895391      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    16954.635283533979      );
  id6 -> SetBinError( xbin,    131.93763552938583      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    7058.8970580426148      );
  id6 -> SetBinError( xbin,    96.233343359140989      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2774.1513147110218      );
  id6 -> SetBinError( xbin,    67.063341182929165      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    7004.4732217943283      );
  id7 -> SetBinError( xbin,    84.539984506204576      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9114.2361747976756      );
  id7 -> SetBinError( xbin,    93.060631536538438      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    11787.748532269492      );
  id7 -> SetBinError( xbin,    105.27996350969362      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    14586.462496786809      );
  id7 -> SetBinError( xbin,    117.02144660912190      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    17288.182497489288      );
  id7 -> SetBinError( xbin,    127.25129887458493      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    20443.677469414775      );
  id7 -> SetBinError( xbin,    140.71178300369195      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    23198.574136936873      );
  id7 -> SetBinError( xbin,    151.47746919196268      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    25600.336268408832      );
  id7 -> SetBinError( xbin,    160.10488861021801      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    27832.791473929406      );
  id7 -> SetBinError( xbin,    170.86238322157936      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    30090.208155342800      );
  id7 -> SetBinError( xbin,    180.90067199111479      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    31545.735876482009      );
  id7 -> SetBinError( xbin,    188.31541906283991      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    32773.635172166869      );
  id7 -> SetBinError( xbin,    194.04551422902537      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    33765.779734735246      );
  id7 -> SetBinError( xbin,    199.28001199934573      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    33841.141448946022      );
  id7 -> SetBinError( xbin,    199.95214622962573      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    33796.372610183826      );
  id7 -> SetBinError( xbin,    202.17137679733159      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    33707.915139206903      );
  id7 -> SetBinError( xbin,    203.33382137388114      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    32942.674174567466      );
  id7 -> SetBinError( xbin,    200.92090340662827      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    31517.329674378270      );
  id7 -> SetBinError( xbin,    197.14065661006603      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    29699.736009684973      );
  id7 -> SetBinError( xbin,    186.33324732686859      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    27632.627243145660      );
  id7 -> SetBinError( xbin,    179.00164747471692      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    25746.577444555027      );
  id7 -> SetBinError( xbin,    171.90549855376568      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    23506.308789587605      );
  id7 -> SetBinError( xbin,    161.85889039910202      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    20964.775171514859      );
  id7 -> SetBinError( xbin,    152.51234658558775      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    18188.892084489151      );
  id7 -> SetBinError( xbin,    138.93138641852909      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    15490.299611114271      );
  id7 -> SetBinError( xbin,    127.04940668716176      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    12964.955172789427      );
  id7 -> SetBinError( xbin,    113.33858197361756      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    10664.305094520383      );
  id7 -> SetBinError( xbin,    103.22303517321002      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    8249.8066131203723      );
  id7 -> SetBinError( xbin,    90.240905885772733      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    6344.7863121816372      );
  id7 -> SetBinError( xbin,    80.475108951856640      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    4687.6870729655930      );
  id7 -> SetBinError( xbin,    72.310864115485145      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    3468.2592087966436      );
  id8 -> SetBinError( xbin,    21.152716059932310      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    6295.5265490434795      );
  id8 -> SetBinError( xbin,    28.580025225407169      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    5486.2820523410992      );
  id8 -> SetBinError( xbin,    25.857611777201861      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    4807.6171239125188      );
  id8 -> SetBinError( xbin,    23.989925722807353      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    4258.3617756335479      );
  id8 -> SetBinError( xbin,    22.420359491295688      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    3758.7025611310546      );
  id8 -> SetBinError( xbin,    21.153428910049126      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    3328.5984579260835      );
  id8 -> SetBinError( xbin,    19.739767878384807      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    2964.1873664226364      );
  id8 -> SetBinError( xbin,    18.430739901762291      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    2669.4626638096488      );
  id8 -> SetBinError( xbin,    17.244619269324250      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2364.9185535758470      );
  id8 -> SetBinError( xbin,    16.194639023959972      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2148.7635953736180      );
  id8 -> SetBinError( xbin,    15.351792453220465      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    1915.1118108257497      );
  id8 -> SetBinError( xbin,    14.420376725229822      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    1740.3608102826283      );
  id8 -> SetBinError( xbin,    13.368699313663098      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1565.3022181945607      );
  id8 -> SetBinError( xbin,    12.652366211332184      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1424.4779552553462      );
  id8 -> SetBinError( xbin,    12.009734921567892      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1313.1092575374632      );
  id8 -> SetBinError( xbin,    11.580341705058084      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1214.7491901172332      );
  id8 -> SetBinError( xbin,    11.390585219057092      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1091.2830417408743      );
  id8 -> SetBinError( xbin,    10.434336675136764      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    990.43835783433826      );
  id8 -> SetBinError( xbin,    9.8141550583612194      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    925.80634891113607      );
  id8 -> SetBinError( xbin,    9.7373826379068582      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    851.42575661122760      );
  id8 -> SetBinError( xbin,    8.9229747156431110      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    773.38800332172093      );
  id8 -> SetBinError( xbin,    8.6800449309864298      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    726.30460353397098      );
  id8 -> SetBinError( xbin,    8.0865260597733055      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    654.01269262387382      );
  id8 -> SetBinError( xbin,    7.6839281022151829      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    601.45388026804312      );
  id8 -> SetBinError( xbin,    7.3409747600163531      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    550.25434282740298      );
  id8 -> SetBinError( xbin,    7.2081206362007322      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    506.92791505760692      );
  id8 -> SetBinError( xbin,    6.7021826366247002      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    485.37230495582702      );
  id8 -> SetBinError( xbin,    6.5761271146143123      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
