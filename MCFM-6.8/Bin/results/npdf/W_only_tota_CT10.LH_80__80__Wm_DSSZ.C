// Cross-section is:      1847777.7966410383 +/-          820.9452327358)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -51990.24014   -2.81%
//        GQB    |      -43628.47175   -2.36%
//        QG     |      -50062.48775   -2.71%
//        QBG    |      -43282.39690   -2.34%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      915248.01597   49.53%
//        QBQ    |     1130407.93906   61.18%

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
//Wm_DSSZ                         [runstring]  
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
//CT10.LHpdf                      [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//CT10.LHpdf                      [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wm_DSSZ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -4.4938210306682703E-003 );
  id1 -> SetBinError( xbin,    1.1078070034619414E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    19.618913918991968      );
  id1 -> SetBinError( xbin,    3.1012059153386642      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    327.12925834732289      );
  id1 -> SetBinError( xbin,    44.836649943070647      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2518.6506458869917      );
  id1 -> SetBinError( xbin,    170.01762975024045      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    10184.393965978808      );
  id1 -> SetBinError( xbin,    466.50283003723490      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    30122.490475458409      );
  id1 -> SetBinError( xbin,    744.67829218154873      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    72014.267857440602      );
  id1 -> SetBinError( xbin,    1138.3581523777402      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    135851.93282926941      );
  id1 -> SetBinError( xbin,    1343.8991160251960      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    211361.31193979361      );
  id1 -> SetBinError( xbin,    1579.3276748469323      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    292450.97928007221      );
  id1 -> SetBinError( xbin,    3345.4543944961310      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    364558.18694290542      );
  id1 -> SetBinError( xbin,    1936.1006559037191      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    408909.57733171718      );
  id1 -> SetBinError( xbin,    2009.7925339277049      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    423135.29245831980      );
  id1 -> SetBinError( xbin,    2078.0263380932552      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    423383.96792354865      );
  id1 -> SetBinError( xbin,    2061.5578512066909      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    422307.64562679542      );
  id1 -> SetBinError( xbin,    2005.0849320488628      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    422285.57332742284      );
  id1 -> SetBinError( xbin,    1987.9861217043588      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    415014.94450486242      );
  id1 -> SetBinError( xbin,    1935.9914830934965      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    411857.51677085366      );
  id1 -> SetBinError( xbin,    1929.2628936513288      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    398688.11506299104      );
  id1 -> SetBinError( xbin,    2046.9149960074628      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    396445.52526663325      );
  id1 -> SetBinError( xbin,    2025.7574051330662      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    388423.58516439376      );
  id1 -> SetBinError( xbin,    1865.3932974879756      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    382892.00697365525      );
  id1 -> SetBinError( xbin,    1842.0739447735486      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    370563.57385882601      );
  id1 -> SetBinError( xbin,    1874.2392105149745      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    368075.84724759648      );
  id1 -> SetBinError( xbin,    1837.5198860962873      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    353084.31830744818      );
  id1 -> SetBinError( xbin,    1880.7710942367589      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    344138.55422824691      );
  id1 -> SetBinError( xbin,    1864.4870460859747      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    333314.62159659853      );
  id1 -> SetBinError( xbin,    1835.2809991687000      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    326063.57744121063      );
  id1 -> SetBinError( xbin,    1948.2523463909463      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    304859.10146867920      );
  id1 -> SetBinError( xbin,    1793.1523605146917      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    292254.75380468857      );
  id1 -> SetBinError( xbin,    1783.5285940665235      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    268485.24378414720      );
  id1 -> SetBinError( xbin,    1686.3518719475246      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    228651.26624237315      );
  id1 -> SetBinError( xbin,    1576.1417741899681      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    177755.47488589052      );
  id1 -> SetBinError( xbin,    1484.2116652526454      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    121850.09803002654      );
  id1 -> SetBinError( xbin,    1257.7364423289853      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    74538.305688502907      );
  id1 -> SetBinError( xbin,    1071.6082920308074      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    40005.578161417412      );
  id1 -> SetBinError( xbin,    811.30909696500976      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    16116.099759151895      );
  id1 -> SetBinError( xbin,    544.99492823144215      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    4813.3419791645565      );
  id1 -> SetBinError( xbin,    233.60531668721075      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    971.87795464592079      );
  id1 -> SetBinError( xbin,    71.992659933490728      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    140.57322121103809      );
  id1 -> SetBinError( xbin,    13.003529496985641      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    6.4521346324063451      );
  id1 -> SetBinError( xbin,    1.0349452047452432      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    7.6155917776318961E-003 );
  id1 -> SetBinError( xbin,    9.1931442319072871E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    823962.98424815142      );
  id2 -> SetBinError( xbin,    9364.9623312309850      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    775852.72212642932      );
  id2 -> SetBinError( xbin,    7044.2064230772075      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    761814.87574560218      );
  id2 -> SetBinError( xbin,    6924.0870800136945      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    711305.48405247333      );
  id2 -> SetBinError( xbin,    5626.6420401111873      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    682601.75525121659      );
  id2 -> SetBinError( xbin,    5945.0833490818022      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    639829.50714245997      );
  id2 -> SetBinError( xbin,    5419.3125465711082      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    617485.29836528411      );
  id2 -> SetBinError( xbin,    4660.7872250634937      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    579974.67038274999      );
  id2 -> SetBinError( xbin,    5528.2727590348541      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    535646.10335999762      );
  id2 -> SetBinError( xbin,    4542.2956494487553      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    505142.96084043069      );
  id2 -> SetBinError( xbin,    3410.8896144650353      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    477205.15727997117      );
  id2 -> SetBinError( xbin,    3368.4179455845419      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    433994.12650880043      );
  id2 -> SetBinError( xbin,    2691.5287486645807      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    405504.74734600179      );
  id2 -> SetBinError( xbin,    2833.6474111413636      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    385354.74153615307      );
  id2 -> SetBinError( xbin,    6271.1911285332963      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    346269.82646647637      );
  id2 -> SetBinError( xbin,    3220.0535444638140      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    310156.20123493089      );
  id2 -> SetBinError( xbin,    2145.2366290183063      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    281868.34633700410      );
  id2 -> SetBinError( xbin,    1844.3414114542368      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    254681.11889360493      );
  id2 -> SetBinError( xbin,    1940.6075843259400      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    225229.29254922035      );
  id2 -> SetBinError( xbin,    1485.1359530465081      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    199370.62770488090      );
  id2 -> SetBinError( xbin,    1351.0297392117334      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    174955.79461240245      );
  id2 -> SetBinError( xbin,    1914.8529266593539      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    154854.89625544124      );
  id2 -> SetBinError( xbin,    1361.3942836716963      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    135650.24406264364      );
  id2 -> SetBinError( xbin,    1353.9947125637630      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    117280.58190269157      );
  id2 -> SetBinError( xbin,    936.31649485239598      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    102488.12634864172      );
  id2 -> SetBinError( xbin,    942.22854114240226      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    103507.93265932491      );
  id2 -> SetBinError( xbin,    13340.370654172528      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    81207.083580184524      );
  id2 -> SetBinError( xbin,    710.31213800043633      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    71648.044132875104      );
  id2 -> SetBinError( xbin,    697.75911487106987      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    68239.247057133573      );
  id2 -> SetBinError( xbin,    632.45073675602134      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    64232.083893424693      );
  id2 -> SetBinError( xbin,    570.74296644518699      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    66078.007969450482      );
  id2 -> SetBinError( xbin,    686.82974756655574      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    66168.153752260841      );
  id2 -> SetBinError( xbin,    597.49980416435187      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    71513.320004927024      );
  id2 -> SetBinError( xbin,    723.44877521071669      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    77500.744302223829      );
  id2 -> SetBinError( xbin,    695.89334911124740      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    85114.313738332596      );
  id2 -> SetBinError( xbin,    789.40021020520760      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    95417.768737422986      );
  id2 -> SetBinError( xbin,    806.38082997826746      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    108342.68749740681      );
  id2 -> SetBinError( xbin,    973.25804129990229      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    124188.18776258336      );
  id2 -> SetBinError( xbin,    992.34775625733710      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    138283.36151993551      );
  id2 -> SetBinError( xbin,    998.19585089041902      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    157593.69812491527      );
  id2 -> SetBinError( xbin,    1206.2082643128299      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    177869.58547240021      );
  id2 -> SetBinError( xbin,    1475.5826186140557      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    196268.96953096357      );
  id2 -> SetBinError( xbin,    1455.7584087129542      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    221655.16504814802      );
  id2 -> SetBinError( xbin,    1736.8093546500913      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    245125.97666618467      );
  id2 -> SetBinError( xbin,    1688.4616244089191      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    268824.07706811611      );
  id2 -> SetBinError( xbin,    1892.0545568544646      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    293623.26026650955      );
  id2 -> SetBinError( xbin,    2129.5319592155856      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    316694.45046969334      );
  id2 -> SetBinError( xbin,    2239.6873072158169      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    344985.93410220393      );
  id2 -> SetBinError( xbin,    2578.1632173823109      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    369617.60138773511      );
  id2 -> SetBinError( xbin,    4300.6544550983208      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    403686.15126293898      );
  id2 -> SetBinError( xbin,    5206.5668587479040      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    421303.24204587750      );
  id2 -> SetBinError( xbin,    4057.9792918347284      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    448527.56240663113      );
  id2 -> SetBinError( xbin,    3438.4584449978670      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    481367.84770449693      );
  id2 -> SetBinError( xbin,    4171.1682075441040      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    507514.93976999709      );
  id2 -> SetBinError( xbin,    5045.3257695982338      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    538602.75922774372      );
  id2 -> SetBinError( xbin,    5235.1324730535607      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    562162.78004035214      );
  id2 -> SetBinError( xbin,    5474.8054607024260      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    583644.16148214822      );
  id2 -> SetBinError( xbin,    6087.9410613656992      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    605390.33108570206      );
  id2 -> SetBinError( xbin,    6182.1876895028081      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    616391.27763384138      );
  id2 -> SetBinError( xbin,    5961.9082095568165      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    669035.74158658739      );
  id2 -> SetBinError( xbin,    7254.7471648261990      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    289516.36042546469      );
  id3 -> SetBinError( xbin,    3795.0581344033376      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    315474.68663422117      );
  id3 -> SetBinError( xbin,    2389.1113296823223      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    338770.79956560204      );
  id3 -> SetBinError( xbin,    2299.9180105587257      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    349441.06006486481      );
  id3 -> SetBinError( xbin,    2249.3469702629059      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    354973.28077657649      );
  id3 -> SetBinError( xbin,    2092.4724739631370      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    360362.43300154636      );
  id3 -> SetBinError( xbin,    1956.2564195355578      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    366731.42426608759      );
  id3 -> SetBinError( xbin,    1916.1004308479999      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    366209.64585293544      );
  id3 -> SetBinError( xbin,    1916.6909337382981      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    364232.85926456738      );
  id3 -> SetBinError( xbin,    1880.0024188991608      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    362362.18028512743      );
  id3 -> SetBinError( xbin,    1845.4929605818836      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    359143.42770293273      );
  id3 -> SetBinError( xbin,    1865.9933367077028      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    356348.81922967290      );
  id3 -> SetBinError( xbin,    1830.2975984006848      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    356593.21842829580      );
  id3 -> SetBinError( xbin,    1781.0036430508749      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    345014.86832237593      );
  id3 -> SetBinError( xbin,    1783.4846997315603      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    344152.90688039619      );
  id3 -> SetBinError( xbin,    1798.2511535442723      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    334783.40580892959      );
  id3 -> SetBinError( xbin,    2107.9596669932625      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    331560.89909962169      );
  id3 -> SetBinError( xbin,    2029.6936365261488      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    322989.61896778492      );
  id3 -> SetBinError( xbin,    1763.1938968102295      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    317555.40522075706      );
  id3 -> SetBinError( xbin,    1825.9070971512615      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    306104.43419499142      );
  id3 -> SetBinError( xbin,    1828.4254401708113      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    297004.92348555912      );
  id3 -> SetBinError( xbin,    1772.7815665136179      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    288133.30213231198      );
  id3 -> SetBinError( xbin,    1748.0970625133045      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    275001.96031469753      );
  id3 -> SetBinError( xbin,    1826.2594508618895      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    265068.22441276099      );
  id3 -> SetBinError( xbin,    1923.5169767956775      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    252708.15442885726      );
  id3 -> SetBinError( xbin,    1861.5756462213733      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    240750.91482898581      );
  id3 -> SetBinError( xbin,    1726.6557571343601      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    225349.47260244039      );
  id3 -> SetBinError( xbin,    1787.2395521948408      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    206487.30533363885      );
  id3 -> SetBinError( xbin,    1989.5186547672622      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    181721.64443274401      );
  id3 -> SetBinError( xbin,    1900.1476837276052      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    163893.73947174512      );
  id3 -> SetBinError( xbin,    2003.1038452821947      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    93331.851166954555      );
  id4 -> SetBinError( xbin,    6373.4012060923951      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    288041.99523863482      );
  id4 -> SetBinError( xbin,    3807.8523312290595      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    306857.29147704592      );
  id4 -> SetBinError( xbin,    3739.8578107460935      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    317296.01145775081      );
  id4 -> SetBinError( xbin,    3824.0023548515915      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    323648.82817791472      );
  id4 -> SetBinError( xbin,    3887.0502124263717      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    332362.65269039827      );
  id4 -> SetBinError( xbin,    3605.0434820104865      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    343572.37009882287      );
  id4 -> SetBinError( xbin,    3338.2434621508560      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    344953.56402801117      );
  id4 -> SetBinError( xbin,    4296.8864306504174      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    355244.08666335518      );
  id4 -> SetBinError( xbin,    4317.2570839271475      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    358018.85749137495      );
  id4 -> SetBinError( xbin,    3296.5528704050635      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    357267.28255632072      );
  id4 -> SetBinError( xbin,    3485.4406118180746      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    363613.33948302356      );
  id4 -> SetBinError( xbin,    3436.5530223544188      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    361235.96344416100      );
  id4 -> SetBinError( xbin,    3335.2436810337854      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    362374.65660131932      );
  id4 -> SetBinError( xbin,    3428.6886317086519      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    370239.90480829019      );
  id4 -> SetBinError( xbin,    3273.7185425561470      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    364398.51988291909      );
  id4 -> SetBinError( xbin,    3191.0595639105113      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    362741.48808148672      );
  id4 -> SetBinError( xbin,    3359.5473439803513      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    366593.44866068603      );
  id4 -> SetBinError( xbin,    3226.0798014523348      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    366154.06087556429      );
  id4 -> SetBinError( xbin,    2932.9150575589333      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    364911.24775858084      );
  id4 -> SetBinError( xbin,    2994.6328082106015      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    364520.40153886657      );
  id4 -> SetBinError( xbin,    3045.2761772184681      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    361630.47005858220      );
  id4 -> SetBinError( xbin,    3019.7890220720010      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    353476.35323070479      );
  id4 -> SetBinError( xbin,    3044.2555763813516      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    355763.10752781550      );
  id4 -> SetBinError( xbin,    3046.8375953082473      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    354629.11767889338      );
  id4 -> SetBinError( xbin,    2949.9221969987429      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    354786.98458128376      );
  id4 -> SetBinError( xbin,    2843.8825945650269      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    351983.00924503943      );
  id4 -> SetBinError( xbin,    3190.3204076675752      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    346517.69694402441      );
  id4 -> SetBinError( xbin,    3182.4046753185276      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    343371.06148722314      );
  id4 -> SetBinError( xbin,    2890.3832881432431      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    347436.73787814542      );
  id4 -> SetBinError( xbin,    2979.2014503686751      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    338063.80190979963      );
  id4 -> SetBinError( xbin,    2961.5075828521171      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    337380.23267323885      );
  id4 -> SetBinError( xbin,    2967.8821088052164      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    334328.11690985312      );
  id4 -> SetBinError( xbin,    2934.5509098034186      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    331562.39403764042      );
  id4 -> SetBinError( xbin,    2898.1633429676449      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    324925.47444815870      );
  id4 -> SetBinError( xbin,    2903.5597931630709      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    322678.09768139548      );
  id4 -> SetBinError( xbin,    3063.4437157737352      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    325013.98000576720      );
  id4 -> SetBinError( xbin,    3108.9383678784702      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    320214.43150724494      );
  id4 -> SetBinError( xbin,    2853.6077022405543      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    309861.04254775681      );
  id4 -> SetBinError( xbin,    2808.8289293592597      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    305149.53959925781      );
  id4 -> SetBinError( xbin,    2986.1345396623756      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    301369.56632473785      );
  id4 -> SetBinError( xbin,    3004.4533026556001      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    304651.66583062313      );
  id4 -> SetBinError( xbin,    2860.5199274430561      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    285946.07627849997      );
  id4 -> SetBinError( xbin,    2899.7688827694055      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    290550.94053972885      );
  id4 -> SetBinError( xbin,    2933.8484273398944      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    284005.82958610001      );
  id4 -> SetBinError( xbin,    2928.7134856397734      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    276617.82469778130      );
  id4 -> SetBinError( xbin,    2896.7672275802852      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    270404.32002162543      );
  id4 -> SetBinError( xbin,    2856.0048476588527      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    265261.23415660259      );
  id4 -> SetBinError( xbin,    2866.2331923639545      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    266626.60642842023      );
  id4 -> SetBinError( xbin,    8455.3572243779981      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    249198.54694381819      );
  id4 -> SetBinError( xbin,    8488.1168790646298      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    249920.11946510049      );
  id4 -> SetBinError( xbin,    2896.2525933406550      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    242893.53579495536      );
  id4 -> SetBinError( xbin,    3519.0201979866720      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    227732.64482820942      );
  id4 -> SetBinError( xbin,    3603.2473174380261      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    226243.12244734864      );
  id4 -> SetBinError( xbin,    3075.8727345425841      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    220381.06902831991      );
  id4 -> SetBinError( xbin,    4062.3238549148728      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    204416.85701260017      );
  id4 -> SetBinError( xbin,    4374.0450187111983      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    27228.559233937351      );
  id5 -> SetBinError( xbin,    335.35148821343569      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    60324.938809417436      );
  id5 -> SetBinError( xbin,    434.05240348644429      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    68715.150912499565      );
  id5 -> SetBinError( xbin,    490.16416733586027      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    78032.305405529842      );
  id5 -> SetBinError( xbin,    520.83109426978740      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    88323.685891878253      );
  id5 -> SetBinError( xbin,    575.45153586067829      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    102051.85476302220      );
  id5 -> SetBinError( xbin,    865.35704345892634      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    122467.48424668795      );
  id5 -> SetBinError( xbin,    934.81658379735325      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    120148.93092932954      );
  id5 -> SetBinError( xbin,    981.84793636263089      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    97087.824101381470      );
  id5 -> SetBinError( xbin,    761.07664392452193      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    48702.455032164842      );
  id5 -> SetBinError( xbin,    243.95597286709426      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    26181.275568679041      );
  id5 -> SetBinError( xbin,    212.86309182327841      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    16821.943494148694      );
  id5 -> SetBinError( xbin,    186.52089446546017      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12155.528244046815      );
  id5 -> SetBinError( xbin,    95.673244668864697      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    8994.4683602892928      );
  id5 -> SetBinError( xbin,    79.901990774628089      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    6985.6701868211694      );
  id5 -> SetBinError( xbin,    56.954801491004844      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5600.3491879354515      );
  id5 -> SetBinError( xbin,    53.809769115372717      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4502.2872125765452      );
  id5 -> SetBinError( xbin,    46.609308438279484      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3785.7894481823641      );
  id5 -> SetBinError( xbin,    39.762870655193971      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3193.0647946685231      );
  id5 -> SetBinError( xbin,    36.355605064245680      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2631.0849985513755      );
  id5 -> SetBinError( xbin,    37.599644033518473      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2298.5710599211075      );
  id5 -> SetBinError( xbin,    40.650935377665320      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1909.6421516650310      );
  id5 -> SetBinError( xbin,    33.431621131267441      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1646.7482574328531      );
  id5 -> SetBinError( xbin,    23.756286666084574      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1471.5755826730383      );
  id5 -> SetBinError( xbin,    22.888453762382902      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1281.4108560626855      );
  id5 -> SetBinError( xbin,    23.151951213202146      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1109.3975739168477      );
  id5 -> SetBinError( xbin,    19.871827763648501      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    967.18720555917082      );
  id5 -> SetBinError( xbin,    19.026485566330063      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    883.19359412219080      );
  id5 -> SetBinError( xbin,    21.127819398228443      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    762.10653788044590      );
  id5 -> SetBinError( xbin,    20.396957632087094      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    692.13829942756513      );
  id5 -> SetBinError( xbin,    18.150732222860157      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    598.65863070666830      );
  id5 -> SetBinError( xbin,    13.731165307055045      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    543.63532880829428      );
  id5 -> SetBinError( xbin,    12.514629103732124      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    474.34724794143051      );
  id5 -> SetBinError( xbin,    13.656116434333168      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    433.70215109884634      );
  id5 -> SetBinError( xbin,    15.034457430073141      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    403.63716779744573      );
  id5 -> SetBinError( xbin,    13.284215674419089      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    379.75646771067977      );
  id5 -> SetBinError( xbin,    11.403600037817080      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    314.87301403527181      );
  id5 -> SetBinError( xbin,    11.077565087025611      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    304.30547779948660      );
  id5 -> SetBinError( xbin,    16.155295004225394      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2157.2838654698148      );
  id6 -> SetBinError( xbin,    46.100780098622899      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    7030.8048310470595      );
  id6 -> SetBinError( xbin,    85.109987142385535      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13569.827375476743      );
  id6 -> SetBinError( xbin,    115.68361409124469      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    23406.361468836982      );
  id6 -> SetBinError( xbin,    146.39599414833810      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    37668.502972681657      );
  id6 -> SetBinError( xbin,    176.69918538960755      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    61074.669631612021      );
  id6 -> SetBinError( xbin,    215.04463652869254      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    105273.09330826691      );
  id6 -> SetBinError( xbin,    285.51250934963474      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    171415.28607657625      );
  id6 -> SetBinError( xbin,    396.52747469424634      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    75500.665967835885      );
  id6 -> SetBinError( xbin,    313.37048959363705      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    28388.741671411724      );
  id6 -> SetBinError( xbin,    228.30873959215114      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    12058.997285476717      );
  id6 -> SetBinError( xbin,    166.65927326421615      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4718.8546023913887      );
  id6 -> SetBinError( xbin,    109.58837432217996      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11455.487945780122      );
  id7 -> SetBinError( xbin,    135.54242644968846      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15201.512603986770      );
  id7 -> SetBinError( xbin,    159.69658917840874      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19591.469280826794      );
  id7 -> SetBinError( xbin,    176.97113480101970      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23728.916924819277      );
  id7 -> SetBinError( xbin,    194.26872561017515      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    29163.848923886482      );
  id7 -> SetBinError( xbin,    219.75906565851176      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    34088.157602295389      );
  id7 -> SetBinError( xbin,    236.54659918575970      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    39039.168497422965      );
  id7 -> SetBinError( xbin,    265.06366432310449      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    43222.447625617875      );
  id7 -> SetBinError( xbin,    280.68946822766128      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    47005.076099697733      );
  id7 -> SetBinError( xbin,    304.45752487374085      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    51220.573563409096      );
  id7 -> SetBinError( xbin,    319.52743262140257      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    53684.781638852670      );
  id7 -> SetBinError( xbin,    336.18995921550487      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    55627.377310588701      );
  id7 -> SetBinError( xbin,    341.69833402517435      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    57185.997660471337      );
  id7 -> SetBinError( xbin,    354.68602433982960      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    57451.995386241470      );
  id7 -> SetBinError( xbin,    361.71302661009588      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    57095.286314304562      );
  id7 -> SetBinError( xbin,    359.81093982067097      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    56524.713724475972      );
  id7 -> SetBinError( xbin,    361.92150583669769      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    54719.501691616424      );
  id7 -> SetBinError( xbin,    357.90545731150291      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    52228.167672883596      );
  id7 -> SetBinError( xbin,    345.27890825409730      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    49583.580546725490      );
  id7 -> SetBinError( xbin,    334.80518008856336      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    45570.329956807196      );
  id7 -> SetBinError( xbin,    321.42371478211084      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    42358.320740515366      );
  id7 -> SetBinError( xbin,    297.65540616395663      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    38027.163330337389      );
  id7 -> SetBinError( xbin,    282.85192192840088      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    33864.889182052131      );
  id7 -> SetBinError( xbin,    262.96090819087834      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    29332.531826037532      );
  id7 -> SetBinError( xbin,    241.76019622608362      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    25263.713999481475      );
  id7 -> SetBinError( xbin,    224.81116752642646      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    20634.538636663041      );
  id7 -> SetBinError( xbin,    199.04231685865477      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    16653.902231554199      );
  id7 -> SetBinError( xbin,    179.30278275770723      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    13058.876740367377      );
  id7 -> SetBinError( xbin,    159.58927831481483      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9673.1268478165894      );
  id7 -> SetBinError( xbin,    132.90159842941415      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7126.9568904117223      );
  id7 -> SetBinError( xbin,    119.76399382547969      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5668.8155108987266      );
  id8 -> SetBinError( xbin,    37.446402244778433      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10448.938818524895      );
  id8 -> SetBinError( xbin,    51.060580053829995      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9051.2357131636982      );
  id8 -> SetBinError( xbin,    45.928484725587218      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    7989.5667859501700      );
  id8 -> SetBinError( xbin,    43.556060856473927      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7111.2025556055760      );
  id8 -> SetBinError( xbin,    40.802145288214575      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6258.4580415642067      );
  id8 -> SetBinError( xbin,    37.345081458822385      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5540.7499982702266      );
  id8 -> SetBinError( xbin,    35.035176618096692      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    4960.4624847015275      );
  id8 -> SetBinError( xbin,    32.369652864970107      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4440.3586275730122      );
  id8 -> SetBinError( xbin,    30.706276238883415      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    3958.6468179596523      );
  id8 -> SetBinError( xbin,    28.280921766882766      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3537.4740998211296      );
  id8 -> SetBinError( xbin,    26.491625791578549      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3233.5451169349217      );
  id8 -> SetBinError( xbin,    25.474082714497289      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2863.1493691212177      );
  id8 -> SetBinError( xbin,    23.669238809516482      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2681.3686768127914      );
  id8 -> SetBinError( xbin,    22.947579860921135      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2381.6393005179111      );
  id8 -> SetBinError( xbin,    21.123021288072085      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2158.1833013804676      );
  id8 -> SetBinError( xbin,    20.097454609899700      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1997.2436446457946      );
  id8 -> SetBinError( xbin,    18.792783939292914      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1790.7397944611903      );
  id8 -> SetBinError( xbin,    17.632552038768058      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1714.7131789274165      );
  id8 -> SetBinError( xbin,    17.518553664328163      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1552.2404149979434      );
  id8 -> SetBinError( xbin,    16.772266799826106      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1401.8057879982853      );
  id8 -> SetBinError( xbin,    15.629695195422965      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1280.2870516591847      );
  id8 -> SetBinError( xbin,    14.637080112394138      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1191.9945075688854      );
  id8 -> SetBinError( xbin,    14.062871953764338      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1086.7835416503581      );
  id8 -> SetBinError( xbin,    13.000258166380165      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1022.3642576699149      );
  id8 -> SetBinError( xbin,    13.537330517168858      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    936.76196582410705      );
  id8 -> SetBinError( xbin,    12.343874027983212      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    853.48456485659631      );
  id8 -> SetBinError( xbin,    11.602556244209113      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    775.40389820087069      );
  id8 -> SetBinError( xbin,    10.820530794857318      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
