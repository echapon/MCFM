// Cross-section is:      1700248.5116889195 +/-          704.6068727487)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -31779.79454   -1.87%
//        GQB    |      -27110.24468   -1.59%
//        QG     |      -28338.23642   -1.67%
//        QBG    |      -27239.14938   -1.60%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      801529.92658   47.14%
//        QBQ    |     1018457.16000   59.90%

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
//Wm_nCTEQ                        [runstring]  
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
//eSTARn11_207_103.LHp            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_eSTARn1_80__80__Wm_nCTEQ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    3.1578588758140341E-003 );
  id1 -> SetBinError( xbin,    9.1394600269184695E-003 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    11.854633297658921      );
  id1 -> SetBinError( xbin,    2.0172967498338452      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    202.20736155415545      );
  id1 -> SetBinError( xbin,    18.548111244223659      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1717.6668776110630      );
  id1 -> SetBinError( xbin,    148.93522373384639      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    7560.9760110747484      );
  id1 -> SetBinError( xbin,    362.76285967715779      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    24733.437055501756      );
  id1 -> SetBinError( xbin,    623.63954043424985      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    60462.817393953388      );
  id1 -> SetBinError( xbin,    1054.1699071096982      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    117577.50557119498      );
  id1 -> SetBinError( xbin,    1194.9566503608976      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    186884.39340971306      );
  id1 -> SetBinError( xbin,    1424.6272963511310      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    269724.63627943990      );
  id1 -> SetBinError( xbin,    1635.2915908777513      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    334871.96572911792      );
  id1 -> SetBinError( xbin,    1760.9823653798942      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    382616.61170889880      );
  id1 -> SetBinError( xbin,    1827.9322043727802      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    399649.62841609004      );
  id1 -> SetBinError( xbin,    1873.9056679392761      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    406711.27358440449      );
  id1 -> SetBinError( xbin,    1902.5345792629753      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    410377.89969447203      );
  id1 -> SetBinError( xbin,    1858.5029166942777      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    412514.55772105121      );
  id1 -> SetBinError( xbin,    1836.9750454402661      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    412420.45298713143      );
  id1 -> SetBinError( xbin,    1835.9608544287807      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    410032.10972024058      );
  id1 -> SetBinError( xbin,    1840.4660032328311      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    394001.03252092557      );
  id1 -> SetBinError( xbin,    1794.0518465495625      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    390257.86465767387      );
  id1 -> SetBinError( xbin,    1844.2287436787929      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    377763.13320922124      );
  id1 -> SetBinError( xbin,    1818.2019976641880      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    359931.89293816115      );
  id1 -> SetBinError( xbin,    1705.2003626876556      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    347866.71353790624      );
  id1 -> SetBinError( xbin,    1680.2253526849472      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    334953.54217133857      );
  id1 -> SetBinError( xbin,    1659.9924131816038      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    316086.76757206535      );
  id1 -> SetBinError( xbin,    1615.3856330548908      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    300953.44520826900      );
  id1 -> SetBinError( xbin,    1597.4062244312129      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    291076.11173973634      );
  id1 -> SetBinError( xbin,    1564.8410254893497      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    274274.48125320807      );
  id1 -> SetBinError( xbin,    1536.3388742576813      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    258115.75701414165      );
  id1 -> SetBinError( xbin,    1515.8533821007793      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    244265.11296911279      );
  id1 -> SetBinError( xbin,    1477.7877262727500      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    224001.39818877328      );
  id1 -> SetBinError( xbin,    1431.4842289309338      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    189384.97031591937      );
  id1 -> SetBinError( xbin,    1356.3291128990099      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    146880.41763859321      );
  id1 -> SetBinError( xbin,    1235.5760850607433      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    101575.01877241358      );
  id1 -> SetBinError( xbin,    1154.0557065699784      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    60873.163923645952      );
  id1 -> SetBinError( xbin,    1067.1949357867454      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    33234.290510716484      );
  id1 -> SetBinError( xbin,    678.85642562427597      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    13540.205401674533      );
  id1 -> SetBinError( xbin,    487.42288535054917      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    3714.0213350054059      );
  id1 -> SetBinError( xbin,    185.52133637631982      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    827.86143846330287      );
  id1 -> SetBinError( xbin,    55.339533278023495      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    94.012680291863944      );
  id1 -> SetBinError( xbin,    8.6484902632033780      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    5.1100075959831557      );
  id1 -> SetBinError( xbin,   0.84089508721172745      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.2818565504051542E-003 );
  id1 -> SetBinError( xbin,    1.4587625274323217E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    505924.83187198325      );
  id2 -> SetBinError( xbin,    4303.4513756186925      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    496253.47708372888      );
  id2 -> SetBinError( xbin,    4796.4515503170514      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    467803.51026981056      );
  id2 -> SetBinError( xbin,    4706.7974830140001      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    440847.52116813167      );
  id2 -> SetBinError( xbin,    3533.6512259721108      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    425860.27723684500      );
  id2 -> SetBinError( xbin,    3536.8346212665010      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    401243.06512743572      );
  id2 -> SetBinError( xbin,    3083.4177446954955      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    376649.07193358993      );
  id2 -> SetBinError( xbin,    2510.4800478721772      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    361157.67120751715      );
  id2 -> SetBinError( xbin,    2683.0810412636988      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    335778.19458096055      );
  id2 -> SetBinError( xbin,    2125.2299643077554      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    314437.78223256901      );
  id2 -> SetBinError( xbin,    2064.3961523850376      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    296274.49227625364      );
  id2 -> SetBinError( xbin,    2193.7776382011552      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    272740.21959250566      );
  id2 -> SetBinError( xbin,    1708.5147966497827      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    252892.71442024587      );
  id2 -> SetBinError( xbin,    1706.0525064642563      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    230990.90777725950      );
  id2 -> SetBinError( xbin,    1214.2503076530595      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    213818.86974358952      );
  id2 -> SetBinError( xbin,    1155.0058287365773      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    194959.48226575641      );
  id2 -> SetBinError( xbin,    1157.1983061166368      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    176258.18268498938      );
  id2 -> SetBinError( xbin,    986.78111540746363      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    158561.28094529413      );
  id2 -> SetBinError( xbin,    908.08241189366606      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    142276.05299159916      );
  id2 -> SetBinError( xbin,    1051.7883640700616      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    125561.34984585328      );
  id2 -> SetBinError( xbin,    771.98954439035992      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    110051.46249017409      );
  id2 -> SetBinError( xbin,    916.26176789704402      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    96099.748217062952      );
  id2 -> SetBinError( xbin,    615.10039182772755      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    84085.111807735695      );
  id2 -> SetBinError( xbin,    548.42925340429360      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    73166.822800032154      );
  id2 -> SetBinError( xbin,    520.34636960208093      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    65131.186855238913      );
  id2 -> SetBinError( xbin,    456.89430146939441      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    57462.989661886299      );
  id2 -> SetBinError( xbin,    802.45047963607749      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    50200.334662096968      );
  id2 -> SetBinError( xbin,    409.29293827475027      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    46248.183754419973      );
  id2 -> SetBinError( xbin,    407.99050183828518      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    42681.556059310249      );
  id2 -> SetBinError( xbin,    363.26245972121677      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    42397.237887135219      );
  id2 -> SetBinError( xbin,    761.95681654108034      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    40471.299568347749      );
  id2 -> SetBinError( xbin,    343.86596976349216      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    42484.360082058847      );
  id2 -> SetBinError( xbin,    406.33634641537196      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    44720.925529488792      );
  id2 -> SetBinError( xbin,    389.56230148057864      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    48759.269274846236      );
  id2 -> SetBinError( xbin,    431.34959465192821      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    54257.826021176734      );
  id2 -> SetBinError( xbin,    499.97405833385108      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    60088.856509007725      );
  id2 -> SetBinError( xbin,    493.02112983315203      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    66561.043504135756      );
  id2 -> SetBinError( xbin,    476.40703591113066      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    75523.310994265048      );
  id2 -> SetBinError( xbin,    618.68362591131279      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    85512.797246668779      );
  id2 -> SetBinError( xbin,    617.66002440703653      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    95034.234570652377      );
  id2 -> SetBinError( xbin,    665.25729245403170      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    106604.01536281535      );
  id2 -> SetBinError( xbin,    803.95434378080370      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    119168.74806943795      );
  id2 -> SetBinError( xbin,    814.16284680818330      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    132901.55096042412      );
  id2 -> SetBinError( xbin,    908.99462370103356      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    146391.20457973017      );
  id2 -> SetBinError( xbin,    986.28620646566515      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    162547.15721416121      );
  id2 -> SetBinError( xbin,    1751.2421334080771      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    174280.74497272086      );
  id2 -> SetBinError( xbin,    1371.4157170312269      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    189538.18244790426      );
  id2 -> SetBinError( xbin,    1376.0605146903858      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    203561.84712063309      );
  id2 -> SetBinError( xbin,    1419.1743466880916      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    220092.91611241555      );
  id2 -> SetBinError( xbin,    2779.5535414629444      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    228950.65545035189      );
  id2 -> SetBinError( xbin,    2025.0333850108293      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    248887.62873437503      );
  id2 -> SetBinError( xbin,    1708.6030509211762      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    261753.65141251765      );
  id2 -> SetBinError( xbin,    2040.3716102838805      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    276949.58653573121      );
  id2 -> SetBinError( xbin,    2034.2828357766355      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    292803.96516646468      );
  id2 -> SetBinError( xbin,    2675.8971008307822      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    306351.60628954420      );
  id2 -> SetBinError( xbin,    3100.1748633080656      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    325354.42271510651      );
  id2 -> SetBinError( xbin,    4999.1942465594875      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    340372.24471594585      );
  id2 -> SetBinError( xbin,    3456.8481207336085      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    347708.59807278146      );
  id2 -> SetBinError( xbin,    3391.9897470080555      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    367325.03906032024      );
  id2 -> SetBinError( xbin,    3675.4469163857834      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    384818.61079132021      );
  id2 -> SetBinError( xbin,    4600.1114971153174      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    264819.35149978299      );
  id3 -> SetBinError( xbin,    2170.6512104567951      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    291152.26032865670      );
  id3 -> SetBinError( xbin,    2043.7366666277985      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    308453.22501747112      );
  id3 -> SetBinError( xbin,    1898.0634407853918      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    324766.05032378976      );
  id3 -> SetBinError( xbin,    1883.7785425427157      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    334429.08188348706      );
  id3 -> SetBinError( xbin,    1819.7156049329085      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    340528.49402343069      );
  id3 -> SetBinError( xbin,    1772.9944237980394      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    345816.45283663669      );
  id3 -> SetBinError( xbin,    1729.7659148702176      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    351108.14686404908      );
  id3 -> SetBinError( xbin,    1693.9286130384398      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    353025.82201011915      );
  id3 -> SetBinError( xbin,    1680.9451599919566      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    353289.21264334628      );
  id3 -> SetBinError( xbin,    1653.5587838239971      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    350688.20156621747      );
  id3 -> SetBinError( xbin,    1630.3428264441766      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    347609.18553910818      );
  id3 -> SetBinError( xbin,    1630.4068530659288      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    343527.05945585202      );
  id3 -> SetBinError( xbin,    1622.7369722264036      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    337043.80104614899      );
  id3 -> SetBinError( xbin,    1590.2522610531917      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    329727.49370369106      );
  id3 -> SetBinError( xbin,    2108.7387492337971      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    320766.61996857496      );
  id3 -> SetBinError( xbin,    2104.2320457302185      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    310587.45536431554      );
  id3 -> SetBinError( xbin,    1533.7221565852642      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    300695.98253338010      );
  id3 -> SetBinError( xbin,    1518.6865571872402      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    286057.03488231346      );
  id3 -> SetBinError( xbin,    1515.2718143359727      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    272744.27948832896      );
  id3 -> SetBinError( xbin,    1521.7087319774012      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    260182.87108360813      );
  id3 -> SetBinError( xbin,    1502.5761126642217      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    247090.73955832087      );
  id3 -> SetBinError( xbin,    1439.6233512078245      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    234311.50748906331      );
  id3 -> SetBinError( xbin,    1421.0431492123469      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    225384.55049403879      );
  id3 -> SetBinError( xbin,    1436.3834414950463      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    213582.44653500189      );
  id3 -> SetBinError( xbin,    1464.0193613679319      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    202263.93913652416      );
  id3 -> SetBinError( xbin,    1465.4581616907151      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    188117.28791635725      );
  id3 -> SetBinError( xbin,    1465.4728455845509      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    169703.33703020806      );
  id3 -> SetBinError( xbin,    1466.3291454730086      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    155997.64587115028      );
  id3 -> SetBinError( xbin,    1516.4888819132941      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    138276.78750636670      );
  id3 -> SetBinError( xbin,    1612.2819931919478      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    87833.373788448225      );
  id4 -> SetBinError( xbin,    2238.9475954611485      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    262892.24060056370      );
  id4 -> SetBinError( xbin,    3194.8680131220194      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    278082.52777573821      );
  id4 -> SetBinError( xbin,    3094.6563651419251      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    289469.29085852340      );
  id4 -> SetBinError( xbin,    3045.8937665867784      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    298412.39795740490      );
  id4 -> SetBinError( xbin,    2886.5142203467872      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    308898.76723869087      );
  id4 -> SetBinError( xbin,    3129.0639274147384      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    317052.87541706866      );
  id4 -> SetBinError( xbin,    3268.5354369044157      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    321122.94263940089      );
  id4 -> SetBinError( xbin,    3027.9675441315071      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    332326.33509523724      );
  id4 -> SetBinError( xbin,    2865.7662349420298      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    333160.55936045980      );
  id4 -> SetBinError( xbin,    2799.9699725641658      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    337393.87750447658      );
  id4 -> SetBinError( xbin,    2692.5547898244395      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    342097.08820170397      );
  id4 -> SetBinError( xbin,    2628.0345459076707      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    341542.39809058449      );
  id4 -> SetBinError( xbin,    3356.2598150971949      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    343727.43844706391      );
  id4 -> SetBinError( xbin,    3316.9473010915494      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    350494.00354686711      );
  id4 -> SetBinError( xbin,    2611.1043686676262      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    350657.46714333748      );
  id4 -> SetBinError( xbin,    2844.1490636432723      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    350621.57325233571      );
  id4 -> SetBinError( xbin,    2785.9751799806641      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    353065.12376435287      );
  id4 -> SetBinError( xbin,    2500.1480626931243      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    351556.32538643829      );
  id4 -> SetBinError( xbin,    2502.7981843709613      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    355205.18926524092      );
  id4 -> SetBinError( xbin,    2538.0482730030940      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    351269.94890589843      );
  id4 -> SetBinError( xbin,    2465.9994266185236      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    352436.66040467395      );
  id4 -> SetBinError( xbin,    2440.8642308158473      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    348507.67375539825      );
  id4 -> SetBinError( xbin,    2446.1160293265293      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    348262.01968515821      );
  id4 -> SetBinError( xbin,    2418.5777485331814      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    346939.08844995458      );
  id4 -> SetBinError( xbin,    2414.0841931925265      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    339068.93020257878      );
  id4 -> SetBinError( xbin,    5292.0977706664398      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    344864.84841217339      );
  id4 -> SetBinError( xbin,    5290.3110159993757      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    339845.57517604000      );
  id4 -> SetBinError( xbin,    2404.2292164253954      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    333773.48298535834      );
  id4 -> SetBinError( xbin,    2372.4152809033412      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    330307.80541625153      );
  id4 -> SetBinError( xbin,    2351.7015663650636      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    326327.68941851542      );
  id4 -> SetBinError( xbin,    2369.0014307065667      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    321564.27063801081      );
  id4 -> SetBinError( xbin,    2401.7324313565059      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    316723.42814193899      );
  id4 -> SetBinError( xbin,    2474.1736328789239      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    310641.42637688614      );
  id4 -> SetBinError( xbin,    2414.6967768229897      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    303233.63212563907      );
  id4 -> SetBinError( xbin,    2294.7087870994219      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    303203.97421772039      );
  id4 -> SetBinError( xbin,    2316.4719412277886      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    295992.41198965360      );
  id4 -> SetBinError( xbin,    2289.4111967469976      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    287704.41577600961      );
  id4 -> SetBinError( xbin,    2250.4553580728925      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    277004.56570113444      );
  id4 -> SetBinError( xbin,    2259.4357718278416      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    273534.93047485693      );
  id4 -> SetBinError( xbin,    2281.1104319055266      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    270457.88447032351      );
  id4 -> SetBinError( xbin,    2268.5335605698733      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    260172.39051756207      );
  id4 -> SetBinError( xbin,    2245.4221828873788      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    258027.28608396638      );
  id4 -> SetBinError( xbin,    3706.0191968574495      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    246301.95119254105      );
  id4 -> SetBinError( xbin,    3717.6304071783247      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    242214.02778427029      );
  id4 -> SetBinError( xbin,    2168.1184039894861      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    232532.98422779792      );
  id4 -> SetBinError( xbin,    2144.4797341048220      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    228824.73697802625      );
  id4 -> SetBinError( xbin,    2656.6646058249717      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    229104.86661066423      );
  id4 -> SetBinError( xbin,    2655.1533143334946      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    220896.33390067119      );
  id4 -> SetBinError( xbin,    2209.7590487306925      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    211460.66806626684      );
  id4 -> SetBinError( xbin,    2208.5616600817098      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    209279.39292071370      );
  id4 -> SetBinError( xbin,    2515.1667711467398      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    203188.60891023432      );
  id4 -> SetBinError( xbin,    2521.6224062541987      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    195665.23262986098      );
  id4 -> SetBinError( xbin,    2151.3092912395914      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    191171.99437532743      );
  id4 -> SetBinError( xbin,    2173.3802909823953      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    181365.02968128573      );
  id4 -> SetBinError( xbin,    2223.0432905554244      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    172619.93231587423      );
  id4 -> SetBinError( xbin,    2228.7197050724890      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    25703.217195485762      );
  id5 -> SetBinError( xbin,    237.04093071784158      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    55874.268867363469      );
  id5 -> SetBinError( xbin,    306.09926840482615      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    64066.339958599128      );
  id5 -> SetBinError( xbin,    339.87635880758887      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    72541.223302442275      );
  id5 -> SetBinError( xbin,    405.39598132512430      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    81922.344212576165      );
  id5 -> SetBinError( xbin,    452.17544931721613      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    96986.725767444688      );
  id5 -> SetBinError( xbin,    466.51361170306018      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    116876.21988011662      );
  id5 -> SetBinError( xbin,    500.13828755277399      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    141265.21733136004      );
  id5 -> SetBinError( xbin,    592.73932835791311      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    90187.751000650867      );
  id5 -> SetBinError( xbin,    447.21976582397946      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    33282.757038633965      );
  id5 -> SetBinError( xbin,    154.99934616591008      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    17450.808377682377      );
  id5 -> SetBinError( xbin,    99.650427199150101      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    11078.242024921758      );
  id5 -> SetBinError( xbin,    73.047193861884040      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    7753.4793788303759      );
  id5 -> SetBinError( xbin,    60.100621636648015      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    5801.4465439766536      );
  id5 -> SetBinError( xbin,    42.357153365563953      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4404.2368243916053      );
  id5 -> SetBinError( xbin,    35.411633338388221      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3602.1219657618867      );
  id5 -> SetBinError( xbin,    31.437720447178659      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    2835.5812554650729      );
  id5 -> SetBinError( xbin,    27.515974846114126      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2353.9402826482428      );
  id5 -> SetBinError( xbin,    25.896105516775076      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    1984.0530756512235      );
  id5 -> SetBinError( xbin,    23.444165698797885      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1718.0835912821549      );
  id5 -> SetBinError( xbin,    20.623777594713012      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1422.4773045357522      );
  id5 -> SetBinError( xbin,    19.054720973835817      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1211.3148328192017      );
  id5 -> SetBinError( xbin,    17.014293850460724      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1063.7937030987075      );
  id5 -> SetBinError( xbin,    16.637345482373416      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    923.25347506397964      );
  id5 -> SetBinError( xbin,    16.430559415123991      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    817.67287075984575      );
  id5 -> SetBinError( xbin,    14.153455404419606      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    682.73446216930017      );
  id5 -> SetBinError( xbin,    12.152003191030857      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    627.81894328819362      );
  id5 -> SetBinError( xbin,    13.803318567845581      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    556.71110179133416      );
  id5 -> SetBinError( xbin,    14.265155912045257      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    478.77054565814507      );
  id5 -> SetBinError( xbin,    11.486340190536279      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    411.68334254553395      );
  id5 -> SetBinError( xbin,    9.7644094661785932      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    379.38245662640753      );
  id5 -> SetBinError( xbin,    9.3361472495198523      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    336.36836059416328      );
  id5 -> SetBinError( xbin,    8.3383143582687325      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    307.75717865374145      );
  id5 -> SetBinError( xbin,    9.3175396524368939      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    286.47901734619921      );
  id5 -> SetBinError( xbin,    8.5530895193494576      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    287.35636871553800      );
  id5 -> SetBinError( xbin,    49.580554543725022      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    180.75829297435837      );
  id5 -> SetBinError( xbin,    49.489236819475813      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    200.59108674713033      );
  id5 -> SetBinError( xbin,    7.0720689523274229      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    185.45941922228565      );
  id5 -> SetBinError( xbin,    8.3373697203060217      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1286.3780167533894      );
  id6 -> SetBinError( xbin,    24.198042724448044      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    4220.2148612799238      );
  id6 -> SetBinError( xbin,    43.995730653875668      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    8288.2983203777821      );
  id6 -> SetBinError( xbin,    61.167326425143600      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    14227.210374808190      );
  id6 -> SetBinError( xbin,    77.406729723227329      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    22968.384266521374      );
  id6 -> SetBinError( xbin,    93.531639856700266      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    37095.620291433828      );
  id6 -> SetBinError( xbin,    113.76976286417676      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    64103.439493445541      );
  id6 -> SetBinError( xbin,    151.84073783481583      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    104139.33108188758      );
  id6 -> SetBinError( xbin,    210.57931056918352      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    45746.662589698157      );
  id6 -> SetBinError( xbin,    167.40896499563573      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    17608.694958234319      );
  id6 -> SetBinError( xbin,    123.84004968349528      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    7219.1120396121469      );
  id6 -> SetBinError( xbin,    90.165755035502329      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2887.2976380598225      );
  id6 -> SetBinError( xbin,    64.580579726869843      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    6230.6059753564932      );
  id7 -> SetBinError( xbin,    70.003648695560457      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    8168.7714261490910      );
  id7 -> SetBinError( xbin,    78.954176844644181      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    11112.147612573446      );
  id7 -> SetBinError( xbin,    93.132627606709804      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    13886.088978277439      );
  id7 -> SetBinError( xbin,    105.29216966910383      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    16992.669154070052      );
  id7 -> SetBinError( xbin,    118.67567375409610      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    20209.952537439676      );
  id7 -> SetBinError( xbin,    128.66668177015396      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    23224.861651704618      );
  id7 -> SetBinError( xbin,    141.33956030760459      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    26277.433473953366      );
  id7 -> SetBinError( xbin,    152.99798590857722      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    28973.816030772032      );
  id7 -> SetBinError( xbin,    164.98642172403143      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    31072.702489199932      );
  id7 -> SetBinError( xbin,    173.53695376339826      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    33173.078125073655      );
  id7 -> SetBinError( xbin,    180.29605807477287      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    34652.664248150708      );
  id7 -> SetBinError( xbin,    187.43815773661044      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    35616.546903908937      );
  id7 -> SetBinError( xbin,    191.14182975290126      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    35571.586490502508      );
  id7 -> SetBinError( xbin,    192.57348949105247      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    35898.212990752145      );
  id7 -> SetBinError( xbin,    194.08819883038876      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    34912.312716952780      );
  id7 -> SetBinError( xbin,    191.30942483705613      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    34120.132094750108      );
  id7 -> SetBinError( xbin,    190.89202397133332      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    32320.248187797548      );
  id7 -> SetBinError( xbin,    187.00443490093468      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    30597.529908328819      );
  id7 -> SetBinError( xbin,    178.89038276883963      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    28297.500905882349      );
  id7 -> SetBinError( xbin,    170.76340790787461      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    25546.195169008774      );
  id7 -> SetBinError( xbin,    159.95529167376515      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    23013.999626256656      );
  id7 -> SetBinError( xbin,    150.61876197014033      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    20637.084612001086      );
  id7 -> SetBinError( xbin,    142.50863960113605      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    17498.477055006395      );
  id7 -> SetBinError( xbin,    129.24631196819433      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    14824.766025528073      );
  id7 -> SetBinError( xbin,    118.59323647596469      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    12314.333635618181      );
  id7 -> SetBinError( xbin,    106.92189783159610      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    9999.4803555809340      );
  id7 -> SetBinError( xbin,    96.515660740021104      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    7505.5938763959803      );
  id7 -> SetBinError( xbin,    79.937782706250388      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    5814.4832025239884      );
  id7 -> SetBinError( xbin,    72.673515436276219      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    4158.3473884067052      );
  id7 -> SetBinError( xbin,    61.923048609666857      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    3503.8922135455441      );
  id8 -> SetBinError( xbin,    20.129469420318863      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    6307.8442163882291      );
  id8 -> SetBinError( xbin,    26.653939284690807      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    5531.2845554698979      );
  id8 -> SetBinError( xbin,    24.682945113564827      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    4880.7240849309237      );
  id8 -> SetBinError( xbin,    22.780285059030412      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    4303.8109528839332      );
  id8 -> SetBinError( xbin,    21.394894267451846      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    3798.2278317803321      );
  id8 -> SetBinError( xbin,    19.886267431894453      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    3360.9666251002291      );
  id8 -> SetBinError( xbin,    18.622806895091749      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    3009.6373195683555      );
  id8 -> SetBinError( xbin,    17.405576602928637      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    2688.1598587377871      );
  id8 -> SetBinError( xbin,    16.366355704684018      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2400.7344016611714      );
  id8 -> SetBinError( xbin,    15.282755939708936      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2171.7890747487072      );
  id8 -> SetBinError( xbin,    14.446818382086564      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    1956.1500230138272      );
  id8 -> SetBinError( xbin,    13.489081568662227      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    1760.7926582554364      );
  id8 -> SetBinError( xbin,    12.789111030788563      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1610.0018428982289      );
  id8 -> SetBinError( xbin,    12.107091611843376      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1462.0554500546968      );
  id8 -> SetBinError( xbin,    11.469767657020441      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1337.9189995587440      );
  id8 -> SetBinError( xbin,    10.882745511104849      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1209.7488316562110      );
  id8 -> SetBinError( xbin,    10.288122833074514      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1094.9891868563730      );
  id8 -> SetBinError( xbin,    9.7351716966390054      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1011.0376137450303      );
  id8 -> SetBinError( xbin,    9.1176603072507643      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    941.96506045895057      );
  id8 -> SetBinError( xbin,    8.9989666970028477      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    861.33003435893079      );
  id8 -> SetBinError( xbin,    8.4169488908318826      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    786.63808080688932      );
  id8 -> SetBinError( xbin,    8.2433977631646531      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    729.02688560819524      );
  id8 -> SetBinError( xbin,    7.9095863826147284      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    664.80040746365682      );
  id8 -> SetBinError( xbin,    7.1717085546785411      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    609.07491370166213      );
  id8 -> SetBinError( xbin,    6.8236971011505787      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    566.62412435504325      );
  id8 -> SetBinError( xbin,    6.7378578518099905      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    523.62412606311909      );
  id8 -> SetBinError( xbin,    6.4865313787381620      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    486.59247088426883      );
  id8 -> SetBinError( xbin,    6.0836729736254851      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
