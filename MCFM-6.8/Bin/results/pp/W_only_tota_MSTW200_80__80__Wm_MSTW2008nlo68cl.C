// Cross-section is:      1950443.0347844672 +/-          833.3266725429)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -52602.74271   -2.70%
//        GQB    |      -48031.08099   -2.46%
//        QG     |      -51483.97108   -2.64%
//        QBG    |      -46293.64117   -2.37%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1000979.24709   51.32%
//        QBQ    |     1156000.90488   59.27%

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
//Wm_MSTW2008nlo68cl              [runstring]  
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
//             MSTW200            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//MSTW2008nlo68cl.LHpd            [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//MSTW2008nlo68cl.LHpd            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_MSTW200_80__80__Wm_MSTW2008nlo68cl.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    4.9034779313949818E-003 );
  id1 -> SetBinError( xbin,    4.7344554113849463E-003 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    13.731531367284010      );
  id1 -> SetBinError( xbin,    2.5940588531387201      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    322.26621271361523      );
  id1 -> SetBinError( xbin,    47.533810943295585      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2575.9613359928990      );
  id1 -> SetBinError( xbin,    176.83785773837653      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    9400.6318304273354      );
  id1 -> SetBinError( xbin,    443.98031838764484      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    30270.317575110112      );
  id1 -> SetBinError( xbin,    729.08645253237080      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    72530.965914250046      );
  id1 -> SetBinError( xbin,    1181.3932145105396      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    135366.35081872257      );
  id1 -> SetBinError( xbin,    1333.0491058899051      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    208502.62915187530      );
  id1 -> SetBinError( xbin,    1574.5564849122081      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    295053.54470446880      );
  id1 -> SetBinError( xbin,    1892.1700613280154      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    356957.47968600667      );
  id1 -> SetBinError( xbin,    1917.1973886669166      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    403439.96906034328      );
  id1 -> SetBinError( xbin,    1989.9483977040393      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    413824.74731726036      );
  id1 -> SetBinError( xbin,    1983.7437483620085      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    419586.46646636224      );
  id1 -> SetBinError( xbin,    2043.9736879515644      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    423825.88627301838      );
  id1 -> SetBinError( xbin,    2041.8106231438346      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    420212.37549493939      );
  id1 -> SetBinError( xbin,    1976.3261109217583      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    423242.89474378177      );
  id1 -> SetBinError( xbin,    1972.7486411439204      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    419517.34266904043      );
  id1 -> SetBinError( xbin,    1945.7490486930667      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    421552.31564977253      );
  id1 -> SetBinError( xbin,    1950.6132598047354      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    409412.76894732798      );
  id1 -> SetBinError( xbin,    1928.2961396109990      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    416868.40659005451      );
  id1 -> SetBinError( xbin,    1945.7119418990148      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    408518.51420876890      );
  id1 -> SetBinError( xbin,    1932.7391262727408      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    403133.08320668299      );
  id1 -> SetBinError( xbin,    1923.2232608919403      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    400788.58888479468      );
  id1 -> SetBinError( xbin,    1937.5865862348444      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    394453.66828896367      );
  id1 -> SetBinError( xbin,    1915.0371918961027      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    383855.80483625713      );
  id1 -> SetBinError( xbin,    1897.1702808643975      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    372279.64402247395      );
  id1 -> SetBinError( xbin,    1903.1560039215592      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    365320.92297425505      );
  id1 -> SetBinError( xbin,    1864.0991648997635      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    347181.41025117855      );
  id1 -> SetBinError( xbin,    1850.9789073890099      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    327753.97626119718      );
  id1 -> SetBinError( xbin,    1839.2149596858299      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    307120.67709400400      );
  id1 -> SetBinError( xbin,    1803.4373174046211      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    261119.25738556837      );
  id1 -> SetBinError( xbin,    1690.8157686890083      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    199672.45220547973      );
  id1 -> SetBinError( xbin,    1529.4751888658614      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    141795.41477124894      );
  id1 -> SetBinError( xbin,    1314.8315456926507      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    86377.415512168547      );
  id1 -> SetBinError( xbin,    1108.0118638416122      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    44972.303680603887      );
  id1 -> SetBinError( xbin,    921.08064518102344      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    18257.868127897582      );
  id1 -> SetBinError( xbin,    590.44372273447925      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    5702.7008075192425      );
  id1 -> SetBinError( xbin,    291.07590156019586      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1019.8522719976962      );
  id1 -> SetBinError( xbin,    80.863091435864149      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    90.196931767812487      );
  id1 -> SetBinError( xbin,    10.209206292846007      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    1.4968419327995444      );
  id1 -> SetBinError( xbin,   0.31798236299025490      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    2.0349537809079645E-003 );
  id1 -> SetBinError( xbin,    1.4848615848449022E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    862115.18650163605      );
  id2 -> SetBinError( xbin,    9569.1763606291461      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    811768.08229135908      );
  id2 -> SetBinError( xbin,    7511.7039261880400      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    778531.11032907292      );
  id2 -> SetBinError( xbin,    7520.5014702996032      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    738398.50930389925      );
  id2 -> SetBinError( xbin,    8395.2541265699547      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    695526.56898284610      );
  id2 -> SetBinError( xbin,    5603.4829417915425      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    665374.32092438149      );
  id2 -> SetBinError( xbin,    6057.4065545175463      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    622893.22104687046      );
  id2 -> SetBinError( xbin,    4008.0908233283594      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    590985.63897730026      );
  id2 -> SetBinError( xbin,    4190.4711318936716      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    555117.11823841510      );
  id2 -> SetBinError( xbin,    4005.6502045182729      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    523891.24491714576      );
  id2 -> SetBinError( xbin,    4582.2989020960922      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    484397.88144456950      );
  id2 -> SetBinError( xbin,    2835.6502481739344      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    457361.77287319070      );
  id2 -> SetBinError( xbin,    4980.4744456579610      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    424952.01774105523      );
  id2 -> SetBinError( xbin,    2940.0174944267778      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    386975.07917892269      );
  id2 -> SetBinError( xbin,    2386.8072525692555      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    355609.75631424441      );
  id2 -> SetBinError( xbin,    2006.9930989481770      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    321801.23489233217      );
  id2 -> SetBinError( xbin,    2137.0076411521418      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    296308.16574407043      );
  id2 -> SetBinError( xbin,    4428.9779747395723      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    260837.27372886229      );
  id2 -> SetBinError( xbin,    1652.2075184083035      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    234528.99039051670      );
  id2 -> SetBinError( xbin,    1446.3794169538055      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    204902.44794809708      );
  id2 -> SetBinError( xbin,    1306.2189892884603      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    185061.77811486233      );
  id2 -> SetBinError( xbin,    2694.6226472929352      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    159092.53647103091      );
  id2 -> SetBinError( xbin,    1044.6957533794948      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    139736.06665854895      );
  id2 -> SetBinError( xbin,    1034.0712143935000      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    120825.19076837497      );
  id2 -> SetBinError( xbin,    888.52742500049840      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    107782.39577896748      );
  id2 -> SetBinError( xbin,    818.48080342813944      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    94754.761359636293      );
  id2 -> SetBinError( xbin,    846.47045306672521      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    85012.712589424264      );
  id2 -> SetBinError( xbin,    753.95365268848218      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    77446.385611223101      );
  id2 -> SetBinError( xbin,    676.46915575568153      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    71653.626840431054      );
  id2 -> SetBinError( xbin,    652.61580358923027      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    69313.075901792981      );
  id2 -> SetBinError( xbin,    633.64292869921258      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    69953.882665797821      );
  id2 -> SetBinError( xbin,    717.09794310696986      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    71571.494674336354      );
  id2 -> SetBinError( xbin,    628.66720630103521      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    75190.761193196871      );
  id2 -> SetBinError( xbin,    653.10256789867458      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    81935.498643849933      );
  id2 -> SetBinError( xbin,    815.80137102639924      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    90666.580120296858      );
  id2 -> SetBinError( xbin,    707.99039323411273      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    102143.66742407525      );
  id2 -> SetBinError( xbin,    764.54611859343720      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    117122.34989986970      );
  id2 -> SetBinError( xbin,    959.09901276096366      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    132187.43638880996      );
  id2 -> SetBinError( xbin,    969.69047835342462      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    150372.52111055658      );
  id2 -> SetBinError( xbin,    1147.9140706195028      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    170228.93241143550      );
  id2 -> SetBinError( xbin,    1383.2038209671323      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    190298.21631080389      );
  id2 -> SetBinError( xbin,    1253.2744114565403      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    214509.15599792401      );
  id2 -> SetBinError( xbin,    1387.4512381315317      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    239467.27380896147      );
  id2 -> SetBinError( xbin,    1601.4571074991698      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    260147.66000362765      );
  id2 -> SetBinError( xbin,    1584.2304723409623      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    294073.74078034883      );
  id2 -> SetBinError( xbin,    1858.3058370195865      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    316090.37984585157      );
  id2 -> SetBinError( xbin,    1862.4260242642365      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    352711.21929490328      );
  id2 -> SetBinError( xbin,    2730.3582490328845      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    376086.19221273786      );
  id2 -> SetBinError( xbin,    2626.1536075071695      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    402476.73232857161      );
  id2 -> SetBinError( xbin,    3045.7882640134135      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    439510.41326440545      );
  id2 -> SetBinError( xbin,    3280.6248150848278      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    475986.76113052061      );
  id2 -> SetBinError( xbin,    5992.0786078530127      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    490552.65350403433      );
  id2 -> SetBinError( xbin,    3891.4140410609975      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    516722.87281388999      );
  id2 -> SetBinError( xbin,    3371.3008793863833      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    557699.91836832988      );
  id2 -> SetBinError( xbin,    4114.4830396031830      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    588612.35362471815      );
  id2 -> SetBinError( xbin,    6168.0996654792261      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    618769.22280385438      );
  id2 -> SetBinError( xbin,    5411.4019037179532      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    654143.54296955047      );
  id2 -> SetBinError( xbin,    11259.846103876265      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    671168.70257935883      );
  id2 -> SetBinError( xbin,    5917.7185351629660      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    719493.45447656093      );
  id2 -> SetBinError( xbin,    9994.1223414055894      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    720443.39770363923      );
  id2 -> SetBinError( xbin,    7058.4561473249569      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    284896.88275112951      );
  id3 -> SetBinError( xbin,    2508.4976194604383      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    308478.86104750028      );
  id3 -> SetBinError( xbin,    2336.0186649992197      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    325134.79741223913      );
  id3 -> SetBinError( xbin,    2216.0271395466907      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    337782.30798006890      );
  id3 -> SetBinError( xbin,    2088.9094601512156      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    352290.92667506379      );
  id3 -> SetBinError( xbin,    2047.5203715607054      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    354025.98339096888      );
  id3 -> SetBinError( xbin,    1977.8021465228326      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    359853.10083925468      );
  id3 -> SetBinError( xbin,    1937.5685598567638      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    366052.58829239506      );
  id3 -> SetBinError( xbin,    1907.1320154790628      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    369675.41151073464      );
  id3 -> SetBinError( xbin,    1880.3773763185743      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    372042.47885967197      );
  id3 -> SetBinError( xbin,    1920.4794366277422      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    373025.04176714667      );
  id3 -> SetBinError( xbin,    1913.3136939666167      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    372142.92733682168      );
  id3 -> SetBinError( xbin,    2226.6243783553577      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    369515.84804416844      );
  id3 -> SetBinError( xbin,    2218.1806171657986      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    367896.88727762667      );
  id3 -> SetBinError( xbin,    1839.9579098149013      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    368002.76980594947      );
  id3 -> SetBinError( xbin,    2522.1368500422755      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    366582.74869002186      );
  id3 -> SetBinError( xbin,    2500.4026535820376      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    361171.39940001548      );
  id3 -> SetBinError( xbin,    1822.1345141483164      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    354798.81163800001      );
  id3 -> SetBinError( xbin,    1802.6658627626935      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    348605.52964172128      );
  id3 -> SetBinError( xbin,    1777.8132240427708      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    343662.43409691908      );
  id3 -> SetBinError( xbin,    1843.5705053459947      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    329677.07653433591      );
  id3 -> SetBinError( xbin,    1840.2188597497459      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    323963.67126873089      );
  id3 -> SetBinError( xbin,    1804.1683817886319      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    311023.18514016090      );
  id3 -> SetBinError( xbin,    1801.7371945729440      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    298876.62228247942      );
  id3 -> SetBinError( xbin,    1793.0724802594586      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    285997.53217103967      );
  id3 -> SetBinError( xbin,    1823.8990550726601      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    272688.38190889091      );
  id3 -> SetBinError( xbin,    2365.1262234987225      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    253400.39010939840      );
  id3 -> SetBinError( xbin,    2370.7243845509406      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    230854.63249733506      );
  id3 -> SetBinError( xbin,    1881.4927907426616      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    208404.43662653503      );
  id3 -> SetBinError( xbin,    1896.8753398566937      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    181368.64247970123      );
  id3 -> SetBinError( xbin,    1994.1149960196349      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    94732.899180970751      );
  id4 -> SetBinError( xbin,    3096.0092315445027      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    279665.33964079194      );
  id4 -> SetBinError( xbin,    3913.8544086845022      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    298055.66930333938      );
  id4 -> SetBinError( xbin,    3827.4704830527621      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    310104.14991674229      );
  id4 -> SetBinError( xbin,    3582.8680625077745      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    316238.94374765171      );
  id4 -> SetBinError( xbin,    3794.7835272698462      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    323126.56902890350      );
  id4 -> SetBinError( xbin,    3726.0462290082505      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    330901.08054174419      );
  id4 -> SetBinError( xbin,    3374.1889695221266      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    334648.09326815355      );
  id4 -> SetBinError( xbin,    4272.1694655616420      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    348078.72455916862      );
  id4 -> SetBinError( xbin,    4217.8742143816098      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    351765.25018766074      );
  id4 -> SetBinError( xbin,    3196.4575783269288      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    350004.59410212794      );
  id4 -> SetBinError( xbin,    3219.2533837351166      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    354244.08703332464      );
  id4 -> SetBinError( xbin,    3178.8455080513645      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    359252.22126349038      );
  id4 -> SetBinError( xbin,    3423.4194993128513      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    358390.75711283257      );
  id4 -> SetBinError( xbin,    3347.4606618709072      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    362257.68399000319      );
  id4 -> SetBinError( xbin,    3072.2007793723033      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    368608.78245366504      );
  id4 -> SetBinError( xbin,    3060.1813636183992      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    370265.95243269647      );
  id4 -> SetBinError( xbin,    3057.9362825688945      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    366010.19277975592      );
  id4 -> SetBinError( xbin,    3113.2806621659211      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    371157.32785842626      );
  id4 -> SetBinError( xbin,    3019.5124836536220      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    371388.58677484182      );
  id4 -> SetBinError( xbin,    3062.1096931133429      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    369406.70067580283      );
  id4 -> SetBinError( xbin,    3059.1492370036481      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    373199.77264590468      );
  id4 -> SetBinError( xbin,    4088.2941755931970      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    374314.79387767735      );
  id4 -> SetBinError( xbin,    4057.2760398038995      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    369998.51221936266      );
  id4 -> SetBinError( xbin,    2886.0394340941971      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    373300.40161655215      );
  id4 -> SetBinError( xbin,    2957.5191430985606      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    370891.37733493187      );
  id4 -> SetBinError( xbin,    2916.7433707622549      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    368543.77361004299      );
  id4 -> SetBinError( xbin,    2991.2159990001492      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    371378.11534184299      );
  id4 -> SetBinError( xbin,    3016.0938734798083      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    368949.42726320383      );
  id4 -> SetBinError( xbin,    2907.6391590022986      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    364028.58311662398      );
  id4 -> SetBinError( xbin,    2909.0335185865147      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    369134.86984685826      );
  id4 -> SetBinError( xbin,    2861.2479377677823      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    370354.23334559629      );
  id4 -> SetBinError( xbin,    2846.6512240864290      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    358544.97114795574      );
  id4 -> SetBinError( xbin,    2904.7881401539971      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    358866.55668993964      );
  id4 -> SetBinError( xbin,    3327.8994122995350      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    364514.47357418598      );
  id4 -> SetBinError( xbin,    3391.4254261418241      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    352649.88477647438      );
  id4 -> SetBinError( xbin,    3027.7289559703349      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    350579.22871961293      );
  id4 -> SetBinError( xbin,    3414.1118091744511      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    350646.93485887954      );
  id4 -> SetBinError( xbin,    3485.5770016254660      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    348720.48800679622      );
  id4 -> SetBinError( xbin,    3061.9355352715147      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    341404.99081395200      );
  id4 -> SetBinError( xbin,    2985.1601811333780      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    342412.29086762219      );
  id4 -> SetBinError( xbin,    3021.9201104058270      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    325621.76263128500      );
  id4 -> SetBinError( xbin,    2927.2538687548504      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    329528.07745453389      );
  id4 -> SetBinError( xbin,    2967.9456862390484      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    325137.08373793965      );
  id4 -> SetBinError( xbin,    3007.1428398425951      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    316658.70230245497      );
  id4 -> SetBinError( xbin,    2993.9008831392043      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    312473.50415950554      );
  id4 -> SetBinError( xbin,    2985.9295458424149      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    306788.51188844925      );
  id4 -> SetBinError( xbin,    2893.2106934964308      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    299405.05264363316      );
  id4 -> SetBinError( xbin,    2845.3813515989141      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    291532.78766825813      );
  id4 -> SetBinError( xbin,    2850.4144705445106      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    285492.79153854254      );
  id4 -> SetBinError( xbin,    3082.1907622943231      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    284067.09461872996      );
  id4 -> SetBinError( xbin,    3143.2167299292519      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    271286.83416547574      );
  id4 -> SetBinError( xbin,    2885.1935793079756      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    262161.69602331182      );
  id4 -> SetBinError( xbin,    2941.3066268756425      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    259189.57716053087      );
  id4 -> SetBinError( xbin,    3090.0168726717707      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    246365.57670545965      );
  id4 -> SetBinError( xbin,    3108.3837700302929      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    232434.35060673929      );
  id4 -> SetBinError( xbin,    3069.8807523449468      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    29108.144437463019      );
  id5 -> SetBinError( xbin,    312.75508313821382      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    63742.498895743949      );
  id5 -> SetBinError( xbin,    422.22342429706299      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    72773.717058931914      );
  id5 -> SetBinError( xbin,    486.49222866964277      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    81875.700041351549      );
  id5 -> SetBinError( xbin,    580.60411840062545      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    93491.722316977044      );
  id5 -> SetBinError( xbin,    619.50630212341912      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    108585.54756168368      );
  id5 -> SetBinError( xbin,    1055.7435946786627      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    129215.23741756003      );
  id5 -> SetBinError( xbin,    1195.1628307302742      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    126901.97193883095      );
  id5 -> SetBinError( xbin,    990.78339916714538      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    103073.85534692484      );
  id5 -> SetBinError( xbin,    703.06231840311250      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    51296.156520671604      );
  id5 -> SetBinError( xbin,    244.83006098850015      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    27765.658510360361      );
  id5 -> SetBinError( xbin,    146.84876007406785      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17711.437618781853      );
  id5 -> SetBinError( xbin,    100.95545049527006      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12574.948705689780      );
  id5 -> SetBinError( xbin,    76.855737301696749      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9186.0361087802939      );
  id5 -> SetBinError( xbin,    67.906038929811885      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7131.9418976317320      );
  id5 -> SetBinError( xbin,    65.605636998251470      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5815.5747762677538      );
  id5 -> SetBinError( xbin,    99.950577645795619      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4683.1175287660844      );
  id5 -> SetBinError( xbin,    93.404419691168442      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3810.7646320038803      );
  id5 -> SetBinError( xbin,    39.119254533082874      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3271.6803835837995      );
  id5 -> SetBinError( xbin,    36.175277023869725      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2738.0207001387371      );
  id5 -> SetBinError( xbin,    33.850297293093647      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2338.3103366864812      );
  id5 -> SetBinError( xbin,    29.693217323672236      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1967.5856939255686      );
  id5 -> SetBinError( xbin,    27.219867590154085      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1757.3560914200852      );
  id5 -> SetBinError( xbin,    25.888216036386741      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1499.0378839445020      );
  id5 -> SetBinError( xbin,    23.237892968173906      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1298.7102010049116      );
  id5 -> SetBinError( xbin,    24.805347528627024      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1135.6622906929363      );
  id5 -> SetBinError( xbin,    23.622101512228440      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    1018.4571715529949      );
  id5 -> SetBinError( xbin,    19.227043984051704      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    869.60065996523394      );
  id5 -> SetBinError( xbin,    17.722050196135285      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    788.99231495338836      );
  id5 -> SetBinError( xbin,    14.754076134120936      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    687.77807602159305      );
  id5 -> SetBinError( xbin,    23.597332632446147      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    664.76379022199080      );
  id5 -> SetBinError( xbin,    23.707133497592508      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    544.18758014717957      );
  id5 -> SetBinError( xbin,    13.651986068424021      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    503.01806713376692      );
  id5 -> SetBinError( xbin,    12.394150198897266      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    466.57597405281513      );
  id5 -> SetBinError( xbin,    12.881580952201633      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    398.29091686818134      );
  id5 -> SetBinError( xbin,    10.995368998548887      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    383.62373680375663      );
  id5 -> SetBinError( xbin,    11.650407831169161      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    322.41598593008831      );
  id5 -> SetBinError( xbin,    10.004654413212206      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    293.99852041005266      );
  id5 -> SetBinError( xbin,    9.3172330918059085      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2283.6602769694364      );
  id6 -> SetBinError( xbin,    44.243311525177916      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    7318.9820407198176      );
  id6 -> SetBinError( xbin,    76.769776871596719      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    14085.626263216691      );
  id6 -> SetBinError( xbin,    106.03990155569235      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    24359.609511281422      );
  id6 -> SetBinError( xbin,    134.79263937697519      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    39350.217718247288      );
  id6 -> SetBinError( xbin,    163.48616858545378      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    63851.122304854907      );
  id6 -> SetBinError( xbin,    199.15239085450330      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    109231.24453555862      );
  id6 -> SetBinError( xbin,    263.65093293456653      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    177083.52894468527      );
  id6 -> SetBinError( xbin,    365.17381208704813      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    77389.978296416506      );
  id6 -> SetBinError( xbin,    288.97795318888268      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    29381.436773854770      );
  id6 -> SetBinError( xbin,    210.42197370763469      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    12002.905709120852      );
  id6 -> SetBinError( xbin,    151.57040239228513      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4922.2545421657451      );
  id6 -> SetBinError( xbin,    109.84830450137532      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11509.256486002245      );
  id7 -> SetBinError( xbin,    132.30840475641753      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15379.790212404740      );
  id7 -> SetBinError( xbin,    152.50093284844178      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19829.972232287804      );
  id7 -> SetBinError( xbin,    171.41691185278998      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24345.457830669766      );
  id7 -> SetBinError( xbin,    186.49985492799033      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    29094.500493712254      );
  id7 -> SetBinError( xbin,    203.85182986091712      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    34165.000531387093      );
  id7 -> SetBinError( xbin,    225.22682479058389      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    39666.612979592312      );
  id7 -> SetBinError( xbin,    246.92109277834604      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    43770.469667615806      );
  id7 -> SetBinError( xbin,    261.53243842504401      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    47772.791640575531      );
  id7 -> SetBinError( xbin,    278.42100558578767      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    51621.006127729364      );
  id7 -> SetBinError( xbin,    293.63766454761890      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    54232.891257703937      );
  id7 -> SetBinError( xbin,    308.56860952260212      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    56823.433519992679      );
  id7 -> SetBinError( xbin,    318.16079128464145      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58366.534525203453      );
  id7 -> SetBinError( xbin,    323.94394304545642      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    58480.255092473759      );
  id7 -> SetBinError( xbin,    326.27271642242289      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59220.151831337462      );
  id7 -> SetBinError( xbin,    331.16873637105817      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    58386.379328750278      );
  id7 -> SetBinError( xbin,    329.75642674740186      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    56754.491496328592      );
  id7 -> SetBinError( xbin,    323.85966762686036      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    54988.817275823851      );
  id7 -> SetBinError( xbin,    318.55455549504512      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    51577.722054695820      );
  id7 -> SetBinError( xbin,    308.40901971977320      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    48685.987325243586      );
  id7 -> SetBinError( xbin,    297.70312868705633      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    44930.563145089400      );
  id7 -> SetBinError( xbin,    282.92312919030809      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    40910.158990629694      );
  id7 -> SetBinError( xbin,    267.49982174456511      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    36142.369274299002      );
  id7 -> SetBinError( xbin,    245.88572898636329      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    31470.016226533815      );
  id7 -> SetBinError( xbin,    226.74861734394739      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    26738.532188586967      );
  id7 -> SetBinError( xbin,    207.91570261124656      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    22236.150465296276      );
  id7 -> SetBinError( xbin,    188.84391759942099      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17894.660872673994      );
  id7 -> SetBinError( xbin,    166.13661114943505      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    14224.775470576515      );
  id7 -> SetBinError( xbin,    149.05937900563703      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    10525.709945021741      );
  id7 -> SetBinError( xbin,    130.46224845082151      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7671.4548188204271      );
  id7 -> SetBinError( xbin,    108.85401548334876      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5998.8069994612160      );
  id8 -> SetBinError( xbin,    34.781701680449338      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10878.620043720770      );
  id8 -> SetBinError( xbin,    46.358051929166876      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9436.1521937260859      );
  id8 -> SetBinError( xbin,    42.603759112818835      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    8292.1230907804074      );
  id8 -> SetBinError( xbin,    39.567330824033874      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7338.6339979218392      );
  id8 -> SetBinError( xbin,    36.992570678982972      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6455.8598459470140      );
  id8 -> SetBinError( xbin,    34.703130581238341      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5713.1557081826249      );
  id8 -> SetBinError( xbin,    31.961354345558544      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5126.6593103132809      );
  id8 -> SetBinError( xbin,    29.823494340773831      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4574.7252494930017      );
  id8 -> SetBinError( xbin,    28.175343907298831      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4109.2227261526923      );
  id8 -> SetBinError( xbin,    26.273671292719751      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3681.8550297411562      );
  id8 -> SetBinError( xbin,    24.778573062123129      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3305.8007452424995      );
  id8 -> SetBinError( xbin,    23.752633448785211      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2982.2405498080770      );
  id8 -> SetBinError( xbin,    21.934103356766201      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2724.5245704202366      );
  id8 -> SetBinError( xbin,    20.669412866939755      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2460.6625943129102      );
  id8 -> SetBinError( xbin,    19.750753530506561      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2247.9633012179256      );
  id8 -> SetBinError( xbin,    18.865393764207930      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2058.1260826615307      );
  id8 -> SetBinError( xbin,    17.758504538418102      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1870.1495089411362      );
  id8 -> SetBinError( xbin,    16.575128165058814      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1714.4578248957155      );
  id8 -> SetBinError( xbin,    15.924099849262406      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1577.1887821673395      );
  id8 -> SetBinError( xbin,    15.332754009763997      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1452.3345431641785      );
  id8 -> SetBinError( xbin,    14.425589746182458      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1337.4420389117879      );
  id8 -> SetBinError( xbin,    13.939980372726971      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1251.7774246756246      );
  id8 -> SetBinError( xbin,    13.251166519458472      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1122.5179309835512      );
  id8 -> SetBinError( xbin,    12.432019382154687      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1046.9007520471132      );
  id8 -> SetBinError( xbin,    12.062324910287144      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    944.16555552496197      );
  id8 -> SetBinError( xbin,    11.254680681355849      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    879.71220547764506      );
  id8 -> SetBinError( xbin,    10.664279252038332      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    824.11519861555939      );
  id8 -> SetBinError( xbin,    10.606148638425491      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
