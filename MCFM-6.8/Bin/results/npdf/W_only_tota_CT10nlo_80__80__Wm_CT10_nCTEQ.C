// Cross-section is:      1714467.2049380285 +/-          703.3579300676)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -31194.51658   -1.82%
//        GQB    |      -26866.38787   -1.57%
//        QG     |      -30302.84303   -1.77%
//        QBG    |      -26900.90917   -1.57%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      826266.23765   48.19%
//        QBQ    |     1008560.85105   58.83%

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
//Wm_CT10_nCTEQ                   [runstring]  
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
//             CT10nlo            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//CT10nlo.LHpdf                   [LHAPDF group 1]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wm_CT10_nCTEQ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -5.8254118557047223E-003 );
  id1 -> SetBinError( xbin,    7.0414481809589896E-003 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    11.905068605517908      );
  id1 -> SetBinError( xbin,    1.9093687921449736      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    198.89773028298745      );
  id1 -> SetBinError( xbin,    21.880345340450159      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1824.6415156449912      );
  id1 -> SetBinError( xbin,    115.93176714946335      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    7360.5652330854318      );
  id1 -> SetBinError( xbin,    352.56241191247278      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    24452.945282654564      );
  id1 -> SetBinError( xbin,    624.83739097260150      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    60048.351150862632      );
  id1 -> SetBinError( xbin,    1060.2820593285446      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    117004.15624143321      );
  id1 -> SetBinError( xbin,    1175.1871757132108      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    185541.71992527647      );
  id1 -> SetBinError( xbin,    1478.5506473988905      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    266853.21721730632      );
  id1 -> SetBinError( xbin,    1696.5314189811888      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    333682.11667989451      );
  id1 -> SetBinError( xbin,    1772.2846053217909      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    381577.82988399424      );
  id1 -> SetBinError( xbin,    1842.0765984267609      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    399114.54011669097      );
  id1 -> SetBinError( xbin,    1874.3455485157381      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    406275.36997667525      );
  id1 -> SetBinError( xbin,    1876.3644490470119      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    412068.92240914650      );
  id1 -> SetBinError( xbin,    1859.8188710171344      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    414061.56176342862      );
  id1 -> SetBinError( xbin,    1871.0177645471340      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    415647.85205843742      );
  id1 -> SetBinError( xbin,    1865.6547864027038      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    412135.88093820325      );
  id1 -> SetBinError( xbin,    1831.1327129266290      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    399324.27311965224      );
  id1 -> SetBinError( xbin,    1811.1742882244437      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    396612.30946667871      );
  id1 -> SetBinError( xbin,    1795.0191087127964      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    383500.71558886551      );
  id1 -> SetBinError( xbin,    1757.5564246857462      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    368052.37632355420      );
  id1 -> SetBinError( xbin,    1753.9579495867213      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    356567.94833166339      );
  id1 -> SetBinError( xbin,    1697.2397653666990      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    342860.72247321275      );
  id1 -> SetBinError( xbin,    1672.7397822725325      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    324402.57028237998      );
  id1 -> SetBinError( xbin,    1632.7598355384880      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    309383.67405952566      );
  id1 -> SetBinError( xbin,    1623.0177375526564      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    298924.90072488325      );
  id1 -> SetBinError( xbin,    1591.8735653483466      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    279694.88776461186      );
  id1 -> SetBinError( xbin,    1617.9707677697450      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    262928.55898284906      );
  id1 -> SetBinError( xbin,    1551.6453492145317      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    247894.40391074173      );
  id1 -> SetBinError( xbin,    1486.3424944540136      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    223871.39234460160      );
  id1 -> SetBinError( xbin,    1423.8567909914593      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    188510.45412383118      );
  id1 -> SetBinError( xbin,    1337.3188979762656      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    145243.51201842332      );
  id1 -> SetBinError( xbin,    1212.1127873324183      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    99216.583158650887      );
  id1 -> SetBinError( xbin,    1022.0784807306358      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    58942.269077932280      );
  id1 -> SetBinError( xbin,    958.26016384089542      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    31432.891595326440      );
  id1 -> SetBinError( xbin,    668.01414042448687      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    12513.785302620861      );
  id1 -> SetBinError( xbin,    464.87034303595595      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    3717.9820250262223      );
  id1 -> SetBinError( xbin,    186.33125117016721      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    763.59332558126505      );
  id1 -> SetBinError( xbin,    50.707385695829501      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    105.15474575934311      );
  id1 -> SetBinError( xbin,    9.0959863178349600      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    6.3736428844292261      );
  id1 -> SetBinError( xbin,   0.88358128029778915      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    7.1774587026973008E-003 );
  id1 -> SetBinError( xbin,    8.4267744656055348E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    516892.12265625934      );
  id2 -> SetBinError( xbin,    5586.5167066221293      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    483165.23017531674      );
  id2 -> SetBinError( xbin,    3974.3248480982206      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    466861.65590846114      );
  id2 -> SetBinError( xbin,    3513.3011825123999      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    446037.81818386813      );
  id2 -> SetBinError( xbin,    3542.4537684057400      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    422122.62112791766      );
  id2 -> SetBinError( xbin,    3360.3697125516314      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    399689.75683677848      );
  id2 -> SetBinError( xbin,    2831.3444556892832      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    376879.78300794447      );
  id2 -> SetBinError( xbin,    3044.7701883064410      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    359361.21211000474      );
  id2 -> SetBinError( xbin,    3676.9350126638728      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    341033.41654731537      );
  id2 -> SetBinError( xbin,    4765.2688792939971      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    317063.42454106372      );
  id2 -> SetBinError( xbin,    1993.1867188065776      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    297249.07740116614      );
  id2 -> SetBinError( xbin,    1871.4493466541094      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    273160.56659217289      );
  id2 -> SetBinError( xbin,    1541.3041334805548      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    254729.01634077262      );
  id2 -> SetBinError( xbin,    1593.2521725559764      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    235397.41940666499      );
  id2 -> SetBinError( xbin,    1521.8826383140056      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    215535.21081439755      );
  id2 -> SetBinError( xbin,    1341.2129949979858      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    194697.69640784498      );
  id2 -> SetBinError( xbin,    1114.1164526100893      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    176078.64652585328      );
  id2 -> SetBinError( xbin,    994.11565675418888      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    160185.74901847242      );
  id2 -> SetBinError( xbin,    1025.5588004383656      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    142767.90302377907      );
  id2 -> SetBinError( xbin,    923.34152080889282      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    126925.72170373512      );
  id2 -> SetBinError( xbin,    852.92486814277379      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    110016.40600469544      );
  id2 -> SetBinError( xbin,    666.57553209531932      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    97369.229875461126      );
  id2 -> SetBinError( xbin,    933.27907899150466      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    85460.686987629611      );
  id2 -> SetBinError( xbin,    626.89162509717812      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    73948.745131037722      );
  id2 -> SetBinError( xbin,    484.29198522084437      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    64292.683246128778      );
  id2 -> SetBinError( xbin,    434.82807037019768      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    57115.491958103390      );
  id2 -> SetBinError( xbin,    535.36403758951019      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    52013.479897988575      );
  id2 -> SetBinError( xbin,    707.53143508863423      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    47143.851278503127      );
  id2 -> SetBinError( xbin,    401.49691036632436      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    43512.004400998267      );
  id2 -> SetBinError( xbin,    486.07957611343329      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    41774.010621995425      );
  id2 -> SetBinError( xbin,    439.27151955751151      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    41715.929501452556      );
  id2 -> SetBinError( xbin,    366.50592078751521      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    42548.159119527743      );
  id2 -> SetBinError( xbin,    331.93255423798109      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    44968.292812597945      );
  id2 -> SetBinError( xbin,    363.80542252809965      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    50097.321185093693      );
  id2 -> SetBinError( xbin,    430.43042135451589      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    54338.773585568975      );
  id2 -> SetBinError( xbin,    427.80799270494799      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    60867.063499557531      );
  id2 -> SetBinError( xbin,    460.57873724231723      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    68878.669051117089      );
  id2 -> SetBinError( xbin,    523.56445220179626      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    77960.481434733301      );
  id2 -> SetBinError( xbin,    727.61251201227753      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    87284.491387072441      );
  id2 -> SetBinError( xbin,    611.59109824571181      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    97929.521707661450      );
  id2 -> SetBinError( xbin,    662.27045832110844      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    108869.69332127245      );
  id2 -> SetBinError( xbin,    747.17393572382548      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    123424.67362177247      );
  id2 -> SetBinError( xbin,    908.33661120236525      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    135348.52498233871      );
  id2 -> SetBinError( xbin,    949.60298113663532      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    150611.46382320829      );
  id2 -> SetBinError( xbin,    1158.1565236530612      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    163393.16923106936      );
  id2 -> SetBinError( xbin,    1126.3615696104162      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    177402.02780938469      );
  id2 -> SetBinError( xbin,    1210.4467610346906      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    192306.25439380045      );
  id2 -> SetBinError( xbin,    1376.9970916647721      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    210325.03598267498      );
  id2 -> SetBinError( xbin,    2239.3441470020225      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    224117.93987559504      );
  id2 -> SetBinError( xbin,    1831.4230402529688      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    236780.81239681176      );
  id2 -> SetBinError( xbin,    1807.0076682685806      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    252664.40288901731      );
  id2 -> SetBinError( xbin,    1870.3283187364491      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    268625.57143708429      );
  id2 -> SetBinError( xbin,    2498.2082478561015      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    283983.39733345836      );
  id2 -> SetBinError( xbin,    2319.6549376262110      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    297735.91732874693      );
  id2 -> SetBinError( xbin,    2668.8429027465800      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    316038.67375887092      );
  id2 -> SetBinError( xbin,    3525.3463061598327      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    327194.55156196957      );
  id2 -> SetBinError( xbin,    3093.3676228192389      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    344702.39332208742      );
  id2 -> SetBinError( xbin,    3298.6779877354584      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    357269.84532314574      );
  id2 -> SetBinError( xbin,    3300.9223642559991      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    373718.24936878018      );
  id2 -> SetBinError( xbin,    4156.0860531526505      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    406026.26608531922      );
  id2 -> SetBinError( xbin,    8123.2251033338907      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    262602.01944903540      );
  id3 -> SetBinError( xbin,    2136.7627443066422      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    288679.77201179566      );
  id3 -> SetBinError( xbin,    2003.7102083648790      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    305464.35133950069      );
  id3 -> SetBinError( xbin,    1895.9570878782417      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    322836.77672658657      );
  id3 -> SetBinError( xbin,    1843.9834684305310      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    333374.16903491411      );
  id3 -> SetBinError( xbin,    2172.3851818000094      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    335877.10222695343      );
  id3 -> SetBinError( xbin,    2138.0993101930394      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    345544.19469903543      );
  id3 -> SetBinError( xbin,    1763.3903970899528      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    349568.62878950482      );
  id3 -> SetBinError( xbin,    1693.3112057151286      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    351912.43121030496      );
  id3 -> SetBinError( xbin,    1663.8562766063003      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    354549.35354296298      );
  id3 -> SetBinError( xbin,    1672.0971493811180      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    351817.92919441074      );
  id3 -> SetBinError( xbin,    1651.6436170551497      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    348201.36234943272      );
  id3 -> SetBinError( xbin,    1612.5953384598117      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    348006.83396703913      );
  id3 -> SetBinError( xbin,    1622.9533267995739      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    341823.62724610907      );
  id3 -> SetBinError( xbin,    1614.6238437368902      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    336071.24379730335      );
  id3 -> SetBinError( xbin,    1584.1830013114356      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    325548.20817455970      );
  id3 -> SetBinError( xbin,    1564.0126448881103      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    318074.27811555989      );
  id3 -> SetBinError( xbin,    1546.6927514242750      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    308012.82631535822      );
  id3 -> SetBinError( xbin,    1562.0716258124651      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    294861.97989622579      );
  id3 -> SetBinError( xbin,    1853.2883315750137      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    282045.57148118934      );
  id3 -> SetBinError( xbin,    1823.1475087275826      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    270145.33751412277      );
  id3 -> SetBinError( xbin,    1503.3149383138059      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    255079.71906377294      );
  id3 -> SetBinError( xbin,    1520.5478899049369      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    243281.56999569701      );
  id3 -> SetBinError( xbin,    1519.8364914215558      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    232414.32252545620      );
  id3 -> SetBinError( xbin,    1482.8427615063156      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    218218.06679590896      );
  id3 -> SetBinError( xbin,    1468.5741868855177      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    203606.19430429878      );
  id3 -> SetBinError( xbin,    1467.0933296172009      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    189733.59164228843      );
  id3 -> SetBinError( xbin,    1483.1588462959708      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    169025.94233134412      );
  id3 -> SetBinError( xbin,    1509.6529970817130      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    152061.49561847624      );
  id3 -> SetBinError( xbin,    1527.6784431220894      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    133892.90757375915      );
  id3 -> SetBinError( xbin,    1584.4463530799740      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    91804.121089250242      );
  id4 -> SetBinError( xbin,    2135.1958639637801      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    255250.42729831580      );
  id4 -> SetBinError( xbin,    3137.5354686376963      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    275097.00182279054      );
  id4 -> SetBinError( xbin,    3087.5757438809610      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    288852.61445615621      );
  id4 -> SetBinError( xbin,    3023.3041649200413      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    294706.65803524869      );
  id4 -> SetBinError( xbin,    2922.5672957537422      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    305818.93604097678      );
  id4 -> SetBinError( xbin,    3002.2676303268518      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    314735.62545582926      );
  id4 -> SetBinError( xbin,    2908.9225624760047      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    319444.92300423671      );
  id4 -> SetBinError( xbin,    2796.7904636217590      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    328775.62340423488      );
  id4 -> SetBinError( xbin,    2807.5970025586935      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    331399.32440151053      );
  id4 -> SetBinError( xbin,    2706.6091901220530      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    335457.22549121885      );
  id4 -> SetBinError( xbin,    2632.3637023601354      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    337034.95439443935      );
  id4 -> SetBinError( xbin,    2619.2473900056143      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    339981.25236779568      );
  id4 -> SetBinError( xbin,    2602.5450747026030      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    342796.69586706161      );
  id4 -> SetBinError( xbin,    2561.4572306116247      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    348451.39703510585      );
  id4 -> SetBinError( xbin,    2630.8987048892345      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    347798.47490176157      );
  id4 -> SetBinError( xbin,    2603.1808845548203      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    354760.03959957400      );
  id4 -> SetBinError( xbin,    2606.3978349533604      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    349867.13562847546      );
  id4 -> SetBinError( xbin,    2533.1374165849816      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    353316.82857641921      );
  id4 -> SetBinError( xbin,    2705.1794696067673      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    355288.68025416904      );
  id4 -> SetBinError( xbin,    2679.7573835283401      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    349389.69921016297      );
  id4 -> SetBinError( xbin,    2584.2522087067541      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    352902.58735381434      );
  id4 -> SetBinError( xbin,    2577.8427921505267      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    350750.95473684033      );
  id4 -> SetBinError( xbin,    2480.1191943981858      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    350407.39292865584      );
  id4 -> SetBinError( xbin,    2523.0108459066373      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    350631.17109759233      );
  id4 -> SetBinError( xbin,    2485.1804741645960      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    346951.35062005976      );
  id4 -> SetBinError( xbin,    2473.2517881752024      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    340552.83169337531      );
  id4 -> SetBinError( xbin,    2609.4131875687281      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    345634.43868308421      );
  id4 -> SetBinError( xbin,    2578.6661011408019      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    342013.96260408219      );
  id4 -> SetBinError( xbin,    2398.4599443147631      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    333858.72571589937      );
  id4 -> SetBinError( xbin,    2413.4882849125729      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    333737.44377260469      );
  id4 -> SetBinError( xbin,    2472.0300593183329      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    327312.83176195179      );
  id4 -> SetBinError( xbin,    2421.0995780618105      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    323241.48355399485      );
  id4 -> SetBinError( xbin,    2374.4818202790639      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    318515.07104928314      );
  id4 -> SetBinError( xbin,    2326.1122782819393      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    312625.37968034303      );
  id4 -> SetBinError( xbin,    2330.8230257035884      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    308324.07036148733      );
  id4 -> SetBinError( xbin,    2333.7206148683449      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    304698.99297465669      );
  id4 -> SetBinError( xbin,    2352.6435125670614      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    296956.40729187574      );
  id4 -> SetBinError( xbin,    2333.0474324452521      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    285374.83398885146      );
  id4 -> SetBinError( xbin,    2409.4706231123173      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    283773.40602233983      );
  id4 -> SetBinError( xbin,    2410.2343415006394      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    277221.02568755648      );
  id4 -> SetBinError( xbin,    2290.5649677016831      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    272388.93062340177      );
  id4 -> SetBinError( xbin,    2241.8287845962982      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    262058.13090946071      );
  id4 -> SetBinError( xbin,    2279.3208133803723      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    260096.56426074612      );
  id4 -> SetBinError( xbin,    2404.7707096338336      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    250170.83115199447      );
  id4 -> SetBinError( xbin,    2329.0820523267175      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    241799.58180517197      );
  id4 -> SetBinError( xbin,    2211.1359265068936      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    237818.08341552384      );
  id4 -> SetBinError( xbin,    2324.6374439009187      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    230763.95572755966      );
  id4 -> SetBinError( xbin,    2400.3646883151478      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    233419.31161424398      );
  id4 -> SetBinError( xbin,    4899.4369125661760      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    211906.80656680401      );
  id4 -> SetBinError( xbin,    4845.9772547360453      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    214412.87735292607      );
  id4 -> SetBinError( xbin,    2187.8827008446924      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    207493.05804711403      );
  id4 -> SetBinError( xbin,    2233.6475578585969      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    195428.32540355588      );
  id4 -> SetBinError( xbin,    2255.3834869144584      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    190451.10556697735      );
  id4 -> SetBinError( xbin,    2200.9162652376135      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    183387.91620199708      );
  id4 -> SetBinError( xbin,    2276.0162820356477      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    168260.74804890642      );
  id4 -> SetBinError( xbin,    2276.7068914158040      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    25910.812229960822      );
  id5 -> SetBinError( xbin,    234.40219270947475      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    56865.158570471132      );
  id5 -> SetBinError( xbin,    299.65000436411373      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    64219.911239784007      );
  id5 -> SetBinError( xbin,    359.36792399189926      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    73347.292211410415      );
  id5 -> SetBinError( xbin,    412.91011145586447      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    83111.708940354729      );
  id5 -> SetBinError( xbin,    413.62512817829662      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    97847.643334809341      );
  id5 -> SetBinError( xbin,    510.58410611869533      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    117362.62529768702      );
  id5 -> SetBinError( xbin,    575.71606072910481      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    142743.82287712389      );
  id5 -> SetBinError( xbin,    603.00056393535647      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    90842.072097983269      );
  id5 -> SetBinError( xbin,    447.06978386113332      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    33276.713163083929      );
  id5 -> SetBinError( xbin,    161.67429118331756      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    17599.044708245125      );
  id5 -> SetBinError( xbin,    97.135751550435486      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    11075.982733142868      );
  id5 -> SetBinError( xbin,    67.659565675381259      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    7788.1887198832810      );
  id5 -> SetBinError( xbin,    50.357886246985203      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    5809.4582692655531      );
  id5 -> SetBinError( xbin,    41.863313834166682      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4429.3034981323408      );
  id5 -> SetBinError( xbin,    35.049217917383139      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3597.6159759386719      );
  id5 -> SetBinError( xbin,    32.031813383836585      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    2837.9862122354871      );
  id5 -> SetBinError( xbin,    28.039136693232077      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2413.3560415678930      );
  id5 -> SetBinError( xbin,    30.930698100901701      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    1942.7698444251682      );
  id5 -> SetBinError( xbin,    30.799007071934142      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1701.0568807168529      );
  id5 -> SetBinError( xbin,    22.032341766118211      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1444.6111454157444      );
  id5 -> SetBinError( xbin,    19.253641092829508      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1224.9047409684572      );
  id5 -> SetBinError( xbin,    17.739830707230563      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1055.8365921607890      );
  id5 -> SetBinError( xbin,    17.965760665264593      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    934.47897394299002      );
  id5 -> SetBinError( xbin,    17.974211201430094      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    795.05355145386807      );
  id5 -> SetBinError( xbin,    15.168075884494217      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    692.67967883241909      );
  id5 -> SetBinError( xbin,    11.413368092854649      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    620.13373042152773      );
  id5 -> SetBinError( xbin,    11.792271826666139      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    546.91582734161670      );
  id5 -> SetBinError( xbin,    10.805731682354814      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    461.34018594305047      );
  id5 -> SetBinError( xbin,    10.977195748168905      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    449.38806166903589      );
  id5 -> SetBinError( xbin,    10.588975673992092      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    375.65104642677295      );
  id5 -> SetBinError( xbin,    8.5174305131314139      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    331.41346370040077      );
  id5 -> SetBinError( xbin,    8.2563611527918042      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    310.07460903239649      );
  id5 -> SetBinError( xbin,    8.1413062259896201      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    282.94473892114291      );
  id5 -> SetBinError( xbin,    7.9746632983208965      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    247.82300475163484      );
  id5 -> SetBinError( xbin,    7.0182269186193027      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    218.38207527065947      );
  id5 -> SetBinError( xbin,    7.2538059592433406      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    212.02491959459385      );
  id5 -> SetBinError( xbin,    6.3201004608751505      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    171.93024607543077      );
  id5 -> SetBinError( xbin,    6.9615483836041072      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1309.5685288168588      );
  id6 -> SetBinError( xbin,    24.437397671676120      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    4224.5219732717960      );
  id6 -> SetBinError( xbin,    43.453463384969197      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    8203.6256404244832      );
  id6 -> SetBinError( xbin,    60.243066518861646      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    14178.464063127103      );
  id6 -> SetBinError( xbin,    76.667745651149417      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    23089.878044898549      );
  id6 -> SetBinError( xbin,    93.281274254647983      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    37314.192714261910      );
  id6 -> SetBinError( xbin,    113.33930288692972      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    64367.629422487167      );
  id6 -> SetBinError( xbin,    151.09598379585171      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    104305.27511873098      );
  id6 -> SetBinError( xbin,    208.34367061044674      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    46019.616608707816      );
  id6 -> SetBinError( xbin,    166.32714365396015      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    17594.874810430614      );
  id6 -> SetBinError( xbin,    120.65948788199488      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    7270.6398739201413      );
  id6 -> SetBinError( xbin,    86.773729688589953      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2945.0859104984665      );
  id6 -> SetBinError( xbin,    60.249362621315079      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    6112.8108180633826      );
  id7 -> SetBinError( xbin,    69.741553597769865      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    8496.0443970750821      );
  id7 -> SetBinError( xbin,    82.428795362131652      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    10904.885285424376      );
  id7 -> SetBinError( xbin,    92.091562176513634      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    13688.180443492562      );
  id7 -> SetBinError( xbin,    103.89722849209802      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    16789.081411592939      );
  id7 -> SetBinError( xbin,    114.80769213987195      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    20073.490897525742      );
  id7 -> SetBinError( xbin,    127.73619262386866      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    23052.279898264951      );
  id7 -> SetBinError( xbin,    140.45562905012989      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    26576.678425519160      );
  id7 -> SetBinError( xbin,    156.00422047218788      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    29130.580062617428      );
  id7 -> SetBinError( xbin,    162.34813218315574      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    31394.005565224135      );
  id7 -> SetBinError( xbin,    171.41363439305735      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    33274.955815289388      );
  id7 -> SetBinError( xbin,    179.28450413126967      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    34685.989914308957      );
  id7 -> SetBinError( xbin,    185.22958445069716      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    35949.644035627985      );
  id7 -> SetBinError( xbin,    190.85728281492655      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    35933.981270114935      );
  id7 -> SetBinError( xbin,    190.68599236831218      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    36058.015449462917      );
  id7 -> SetBinError( xbin,    192.07195621184951      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    35181.526407709454      );
  id7 -> SetBinError( xbin,    189.20535814766052      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    34387.512242785007      );
  id7 -> SetBinError( xbin,    187.92329824602783      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    32691.132548061720      );
  id7 -> SetBinError( xbin,    183.07442487303572      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    30611.322540539681      );
  id7 -> SetBinError( xbin,    174.32222117769936      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    28568.222816687288      );
  id7 -> SetBinError( xbin,    168.86015574781985      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    25963.043159605360      );
  id7 -> SetBinError( xbin,    157.88825643719773      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    23081.380892475860      );
  id7 -> SetBinError( xbin,    147.71286769058551      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    20355.503457658266      );
  id7 -> SetBinError( xbin,    137.73319771756590      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    17580.067804946299      );
  id7 -> SetBinError( xbin,    126.04159678803894      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    14775.321990388804      );
  id7 -> SetBinError( xbin,    113.79552792631786      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    12153.141882773478      );
  id7 -> SetBinError( xbin,    104.97904835301476      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    9756.3241520176380      );
  id7 -> SetBinError( xbin,    91.425208692808937      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    7653.4207891806936      );
  id7 -> SetBinError( xbin,    81.237128380101296      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    5704.2443701381235      );
  id7 -> SetBinError( xbin,    69.786764684266714      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    4108.5327323930132      );
  id7 -> SetBinError( xbin,    60.650580338880502      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    3531.4519398114908      );
  id8 -> SetBinError( xbin,    20.134141640942531      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    6366.9838466421816      );
  id8 -> SetBinError( xbin,    26.565301810488542      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    5548.6423072763191      );
  id8 -> SetBinError( xbin,    24.500361748219248      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    4877.6776820478071      );
  id8 -> SetBinError( xbin,    22.910663667661190      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    4295.9200083736932      );
  id8 -> SetBinError( xbin,    21.156601448900606      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    3789.6417557233590      );
  id8 -> SetBinError( xbin,    19.582430020698673      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    3419.2588512093776      );
  id8 -> SetBinError( xbin,    18.527091469107607      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    3001.1047431538163      );
  id8 -> SetBinError( xbin,    17.051597102452337      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    2693.4469393527543      );
  id8 -> SetBinError( xbin,    16.125107678355359      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2406.8041539782917      );
  id8 -> SetBinError( xbin,    15.117937374037663      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2172.5387336975218      );
  id8 -> SetBinError( xbin,    14.224177725224186      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    1962.6194061616266      );
  id8 -> SetBinError( xbin,    13.345627173347889      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    1792.1276577949918      );
  id8 -> SetBinError( xbin,    12.691793099704833      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1611.9245108969576      );
  id8 -> SetBinError( xbin,    12.192115635327449      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1452.4412909819555      );
  id8 -> SetBinError( xbin,    11.173090374046796      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1329.0132082671487      );
  id8 -> SetBinError( xbin,    10.531164796593611      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1225.0134924384768      );
  id8 -> SetBinError( xbin,    10.347641447479461      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1100.7256827458100      );
  id8 -> SetBinError( xbin,    9.6300506797537277      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1026.5066630452882      );
  id8 -> SetBinError( xbin,    9.3162027702875054      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    940.87615051994715      );
  id8 -> SetBinError( xbin,    8.7614830317913022      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    858.04919370237769      );
  id8 -> SetBinError( xbin,    8.2187416218560045      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    787.43487833172242      );
  id8 -> SetBinError( xbin,    7.8069567651987244      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    727.95435037595507      );
  id8 -> SetBinError( xbin,    7.4286235876707023      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    661.58107848397970      );
  id8 -> SetBinError( xbin,    6.9607500718932034      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    626.25153005328912      );
  id8 -> SetBinError( xbin,    6.8060004668766148      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    570.80042238646831      );
  id8 -> SetBinError( xbin,    6.4462042259109271      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    516.88695599732625      );
  id8 -> SetBinError( xbin,    6.1545794980275224      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    484.31149558211047      );
  id8 -> SetBinError( xbin,    5.8238561174650521      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
