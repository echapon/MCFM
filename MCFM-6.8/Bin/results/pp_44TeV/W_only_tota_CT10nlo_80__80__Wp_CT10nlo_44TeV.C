// Cross-section is:      2243886.9854428824 +/-          808.3763664739)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -73491.80079   -3.28%
//        GQB    |      -39593.90420   -1.76%
//        QG     |      -92889.81400   -4.14%
//        QBG    |      -41097.56131   -1.83%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1358609.09089   60.55%
//        QBQ    |     1137136.68170   50.68%

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
//Wp_CT10nlo_44TeV                [runstring]  
//           4395.0000            [sqrts]  
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
//           4395.0000            [m34max]  
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
//              0.0005            [cutoff]  
//              0.1000            [aii]  
//              0.1000            [aif]  
//              0.1000            [afi]  
//              1.0000            [aff]  
//              1.0000            [bfi]  
//              1.0000            [bff]  


  {
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wp_CT10nlo_44TeV.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,    1.2064523613631037E-003 );
  id1 -> SetBinError( xbin,    8.9832007393945393E-004 );
   int xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,   0.88077991282187096      );
  id1 -> SetBinError( xbin,   0.44936213502136158      );
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    24.133080025692571      );
  id1 -> SetBinError( xbin,    13.928230035266404      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    731.13205445385665      );
  id1 -> SetBinError( xbin,    50.402068573651846      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    7514.7247134656645      );
  id1 -> SetBinError( xbin,    291.32462912511011      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    28658.461996837825      );
  id1 -> SetBinError( xbin,    771.80907385496334      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    64475.442272547807      );
  id1 -> SetBinError( xbin,    1107.4960661891939      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    115787.03799780713      );
  id1 -> SetBinError( xbin,    1372.9415420429752      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    161578.76728041450      );
  id1 -> SetBinError( xbin,    1578.0661612369952      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    207121.99436614366      );
  id1 -> SetBinError( xbin,    1763.5035460348679      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    248911.91665373935      );
  id1 -> SetBinError( xbin,    1919.2599232893576      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    279613.31861314439      );
  id1 -> SetBinError( xbin,    1981.2206483491336      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    302363.77074820682      );
  id1 -> SetBinError( xbin,    2001.8001240964952      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    324949.24978832592      );
  id1 -> SetBinError( xbin,    2027.9980395903824      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    335398.12418314861      );
  id1 -> SetBinError( xbin,    2053.4499448828128      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    351087.18078960618      );
  id1 -> SetBinError( xbin,    2065.7053269496182      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    351294.18801648763      );
  id1 -> SetBinError( xbin,    2094.7227540524109      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    364948.68748688221      );
  id1 -> SetBinError( xbin,    2034.5771374864064      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    366542.49180739769      );
  id1 -> SetBinError( xbin,    2018.9391001577790      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    373899.90616138239      );
  id1 -> SetBinError( xbin,    2039.6423647553158      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    382126.47122152214      );
  id1 -> SetBinError( xbin,    2057.9284698591414      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    383961.13679617771      );
  id1 -> SetBinError( xbin,    2072.4584761657457      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    388006.05911536474      );
  id1 -> SetBinError( xbin,    2088.6475368447541      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    389563.47778489854      );
  id1 -> SetBinError( xbin,    2085.4780695762188      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    391869.46558161039      );
  id1 -> SetBinError( xbin,    2095.3296757269436      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    403311.31733038760      );
  id1 -> SetBinError( xbin,    2112.6729188536269      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    401734.67896535149      );
  id1 -> SetBinError( xbin,    2141.5244932556357      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    408792.49834279896      );
  id1 -> SetBinError( xbin,    2163.2080209184123      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    412419.15873778716      );
  id1 -> SetBinError( xbin,    2161.1450291157125      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    421238.70815138327      );
  id1 -> SetBinError( xbin,    2173.1556089962528      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    419083.07973054453      );
  id1 -> SetBinError( xbin,    2198.3858290357311      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    420006.81648316723      );
  id1 -> SetBinError( xbin,    2231.8499559190536      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    412338.41146628076      );
  id1 -> SetBinError( xbin,    2256.3384603117388      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    411089.83950160572      );
  id1 -> SetBinError( xbin,    2290.5539944512880      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    388188.52456548624      );
  id1 -> SetBinError( xbin,    2261.0795446701577      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    360167.93561670091      );
  id1 -> SetBinError( xbin,    2226.2464096732015      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    316573.48091410752      );
  id1 -> SetBinError( xbin,    2129.3606290033840      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    255798.97688426432      );
  id1 -> SetBinError( xbin,    1936.6116444773079      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    190288.92185394646      );
  id1 -> SetBinError( xbin,    1713.5664216125845      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    114069.17832663521      );
  id1 -> SetBinError( xbin,    1440.7082946486912      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    50451.206824406254      );
  id1 -> SetBinError( xbin,    973.44545970277852      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    12643.208494007706      );
  id1 -> SetBinError( xbin,    429.83508985649968      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    1024.8429968492958      );
  id1 -> SetBinError( xbin,    84.244004931447535      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    17.894414142296409      );
  id1 -> SetBinError( xbin,    10.638299527156327      );
   int xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,   0.80141213642393083      );
  id1 -> SetBinError( xbin,   0.72773939816852051      );
   int xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    7.5559810093816721E-005 );
  id1 -> SetBinError( xbin,    7.5559805268685012E-005 );
   int xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    3.1128803335768321E-004 );
  id1 -> SetBinError( xbin,    3.1128801655204170E-004 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    744500.12981288461      );
  id2 -> SetBinError( xbin,    7326.2574940361483      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    720820.30352714821      );
  id2 -> SetBinError( xbin,    6491.5109828450395      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    687302.96254034678      );
  id2 -> SetBinError( xbin,    6358.9093657685216      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    655746.96058579627      );
  id2 -> SetBinError( xbin,    6619.5761352711588      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    623428.72607714706      );
  id2 -> SetBinError( xbin,    5577.9369788263957      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    586103.62889294268      );
  id2 -> SetBinError( xbin,    4679.2935967060857      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    545793.62905357254      );
  id2 -> SetBinError( xbin,    4044.8780020195732      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    519549.93975909689      );
  id2 -> SetBinError( xbin,    3878.6288812722810      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    486491.47139220429      );
  id2 -> SetBinError( xbin,    4019.9133308107989      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    455561.90935552283      );
  id2 -> SetBinError( xbin,    3990.3674662449916      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    422325.47741803288      );
  id2 -> SetBinError( xbin,    3077.7063832495269      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    394188.63112407696      );
  id2 -> SetBinError( xbin,    3041.2004353325237      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    355917.44174235122      );
  id2 -> SetBinError( xbin,    2448.1324857356612      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    327488.70388030307      );
  id2 -> SetBinError( xbin,    2295.9914826407858      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    294389.50816667086      );
  id2 -> SetBinError( xbin,    2216.3973718708908      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    272336.69175483263      );
  id2 -> SetBinError( xbin,    2077.2773177585759      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    242359.87268932618      );
  id2 -> SetBinError( xbin,    1641.8173256644598      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    219595.10964655929      );
  id2 -> SetBinError( xbin,    1552.3048167657946      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    196080.47216588899      );
  id2 -> SetBinError( xbin,    1616.0067964328703      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    172581.09961274767      );
  id2 -> SetBinError( xbin,    1248.6042950840001      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    150551.53651505892      );
  id2 -> SetBinError( xbin,    1112.6367302936442      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    135139.23320824796      );
  id2 -> SetBinError( xbin,    1207.1875076799561      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    118308.18717093594      );
  id2 -> SetBinError( xbin,    1045.3954256100242      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    102130.82255476150      );
  id2 -> SetBinError( xbin,    886.39457753419538      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    92512.591819726571      );
  id2 -> SetBinError( xbin,    972.93070572576585      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    81729.261682648590      );
  id2 -> SetBinError( xbin,    854.20881547136287      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    74849.898556332031      );
  id2 -> SetBinError( xbin,    1298.1834982499049      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    65831.437106782847      );
  id2 -> SetBinError( xbin,    633.98511613226890      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    63204.844153143073      );
  id2 -> SetBinError( xbin,    683.52247456981672      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    60901.560135570173      );
  id2 -> SetBinError( xbin,    734.48337208520798      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    61573.087131131666      );
  id2 -> SetBinError( xbin,    680.20359424022865      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    64340.656281269112      );
  id2 -> SetBinError( xbin,    758.87142891246276      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    68893.345477094757      );
  id2 -> SetBinError( xbin,    1207.5445934490460      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    75260.361128638775      );
  id2 -> SetBinError( xbin,    707.90453661283061      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    84290.766404469512      );
  id2 -> SetBinError( xbin,    748.86375543012423      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    94507.875740412812      );
  id2 -> SetBinError( xbin,    818.01795208307499      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    109584.22140708103      );
  id2 -> SetBinError( xbin,    908.85415446364402      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    124930.86740647185      );
  id2 -> SetBinError( xbin,    1004.3822739013892      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    142698.96814189942      );
  id2 -> SetBinError( xbin,    1169.2072807141460      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    163698.10784944915      );
  id2 -> SetBinError( xbin,    1163.4902876676549      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    186891.90886631788      );
  id2 -> SetBinError( xbin,    1240.1782158766016      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    211658.88881118223      );
  id2 -> SetBinError( xbin,    1452.3546630176006      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    240748.38815736157      );
  id2 -> SetBinError( xbin,    1573.8190963905154      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    268766.49115691107      );
  id2 -> SetBinError( xbin,    1807.1330243604755      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    302397.40137841919      );
  id2 -> SetBinError( xbin,    1895.8944544318044      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    334154.22050857998      );
  id2 -> SetBinError( xbin,    2696.1325009006182      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    372050.31835986191      );
  id2 -> SetBinError( xbin,    2525.0767260244838      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    400732.31200206658      );
  id2 -> SetBinError( xbin,    2569.7600803841901      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    440196.26520470181      );
  id2 -> SetBinError( xbin,    3008.8930932213702      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    479757.46989033441      );
  id2 -> SetBinError( xbin,    3618.3879158687428      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    513923.73316829582      );
  id2 -> SetBinError( xbin,    3258.0845763655880      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    552622.38124333601      );
  id2 -> SetBinError( xbin,    3458.5251862481732      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    594826.69697583839      );
  id2 -> SetBinError( xbin,    4439.2609435792983      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    643305.05338502536      );
  id2 -> SetBinError( xbin,    4901.5134816246346      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    675504.32537675276      );
  id2 -> SetBinError( xbin,    4657.3843352383283      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    719197.75592969137      );
  id2 -> SetBinError( xbin,    5374.1667241266969      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    772417.59819822479      );
  id2 -> SetBinError( xbin,    6040.4138622623359      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    796785.32013465173      );
  id2 -> SetBinError( xbin,    6379.5390944325791      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    842767.56576353405      );
  id2 -> SetBinError( xbin,    6309.6325991352987      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    905207.01774197770      );
  id2 -> SetBinError( xbin,    8117.2429722831812      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -5.0999999999999996      );
  id3 -> SetBinContent( xbin,   -1.0480183058290402E-003 );
  id3 -> SetBinError( xbin,    1.1424149359798266E-003 );
   int xbin = id3->FindBin(  -4.9000000000000004      );
  id3 -> SetBinContent( xbin,   0.65487283120348672      );
  id3 -> SetBinError( xbin,   0.13330639387278054      );
   int xbin = id3->FindBin(  -4.7000000000000002      );
  id3 -> SetBinContent( xbin,    17.591619170242595      );
  id3 -> SetBinError( xbin,    2.0843608342251634      );
   int xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,    143.59835169780348      );
  id3 -> SetBinError( xbin,    11.058818923190710      );
   int xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,    657.27519452279682      );
  id3 -> SetBinError( xbin,    29.721669653263486      );
   int xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    2154.8322728317885      );
  id3 -> SetBinError( xbin,    74.000392476647022      );
   int xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    5549.0985008675671      );
  id3 -> SetBinError( xbin,    133.59558959090225      );
   int xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    12206.849954563027      );
  id3 -> SetBinError( xbin,    230.48865559216574      );
   int xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    24057.971206571270      );
  id3 -> SetBinError( xbin,    376.47356316280610      );
   int xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    45102.623218011067      );
  id3 -> SetBinError( xbin,    584.30217311477543      );
   int xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    73435.956768667311      );
  id3 -> SetBinError( xbin,    828.85932213693172      );
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    106646.88296867569      );
  id3 -> SetBinError( xbin,    1099.4376314862532      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    151524.17376387256      );
  id3 -> SetBinError( xbin,    1443.4540421989993      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    200291.11188936033      );
  id3 -> SetBinError( xbin,    1695.2491576538980      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    248092.41653788087      );
  id3 -> SetBinError( xbin,    1900.1269340355955      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    286739.10275066138      );
  id3 -> SetBinError( xbin,    2055.8233612582544      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    319888.27110976563      );
  id3 -> SetBinError( xbin,    2659.8339009632537      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    348731.39724780963      );
  id3 -> SetBinError( xbin,    2741.1048416811859      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    376067.13964351540      );
  id3 -> SetBinError( xbin,    2347.2428171315505      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    386819.71406882704      );
  id3 -> SetBinError( xbin,    2376.4019326366083      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    399435.34984901268      );
  id3 -> SetBinError( xbin,    2403.5192891478318      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    406502.83140442614      );
  id3 -> SetBinError( xbin,    2467.7472367516511      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    415693.20814105566      );
  id3 -> SetBinError( xbin,    2480.2453976690003      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    417542.79236629739      );
  id3 -> SetBinError( xbin,    2458.0534080787756      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    427550.00229770079      );
  id3 -> SetBinError( xbin,    2418.1055214158855      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    423503.68660773721      );
  id3 -> SetBinError( xbin,    2493.6911643340450      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    431695.61747740483      );
  id3 -> SetBinError( xbin,    2480.0116018833378      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    441601.56970094651      );
  id3 -> SetBinError( xbin,    2536.7460522657661      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    447139.33480342739      );
  id3 -> SetBinError( xbin,    2612.3337242792459      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    456772.91925672098      );
  id3 -> SetBinError( xbin,    2639.5884384165543      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    457460.32701671077      );
  id3 -> SetBinError( xbin,    2636.1129813901080      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    460986.50757366850      );
  id3 -> SetBinError( xbin,    2615.3970474139537      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    463316.68083549879      );
  id3 -> SetBinError( xbin,    2599.4514043235531      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    461108.85365972365      );
  id3 -> SetBinError( xbin,    2739.0647876317144      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    446331.18542524253      );
  id3 -> SetBinError( xbin,    2684.1286861106473      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    424488.87751461996      );
  id3 -> SetBinError( xbin,    2484.7943850111378      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    392717.24297789141      );
  id3 -> SetBinError( xbin,    2383.8735097979529      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    344090.02920722001      );
  id3 -> SetBinError( xbin,    2210.5742275722123      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    289404.20423695084      );
  id3 -> SetBinError( xbin,    1957.9508512068978      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    222838.69973829365      );
  id3 -> SetBinError( xbin,    1662.2826078437138      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    160301.49253526737      );
  id3 -> SetBinError( xbin,    1364.3553588343530      );
   int xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    108009.11547558854      );
  id3 -> SetBinError( xbin,    1066.2185022578371      );
   int xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    66130.331125929108      );
  id3 -> SetBinError( xbin,    741.18635194682747      );
   int xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    35976.746651359390      );
  id3 -> SetBinError( xbin,    497.17948700859421      );
   int xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    18823.672495345381      );
  id3 -> SetBinError( xbin,    305.64084912402404      );
   int xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    7861.1594026639359      );
  id3 -> SetBinError( xbin,    162.76454504745357      );
   int xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    3074.0314392499022      );
  id3 -> SetBinError( xbin,    80.601290264158749      );
   int xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,    942.58228580554862      );
  id3 -> SetBinError( xbin,    36.658861452525954      );
   int xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    214.43729864948114      );
  id3 -> SetBinError( xbin,    15.514984044807639      );
   int xbin = id3->FindBin(   4.7000000000000011      );
  id3 -> SetBinContent( xbin,    26.261856323403972      );
  id3 -> SetBinError( xbin,    3.3053693328193248      );
   int xbin = id3->FindBin(   4.9000000000000004      );
  id3 -> SetBinContent( xbin,    1.0903461456091594      );
  id3 -> SetBinError( xbin,   0.36491782476573104      );
   int xbin = id3->FindBin(   5.1000000000000014      );
  id3 -> SetBinContent( xbin,   -1.5645586898702442E-007 );
  id3 -> SetBinError( xbin,    4.1098636627264672E-004 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -4.5499999999999998      );
  id4 -> SetBinContent( xbin,   -2.4389857925150070E-004 );
  id4 -> SetBinError( xbin,    4.7850901095991350E-003 );
   int xbin = id4->FindBin(  -4.4500000000000002      );
  id4 -> SetBinContent( xbin,   0.38561830885005838      );
  id4 -> SetBinError( xbin,   0.10208217922323440      );
   int xbin = id4->FindBin(  -4.3499999999999996      );
  id4 -> SetBinContent( xbin,    2.4013178729005578      );
  id4 -> SetBinError( xbin,   0.49828878866872678      );
   int xbin = id4->FindBin(  -4.2500000000000000      );
  id4 -> SetBinContent( xbin,    13.221569761598127      );
  id4 -> SetBinError( xbin,    2.5761717112570524      );
   int xbin = id4->FindBin(  -4.1500000000000004      );
  id4 -> SetBinContent( xbin,    43.294918861093116      );
  id4 -> SetBinError( xbin,    5.2160570361471983      );
   int xbin = id4->FindBin(  -4.0499999999999998      );
  id4 -> SetBinContent( xbin,    104.28120854555118      );
  id4 -> SetBinError( xbin,    11.557273152340626      );
   int xbin = id4->FindBin(  -3.9500000000000002      );
  id4 -> SetBinContent( xbin,    292.52173527220526      );
  id4 -> SetBinError( xbin,    24.355820712613180      );
   int xbin = id4->FindBin(  -3.8499999999999996      );
  id4 -> SetBinContent( xbin,    503.77621353060545      );
  id4 -> SetBinError( xbin,    38.070570288127421      );
   int xbin = id4->FindBin(  -3.7500000000000000      );
  id4 -> SetBinContent( xbin,    1071.4360235525548      );
  id4 -> SetBinError( xbin,    82.649036360307079      );
   int xbin = id4->FindBin(  -3.6499999999999999      );
  id4 -> SetBinContent( xbin,    1953.3037458489034      );
  id4 -> SetBinError( xbin,    102.05961708131036      );
   int xbin = id4->FindBin(  -3.5499999999999998      );
  id4 -> SetBinContent( xbin,    3284.4157347141258      );
  id4 -> SetBinError( xbin,    144.94721680926307      );
   int xbin = id4->FindBin(  -3.4500000000000002      );
  id4 -> SetBinContent( xbin,    5239.8634438298959      );
  id4 -> SetBinError( xbin,    192.80320284156213      );
   int xbin = id4->FindBin(  -3.3499999999999996      );
  id4 -> SetBinContent( xbin,    6954.8061904561246      );
  id4 -> SetBinError( xbin,    237.82443835406556      );
   int xbin = id4->FindBin(  -3.2500000000000000      );
  id4 -> SetBinContent( xbin,    11506.594018416245      );
  id4 -> SetBinError( xbin,    351.31195532803173      );
   int xbin = id4->FindBin(  -3.1499999999999999      );
  id4 -> SetBinContent( xbin,    17676.375654630025      );
  id4 -> SetBinError( xbin,    475.15944358310065      );
   int xbin = id4->FindBin(  -3.0499999999999998      );
  id4 -> SetBinContent( xbin,    22082.203834835724      );
  id4 -> SetBinError( xbin,    543.78010257721371      );
   int xbin = id4->FindBin(  -2.9499999999999997      );
  id4 -> SetBinContent( xbin,    30891.200546468954      );
  id4 -> SetBinError( xbin,    734.77150641135574      );
   int xbin = id4->FindBin(  -2.8500000000000001      );
  id4 -> SetBinContent( xbin,    43093.367620455370      );
  id4 -> SetBinError( xbin,    873.77811409725621      );
   int xbin = id4->FindBin(  -2.7500000000000000      );
  id4 -> SetBinContent( xbin,    55975.203645494854      );
  id4 -> SetBinError( xbin,    1057.8244918889138      );
   int xbin = id4->FindBin(  -2.6499999999999999      );
  id4 -> SetBinContent( xbin,    71721.693966120758      );
  id4 -> SetBinError( xbin,    1285.7798338779060      );
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    86769.693170530009      );
  id4 -> SetBinError( xbin,    1484.0209216962103      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    103677.17853797982      );
  id4 -> SetBinError( xbin,    1643.1596231157405      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    122986.87422937265      );
  id4 -> SetBinError( xbin,    1837.9390533461656      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    147545.44904955066      );
  id4 -> SetBinError( xbin,    2338.6450452425283      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    174341.80201048500      );
  id4 -> SetBinError( xbin,    2594.5137682931127      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    192388.97172242473      );
  id4 -> SetBinError( xbin,    2769.6516074189135      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    222505.38761203215      );
  id4 -> SetBinError( xbin,    2945.1321638938030      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    246885.28135118724      );
  id4 -> SetBinError( xbin,    3134.9263306000703      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    264530.08769149322      );
  id4 -> SetBinError( xbin,    3166.3656857352007      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    286966.66891563608      );
  id4 -> SetBinError( xbin,    3126.9393015192300      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    301170.18286196201      );
  id4 -> SetBinError( xbin,    3263.8500898020334      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    317954.34889576328      );
  id4 -> SetBinError( xbin,    3449.5791403836397      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    330965.04537161044      );
  id4 -> SetBinError( xbin,    3643.5464906969396      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    348778.19820366643      );
  id4 -> SetBinError( xbin,    3719.5334681319418      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    360275.84485122608      );
  id4 -> SetBinError( xbin,    3759.1184454206718      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    370713.88611364225      );
  id4 -> SetBinError( xbin,    3706.0314724966588      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    385033.96272165724      );
  id4 -> SetBinError( xbin,    3794.4835092166522      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    390619.47590515960      );
  id4 -> SetBinError( xbin,    3998.6810098795495      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    391220.55984155065      );
  id4 -> SetBinError( xbin,    4436.5259504379064      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    393892.39673304744      );
  id4 -> SetBinError( xbin,    4342.8885790887298      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    407681.91431204014      );
  id4 -> SetBinError( xbin,    4051.7152087721452      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    404272.84411815484      );
  id4 -> SetBinError( xbin,    3954.4653060590235      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    411871.78221144539      );
  id4 -> SetBinError( xbin,    4067.9948757153952      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    409377.28579499602      );
  id4 -> SetBinError( xbin,    4114.0984168356945      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    419405.19209518417      );
  id4 -> SetBinError( xbin,    3937.8972618368816      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    418866.17518330977      );
  id4 -> SetBinError( xbin,    3884.0487547127427      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    420459.19790901057      );
  id4 -> SetBinError( xbin,    3861.4717942787934      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    428048.42064892058      );
  id4 -> SetBinError( xbin,    3895.1320829009014      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    426813.12793186412      );
  id4 -> SetBinError( xbin,    4065.0255543630569      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    419700.29679238593      );
  id4 -> SetBinError( xbin,    4161.3946279778456      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    426208.63016589108      );
  id4 -> SetBinError( xbin,    4604.1070150844089      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    440705.01927238947      );
  id4 -> SetBinError( xbin,    4657.6913043721106      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    429412.41692963050      );
  id4 -> SetBinError( xbin,    4000.1313964536735      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    443276.40217317105      );
  id4 -> SetBinError( xbin,    4321.0105138539357      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    440268.28911016299      );
  id4 -> SetBinError( xbin,    4422.6571712043660      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    463856.93848793313      );
  id4 -> SetBinError( xbin,    12039.810999345485      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    432226.82490165776      );
  id4 -> SetBinError( xbin,    12105.546642287021      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    460366.73364856181      );
  id4 -> SetBinError( xbin,    4398.1918434686522      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    453366.61808707519      );
  id4 -> SetBinError( xbin,    4149.8571205798462      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    457807.19790530950      );
  id4 -> SetBinError( xbin,    4074.3055678794776      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    461663.25764345005      );
  id4 -> SetBinError( xbin,    4186.0304171958423      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    461204.78186290176      );
  id4 -> SetBinError( xbin,    4621.4526759634327      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    461007.41398254392      );
  id4 -> SetBinError( xbin,    4539.2536496732255      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    466018.23253225611      );
  id4 -> SetBinError( xbin,    4143.0594192176986      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    461115.72639909759      );
  id4 -> SetBinError( xbin,    4159.3288640711644      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    459393.71579092101      );
  id4 -> SetBinError( xbin,    4294.8040583901757      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    454163.86381567013      );
  id4 -> SetBinError( xbin,    4386.4625851791288      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    449587.81000497588      );
  id4 -> SetBinError( xbin,    4200.6497081053776      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    443853.57985714788      );
  id4 -> SetBinError( xbin,    4067.8922855989781      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    427882.57569475099      );
  id4 -> SetBinError( xbin,    4419.5447137023903      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    410175.38277979783      );
  id4 -> SetBinError( xbin,    4381.7449296775267      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    395677.67975919211      );
  id4 -> SetBinError( xbin,    3960.5128296968419      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    372695.93663765409      );
  id4 -> SetBinError( xbin,    3837.4407834748922      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    349497.33858791360      );
  id4 -> SetBinError( xbin,    3643.3841390533530      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    320794.87270550145      );
  id4 -> SetBinError( xbin,    3418.8753567453614      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    296475.10331552610      );
  id4 -> SetBinError( xbin,    3222.0394099881719      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    262803.88561414956      );
  id4 -> SetBinError( xbin,    2953.9524655896012      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    228847.33865648313      );
  id4 -> SetBinError( xbin,    2807.1312137652058      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    195226.27486171643      );
  id4 -> SetBinError( xbin,    2567.0091272462641      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    160768.91814931913      );
  id4 -> SetBinError( xbin,    2132.7041714772026      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    135764.85935333095      );
  id4 -> SetBinError( xbin,    1858.2973574571420      );
   int xbin = id4->FindBin(   3.5500000000000007      );
  id4 -> SetBinContent( xbin,    112380.10971401335      );
  id4 -> SetBinError( xbin,    1626.6131709731967      );
   int xbin = id4->FindBin(   3.6500000000000004      );
  id4 -> SetBinContent( xbin,    88017.057533574072      );
  id4 -> SetBinError( xbin,    1402.3163014662166      );
   int xbin = id4->FindBin(   3.7500000000000000      );
  id4 -> SetBinContent( xbin,    69239.841022059409      );
  id4 -> SetBinError( xbin,    1239.6210930780298      );
   int xbin = id4->FindBin(   3.8499999999999996      );
  id4 -> SetBinContent( xbin,    51070.635591883460      );
  id4 -> SetBinError( xbin,    1045.6920408995143      );
   int xbin = id4->FindBin(   3.9500000000000011      );
  id4 -> SetBinContent( xbin,    38894.011503952512      );
  id4 -> SetBinError( xbin,    850.85358890707971      );
   int xbin = id4->FindBin(   4.0500000000000007      );
  id4 -> SetBinContent( xbin,    27065.423778102351      );
  id4 -> SetBinError( xbin,    897.76779468886684      );
   int xbin = id4->FindBin(   4.1500000000000004      );
  id4 -> SetBinContent( xbin,    18720.361455511014      );
  id4 -> SetBinError( xbin,    745.06934890462355      );
   int xbin = id4->FindBin(   4.2500000000000000      );
  id4 -> SetBinContent( xbin,    13094.401289664100      );
  id4 -> SetBinError( xbin,    365.87022186922837      );
   int xbin = id4->FindBin(   4.3499999999999996      );
  id4 -> SetBinContent( xbin,    8508.7012615415260      );
  id4 -> SetBinError( xbin,    252.82123069231181      );
   int xbin = id4->FindBin(   4.4500000000000011      );
  id4 -> SetBinContent( xbin,    5093.0932341925127      );
  id4 -> SetBinError( xbin,    180.24270656479678      );
   int xbin = id4->FindBin(   4.5500000000000007      );
  id4 -> SetBinContent( xbin,    3240.0368011744013      );
  id4 -> SetBinError( xbin,    129.39035839958871      );
   int xbin = id4->FindBin(   4.6500000000000004      );
  id4 -> SetBinContent( xbin,    1850.4665179823573      );
  id4 -> SetBinError( xbin,    86.708204055974619      );
   int xbin = id4->FindBin(   4.7500000000000000      );
  id4 -> SetBinContent( xbin,    1057.2125171612834      );
  id4 -> SetBinError( xbin,    56.644652146219357      );
   int xbin = id4->FindBin(   4.8500000000000014      );
  id4 -> SetBinContent( xbin,    493.42125951960963      );
  id4 -> SetBinError( xbin,    34.641300325564153      );
   int xbin = id4->FindBin(   4.9500000000000011      );
  id4 -> SetBinContent( xbin,    252.45701164569778      );
  id4 -> SetBinError( xbin,    20.800541048309835      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    40136.162241118262      );
  id5 -> SetBinError( xbin,    393.82269457856472      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    85822.426812753401      );
  id5 -> SetBinError( xbin,    527.30198548138230      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    93757.234151220429      );
  id5 -> SetBinError( xbin,    695.37487579444314      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    102655.64743408735      );
  id5 -> SetBinError( xbin,    738.45868699719119      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    114473.12578937388      );
  id5 -> SetBinError( xbin,    711.62107723893644      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    128644.37066483517      );
  id5 -> SetBinError( xbin,    824.69194167598471      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    146055.53153922892      );
  id5 -> SetBinError( xbin,    886.60225745358741      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    147361.89704584569      );
  id5 -> SetBinError( xbin,    1027.1447689845438      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    111537.95046570733      );
  id5 -> SetBinError( xbin,    822.68780828807530      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    51962.226854514622      );
  id5 -> SetBinError( xbin,    264.67028552881487      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    26935.886341896719      );
  id5 -> SetBinError( xbin,    140.61939062384633      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    16708.250913882606      );
  id5 -> SetBinError( xbin,    100.34169953224071      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    11431.851127967868      );
  id5 -> SetBinError( xbin,    99.181168987510446      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    8362.1310185597376      );
  id5 -> SetBinError( xbin,    93.997380265091095      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    6279.0354229027162      );
  id5 -> SetBinError( xbin,    55.674048917592373      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    4841.0998542896887      );
  id5 -> SetBinError( xbin,    46.079602428540589      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    3809.6519588608094      );
  id5 -> SetBinError( xbin,    40.086407453517495      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3111.6549615965182      );
  id5 -> SetBinError( xbin,    38.011996700567920      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2467.2100012669989      );
  id5 -> SetBinError( xbin,    34.977020390404697      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2105.8184778378177      );
  id5 -> SetBinError( xbin,    30.792428529117831      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1758.7340945834007      );
  id5 -> SetBinError( xbin,    34.908965861185258      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1413.9295736371753      );
  id5 -> SetBinError( xbin,    47.636006003480681      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1202.2652712768368      );
  id5 -> SetBinError( xbin,    41.658831830410257      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1075.3502495424373      );
  id5 -> SetBinError( xbin,    21.230096265718871      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    893.11950687519675      );
  id5 -> SetBinError( xbin,    18.098963776382298      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    811.26943254711739      );
  id5 -> SetBinError( xbin,    17.741521121920179      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    685.64431889303205      );
  id5 -> SetBinError( xbin,    15.566608609375976      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    587.70160119021307      );
  id5 -> SetBinError( xbin,    13.340550174743402      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    507.71546109950572      );
  id5 -> SetBinError( xbin,    16.334948236490991      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    451.20161627285745      );
  id5 -> SetBinError( xbin,    16.166834828442699      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    405.82628212273261      );
  id5 -> SetBinError( xbin,    11.597385885061781      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    343.03456132965039      );
  id5 -> SetBinError( xbin,    11.858958030570026      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    294.14641484179242      );
  id5 -> SetBinError( xbin,    11.783320874061863      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    278.02058291127275      );
  id5 -> SetBinError( xbin,    9.8493129318614407      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    255.48056433441980      );
  id5 -> SetBinError( xbin,    8.8006715552378978      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    219.80137400072419      );
  id5 -> SetBinError( xbin,    9.0083729436394382      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    208.06875464625028      );
  id5 -> SetBinError( xbin,    11.001638801284408      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    171.92168592189861      );
  id5 -> SetBinError( xbin,    9.6489504323771946      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2438.4881490230268      );
  id6 -> SetBinError( xbin,    45.971750199402877      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    8066.1308451053228      );
  id6 -> SetBinError( xbin,    87.071539847751595      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    16427.234450030101      );
  id6 -> SetBinError( xbin,    127.34548710619758      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    29338.939295334072      );
  id6 -> SetBinError( xbin,    170.77168092982657      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    47716.941988399107      );
  id6 -> SetBinError( xbin,    211.69065135980244      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    73664.594488025279      );
  id6 -> SetBinError( xbin,    250.66078157361568      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    111772.28851379298      );
  id6 -> SetBinError( xbin,    299.79640822573788      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    154731.46435413914      );
  id6 -> SetBinError( xbin,    355.28105753034009      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    62650.375060184269      );
  id6 -> SetBinError( xbin,    255.08121617533425      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    22305.721257292404      );
  id6 -> SetBinError( xbin,    168.55701446121805      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    8852.9184965978584      );
  id6 -> SetBinError( xbin,    113.92926848170576      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3527.3854735266805      );
  id6 -> SetBinError( xbin,    75.479886604405891      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    8918.2184528870748      );
  id7 -> SetBinError( xbin,    120.42945596308623      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    11741.512754538042      );
  id7 -> SetBinError( xbin,    137.19221774126373      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    15362.711357746612      );
  id7 -> SetBinError( xbin,    157.26895437319897      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    19364.943862468364      );
  id7 -> SetBinError( xbin,    179.37009070993520      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    22871.465545459723      );
  id7 -> SetBinError( xbin,    198.05819093838002      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    26713.108340811857      );
  id7 -> SetBinError( xbin,    216.18943460997426      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    30816.456754140076      );
  id7 -> SetBinError( xbin,    235.91231597869029      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    33773.107151492506      );
  id7 -> SetBinError( xbin,    247.13480875662916      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    37576.663705080202      );
  id7 -> SetBinError( xbin,    265.43380068563823      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    40659.426663709601      );
  id7 -> SetBinError( xbin,    281.45547813688904      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    43569.755132383820      );
  id7 -> SetBinError( xbin,    294.78335853467752      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    46055.646137312870      );
  id7 -> SetBinError( xbin,    304.02105203530556      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    47472.155870728755      );
  id7 -> SetBinError( xbin,    311.73309530487410      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    50190.102036794095      );
  id7 -> SetBinError( xbin,    323.10489477521742      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    50747.315001446026      );
  id7 -> SetBinError( xbin,    319.43587660595188      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    50730.069170137453      );
  id7 -> SetBinError( xbin,    319.76966019057039      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    51482.498243071794      );
  id7 -> SetBinError( xbin,    321.89965351158236      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    50605.735022744717      );
  id7 -> SetBinError( xbin,    316.18953349804627      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    50281.759334813891      );
  id7 -> SetBinError( xbin,    310.59061699752829      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    48494.849080158019      );
  id7 -> SetBinError( xbin,    303.38987766799295      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    46733.356643315987      );
  id7 -> SetBinError( xbin,    292.58547918587578      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    44449.673341942602      );
  id7 -> SetBinError( xbin,    281.62839406433375      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    41248.690567143291      );
  id7 -> SetBinError( xbin,    266.85255979130778      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    37551.503577381685      );
  id7 -> SetBinError( xbin,    248.70517184601854      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    33627.776925125836      );
  id7 -> SetBinError( xbin,    232.46285209195688      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    29783.731768388396      );
  id7 -> SetBinError( xbin,    215.56187297422599      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    25654.607352181018      );
  id7 -> SetBinError( xbin,    198.52248783573881      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    21374.854999138304      );
  id7 -> SetBinError( xbin,    181.73832805281319      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    17030.019660092290      );
  id7 -> SetBinError( xbin,    160.86359038148925      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    12971.087841988861      );
  id7 -> SetBinError( xbin,    141.16010940124741      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    6469.9473670120242      );
  id8 -> SetBinError( xbin,    38.879322625324072      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    11503.788689800771      );
  id8 -> SetBinError( xbin,    51.066042277946494      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9919.8529678384548      );
  id8 -> SetBinError( xbin,    46.620758244457029      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    8647.2094391553164      );
  id8 -> SetBinError( xbin,    42.895034912267349      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7515.9195228638773      );
  id8 -> SetBinError( xbin,    39.111369777543217      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6569.1562749060877      );
  id8 -> SetBinError( xbin,    36.112183014212206      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5730.1560986731783      );
  id8 -> SetBinError( xbin,    33.165779919749923      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5042.9006268374233      );
  id8 -> SetBinError( xbin,    30.383916680852643      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4405.7988346436105      );
  id8 -> SetBinError( xbin,    28.127153631773201      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    3943.4302310434273      );
  id8 -> SetBinError( xbin,    26.254240185653291      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3466.5279163095856      );
  id8 -> SetBinError( xbin,    24.030453224914684      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3059.2555412399815      );
  id8 -> SetBinError( xbin,    22.331957066515347      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2786.6479929429884      );
  id8 -> SetBinError( xbin,    21.193914095630486      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2479.1785440456697      );
  id8 -> SetBinError( xbin,    19.671348848952952      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2264.3585340905684      );
  id8 -> SetBinError( xbin,    18.553956072038332      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2013.7630843274867      );
  id8 -> SetBinError( xbin,    17.379326065924520      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1826.0964936690816      );
  id8 -> SetBinError( xbin,    16.546383566593484      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1660.2416169757421      );
  id8 -> SetBinError( xbin,    15.515648190154568      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1512.2494822694603      );
  id8 -> SetBinError( xbin,    14.836818468469330      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1373.5601523445193      );
  id8 -> SetBinError( xbin,    13.908835597356523      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1246.5045043654200      );
  id8 -> SetBinError( xbin,    13.214038951233192      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1129.8142986430280      );
  id8 -> SetBinError( xbin,    12.411518182757517      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1043.7934412548070      );
  id8 -> SetBinError( xbin,    11.695170538296097      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    962.65028413945640      );
  id8 -> SetBinError( xbin,    11.221323990673691      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    876.35416396554763      );
  id8 -> SetBinError( xbin,    10.721582816550683      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    791.30346132507157      );
  id8 -> SetBinError( xbin,    10.003349062871518      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    733.62714250117915      );
  id8 -> SetBinError( xbin,    9.6113855054535868      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    681.94442366134945      );
  id8 -> SetBinError( xbin,    9.2236444407898706      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
