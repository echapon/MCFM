// Cross-section is:      2481201.5610217759 +/-          996.0797183765)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -81109.32612   -3.27%
//        GQB    |      -45849.75889   -1.85%
//        QG     |      -99062.45338   -3.99%
//        QBG    |      -47383.14911   -1.91%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1490701.26184   60.08%
//        QBQ    |     1269278.64493   51.16%

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
//Wprod_CT10                      [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wprod_CT10.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.80961026003802028      );
  id1 -> SetBinError( xbin,   0.82850036619715584      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    617.55948992065680      );
  id1 -> SetBinError( xbin,    90.524609028881827      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    5122.3922930698172      );
  id1 -> SetBinError( xbin,    461.53190442830970      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    26128.241463859053      );
  id1 -> SetBinError( xbin,    1022.6651127982886      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    62195.742614213588      );
  id1 -> SetBinError( xbin,    1424.8575173203049      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    119476.45074549616      );
  id1 -> SetBinError( xbin,    1609.7546172536788      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    175252.39302407164      );
  id1 -> SetBinError( xbin,    2304.8258961174579      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    226890.03782721679      );
  id1 -> SetBinError( xbin,    2473.3495230091180      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    276938.97654015844      );
  id1 -> SetBinError( xbin,    2169.0344364867119      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    307996.73246299825      );
  id1 -> SetBinError( xbin,    2185.7856867988903      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    344964.54262171278      );
  id1 -> SetBinError( xbin,    2251.2799559487089      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    363360.75398171629      );
  id1 -> SetBinError( xbin,    2307.4422425105554      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    383833.61359941523      );
  id1 -> SetBinError( xbin,    2325.4284486842594      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    393143.64835936925      );
  id1 -> SetBinError( xbin,    2322.8812923418282      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    398439.45130248368      );
  id1 -> SetBinError( xbin,    2325.1486744829763      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    408398.57188853144      );
  id1 -> SetBinError( xbin,    2318.4583058616763      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    412797.47547009698      );
  id1 -> SetBinError( xbin,    2307.0883343934711      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    420002.76730467402      );
  id1 -> SetBinError( xbin,    2304.5899686339849      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    425643.46320415917      );
  id1 -> SetBinError( xbin,    2391.2726930418121      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    428689.67253033287      );
  id1 -> SetBinError( xbin,    2346.0192266421318      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    436382.45038335345      );
  id1 -> SetBinError( xbin,    2317.1471703678153      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    433464.01804216404      );
  id1 -> SetBinError( xbin,    2305.4692448413043      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    439478.69430901669      );
  id1 -> SetBinError( xbin,    2420.0269940644575      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    447140.00238581561      );
  id1 -> SetBinError( xbin,    2346.1740463350252      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    448956.15135785454      );
  id1 -> SetBinError( xbin,    2374.5607887883584      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    453917.72609447158      );
  id1 -> SetBinError( xbin,    2394.5550579542792      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    459726.07809225452      );
  id1 -> SetBinError( xbin,    2424.2942708392698      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    464682.22599076334      );
  id1 -> SetBinError( xbin,    2587.7511181849563      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    466052.31146481336      );
  id1 -> SetBinError( xbin,    2638.2580750961188      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    465846.14178859669      );
  id1 -> SetBinError( xbin,    2506.6359178208922      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    461550.79183200217      );
  id1 -> SetBinError( xbin,    2561.6405762633503      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    455308.11309977196      );
  id1 -> SetBinError( xbin,    2590.1233195729819      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    426744.02675074723      );
  id1 -> SetBinError( xbin,    2541.9335568773436      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    392505.04751029797      );
  id1 -> SetBinError( xbin,    2482.6739648326165      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    341801.78262166260      );
  id1 -> SetBinError( xbin,    2420.7470635591649      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    273484.63506173174      );
  id1 -> SetBinError( xbin,    2261.5453279200860      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    194731.09630596684      );
  id1 -> SetBinError( xbin,    2007.2013053271287      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    110827.32958487103      );
  id1 -> SetBinError( xbin,    1750.4910824544752      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    43471.500282019711      );
  id1 -> SetBinError( xbin,    1346.1474012939711      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    9432.1995756719607      );
  id1 -> SetBinError( xbin,    658.22948304503757      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    810.96940573686913      );
  id1 -> SetBinError( xbin,    115.09541385578319      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.9231732789208285      );
  id1 -> SetBinError( xbin,    1.1981941732414867      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    866521.08206667530      );
  id2 -> SetBinError( xbin,    8915.7919509961957      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    819926.51476506796      );
  id2 -> SetBinError( xbin,    9412.9830342263358      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    777983.49108772655      );
  id2 -> SetBinError( xbin,    8346.3707809357747      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    739295.47130747093      );
  id2 -> SetBinError( xbin,    9188.1146082309660      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    712241.03243002086      );
  id2 -> SetBinError( xbin,    7430.2886016332977      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    661447.67651517270      );
  id2 -> SetBinError( xbin,    5462.0585500222578      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    628748.10956362297      );
  id2 -> SetBinError( xbin,    5222.1916994270159      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    591412.67273476988      );
  id2 -> SetBinError( xbin,    5107.7719486569404      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    553928.74446884112      );
  id2 -> SetBinError( xbin,    4106.2265405752269      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    521683.39858540567      );
  id2 -> SetBinError( xbin,    4255.9029098046794      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    483670.46759308822      );
  id2 -> SetBinError( xbin,    3640.9702014467825      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    446545.11827208701      );
  id2 -> SetBinError( xbin,    3134.9617306564851      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    415263.01584942261      );
  id2 -> SetBinError( xbin,    4246.5551048328352      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    378721.57771549770      );
  id2 -> SetBinError( xbin,    3152.2910601157946      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    346090.69334092364      );
  id2 -> SetBinError( xbin,    2277.6700066946564      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    315181.91550192586      );
  id2 -> SetBinError( xbin,    2915.5182691630675      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    282840.97787364764      );
  id2 -> SetBinError( xbin,    2615.4845515919433      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    253517.62160462557      );
  id2 -> SetBinError( xbin,    1922.2023587700298      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    226479.54317271488      );
  id2 -> SetBinError( xbin,    1677.9770294705040      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    200307.21015231707      );
  id2 -> SetBinError( xbin,    1676.7758982293976      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    178800.24760093589      );
  id2 -> SetBinError( xbin,    1691.4165064077006      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    158088.68752278428      );
  id2 -> SetBinError( xbin,    1469.3511162470625      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    138000.32400250609      );
  id2 -> SetBinError( xbin,    1095.5613362036638      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    120382.01806113309      );
  id2 -> SetBinError( xbin,    1039.5269561455909      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    105471.04599987311      );
  id2 -> SetBinError( xbin,    959.32823233874296      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    95261.904864085198      );
  id2 -> SetBinError( xbin,    898.82850367587059      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    84380.295750106976      );
  id2 -> SetBinError( xbin,    809.03158620634929      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    79695.739858666639      );
  id2 -> SetBinError( xbin,    832.42104548211148      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    73361.645140310255      );
  id2 -> SetBinError( xbin,    734.60278773403866      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    71275.921530160733      );
  id2 -> SetBinError( xbin,    720.89006273039251      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    71179.693888377471      );
  id2 -> SetBinError( xbin,    744.49436126396495      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    76323.067451939205      );
  id2 -> SetBinError( xbin,    1409.2072355864036      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    78026.904740981976      );
  id2 -> SetBinError( xbin,    753.93352052053569      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    87980.982702877373      );
  id2 -> SetBinError( xbin,    932.54304222486894      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    97423.006645023896      );
  id2 -> SetBinError( xbin,    898.93394229121964      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    110218.81313015042      );
  id2 -> SetBinError( xbin,    1000.2920132101452      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    125491.99866965594      );
  id2 -> SetBinError( xbin,    1044.6722919521660      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    144777.93061177744      );
  id2 -> SetBinError( xbin,    1237.4144133293742      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    165588.91941064349      );
  id2 -> SetBinError( xbin,    1275.0987810508748      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    186940.82422923835      );
  id2 -> SetBinError( xbin,    1420.6094187252008      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    216501.56247851771      );
  id2 -> SetBinError( xbin,    1499.8249927980612      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    242744.86606736865      );
  id2 -> SetBinError( xbin,    1767.8063806380540      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    279668.83637439163      );
  id2 -> SetBinError( xbin,    2447.5828143669614      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    309313.77310211043      );
  id2 -> SetBinError( xbin,    2175.5597433383864      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    344101.67414080002      );
  id2 -> SetBinError( xbin,    2072.3006566211452      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    383769.64808529243      );
  id2 -> SetBinError( xbin,    2621.9300996179886      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    423393.13033663738      );
  id2 -> SetBinError( xbin,    2821.0542460203915      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    461240.01627711684      );
  id2 -> SetBinError( xbin,    3295.9134058530558      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    505725.73894662451      );
  id2 -> SetBinError( xbin,    4290.6081859353417      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    552167.43486836157      );
  id2 -> SetBinError( xbin,    3595.0565971646679      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    586121.95319830184      );
  id2 -> SetBinError( xbin,    3639.4634545884192      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    626448.75067793566      );
  id2 -> SetBinError( xbin,    4579.8326311169039      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    669385.14042616123      );
  id2 -> SetBinError( xbin,    4561.8385167700444      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    727069.96581154736      );
  id2 -> SetBinError( xbin,    5687.7215106143058      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    773655.00985551206      );
  id2 -> SetBinError( xbin,    5998.4984307213235      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    813659.57506231312      );
  id2 -> SetBinError( xbin,    7560.8846140106398      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    877640.91468538181      );
  id2 -> SetBinError( xbin,    8471.7648250182683      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    917272.81022069941      );
  id2 -> SetBinError( xbin,    13895.338169406605      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    948652.23251982871      );
  id2 -> SetBinError( xbin,    9384.6278744826268      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1008715.5283756988      );
  id2 -> SetBinError( xbin,    10192.108834618844      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    148764.84312705076      );
  id3 -> SetBinError( xbin,    1488.1101692556740      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    201293.29955484800      );
  id3 -> SetBinError( xbin,    1835.9975597096429      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    256273.10818798118      );
  id3 -> SetBinError( xbin,    2064.5620824415910      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    303328.06145887764      );
  id3 -> SetBinError( xbin,    2249.1815917973454      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    343515.52837653062      );
  id3 -> SetBinError( xbin,    2449.2043471950860      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    373828.11837799946      );
  id3 -> SetBinError( xbin,    2535.8593730389766      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    402848.43634630082      );
  id3 -> SetBinError( xbin,    2570.6783723240169      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    421532.17879754631      );
  id3 -> SetBinError( xbin,    2619.9486114568240      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    439162.34125153517      );
  id3 -> SetBinError( xbin,    2693.4747479470188      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    444734.61145336798      );
  id3 -> SetBinError( xbin,    2773.4888152521157      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    452366.50633875025      );
  id3 -> SetBinError( xbin,    2796.9416338892097      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    461722.64400144923      );
  id3 -> SetBinError( xbin,    2906.2895034651101      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    465166.42588884843      );
  id3 -> SetBinError( xbin,    2951.0112882185304      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    472569.31596168980      );
  id3 -> SetBinError( xbin,    2873.6630024887695      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    471078.79314692627      );
  id3 -> SetBinError( xbin,    2792.8617366759113      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    479559.66653354524      );
  id3 -> SetBinError( xbin,    2756.1761798117104      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    487135.60823899205      );
  id3 -> SetBinError( xbin,    2809.4828834736272      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    489594.88336913794      );
  id3 -> SetBinError( xbin,    2834.2794649592074      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    503194.15435081575      );
  id3 -> SetBinError( xbin,    2905.9554390482208      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    505674.90332409163      );
  id3 -> SetBinError( xbin,    2958.2314405689112      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    508409.12806729268      );
  id3 -> SetBinError( xbin,    2945.7663304127436      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    513185.00566793245      );
  id3 -> SetBinError( xbin,    3007.6918489002292      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    511404.43420895434      );
  id3 -> SetBinError( xbin,    2938.6574069618646      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    508140.12934410566      );
  id3 -> SetBinError( xbin,    3032.4802693448560      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    491338.03012079943      );
  id3 -> SetBinError( xbin,    3473.4669818259058      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    456709.29208158492      );
  id3 -> SetBinError( xbin,    3346.4918162967474      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    416485.50502883387      );
  id3 -> SetBinError( xbin,    2749.2536210999247      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    364719.70283233898      );
  id3 -> SetBinError( xbin,    2567.4054400912323      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    292115.94145808462      );
  id3 -> SetBinError( xbin,    2255.5841833624131      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    220357.91455045092      );
  id3 -> SetBinError( xbin,    1903.5655792583057      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    45921.255895884395      );
  id4 -> SetBinError( xbin,    1508.7762223055734      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    142479.76977924633      );
  id4 -> SetBinError( xbin,    2769.3550065866393      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    172786.17993696139      );
  id4 -> SetBinError( xbin,    3280.7152050314144      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    194540.62309086369      );
  id4 -> SetBinError( xbin,    3085.7968794830927      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    225180.00592805832      );
  id4 -> SetBinError( xbin,    3157.7637351767385      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    251497.41033994878      );
  id4 -> SetBinError( xbin,    3283.4101995904971      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    283212.05302350328      );
  id4 -> SetBinError( xbin,    3449.7212044075591      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    297641.02194517216      );
  id4 -> SetBinError( xbin,    3630.8768989719956      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    320485.97388774814      );
  id4 -> SetBinError( xbin,    3878.4018008642938      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    337900.43936300965      );
  id4 -> SetBinError( xbin,    3912.0296491855916      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    361057.05420407164      );
  id4 -> SetBinError( xbin,    3989.2251015429911      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    360235.22503070504      );
  id4 -> SetBinError( xbin,    4674.6191919822031      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    395401.79762461135      );
  id4 -> SetBinError( xbin,    5047.3359746112819      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    393266.19772862393      );
  id4 -> SetBinError( xbin,    4492.9723482772206      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    421994.93070899550      );
  id4 -> SetBinError( xbin,    4269.9434606300565      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    419847.18964628113      );
  id4 -> SetBinError( xbin,    4378.9717427971527      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    428657.54238837026      );
  id4 -> SetBinError( xbin,    4411.4161446736634      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    441602.03619232401      );
  id4 -> SetBinError( xbin,    4486.2613905642793      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    440031.50018210523      );
  id4 -> SetBinError( xbin,    4481.0878080406264      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    441504.06014340185      );
  id4 -> SetBinError( xbin,    4691.7643700920271      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    449964.01662479737      );
  id4 -> SetBinError( xbin,    4741.6987292916328      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    455392.13335251482      );
  id4 -> SetBinError( xbin,    4388.3144945951535      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    454556.55696582136      );
  id4 -> SetBinError( xbin,    4680.7815711162038      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    464750.40666947368      );
  id4 -> SetBinError( xbin,    4827.2864270776727      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    466658.13390776416      );
  id4 -> SetBinError( xbin,    4566.9348268072581      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    460143.35576290311      );
  id4 -> SetBinError( xbin,    4372.3560332345223      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    463629.88664377056      );
  id4 -> SetBinError( xbin,    4393.0374492052524      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    475018.27569980104      );
  id4 -> SetBinError( xbin,    4855.7942744728962      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    473278.62087584252      );
  id4 -> SetBinError( xbin,    4758.6521113604658      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    470829.19377989584      );
  id4 -> SetBinError( xbin,    4433.6943924454927      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    474847.64088673494      );
  id4 -> SetBinError( xbin,    4525.4363230086683      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    477116.39253909449      );
  id4 -> SetBinError( xbin,    4665.6927486524683      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    482114.65790525172      );
  id4 -> SetBinError( xbin,    4763.4405719112428      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    484741.85573103029      );
  id4 -> SetBinError( xbin,    4543.1790322735314      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    491958.31141617801      );
  id4 -> SetBinError( xbin,    4544.4817924265035      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    491916.16160356859      );
  id4 -> SetBinError( xbin,    4881.2177801417056      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    493979.90052343311      );
  id4 -> SetBinError( xbin,    4950.3329121055549      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    500556.39740159700      );
  id4 -> SetBinError( xbin,    4758.4872675397828      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    496759.49018760538      );
  id4 -> SetBinError( xbin,    4746.8129042980017      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    511545.73581148661      );
  id4 -> SetBinError( xbin,    4822.8616707903275      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    507492.52359310642      );
  id4 -> SetBinError( xbin,    4649.5666465037439      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    510567.36929796351      );
  id4 -> SetBinError( xbin,    4759.0135271180052      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    507564.12910200824      );
  id4 -> SetBinError( xbin,    4782.3359135970104      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    520398.61858467601      );
  id4 -> SetBinError( xbin,    4936.1259614857818      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    508284.51015144674      );
  id4 -> SetBinError( xbin,    5002.9466798315070      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    510949.23347761924      );
  id4 -> SetBinError( xbin,    4964.6272453529473      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    511880.99367402971      );
  id4 -> SetBinError( xbin,    4981.6456966443639      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    510729.76639896224      );
  id4 -> SetBinError( xbin,    4954.4740649576352      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    492147.71386471973      );
  id4 -> SetBinError( xbin,    4788.1579208202247      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    501732.04728939099      );
  id4 -> SetBinError( xbin,    4724.7704670616386      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    481644.76299249718      );
  id4 -> SetBinError( xbin,    6410.9546634782882      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    453598.35210543743      );
  id4 -> SetBinError( xbin,    6467.1878856800631      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    450499.43327414908      );
  id4 -> SetBinError( xbin,    4687.9096948826254      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    417138.78352198232      );
  id4 -> SetBinError( xbin,    4440.5410098502352      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    393587.63075842254      );
  id4 -> SetBinError( xbin,    4210.4268769381897      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    374124.84907977539      );
  id4 -> SetBinError( xbin,    3980.4445755420611      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    43870.362643700355      );
  id5 -> SetBinError( xbin,    433.32422461790992      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    95077.040878142318      );
  id5 -> SetBinError( xbin,    647.06885842297129      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    106274.85387167847      );
  id5 -> SetBinError( xbin,    805.21192830716427      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    114226.32014869894      );
  id5 -> SetBinError( xbin,    826.41707878932255      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    126219.16291452070      );
  id5 -> SetBinError( xbin,    820.35423196814872      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    140963.39158716323      );
  id5 -> SetBinError( xbin,    924.26710750093889      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    160688.79259446455      );
  id5 -> SetBinError( xbin,    1014.4933373137628      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    152718.97537949795      );
  id5 -> SetBinError( xbin,    2044.2316915599567      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    122954.47842337492      );
  id5 -> SetBinError( xbin,    1912.9720241126979      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    59055.072153406734      );
  id5 -> SetBinError( xbin,    303.94922155184383      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    31148.574767940307      );
  id5 -> SetBinError( xbin,    180.21682836955628      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19622.986255962020      );
  id5 -> SetBinError( xbin,    139.36911684567309      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13420.105902204125      );
  id5 -> SetBinError( xbin,    120.45152633320183      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9858.8780415883612      );
  id5 -> SetBinError( xbin,    94.857203478878986      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7500.0267973449709      );
  id5 -> SetBinError( xbin,    90.393964804686263      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5826.7755466995686      );
  id5 -> SetBinError( xbin,    59.744951811019909      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4708.9776482255911      );
  id5 -> SetBinError( xbin,    52.483867997879734      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3687.8926171404996      );
  id5 -> SetBinError( xbin,    48.345666685990395      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3105.7117975007318      );
  id5 -> SetBinError( xbin,    39.750889225036758      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2597.7034109996312      );
  id5 -> SetBinError( xbin,    41.155047884837195      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2100.1336614193551      );
  id5 -> SetBinError( xbin,    41.439887457028981      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1813.0235395636855      );
  id5 -> SetBinError( xbin,    34.593990864613922      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1520.8125979806773      );
  id5 -> SetBinError( xbin,    24.907326903349979      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1377.9198269573524      );
  id5 -> SetBinError( xbin,    26.276803997212475      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1105.6004828280152      );
  id5 -> SetBinError( xbin,    22.828481909896428      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    962.69868401287829      );
  id5 -> SetBinError( xbin,    31.777678398387408      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    849.66507445045590      );
  id5 -> SetBinError( xbin,    30.566190870715218      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    759.30438489099765      );
  id5 -> SetBinError( xbin,    21.866269808717689      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    613.64609901644337      );
  id5 -> SetBinError( xbin,    25.256247366093131      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    612.66011439076340      );
  id5 -> SetBinError( xbin,    20.693517287470129      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    514.53340250892984      );
  id5 -> SetBinError( xbin,    15.193645084979307      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    454.34091297641510      );
  id5 -> SetBinError( xbin,    25.620849545089818      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    372.46606208165491      );
  id5 -> SetBinError( xbin,    24.450580934799085      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    340.93799169851786      );
  id5 -> SetBinError( xbin,    11.951845819948844      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    311.60181133401147      );
  id5 -> SetBinError( xbin,    13.752281223892282      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    292.70854980980027      );
  id5 -> SetBinError( xbin,    17.302211760925431      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    269.22560673641732      );
  id5 -> SetBinError( xbin,    15.092904528643983      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    252.47071918910294      );
  id5 -> SetBinError( xbin,    9.8018715364981919      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2909.3093150633467      );
  id6 -> SetBinError( xbin,    56.150359766381477      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9567.7521734578204      );
  id6 -> SetBinError( xbin,    104.71870301372951      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19154.126725132213      );
  id6 -> SetBinError( xbin,    153.55601756599023      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33767.880274775525      );
  id6 -> SetBinError( xbin,    204.50619211340174      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    54954.438874495383      );
  id6 -> SetBinError( xbin,    252.72662957243108      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    85433.614433604947      );
  id6 -> SetBinError( xbin,    297.47590722769411      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    131110.49750911281      );
  id6 -> SetBinError( xbin,    358.08467722078666      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    182725.11022621515      );
  id6 -> SetBinError( xbin,    427.00723819296064      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    70721.263012244512      );
  id6 -> SetBinError( xbin,    301.28353727959319      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24009.354155262656      );
  id6 -> SetBinError( xbin,    198.43883205028533      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    8830.3561294976880      );
  id6 -> SetBinError( xbin,    130.64507286755773      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3400.6063490807992      );
  id6 -> SetBinError( xbin,    83.934297149315896      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11659.826151674089      );
  id7 -> SetBinError( xbin,    148.01802628519621      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15434.501663856965      );
  id7 -> SetBinError( xbin,    174.82134270528027      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19172.503311617238      );
  id7 -> SetBinError( xbin,    193.40034204254417      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23501.626443812987      );
  id7 -> SetBinError( xbin,    217.40124714594839      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28561.434775791640      );
  id7 -> SetBinError( xbin,    242.89038766524470      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    32747.591239586618      );
  id7 -> SetBinError( xbin,    265.56489453184093      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    36568.924753672931      );
  id7 -> SetBinError( xbin,    281.74920821923007      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    40992.427873434761      );
  id7 -> SetBinError( xbin,    304.18185396031708      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45095.918319903147      );
  id7 -> SetBinError( xbin,    320.34497641727631      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    48919.146237823057      );
  id7 -> SetBinError( xbin,    344.78025317142402      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52176.587782701303      );
  id7 -> SetBinError( xbin,    355.85418166370346      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    54049.531993876029      );
  id7 -> SetBinError( xbin,    362.93351058119225      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    56834.756804913879      );
  id7 -> SetBinError( xbin,    372.99773911199617      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    58715.432994663570      );
  id7 -> SetBinError( xbin,    384.67775542849472      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59952.187999864196      );
  id7 -> SetBinError( xbin,    385.41629321084463      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    60741.222764572798      );
  id7 -> SetBinError( xbin,    387.30004326945300      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    60025.293677426576      );
  id7 -> SetBinError( xbin,    382.17567337436680      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    59582.330330411642      );
  id7 -> SetBinError( xbin,    379.35301674418741      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    59610.350785183888      );
  id7 -> SetBinError( xbin,    375.92738900118280      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    57572.397745178969      );
  id7 -> SetBinError( xbin,    363.66878015523309      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    55361.496692435343      );
  id7 -> SetBinError( xbin,    352.85545112390736      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    52430.884590077403      );
  id7 -> SetBinError( xbin,    339.90037861073671      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    48823.409670511210      );
  id7 -> SetBinError( xbin,    319.28460406105864      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    45348.349549955899      );
  id7 -> SetBinError( xbin,    303.28586598286279      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    41106.287217959667      );
  id7 -> SetBinError( xbin,    283.09435419826769      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    36170.074922165935      );
  id7 -> SetBinError( xbin,    260.83698786907399      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    31177.718592515987      );
  id7 -> SetBinError( xbin,    241.63171453781823      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    25898.563888760153      );
  id7 -> SetBinError( xbin,    215.81642365555524      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    21347.178027302645      );
  id7 -> SetBinError( xbin,    195.99276611913223      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    16734.770057914673      );
  id7 -> SetBinError( xbin,    172.63106744319748      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7066.2820922010842      );
  id8 -> SetBinError( xbin,    45.074906028350490      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12633.752863439377      );
  id8 -> SetBinError( xbin,    59.166019839789143      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    11006.786305862228      );
  id8 -> SetBinError( xbin,    54.528307648740522      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9662.8583538393486      );
  id8 -> SetBinError( xbin,    50.043746353437669      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8417.5977384161815      );
  id8 -> SetBinError( xbin,    46.146064039274094      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7432.8118441515462      );
  id8 -> SetBinError( xbin,    42.756903673657256      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6580.4371340191501      );
  id8 -> SetBinError( xbin,    39.846579804503151      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5788.9250150393709      );
  id8 -> SetBinError( xbin,    36.609764959340517      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5092.2394450982247      );
  id8 -> SetBinError( xbin,    33.926164044131227      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4496.0751181400665      );
  id8 -> SetBinError( xbin,    31.111797231383068      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4032.2302193513442      );
  id8 -> SetBinError( xbin,    29.326414295533539      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3631.6898671610843      );
  id8 -> SetBinError( xbin,    27.241353317629159      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3274.2699200916936      );
  id8 -> SetBinError( xbin,    26.031715131423855      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2922.3147127762918      );
  id8 -> SetBinError( xbin,    23.839794140128905      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2639.1014131483062      );
  id8 -> SetBinError( xbin,    22.419068108911716      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2382.3267617398246      );
  id8 -> SetBinError( xbin,    21.111040678620853      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2189.7868357806624      );
  id8 -> SetBinError( xbin,    20.038954151376117      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1978.6022863543531      );
  id8 -> SetBinError( xbin,    18.831094642242395      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1810.0349156631794      );
  id8 -> SetBinError( xbin,    17.917834631731541      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1654.6706674688076      );
  id8 -> SetBinError( xbin,    16.933217999208498      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1519.6823302071407      );
  id8 -> SetBinError( xbin,    16.088171279600886      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1375.8926935912414      );
  id8 -> SetBinError( xbin,    15.171321192640736      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1284.8551652114836      );
  id8 -> SetBinError( xbin,    14.688132795918786      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1169.2268529502530      );
  id8 -> SetBinError( xbin,    13.663182568440943      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1082.3590751118074      );
  id8 -> SetBinError( xbin,    12.849995606982400      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    974.47687145187854      );
  id8 -> SetBinError( xbin,    12.138714630280527      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    906.12431166824831      );
  id8 -> SetBinError( xbin,    11.820198598710784      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    836.35383083907254      );
  id8 -> SetBinError( xbin,    11.264059594584323      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
