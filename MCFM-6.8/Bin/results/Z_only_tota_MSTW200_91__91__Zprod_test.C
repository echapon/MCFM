// Cross-section is:       624605.0329124414 +/-           96.5264640682)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -25549.44814   -4.09%
//        GQB    |      -14102.70948   -2.26%
//        QG     |      -25119.28669   -4.02%
//        QBG    |      -14684.16397   -2.35%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      337087.42119   53.97%
//        QBQ    |      369048.21803   59.09%

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
//                  31            [nproc]  
//                tota            [part]  
//Zprod_test                      [runstring]  
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
//MSTW2008nlo68cl.LHgr            [LHAPDF group]  
//                   0            [LHAPDF set]  

 // [Jet definition and event cuts] )
//             60.0000            [m34min]  
//            120.0000            [m34max]  
//             60.0000            [m56min]  
//            120.0000            [m56max]  
//                   T            [inclusive]  
//                ankt            [algorithm]  
//             20.0000            [ptjetmin]  
//              0.0000            [etajetmin]  
//              2.4000            [etajetmax]  
//              0.5000            [Rcut]  
//                   F            [makecuts]  
//              0.0000            [leptpt]  
//             10.0000            [leptrap]  
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
  mcfmhisto = new TFile("Z_only_tota_MSTW200_91__91__Zprod_test.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "y3", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("y3");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dy3 [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -5.9000000000000004      );
  id1 -> SetBinContent( xbin,    1061.3255696892109      );
  id1 -> SetBinError( xbin,    173.87464765137969      );
   int xbin = id1->FindBin(  -5.7000000000000002      );
  id1 -> SetBinContent( xbin,    790.67754944533749      );
  id1 -> SetBinError( xbin,    212.11384987010871      );
   int xbin = id1->FindBin(  -5.5000000000000000      );
  id1 -> SetBinContent( xbin,    1259.9926761309182      );
  id1 -> SetBinError( xbin,    229.85589946544957      );
   int xbin = id1->FindBin(  -5.2999999999999998      );
  id1 -> SetBinContent( xbin,    1895.2298863505248      );
  id1 -> SetBinError( xbin,    221.22657647016663      );
   int xbin = id1->FindBin(  -5.0999999999999996      );
  id1 -> SetBinContent( xbin,    2833.8464071110116      );
  id1 -> SetBinError( xbin,    238.27369789224866      );
   int xbin = id1->FindBin(  -4.9000000000000004      );
  id1 -> SetBinContent( xbin,    4395.1165259631116      );
  id1 -> SetBinError( xbin,    688.67610728902991      );
   int xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    5536.9253974700723      );
  id1 -> SetBinError( xbin,    738.66034254616761      );
   int xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,    7998.4545068687776      );
  id1 -> SetBinError( xbin,    426.39355857673434      );
   int xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    11172.468467342907      );
  id1 -> SetBinError( xbin,    407.91755996822258      );
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    14786.346753909827      );
  id1 -> SetBinError( xbin,    574.89982934163106      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    21359.748327806388      );
  id1 -> SetBinError( xbin,    720.69161040844665      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    26185.839176749440      );
  id1 -> SetBinError( xbin,    700.78060771633614      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    32886.873108358923      );
  id1 -> SetBinError( xbin,    612.52603872716816      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    40772.599058217347      );
  id1 -> SetBinError( xbin,    700.48385671881238      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    48716.113794710313      );
  id1 -> SetBinError( xbin,    837.35294125249038      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    57186.818560344218      );
  id1 -> SetBinError( xbin,    1106.8688020783293      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    64171.925351974860      );
  id1 -> SetBinError( xbin,    1166.6952360730579      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    71613.786315154663      );
  id1 -> SetBinError( xbin,    909.49459627656904      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    81117.940628728713      );
  id1 -> SetBinError( xbin,    755.85872271026847      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    86616.158806877997      );
  id1 -> SetBinError( xbin,    1158.6828719466212      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    91785.961439594132      );
  id1 -> SetBinError( xbin,    1165.7218780036262      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    98100.408388815078      );
  id1 -> SetBinError( xbin,    818.01279207000437      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    101944.85826340817      );
  id1 -> SetBinError( xbin,    832.58051814018302      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    106511.31573669506      );
  id1 -> SetBinError( xbin,    816.55864117940041      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    107707.36405510800      );
  id1 -> SetBinError( xbin,    903.75672917804377      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    109245.19374648787      );
  id1 -> SetBinError( xbin,    829.69856711495868      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    111987.77767530852      );
  id1 -> SetBinError( xbin,    832.41973635998477      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    110586.02107757307      );
  id1 -> SetBinError( xbin,    848.56314588299915      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    111561.62022540293      );
  id1 -> SetBinError( xbin,    890.45032352389944      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    110939.58766515680      );
  id1 -> SetBinError( xbin,    1031.5632673823573      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    108853.35211481499      );
  id1 -> SetBinError( xbin,    1004.7802702898214      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    107827.79743729840      );
  id1 -> SetBinError( xbin,    1153.4133891967126      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    107085.63494495372      );
  id1 -> SetBinError( xbin,    1065.6179556983288      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    103591.30094914354      );
  id1 -> SetBinError( xbin,    701.13167175710396      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    101417.68711030693      );
  id1 -> SetBinError( xbin,    732.70519620477114      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    98380.395355767076      );
  id1 -> SetBinError( xbin,    769.90944743342675      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    95229.448225672924      );
  id1 -> SetBinError( xbin,    810.26956389902875      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    90338.190040160946      );
  id1 -> SetBinError( xbin,    762.16178943537329      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    86962.965543581347      );
  id1 -> SetBinError( xbin,    733.08292172115011      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    79880.784766569064      );
  id1 -> SetBinError( xbin,    1067.0497198229116      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    75916.474358853520      );
  id1 -> SetBinError( xbin,    1017.6869662594070      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    68920.423714538745      );
  id1 -> SetBinError( xbin,    647.89799292761279      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    63949.922563120810      );
  id1 -> SetBinError( xbin,    1422.3291919592398      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    53361.588952317310      );
  id1 -> SetBinError( xbin,    1438.1203106617427      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    49414.373865376030      );
  id1 -> SetBinError( xbin,    632.83136343365072      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    39203.249689904667      );
  id1 -> SetBinError( xbin,    1185.3796538713648      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    36200.419110277515      );
  id1 -> SetBinError( xbin,    1181.5929912800568      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    28610.279343188275      );
  id1 -> SetBinError( xbin,    820.19779755441289      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    21486.285792720162      );
  id1 -> SetBinError( xbin,    800.44446023928049      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    17492.639315971406      );
  id1 -> SetBinError( xbin,    527.58072153483909      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    12797.283805153425      );
  id1 -> SetBinError( xbin,    499.63114086287459      );
   int xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,    9876.6997962227033      );
  id1 -> SetBinError( xbin,    369.42905648561936      );
   int xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    6868.0208965893708      );
  id1 -> SetBinError( xbin,    392.10733014951387      );
   int xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    4822.1359372099596      );
  id1 -> SetBinError( xbin,    580.17737314173041      );
   int xbin = id1->FindBin(   4.9000000000000004      );
  id1 -> SetBinContent( xbin,    3758.6090390909590      );
  id1 -> SetBinError( xbin,    550.63770099604176      );
   int xbin = id1->FindBin(   5.1000000000000014      );
  id1 -> SetBinContent( xbin,    2372.3423772408582      );
  id1 -> SetBinError( xbin,    357.25503191048540      );
   int xbin = id1->FindBin(   5.3000000000000007      );
  id1 -> SetBinContent( xbin,    1691.4115748550241      );
  id1 -> SetBinError( xbin,    314.28695449274113      );
   int xbin = id1->FindBin(   5.5000000000000000      );
  id1 -> SetBinContent( xbin,    1001.2878041890158      );
  id1 -> SetBinError( xbin,    216.70689287701256      );
   int xbin = id1->FindBin(   5.7000000000000011      );
  id1 -> SetBinContent( xbin,    803.65754476418999      );
  id1 -> SetBinError( xbin,    132.29071635894019      );
   int xbin = id1->FindBin(   5.9000000000000004      );
  id1 -> SetBinContent( xbin,    514.27091169785251      );
  id1 -> SetBinError( xbin,    106.75896323425496      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "y4", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("y4");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dy4 [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    293.72529664538263      );
  id2 -> SetBinError( xbin,    176.04155230377367      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    298.91994066270667      );
  id2 -> SetBinError( xbin,    531.46808088420869      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1473.7215721710982      );
  id2 -> SetBinError( xbin,    514.74025718231587      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    1716.8484934880512      );
  id2 -> SetBinError( xbin,    185.64162057931642      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    1983.5671275040415      );
  id2 -> SetBinError( xbin,    255.26118887693772      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    2681.0719285171144      );
  id2 -> SetBinError( xbin,    356.23237341970747      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    4987.2942599078351      );
  id2 -> SetBinError( xbin,    383.92268238138064      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    6427.2757016303622      );
  id2 -> SetBinError( xbin,    521.22725713185298      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    10205.049870650639      );
  id2 -> SetBinError( xbin,    664.70669893033300      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    11824.650686408808      );
  id2 -> SetBinError( xbin,    549.73014499792487      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    17033.426772591432      );
  id2 -> SetBinError( xbin,    408.78043941392934      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    21568.526920833319      );
  id2 -> SetBinError( xbin,    489.83364923845045      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    27925.694500095735      );
  id2 -> SetBinError( xbin,    543.71809557287361      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    34478.666288176399      );
  id2 -> SetBinError( xbin,    535.05757377937050      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    42580.967625717116      );
  id2 -> SetBinError( xbin,    729.66818824383313      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    52857.232669448109      );
  id2 -> SetBinError( xbin,    1221.8022268747648      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    57732.331350809269      );
  id2 -> SetBinError( xbin,    1163.7857185125945      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    70455.575648880753      );
  id2 -> SetBinError( xbin,    793.44109512540604      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    75983.200139792680      );
  id2 -> SetBinError( xbin,    792.41771987737354      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    87031.949400204365      );
  id2 -> SetBinError( xbin,    723.81257927180081      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    93332.571217149904      );
  id2 -> SetBinError( xbin,    804.99598026436865      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    99327.606534097416      );
  id2 -> SetBinError( xbin,    853.76893218735381      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    106419.99980725090      );
  id2 -> SetBinError( xbin,    920.57358898015536      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    109916.59398383250      );
  id2 -> SetBinError( xbin,    920.33586788361833      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    113601.93733391199      );
  id2 -> SetBinError( xbin,    984.01310870762666      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    115848.14361440091      );
  id2 -> SetBinError( xbin,    1127.2231103245510      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    116533.20124767172      );
  id2 -> SetBinError( xbin,    1175.0873721483704      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    117777.03454880144      );
  id2 -> SetBinError( xbin,    1081.7074995316837      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    117201.63987254660      );
  id2 -> SetBinError( xbin,    989.10540168229079      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    118099.34399387670      );
  id2 -> SetBinError( xbin,    1038.5958357141924      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    114279.51157112802      );
  id2 -> SetBinError( xbin,    1299.8096308920037      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    110149.58513025193      );
  id2 -> SetBinError( xbin,    6425.0356113649350      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    119233.07933836149      );
  id2 -> SetBinError( xbin,    6376.1217759768797      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    107762.38149861660      );
  id2 -> SetBinError( xbin,    1031.2239896365393      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    106092.87920336006      );
  id2 -> SetBinError( xbin,    973.43125906700959      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    99383.200982172799      );
  id2 -> SetBinError( xbin,    2229.9524444157491      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    102468.04250344202      );
  id2 -> SetBinError( xbin,    2221.7451535021510      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    93853.654702456377      );
  id2 -> SetBinError( xbin,    866.41470589476933      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    87811.151617793628      );
  id2 -> SetBinError( xbin,    833.02426497187741      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    80939.313749609486      );
  id2 -> SetBinError( xbin,    743.98331494032379      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    75256.749414998616      );
  id2 -> SetBinError( xbin,    727.53601806828397      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    68228.793541904335      );
  id2 -> SetBinError( xbin,    875.74809867134741      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    59866.807770994114      );
  id2 -> SetBinError( xbin,    798.39933194241189      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    50839.238797474252      );
  id2 -> SetBinError( xbin,    579.28455916152166      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    44136.019204777156      );
  id2 -> SetBinError( xbin,    598.40082190890143      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    37200.042652295138      );
  id2 -> SetBinError( xbin,    712.54899300562579      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    29959.868311600603      );
  id2 -> SetBinError( xbin,    698.12041303636886      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    24343.378960801121      );
  id2 -> SetBinError( xbin,    520.53798518496410      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    19301.430560326229      );
  id2 -> SetBinError( xbin,    518.49936243254990      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    15268.979378503020      );
  id2 -> SetBinError( xbin,    638.61219810395505      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    10927.339730485346      );
  id2 -> SetBinError( xbin,    577.69277257473766      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    8202.0089457586710      );
  id2 -> SetBinError( xbin,    416.82780804973487      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    6127.2825150244180      );
  id2 -> SetBinError( xbin,    410.69727939254500      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    3272.7175378631882      );
  id2 -> SetBinError( xbin,    408.38510210086918      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    3400.6419309362923      );
  id2 -> SetBinError( xbin,    395.69386225040870      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    2145.6467402224275      );
  id2 -> SetBinError( xbin,    246.25506931675980      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    1383.9931668062065      );
  id2 -> SetBinError( xbin,    176.61820349438111      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    825.29328963719570      );
  id2 -> SetBinError( xbin,    152.14953559967933      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    470.55189674979079      );
  id2 -> SetBinError( xbin,    110.64229704945456      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    186.41959026961416      );
  id2 -> SetBinError( xbin,    129.13429325887847      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y34", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y34");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy34 [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,    7.6800591915291084E-005 );
  id3 -> SetBinError( xbin,    7.7381768710772266E-005 );
   int xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,    1.8240565498468477      );
  id3 -> SetBinError( xbin,   0.67801118596589149      );
   int xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    29.312483193098860      );
  id3 -> SetBinError( xbin,    6.3387402935864161      );
   int xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    305.70601596526762      );
  id3 -> SetBinError( xbin,    20.345458679233708      );
   int xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    2336.8296358274370      );
  id3 -> SetBinError( xbin,    77.859918044231819      );
   int xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    8607.9157683950962      );
  id3 -> SetBinError( xbin,    189.32087625226438      );
   int xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    19899.846016351319      );
  id3 -> SetBinError( xbin,    275.81118466971225      );
   int xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    36085.727746765937      );
  id3 -> SetBinError( xbin,    360.72725781857810      );
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    52325.867425528842      );
  id3 -> SetBinError( xbin,    450.55279220704296      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    68800.519932184048      );
  id3 -> SetBinError( xbin,    491.80143868265748      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    83403.805231938401      );
  id3 -> SetBinError( xbin,    504.86652658387675      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    94423.044343749076      );
  id3 -> SetBinError( xbin,    530.92434630413493      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    102446.60094497171      );
  id3 -> SetBinError( xbin,    799.35856626988971      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    109858.13149308016      );
  id3 -> SetBinError( xbin,    807.81669868144706      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    112504.38913974362      );
  id3 -> SetBinError( xbin,    1920.3206111468960      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    120235.68904603799      );
  id3 -> SetBinError( xbin,    1920.7135509183825      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    121063.34332423779      );
  id3 -> SetBinError( xbin,    600.82804543378563      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    121722.72198499742      );
  id3 -> SetBinError( xbin,    612.14762294941170      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    123308.35140372392      );
  id3 -> SetBinError( xbin,    729.70308931271995      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    122164.93082268097      );
  id3 -> SetBinError( xbin,    718.61688094836268      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    121981.38188393696      );
  id3 -> SetBinError( xbin,    568.28905834363252      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    118583.42005576682      );
  id3 -> SetBinError( xbin,    572.62913081705926      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    118941.95751785346      );
  id3 -> SetBinError( xbin,    646.44464477950612      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    116055.70838235691      );
  id3 -> SetBinError( xbin,    630.45858415977341      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    114663.28019896036      );
  id3 -> SetBinError( xbin,    552.23655158284089      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    112052.60865678726      );
  id3 -> SetBinError( xbin,    552.15453087224637      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    110513.57263397274      );
  id3 -> SetBinError( xbin,    560.17416304630160      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    108626.79983882420      );
  id3 -> SetBinError( xbin,    553.15988182936826      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    105799.78663312084      );
  id3 -> SetBinError( xbin,    548.58114580124777      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    102683.19529722288      );
  id3 -> SetBinError( xbin,    571.09501271948113      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    101897.40153188494      );
  id3 -> SetBinError( xbin,    552.65468261103683      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    97182.327932535263      );
  id3 -> SetBinError( xbin,    513.73450449988286      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    92357.786106262472      );
  id3 -> SetBinError( xbin,    523.71600066197550      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    87420.915257545246      );
  id3 -> SetBinError( xbin,    513.91753672310324      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    87047.853067994598      );
  id3 -> SetBinError( xbin,    7665.5066257379003      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    62390.405907638458      );
  id3 -> SetBinError( xbin,    7663.4797570046494      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    58406.188544919889      );
  id3 -> SetBinError( xbin,    492.90211188552314      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    46584.225795848681      );
  id3 -> SetBinError( xbin,    467.06547535058900      );
   int xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    31856.037146825449      );
  id3 -> SetBinError( xbin,    380.14363161453571      );
   int xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    18690.264022754509      );
  id3 -> SetBinError( xbin,    324.17466492782938      );
   int xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    7470.9854507005921      );
  id3 -> SetBinError( xbin,    178.67333544379494      );
   int xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    2004.7323283085757      );
  id3 -> SetBinError( xbin,    73.230041616544597      );
   int xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    251.33799491078727      );
  id3 -> SetBinError( xbin,    25.538292718892311      );
   int xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    28.803387222758104      );
  id3 -> SetBinError( xbin,    7.9521780837846370      );
   int xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,   0.32314112927966127      );
  id3 -> SetBinError( xbin,   0.23002310802054024      );
   int xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    2.5677337701605129E-005 );
  id3 -> SetBinError( xbin,    2.5677336311135938E-005 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "pt3", 40,    0.00000,   80.00000);

  id4 -> GetXaxis() -> SetTitle("pt3");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/dpt3 [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(   1.0000000000000000      );
  id4 -> SetBinContent( xbin,    379.37897530424704      );
  id4 -> SetBinError( xbin,    52.932361523453686      );
   int xbin = id4->FindBin(   3.0000000000000000      );
  id4 -> SetBinContent( xbin,    1387.7467940309002      );
  id4 -> SetBinError( xbin,    77.794738049450004      );
   int xbin = id4->FindBin(   5.0000000000000000      );
  id4 -> SetBinContent( xbin,    2110.7981952746482      );
  id4 -> SetBinError( xbin,    73.986218919309721      );
   int xbin = id4->FindBin(   7.0000000000000000      );
  id4 -> SetBinContent( xbin,    3320.5642132744210      );
  id4 -> SetBinError( xbin,    94.528523152789688      );
   int xbin = id4->FindBin(   9.0000000000000000      );
  id4 -> SetBinContent( xbin,    3950.2758573167848      );
  id4 -> SetBinError( xbin,    117.48555682428815      );
   int xbin = id4->FindBin(   11.000000000000000      );
  id4 -> SetBinContent( xbin,    4986.1040682700841      );
  id4 -> SetBinError( xbin,    132.36880678121233      );
   int xbin = id4->FindBin(   13.000000000000000      );
  id4 -> SetBinContent( xbin,    6278.8024334760594      );
  id4 -> SetBinError( xbin,    209.70613702529457      );
   int xbin = id4->FindBin(   15.000000000000000      );
  id4 -> SetBinContent( xbin,    6278.2171844828408      );
  id4 -> SetBinError( xbin,    413.18887969975486      );
   int xbin = id4->FindBin(   17.000000000000000      );
  id4 -> SetBinContent( xbin,    7432.7969166347793      );
  id4 -> SetBinError( xbin,    394.90659357330679      );
   int xbin = id4->FindBin(   19.000000000000000      );
  id4 -> SetBinContent( xbin,    9062.0437608502671      );
  id4 -> SetBinError( xbin,    181.93410968304252      );
   int xbin = id4->FindBin(   21.000000000000000      );
  id4 -> SetBinContent( xbin,    9711.8015608026981      );
  id4 -> SetBinError( xbin,    172.32466031771148      );
   int xbin = id4->FindBin(   23.000000000000000      );
  id4 -> SetBinContent( xbin,    10853.989913506746      );
  id4 -> SetBinError( xbin,    226.75907453012451      );
   int xbin = id4->FindBin(   25.000000000000000      );
  id4 -> SetBinContent( xbin,    11093.195174660437      );
  id4 -> SetBinError( xbin,    281.21246677285262      );
   int xbin = id4->FindBin(   27.000000000000000      );
  id4 -> SetBinContent( xbin,    13361.715785432658      );
  id4 -> SetBinError( xbin,    246.61036193292477      );
   int xbin = id4->FindBin(   29.000000000000000      );
  id4 -> SetBinContent( xbin,    13997.339145567597      );
  id4 -> SetBinError( xbin,    213.63233223211731      );
   int xbin = id4->FindBin(   31.000000000000000      );
  id4 -> SetBinContent( xbin,    14947.981818534921      );
  id4 -> SetBinError( xbin,    229.48499213725532      );
   int xbin = id4->FindBin(   33.000000000000000      );
  id4 -> SetBinContent( xbin,    16546.547792117224      );
  id4 -> SetBinError( xbin,    415.17717788165703      );
   int xbin = id4->FindBin(   35.000000000000000      );
  id4 -> SetBinContent( xbin,    17516.980729051618      );
  id4 -> SetBinError( xbin,    468.17000858464985      );
   int xbin = id4->FindBin(   37.000000000000000      );
  id4 -> SetBinContent( xbin,    19748.337067730929      );
  id4 -> SetBinError( xbin,    475.30693638390545      );
   int xbin = id4->FindBin(   39.000000000000000      );
  id4 -> SetBinContent( xbin,    20381.801075341253      );
  id4 -> SetBinError( xbin,    450.43612287048023      );
   int xbin = id4->FindBin(   41.000000000000000      );
  id4 -> SetBinContent( xbin,    23427.017296805298      );
  id4 -> SetBinError( xbin,    311.71289061741174      );
   int xbin = id4->FindBin(   43.000000000000000      );
  id4 -> SetBinContent( xbin,    26720.642085174753      );
  id4 -> SetBinError( xbin,    429.63391963819021      );
   int xbin = id4->FindBin(   45.000000000000000      );
  id4 -> SetBinContent( xbin,    20872.526558496567      );
  id4 -> SetBinError( xbin,    493.11235884614479      );
   int xbin = id4->FindBin(   47.000000000000000      );
  id4 -> SetBinContent( xbin,    18426.438004678850      );
  id4 -> SetBinError( xbin,    328.87998684420052      );
   int xbin = id4->FindBin(   49.000000000000000      );
  id4 -> SetBinContent( xbin,    8641.0105861124084      );
  id4 -> SetBinError( xbin,    76.708713303601300      );
   int xbin = id4->FindBin(   51.000000000000000      );
  id4 -> SetBinContent( xbin,    4983.8480915631408      );
  id4 -> SetBinError( xbin,    38.179483394203352      );
   int xbin = id4->FindBin(   53.000000000000000      );
  id4 -> SetBinContent( xbin,    3290.0358804922143      );
  id4 -> SetBinError( xbin,    29.599929483756693      );
   int xbin = id4->FindBin(   55.000000000000000      );
  id4 -> SetBinContent( xbin,    2380.9669654376630      );
  id4 -> SetBinError( xbin,    43.215928224993291      );
   int xbin = id4->FindBin(   57.000000000000000      );
  id4 -> SetBinContent( xbin,    1704.8498890000146      );
  id4 -> SetBinError( xbin,    40.680195553040065      );
   int xbin = id4->FindBin(   59.000000000000000      );
  id4 -> SetBinContent( xbin,    1323.7642094238761      );
  id4 -> SetBinError( xbin,    16.513100361935063      );
   int xbin = id4->FindBin(   61.000000000000000      );
  id4 -> SetBinContent( xbin,    1033.0608418256272      );
  id4 -> SetBinError( xbin,    6.3935576804316643      );
   int xbin = id4->FindBin(   63.000000000000000      );
  id4 -> SetBinContent( xbin,    826.64965908425620      );
  id4 -> SetBinError( xbin,    4.6318247982454839      );
   int xbin = id4->FindBin(   65.000000000000000      );
  id4 -> SetBinContent( xbin,    673.21325949297204      );
  id4 -> SetBinError( xbin,    3.9807299276261623      );
   int xbin = id4->FindBin(   67.000000000000000      );
  id4 -> SetBinContent( xbin,    565.40635786590792      );
  id4 -> SetBinError( xbin,    3.5126135141671018      );
   int xbin = id4->FindBin(   69.000000000000000      );
  id4 -> SetBinContent( xbin,    477.03625051650033      );
  id4 -> SetBinError( xbin,    3.2609810756604616      );
   int xbin = id4->FindBin(   71.000000000000000      );
  id4 -> SetBinContent( xbin,    400.23858049217108      );
  id4 -> SetBinError( xbin,    2.8180621927495144      );
   int xbin = id4->FindBin(   73.000000000000000      );
  id4 -> SetBinContent( xbin,    348.93980916159575      );
  id4 -> SetBinError( xbin,    2.5763300127804789      );
   int xbin = id4->FindBin(   75.000000000000000      );
  id4 -> SetBinContent( xbin,    305.01479110974185      );
  id4 -> SetBinError( xbin,    2.3852896521934466      );
   int xbin = id4->FindBin(   77.000000000000000      );
  id4 -> SetBinContent( xbin,    259.81579713009927      );
  id4 -> SetBinError( xbin,    2.1548477213930375      );
   int xbin = id4->FindBin(   79.000000000000000      );
  id4 -> SetBinContent( xbin,    231.25535383095649      );
  id4 -> SetBinError( xbin,    2.0248131152124778      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt4", 40,    0.00000,   80.00000);

  id5 -> GetXaxis() -> SetTitle("pt4");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt4 [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   1.0000000000000000      );
  id5 -> SetBinContent( xbin,    485.27515500389484      );
  id5 -> SetBinError( xbin,    32.601471266944301      );
   int xbin = id5->FindBin(   3.0000000000000000      );
  id5 -> SetBinContent( xbin,    1286.3618794166837      );
  id5 -> SetBinError( xbin,    50.260137730618283      );
   int xbin = id5->FindBin(   5.0000000000000000      );
  id5 -> SetBinContent( xbin,    2188.2853967395240      );
  id5 -> SetBinError( xbin,    70.052617663955942      );
   int xbin = id5->FindBin(   7.0000000000000000      );
  id5 -> SetBinContent( xbin,    3057.2517326377465      );
  id5 -> SetBinError( xbin,    104.01013966673347      );
   int xbin = id5->FindBin(   9.0000000000000000      );
  id5 -> SetBinContent( xbin,    4043.1507811381002      );
  id5 -> SetBinError( xbin,    117.86109505068718      );
   int xbin = id5->FindBin(   11.000000000000000      );
  id5 -> SetBinContent( xbin,    4443.2824615258478      );
  id5 -> SetBinError( xbin,    583.30855443143571      );
   int xbin = id5->FindBin(   13.000000000000000      );
  id5 -> SetBinContent( xbin,    6442.8072451840280      );
  id5 -> SetBinError( xbin,    628.99449898142200      );
   int xbin = id5->FindBin(   15.000000000000000      );
  id5 -> SetBinContent( xbin,    6807.0750365688364      );
  id5 -> SetBinError( xbin,    280.74128772453361      );
   int xbin = id5->FindBin(   17.000000000000000      );
  id5 -> SetBinContent( xbin,    7770.2586160989658      );
  id5 -> SetBinError( xbin,    161.06422717938460      );
   int xbin = id5->FindBin(   19.000000000000000      );
  id5 -> SetBinContent( xbin,    8880.5527059839169      );
  id5 -> SetBinError( xbin,    299.60216308693458      );
   int xbin = id5->FindBin(   21.000000000000000      );
  id5 -> SetBinContent( xbin,    9179.5557965651278      );
  id5 -> SetBinError( xbin,    315.93890683041820      );
   int xbin = id5->FindBin(   23.000000000000000      );
  id5 -> SetBinContent( xbin,    11248.669972036239      );
  id5 -> SetBinError( xbin,    202.65168059612967      );
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    11086.673251932858      );
  id5 -> SetBinError( xbin,    311.36303325840282      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    13215.947333798093      );
  id5 -> SetBinError( xbin,    337.31577228110331      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    13895.203369734678      );
  id5 -> SetBinError( xbin,    234.75503291548222      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    15191.939407651447      );
  id5 -> SetBinError( xbin,    447.08074803088999      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    16493.236958303954      );
  id5 -> SetBinError( xbin,    463.18745666354511      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    17391.222160296958      );
  id5 -> SetBinError( xbin,    514.06389731580725      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    19697.020942698826      );
  id5 -> SetBinError( xbin,    522.31259769755059      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    21113.878918412884      );
  id5 -> SetBinError( xbin,    312.22171308738751      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    23687.155424601468      );
  id5 -> SetBinError( xbin,    435.94094747900482      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    26350.660561212706      );
  id5 -> SetBinError( xbin,    423.59846204324430      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    21038.281781916710      );
  id5 -> SetBinError( xbin,    317.16943883934283      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    18335.305622778313      );
  id5 -> SetBinError( xbin,    231.15301569340448      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8591.6800887655299      );
  id5 -> SetBinError( xbin,    75.635168017716410      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    4934.9270050262094      );
  id5 -> SetBinError( xbin,    55.522344323070797      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    3273.5134436553894      );
  id5 -> SetBinError( xbin,    40.741598745189343      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    2310.5723243196162      );
  id5 -> SetBinError( xbin,    21.149320186863562      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    1689.8176010338059      );
  id5 -> SetBinError( xbin,    20.436920476182202      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    1315.7531894429721      );
  id5 -> SetBinError( xbin,    17.108715330720948      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    1004.3057339604770      );
  id5 -> SetBinError( xbin,    5.9462771206142184      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    801.79858439455620      );
  id5 -> SetBinError( xbin,    4.3174312487520234      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    652.37556211622041      );
  id5 -> SetBinError( xbin,    3.7132046357297521      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    549.49066787191316      );
  id5 -> SetBinError( xbin,    3.3854800680851396      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    457.90641971114087      );
  id5 -> SetBinError( xbin,    2.9176210911755405      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    388.05649979099314      );
  id5 -> SetBinError( xbin,    2.6049764656881598      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    332.65825989249061      );
  id5 -> SetBinError( xbin,    2.3852636457779828      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    286.35813915603995      );
  id5 -> SetBinError( xbin,    2.1275416001083798      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    249.43880964233304      );
  id5 -> SetBinError( xbin,    1.9731704993724917      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    215.34095241576034      );
  id5 -> SetBinError( xbin,    1.7944944754377403      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "pt34", 25,    0.00000,   50.00000);

  id6 -> GetXaxis() -> SetTitle("pt34");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dpt34 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,   -29853.615811711719      );
  id6 -> SetBinError( xbin,    376.52829668309943      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    118462.90031088892      );
  id6 -> SetBinError( xbin,    234.66119530877194      );
   int xbin = id6->FindBin(   5.0000000000000000      );
  id6 -> SetBinContent( xbin,    56793.904838032489      );
  id6 -> SetBinError( xbin,    107.89763708365075      );
   int xbin = id6->FindBin(   7.0000000000000000      );
  id6 -> SetBinContent( xbin,    34787.680663507017      );
  id6 -> SetBinError( xbin,    65.809572969258241      );
   int xbin = id6->FindBin(   9.0000000000000000      );
  id6 -> SetBinContent( xbin,    23905.410005462276      );
  id6 -> SetBinError( xbin,    46.738927818609000      );
   int xbin = id6->FindBin(   11.000000000000000      );
  id6 -> SetBinContent( xbin,    17509.953548007921      );
  id6 -> SetBinError( xbin,    36.012884582299449      );
   int xbin = id6->FindBin(   13.000000000000000      );
  id6 -> SetBinContent( xbin,    13416.664930231611      );
  id6 -> SetBinError( xbin,    28.629001601515565      );
   int xbin = id6->FindBin(   15.000000000000000      );
  id6 -> SetBinContent( xbin,    10607.591466366785      );
  id6 -> SetBinError( xbin,    23.990016637525169      );
   int xbin = id6->FindBin(   17.000000000000000      );
  id6 -> SetBinContent( xbin,    8557.0985978310564      );
  id6 -> SetBinError( xbin,    20.319001358535317      );
   int xbin = id6->FindBin(   19.000000000000000      );
  id6 -> SetBinContent( xbin,    7050.9633408547279      );
  id6 -> SetBinError( xbin,    17.265662254597888      );
   int xbin = id6->FindBin(   21.000000000000000      );
  id6 -> SetBinContent( xbin,    5928.4366978788794      );
  id6 -> SetBinError( xbin,    15.419018255461189      );
   int xbin = id6->FindBin(   23.000000000000000      );
  id6 -> SetBinContent( xbin,    5012.6800098512213      );
  id6 -> SetBinError( xbin,    13.526032895259240      );
   int xbin = id6->FindBin(   25.000000000000000      );
  id6 -> SetBinContent( xbin,    4292.9831082433984      );
  id6 -> SetBinError( xbin,    12.164484197325061      );
   int xbin = id6->FindBin(   27.000000000000000      );
  id6 -> SetBinContent( xbin,    3684.0703600317356      );
  id6 -> SetBinError( xbin,    10.801957406854550      );
   int xbin = id6->FindBin(   29.000000000000000      );
  id6 -> SetBinContent( xbin,    3219.0333680510043      );
  id6 -> SetBinError( xbin,    9.8206998992597949      );
   int xbin = id6->FindBin(   31.000000000000000      );
  id6 -> SetBinContent( xbin,    2822.7581069674820      );
  id6 -> SetBinError( xbin,    8.9997393362076092      );
   int xbin = id6->FindBin(   33.000000000000000      );
  id6 -> SetBinContent( xbin,    2474.2791460457820      );
  id6 -> SetBinError( xbin,    8.0506353857791346      );
   int xbin = id6->FindBin(   35.000000000000000      );
  id6 -> SetBinContent( xbin,    2185.7170084628128      );
  id6 -> SetBinError( xbin,    7.4675144742251920      );
   int xbin = id6->FindBin(   37.000000000000000      );
  id6 -> SetBinContent( xbin,    1941.3202922953706      );
  id6 -> SetBinError( xbin,    6.8566898038877833      );
   int xbin = id6->FindBin(   39.000000000000000      );
  id6 -> SetBinContent( xbin,    1731.7421439536258      );
  id6 -> SetBinError( xbin,    6.2604967846879909      );
   int xbin = id6->FindBin(   41.000000000000000      );
  id6 -> SetBinContent( xbin,    1553.4856826158621      );
  id6 -> SetBinError( xbin,    5.8788607756383771      );
   int xbin = id6->FindBin(   43.000000000000000      );
  id6 -> SetBinContent( xbin,    1390.4243508708523      );
  id6 -> SetBinError( xbin,    5.4803915625323416      );
   int xbin = id6->FindBin(   45.000000000000000      );
  id6 -> SetBinContent( xbin,    1244.7351638577657      );
  id6 -> SetBinError( xbin,    5.0778911951256029      );
   int xbin = id6->FindBin(   47.000000000000000      );
  id6 -> SetBinContent( xbin,    1127.1645643455447      );
  id6 -> SetBinError( xbin,    4.7269289579215306      );
   int xbin = id6->FindBin(   49.000000000000000      );
  id6 -> SetBinContent( xbin,    1010.5758623945114      );
  id6 -> SetBinError( xbin,    4.3851037359954814      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "m34", 80,   70.00000,  110.00000);

  id7 -> GetXaxis() -> SetTitle("m34");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dm34 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(   70.250000000000000      );
  id7 -> SetBinContent( xbin,    1163.9804721864953      );
  id7 -> SetBinError( xbin,    36.181653016210028      );
   int xbin = id7->FindBin(   70.750000000000000      );
  id7 -> SetBinContent( xbin,    1256.8911297824327      );
  id7 -> SetBinError( xbin,    36.745206710003579      );
   int xbin = id7->FindBin(   71.250000000000000      );
  id7 -> SetBinContent( xbin,    1262.8593614125139      );
  id7 -> SetBinError( xbin,    36.251270822815748      );
   int xbin = id7->FindBin(   71.750000000000000      );
  id7 -> SetBinContent( xbin,    1253.0589408210838      );
  id7 -> SetBinError( xbin,    35.415061720865879      );
   int xbin = id7->FindBin(   72.250000000000000      );
  id7 -> SetBinContent( xbin,    1261.6940989266955      );
  id7 -> SetBinError( xbin,    35.317189482160195      );
   int xbin = id7->FindBin(   72.750000000000000      );
  id7 -> SetBinContent( xbin,    1348.2565625813011      );
  id7 -> SetBinError( xbin,    36.337102067031104      );
   int xbin = id7->FindBin(   73.250000000000000      );
  id7 -> SetBinContent( xbin,    1330.5195562351862      );
  id7 -> SetBinError( xbin,    34.787730573041927      );
   int xbin = id7->FindBin(   73.750000000000000      );
  id7 -> SetBinContent( xbin,    1439.6335866073375      );
  id7 -> SetBinError( xbin,    35.333825670287034      );
   int xbin = id7->FindBin(   74.250000000000000      );
  id7 -> SetBinContent( xbin,    1397.9002841424826      );
  id7 -> SetBinError( xbin,    34.175066826635721      );
   int xbin = id7->FindBin(   74.750000000000000      );
  id7 -> SetBinContent( xbin,    1439.4269561889598      );
  id7 -> SetBinError( xbin,    35.087276234808151      );
   int xbin = id7->FindBin(   75.250000000000000      );
  id7 -> SetBinContent( xbin,    1489.8784389396665      );
  id7 -> SetBinError( xbin,    36.158800439999112      );
   int xbin = id7->FindBin(   75.750000000000000      );
  id7 -> SetBinContent( xbin,    1550.4643931606277      );
  id7 -> SetBinError( xbin,    36.951586294860263      );
   int xbin = id7->FindBin(   76.250000000000000      );
  id7 -> SetBinContent( xbin,    1614.5446256654086      );
  id7 -> SetBinError( xbin,    36.757425990412685      );
   int xbin = id7->FindBin(   76.750000000000000      );
  id7 -> SetBinContent( xbin,    1753.8326836353235      );
  id7 -> SetBinError( xbin,    37.890579090980673      );
   int xbin = id7->FindBin(   77.250000000000000      );
  id7 -> SetBinContent( xbin,    1783.3335295791619      );
  id7 -> SetBinError( xbin,    37.946503567424934      );
   int xbin = id7->FindBin(   77.750000000000000      );
  id7 -> SetBinContent( xbin,    1911.1094029733449      );
  id7 -> SetBinError( xbin,    38.626357910224002      );
   int xbin = id7->FindBin(   78.250000000000000      );
  id7 -> SetBinContent( xbin,    2004.4384756347376      );
  id7 -> SetBinError( xbin,    40.777611166868702      );
   int xbin = id7->FindBin(   78.750000000000000      );
  id7 -> SetBinContent( xbin,    2103.7057763104895      );
  id7 -> SetBinError( xbin,    43.594148152606365      );
   int xbin = id7->FindBin(   79.250000000000000      );
  id7 -> SetBinContent( xbin,    2350.4331168442686      );
  id7 -> SetBinError( xbin,    45.791750600804441      );
   int xbin = id7->FindBin(   79.750000000000000      );
  id7 -> SetBinContent( xbin,    2402.3136236766636      );
  id7 -> SetBinError( xbin,    45.597137387742301      );
   int xbin = id7->FindBin(   80.250000000000000      );
  id7 -> SetBinContent( xbin,    2582.8261993112392      );
  id7 -> SetBinError( xbin,    46.599419540727240      );
   int xbin = id7->FindBin(   80.750000000000000      );
  id7 -> SetBinContent( xbin,    2824.0326282588849      );
  id7 -> SetBinError( xbin,    48.785523287803407      );
   int xbin = id7->FindBin(   81.250000000000000      );
  id7 -> SetBinContent( xbin,    2945.4647685131367      );
  id7 -> SetBinError( xbin,    50.242637861263120      );
   int xbin = id7->FindBin(   81.750000000000000      );
  id7 -> SetBinContent( xbin,    3213.0275916244887      );
  id7 -> SetBinError( xbin,    52.441803572076466      );
   int xbin = id7->FindBin(   82.250000000000000      );
  id7 -> SetBinContent( xbin,    3627.1943610102799      );
  id7 -> SetBinError( xbin,    55.159230009785816      );
   int xbin = id7->FindBin(   82.750000000000000      );
  id7 -> SetBinContent( xbin,    3851.1201806104054      );
  id7 -> SetBinError( xbin,    56.472465690692395      );
   int xbin = id7->FindBin(   83.250000000000000      );
  id7 -> SetBinContent( xbin,    4379.2598352069317      );
  id7 -> SetBinError( xbin,    60.534043670040042      );
   int xbin = id7->FindBin(   83.750000000000000      );
  id7 -> SetBinContent( xbin,    4959.3883076761167      );
  id7 -> SetBinError( xbin,    64.075829267695553      );
   int xbin = id7->FindBin(   84.250000000000000      );
  id7 -> SetBinContent( xbin,    5544.4927599012899      );
  id7 -> SetBinError( xbin,    68.290710490720755      );
   int xbin = id7->FindBin(   84.750000000000000      );
  id7 -> SetBinContent( xbin,    6428.7154273194137      );
  id7 -> SetBinError( xbin,    74.084530247212271      );
   int xbin = id7->FindBin(   85.250000000000000      );
  id7 -> SetBinContent( xbin,    7361.8138423672099      );
  id7 -> SetBinError( xbin,    78.517130179956055      );
   int xbin = id7->FindBin(   85.750000000000000      );
  id7 -> SetBinContent( xbin,    8664.2368059828332      );
  id7 -> SetBinError( xbin,    84.901859782056135      );
   int xbin = id7->FindBin(   86.250000000000000      );
  id7 -> SetBinContent( xbin,    10273.020765878056      );
  id7 -> SetBinError( xbin,    94.154007937657212      );
   int xbin = id7->FindBin(   86.750000000000000      );
  id7 -> SetBinContent( xbin,    12250.132934365589      );
  id7 -> SetBinError( xbin,    100.58131994437356      );
   int xbin = id7->FindBin(   87.250000000000000      );
  id7 -> SetBinContent( xbin,    15418.448077702109      );
  id7 -> SetBinError( xbin,    114.64830227188703      );
   int xbin = id7->FindBin(   87.750000000000000      );
  id7 -> SetBinContent( xbin,    19387.989183641930      );
  id7 -> SetBinError( xbin,    127.47818567101086      );
   int xbin = id7->FindBin(   88.250000000000000      );
  id7 -> SetBinContent( xbin,    25127.930741767421      );
  id7 -> SetBinError( xbin,    145.24941314784510      );
   int xbin = id7->FindBin(   88.750000000000000      );
  id7 -> SetBinContent( xbin,    33883.029351699945      );
  id7 -> SetBinError( xbin,    169.00865031057810      );
   int xbin = id7->FindBin(   89.250000000000000      );
  id7 -> SetBinContent( xbin,    47688.263421822230      );
  id7 -> SetBinError( xbin,    200.18815184805982      );
   int xbin = id7->FindBin(   89.750000000000000      );
  id7 -> SetBinContent( xbin,    69630.911630332921      );
  id7 -> SetBinError( xbin,    241.87721945926396      );
   int xbin = id7->FindBin(   90.250000000000000      );
  id7 -> SetBinContent( xbin,    102513.74943062903      );
  id7 -> SetBinError( xbin,    292.53740363669499      );
   int xbin = id7->FindBin(   90.750000000000000      );
  id7 -> SetBinContent( xbin,    140846.15386372758      );
  id7 -> SetBinError( xbin,    342.37207171953008      );
   int xbin = id7->FindBin(   91.250000000000000      );
  id7 -> SetBinContent( xbin,    156880.00135972720      );
  id7 -> SetBinError( xbin,    361.30146008098677      );
   int xbin = id7->FindBin(   91.750000000000000      );
  id7 -> SetBinContent( xbin,    131486.20288363867      );
  id7 -> SetBinError( xbin,    331.62318935801073      );
   int xbin = id7->FindBin(   92.250000000000000      );
  id7 -> SetBinContent( xbin,    92526.097753221446      );
  id7 -> SetBinError( xbin,    279.09055976538076      );
   int xbin = id7->FindBin(   92.750000000000000      );
  id7 -> SetBinContent( xbin,    62215.195124642953      );
  id7 -> SetBinError( xbin,    229.33461166440424      );
   int xbin = id7->FindBin(   93.250000000000000      );
  id7 -> SetBinContent( xbin,    42693.336036956171      );
  id7 -> SetBinError( xbin,    190.07089083263676      );
   int xbin = id7->FindBin(   93.750000000000000      );
  id7 -> SetBinContent( xbin,    30007.957969524927      );
  id7 -> SetBinError( xbin,    159.74212840234713      );
   int xbin = id7->FindBin(   94.250000000000000      );
  id7 -> SetBinContent( xbin,    22354.299243030589      );
  id7 -> SetBinError( xbin,    138.34108189024209      );
   int xbin = id7->FindBin(   94.750000000000000      );
  id7 -> SetBinContent( xbin,    17092.807284406623      );
  id7 -> SetBinError( xbin,    120.97729633355279      );
   int xbin = id7->FindBin(   95.250000000000000      );
  id7 -> SetBinContent( xbin,    13333.444572239143      );
  id7 -> SetBinError( xbin,    107.06582712484688      );
   int xbin = id7->FindBin(   95.750000000000000      );
  id7 -> SetBinContent( xbin,    10683.146142478272      );
  id7 -> SetBinError( xbin,    95.635370897997959      );
   int xbin = id7->FindBin(   96.250000000000000      );
  id7 -> SetBinContent( xbin,    8938.4650759645647      );
  id7 -> SetBinError( xbin,    87.052331761090784      );
   int xbin = id7->FindBin(   96.750000000000000      );
  id7 -> SetBinContent( xbin,    7432.4444331307277      );
  id7 -> SetBinError( xbin,    81.688157295403585      );
   int xbin = id7->FindBin(   97.250000000000000      );
  id7 -> SetBinContent( xbin,    6281.4869337359505      );
  id7 -> SetBinError( xbin,    73.893747862603732      );
   int xbin = id7->FindBin(   97.750000000000000      );
  id7 -> SetBinContent( xbin,    5347.8014289201856      );
  id7 -> SetBinError( xbin,    67.152519412542077      );
   int xbin = id7->FindBin(   98.250000000000000      );
  id7 -> SetBinContent( xbin,    4575.7196962906573      );
  id7 -> SetBinError( xbin,    62.235194866949769      );
   int xbin = id7->FindBin(   98.750000000000000      );
  id7 -> SetBinContent( xbin,    3987.3787484348136      );
  id7 -> SetBinError( xbin,    59.854087797954662      );
   int xbin = id7->FindBin(   99.250000000000000      );
  id7 -> SetBinContent( xbin,    3595.1032269828947      );
  id7 -> SetBinError( xbin,    57.213093822665151      );
   int xbin = id7->FindBin(   99.750000000000000      );
  id7 -> SetBinContent( xbin,    3143.8195069763187      );
  id7 -> SetBinError( xbin,    53.172654998735609      );
   int xbin = id7->FindBin(   100.25000000000000      );
  id7 -> SetBinContent( xbin,    2889.0785995880433      );
  id7 -> SetBinError( xbin,    50.383434731047352      );
   int xbin = id7->FindBin(   100.75000000000000      );
  id7 -> SetBinContent( xbin,    2575.1655024665929      );
  id7 -> SetBinError( xbin,    47.069144937012126      );
   int xbin = id7->FindBin(   101.25000000000000      );
  id7 -> SetBinContent( xbin,    2258.8556072072179      );
  id7 -> SetBinError( xbin,    43.710104926676586      );
   int xbin = id7->FindBin(   101.75000000000000      );
  id7 -> SetBinContent( xbin,    2131.3799801510099      );
  id7 -> SetBinError( xbin,    42.577802361495529      );
   int xbin = id7->FindBin(   102.25000000000000      );
  id7 -> SetBinContent( xbin,    1966.4336471978504      );
  id7 -> SetBinError( xbin,    41.146802142655325      );
   int xbin = id7->FindBin(   102.75000000000000      );
  id7 -> SetBinContent( xbin,    1689.0976044214285      );
  id7 -> SetBinError( xbin,    37.818066270899394      );
   int xbin = id7->FindBin(   103.25000000000000      );
  id7 -> SetBinContent( xbin,    1622.8342629523597      );
  id7 -> SetBinError( xbin,    37.902777380568651      );
   int xbin = id7->FindBin(   103.75000000000000      );
  id7 -> SetBinContent( xbin,    1476.4813731346744      );
  id7 -> SetBinError( xbin,    36.064764859269282      );
   int xbin = id7->FindBin(   104.25000000000000      );
  id7 -> SetBinContent( xbin,    1393.8258425896422      );
  id7 -> SetBinError( xbin,    35.796828304850997      );
   int xbin = id7->FindBin(   104.75000000000000      );
  id7 -> SetBinContent( xbin,    1248.1650031558902      );
  id7 -> SetBinError( xbin,    33.159198855676145      );
   int xbin = id7->FindBin(   105.25000000000000      );
  id7 -> SetBinContent( xbin,    1184.7938080499393      );
  id7 -> SetBinError( xbin,    33.142568272654465      );
   int xbin = id7->FindBin(   105.75000000000000      );
  id7 -> SetBinContent( xbin,    1136.6562029815732      );
  id7 -> SetBinError( xbin,    31.998772209438702      );
   int xbin = id7->FindBin(   106.25000000000000      );
  id7 -> SetBinContent( xbin,    1046.7931925249886      );
  id7 -> SetBinError( xbin,    30.811670150900149      );
   int xbin = id7->FindBin(   106.75000000000000      );
  id7 -> SetBinContent( xbin,    952.89618196386391      );
  id7 -> SetBinError( xbin,    29.352970186948365      );
   int xbin = id7->FindBin(   107.25000000000000      );
  id7 -> SetBinContent( xbin,    904.60608862816719      );
  id7 -> SetBinError( xbin,    28.719498011227820      );
   int xbin = id7->FindBin(   107.75000000000000      );
  id7 -> SetBinContent( xbin,    925.16857965142776      );
  id7 -> SetBinError( xbin,    29.351773528541422      );
   int xbin = id7->FindBin(   108.25000000000000      );
  id7 -> SetBinContent( xbin,    800.65970715392405      );
  id7 -> SetBinError( xbin,    26.422723245595368      );
   int xbin = id7->FindBin(   108.75000000000000      );
  id7 -> SetBinContent( xbin,    773.62648206075028      );
  id7 -> SetBinError( xbin,    26.304257170199094      );
   int xbin = id7->FindBin(   109.25000000000000      );
  id7 -> SetBinContent( xbin,    677.96194301739501      );
  id7 -> SetBinError( xbin,    24.375509650899456      );
   int xbin = id7->FindBin(   109.75000000000000      );
  id7 -> SetBinContent( xbin,    680.44465183683451      );
  id7 -> SetBinError( xbin,    24.567543804242394      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "DeltaR35", 50,    0.00000,    5.00000);

  id8 -> GetXaxis() -> SetTitle("DeltaR35");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaR35 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   5.0000000000000003E-002 );
  id8 -> SetBinContent( xbin,    616.47320929577518      );
  id8 -> SetBinError( xbin,    14.185995952377834      );
   int xbin = id8->FindBin(  0.15000000000000002      );
  id8 -> SetBinContent( xbin,    1834.8100340311587      );
  id8 -> SetBinError( xbin,    24.333308978243657      );
   int xbin = id8->FindBin(  0.25000000000000000      );
  id8 -> SetBinContent( xbin,    3026.7376894846302      );
  id8 -> SetBinError( xbin,    31.981097816101062      );
   int xbin = id8->FindBin(  0.35000000000000003      );
  id8 -> SetBinContent( xbin,    4230.6887825262875      );
  id8 -> SetBinError( xbin,    37.114065860882299      );
   int xbin = id8->FindBin(  0.45000000000000001      );
  id8 -> SetBinContent( xbin,    5485.4983646842929      );
  id8 -> SetBinError( xbin,    43.170586467102098      );
   int xbin = id8->FindBin(  0.55000000000000004      );
  id8 -> SetBinContent( xbin,    6607.0383177819376      );
  id8 -> SetBinError( xbin,    47.173758820759225      );
   int xbin = id8->FindBin(  0.65000000000000002      );
  id8 -> SetBinContent( xbin,    7654.9953111731702      );
  id8 -> SetBinError( xbin,    50.753828182578786      );
   int xbin = id8->FindBin(  0.75000000000000000      );
  id8 -> SetBinContent( xbin,    8930.2720954395463      );
  id8 -> SetBinError( xbin,    55.434398672789449      );
   int xbin = id8->FindBin(  0.85000000000000009      );
  id8 -> SetBinContent( xbin,    10212.809762498513      );
  id8 -> SetBinError( xbin,    59.752345979163174      );
   int xbin = id8->FindBin(  0.95000000000000007      );
  id8 -> SetBinContent( xbin,    11294.128368179496      );
  id8 -> SetBinError( xbin,    63.443447552836986      );
   int xbin = id8->FindBin(   1.0500000000000000      );
  id8 -> SetBinContent( xbin,    12443.617959155137      );
  id8 -> SetBinError( xbin,    66.606516813982594      );
   int xbin = id8->FindBin(   1.1500000000000001      );
  id8 -> SetBinContent( xbin,    13544.925080374727      );
  id8 -> SetBinError( xbin,    69.694235789378595      );
   int xbin = id8->FindBin(   1.2500000000000000      );
  id8 -> SetBinContent( xbin,    14833.043054949461      );
  id8 -> SetBinError( xbin,    74.069568546917424      );
   int xbin = id8->FindBin(   1.3500000000000001      );
  id8 -> SetBinContent( xbin,    15785.452998599832      );
  id8 -> SetBinError( xbin,    76.111231899408907      );
   int xbin = id8->FindBin(   1.4500000000000002      );
  id8 -> SetBinContent( xbin,    16991.872833784524      );
  id8 -> SetBinError( xbin,    79.913348714772468      );
   int xbin = id8->FindBin(   1.5500000000000000      );
  id8 -> SetBinContent( xbin,    18321.197913235588      );
  id8 -> SetBinError( xbin,    83.470014549034744      );
   int xbin = id8->FindBin(   1.6500000000000001      );
  id8 -> SetBinContent( xbin,    19591.475392647040      );
  id8 -> SetBinError( xbin,    86.308902436593669      );
   int xbin = id8->FindBin(   1.7500000000000000      );
  id8 -> SetBinContent( xbin,    20936.083454532873      );
  id8 -> SetBinError( xbin,    90.048922877908453      );
   int xbin = id8->FindBin(   1.8500000000000001      );
  id8 -> SetBinContent( xbin,    22246.370460895167      );
  id8 -> SetBinError( xbin,    92.663038540965417      );
   int xbin = id8->FindBin(   1.9500000000000002      );
  id8 -> SetBinContent( xbin,    23817.093400849801      );
  id8 -> SetBinError( xbin,    96.832708607593261      );
   int xbin = id8->FindBin(   2.0500000000000003      );
  id8 -> SetBinContent( xbin,    25501.501807475310      );
  id8 -> SetBinError( xbin,    100.44640588950392      );
   int xbin = id8->FindBin(   2.1499999999999999      );
  id8 -> SetBinContent( xbin,    27366.950015713053      );
  id8 -> SetBinError( xbin,    103.93271917848223      );
   int xbin = id8->FindBin(   2.2500000000000000      );
  id8 -> SetBinContent( xbin,    29390.762242830609      );
  id8 -> SetBinError( xbin,    107.26491971802778      );
   int xbin = id8->FindBin(   2.3500000000000001      );
  id8 -> SetBinContent( xbin,    31570.022835854943      );
  id8 -> SetBinError( xbin,    110.74286743991958      );
   int xbin = id8->FindBin(   2.4500000000000002      );
  id8 -> SetBinContent( xbin,    34271.305369512520      );
  id8 -> SetBinError( xbin,    115.56235584150123      );
   int xbin = id8->FindBin(   2.5500000000000003      );
  id8 -> SetBinContent( xbin,    37027.115532775781      );
  id8 -> SetBinError( xbin,    119.09999519759789      );
   int xbin = id8->FindBin(   2.6500000000000004      );
  id8 -> SetBinContent( xbin,    40226.594911731590      );
  id8 -> SetBinError( xbin,    124.02332411691513      );
   int xbin = id8->FindBin(   2.7500000000000000      );
  id8 -> SetBinContent( xbin,    44209.222659958818      );
  id8 -> SetBinError( xbin,    130.08630527756978      );
   int xbin = id8->FindBin(   2.8500000000000001      );
  id8 -> SetBinContent( xbin,    47755.931953453677      );
  id8 -> SetBinError( xbin,    136.16321951775316      );
   int xbin = id8->FindBin(   2.9500000000000002      );
  id8 -> SetBinContent( xbin,    51830.011351983252      );
  id8 -> SetBinError( xbin,    141.46766189033482      );
   int xbin = id8->FindBin(   3.0500000000000003      );
  id8 -> SetBinContent( xbin,    55575.093975907672      );
  id8 -> SetBinError( xbin,    145.68508209927538      );
   int xbin = id8->FindBin(   3.1500000000000004      );
  id8 -> SetBinContent( xbin,    50716.837799519031      );
  id8 -> SetBinError( xbin,    145.64581095873987      );
   int xbin = id8->FindBin(   3.2500000000000000      );
  id8 -> SetBinContent( xbin,    34067.193936115676      );
  id8 -> SetBinError( xbin,    135.52218387291364      );
   int xbin = id8->FindBin(   3.3500000000000001      );
  id8 -> SetBinContent( xbin,    26095.729081596950      );
  id8 -> SetBinError( xbin,    129.20015541091800      );
   int xbin = id8->FindBin(   3.4500000000000002      );
  id8 -> SetBinContent( xbin,    21184.092293906451      );
  id8 -> SetBinError( xbin,    126.09611064179931      );
   int xbin = id8->FindBin(   3.5500000000000003      );
  id8 -> SetBinContent( xbin,    17489.141166054473      );
  id8 -> SetBinError( xbin,    123.56710736853394      );
   int xbin = id8->FindBin(   3.6500000000000004      );
  id8 -> SetBinContent( xbin,    14384.580312900720      );
  id8 -> SetBinError( xbin,    118.96127654768195      );
   int xbin = id8->FindBin(   3.7500000000000000      );
  id8 -> SetBinContent( xbin,    11704.572034470690      );
  id8 -> SetBinError( xbin,    113.03106871543154      );
   int xbin = id8->FindBin(   3.8500000000000001      );
  id8 -> SetBinContent( xbin,    10046.522973126392      );
  id8 -> SetBinError( xbin,    111.00646580200238      );
   int xbin = id8->FindBin(   3.9500000000000002      );
  id8 -> SetBinContent( xbin,    8489.5917096776047      );
  id8 -> SetBinError( xbin,    108.21341918191682      );
   int xbin = id8->FindBin(   4.0499999999999998      );
  id8 -> SetBinContent( xbin,    6924.1539973665731      );
  id8 -> SetBinError( xbin,    100.05404817906934      );
   int xbin = id8->FindBin(   4.1500000000000004      );
  id8 -> SetBinContent( xbin,    5969.0580506607475      );
  id8 -> SetBinError( xbin,    97.191822137327406      );
   int xbin = id8->FindBin(   4.2500000000000000      );
  id8 -> SetBinContent( xbin,    4833.4715336708859      );
  id8 -> SetBinError( xbin,    90.385656784231799      );
   int xbin = id8->FindBin(   4.3500000000000005      );
  id8 -> SetBinContent( xbin,    4107.2781243515519      );
  id8 -> SetBinError( xbin,    87.629240454250720      );
   int xbin = id8->FindBin(   4.4500000000000002      );
  id8 -> SetBinContent( xbin,    3584.3130376226327      );
  id8 -> SetBinError( xbin,    85.448329985469215      );
   int xbin = id8->FindBin(   4.5499999999999998      );
  id8 -> SetBinContent( xbin,    2895.5412058691891      );
  id8 -> SetBinError( xbin,    81.999168608850283      );
   int xbin = id8->FindBin(   4.6500000000000004      );
  id8 -> SetBinContent( xbin,    2385.1878289249735      );
  id8 -> SetBinError( xbin,    75.427828963790489      );
   int xbin = id8->FindBin(   4.7500000000000000      );
  id8 -> SetBinContent( xbin,    2110.1211087946426      );
  id8 -> SetBinError( xbin,    74.600988646680335      );
   int xbin = id8->FindBin(   4.8500000000000005      );
  id8 -> SetBinContent( xbin,    1749.6417437019336      );
  id8 -> SetBinError( xbin,    67.244439892243221      );
   int xbin = id8->FindBin(   4.9500000000000002      );
  id8 -> SetBinContent( xbin,    1513.1524000785491      );
  id8 -> SetBinError( xbin,    63.489872849055828      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id9", "y5", 12,   -3.20000,    3.20000);

  id9 -> GetXaxis() -> SetTitle("y5");
  id9 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id9 -> GetYaxis() -> SetTitleOffset(1.2);
  id9 -> SetStats(false);
   int xbin = id9->FindBin(  -2.4500000000000002      );
  id9 -> SetBinContent( xbin,    4197.0796190970459      );
  id9 -> SetBinError( xbin,    21.624311771749081      );
   int xbin = id9->FindBin(  -1.9500000000000002      );
  id9 -> SetBinContent( xbin,    13737.485378623163      );
  id9 -> SetBinError( xbin,    37.866245433817916      );
   int xbin = id9->FindBin(  -1.4500000000000002      );
  id9 -> SetBinContent( xbin,    18326.487162268892      );
  id9 -> SetBinError( xbin,    44.673816075284449      );
   int xbin = id9->FindBin( -0.95000000000000018      );
  id9 -> SetBinContent( xbin,    21845.607519565718      );
  id9 -> SetBinError( xbin,    47.725747241614535      );
   int xbin = id9->FindBin( -0.45000000000000018      );
  id9 -> SetBinContent( xbin,    23953.299465013319      );
  id9 -> SetBinError( xbin,    50.636189029815235      );
   int xbin = id9->FindBin(   4.9999999999999822E-002 );
  id9 -> SetBinContent( xbin,    24394.899329260632      );
  id9 -> SetBinError( xbin,    50.776927148144487      );
   int xbin = id9->FindBin(  0.54999999999999982      );
  id9 -> SetBinContent( xbin,    22977.912545900021      );
  id9 -> SetBinError( xbin,    48.922275639727133      );
   int xbin = id9->FindBin(   1.0499999999999998      );
  id9 -> SetBinContent( xbin,    20253.334083239592      );
  id9 -> SetBinError( xbin,    45.914332565191685      );
   int xbin = id9->FindBin(   1.5499999999999998      );
  id9 -> SetBinContent( xbin,    16499.253739120770      );
  id9 -> SetBinError( xbin,    41.871497485995896      );
   int xbin = id9->FindBin(   2.0499999999999998      );
  id9 -> SetBinContent( xbin,    11974.018696063758      );
  id9 -> SetBinError( xbin,    35.216429233379571      );
   int xbin = id9->FindBin(   2.5499999999999998      );
  id9 -> SetBinContent( xbin,    1845.2400827444817      );
  id9 -> SetBinError( xbin,    13.787468346465445      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id10", "pt5", 50,    0.00000,  100.00000);

  id10 -> GetXaxis() -> SetTitle("pt5");
  id10 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id10 -> GetYaxis() -> SetTitleOffset(1.2);
  id10 -> SetStats(false);
   int xbin = id10->FindBin(   21.000000000000000      );
  id10 -> SetBinContent( xbin,    4951.1299853760829      );
  id10 -> SetBinError( xbin,    14.084925154765573      );
   int xbin = id10->FindBin(   23.000000000000000      );
  id10 -> SetBinContent( xbin,    4228.5476007065326      );
  id10 -> SetBinError( xbin,    12.439417920544724      );
   int xbin = id10->FindBin(   25.000000000000000      );
  id10 -> SetBinContent( xbin,    3654.1829417643235      );
  id10 -> SetBinError( xbin,    11.273460319316001      );
   int xbin = id10->FindBin(   27.000000000000000      );
  id10 -> SetBinContent( xbin,    3155.9079872337961      );
  id10 -> SetBinError( xbin,    10.029507928808867      );
   int xbin = id10->FindBin(   29.000000000000000      );
  id10 -> SetBinContent( xbin,    2775.7265348501069      );
  id10 -> SetBinError( xbin,    9.1434603784765400      );
   int xbin = id10->FindBin(   31.000000000000000      );
  id10 -> SetBinContent( xbin,    2455.1874053874540      );
  id10 -> SetBinError( xbin,    8.4381800829848697      );
   int xbin = id10->FindBin(   33.000000000000000      );
  id10 -> SetBinContent( xbin,    2158.2039397810613      );
  id10 -> SetBinError( xbin,    7.5215792086879008      );
   int xbin = id10->FindBin(   35.000000000000000      );
  id10 -> SetBinContent( xbin,    1921.6929364440894      );
  id10 -> SetBinError( xbin,    7.0397211585413313      );
   int xbin = id10->FindBin(   37.000000000000000      );
  id10 -> SetBinContent( xbin,    1714.6731034567042      );
  id10 -> SetBinError( xbin,    6.4660091094739149      );
   int xbin = id10->FindBin(   39.000000000000000      );
  id10 -> SetBinContent( xbin,    1535.4067611978080      );
  id10 -> SetBinError( xbin,    5.9408702144231373      );
   int xbin = id10->FindBin(   41.000000000000000      );
  id10 -> SetBinContent( xbin,    1387.7357791326153      );
  id10 -> SetBinError( xbin,    5.5872810323968256      );
   int xbin = id10->FindBin(   43.000000000000000      );
  id10 -> SetBinContent( xbin,    1247.6192113282259      );
  id10 -> SetBinError( xbin,    5.2366227870873683      );
   int xbin = id10->FindBin(   45.000000000000000      );
  id10 -> SetBinContent( xbin,    1120.2280841051222      );
  id10 -> SetBinError( xbin,    4.8399547091701258      );
   int xbin = id10->FindBin(   47.000000000000000      );
  id10 -> SetBinContent( xbin,    1018.1037102166664      );
  id10 -> SetBinError( xbin,    4.5344860359812236      );
   int xbin = id10->FindBin(   49.000000000000000      );
  id10 -> SetBinContent( xbin,    918.21052523864239      );
  id10 -> SetBinError( xbin,    4.2126517326756563      );
   int xbin = id10->FindBin(   51.000000000000000      );
  id10 -> SetBinContent( xbin,    836.05334007121132      );
  id10 -> SetBinError( xbin,    4.0183929815974748      );
   int xbin = id10->FindBin(   53.000000000000000      );
  id10 -> SetBinContent( xbin,    759.43732115748583      );
  id10 -> SetBinError( xbin,    3.7154825580790494      );
   int xbin = id10->FindBin(   55.000000000000000      );
  id10 -> SetBinContent( xbin,    694.56292254422351      );
  id10 -> SetBinError( xbin,    3.5621990103586882      );
   int xbin = id10->FindBin(   57.000000000000000      );
  id10 -> SetBinContent( xbin,    638.34888883654060      );
  id10 -> SetBinError( xbin,    3.4230266056193996      );
   int xbin = id10->FindBin(   59.000000000000000      );
  id10 -> SetBinContent( xbin,    585.48961070957591      );
  id10 -> SetBinError( xbin,    3.1870062753714863      );
   int xbin = id10->FindBin(   61.000000000000000      );
  id10 -> SetBinContent( xbin,    525.86847185174827      );
  id10 -> SetBinError( xbin,    2.9240266779767579      );
   int xbin = id10->FindBin(   63.000000000000000      );
  id10 -> SetBinContent( xbin,    484.15662591198952      );
  id10 -> SetBinError( xbin,    2.8150194928394048      );
   int xbin = id10->FindBin(   65.000000000000000      );
  id10 -> SetBinContent( xbin,    445.74296794803314      );
  id10 -> SetBinError( xbin,    2.6743083646714441      );
   int xbin = id10->FindBin(   67.000000000000000      );
  id10 -> SetBinContent( xbin,    409.26661257202375      );
  id10 -> SetBinError( xbin,    2.4989272785087939      );
   int xbin = id10->FindBin(   69.000000000000000      );
  id10 -> SetBinContent( xbin,    377.59368423617474      );
  id10 -> SetBinError( xbin,    2.4082337490851780      );
   int xbin = id10->FindBin(   71.000000000000000      );
  id10 -> SetBinContent( xbin,    344.63285464707911      );
  id10 -> SetBinError( xbin,    2.2483992939447797      );
   int xbin = id10->FindBin(   73.000000000000000      );
  id10 -> SetBinContent( xbin,    317.71828578406581      );
  id10 -> SetBinError( xbin,    2.1596248188119560      );
   int xbin = id10->FindBin(   75.000000000000000      );
  id10 -> SetBinContent( xbin,    293.46297759598423      );
  id10 -> SetBinError( xbin,    2.0076119391636649      );
   int xbin = id10->FindBin(   77.000000000000000      );
  id10 -> SetBinContent( xbin,    271.23956730304741      );
  id10 -> SetBinError( xbin,    1.9256142894425377      );
   int xbin = id10->FindBin(   79.000000000000000      );
  id10 -> SetBinContent( xbin,    250.67850064809670      );
  id10 -> SetBinError( xbin,    1.8514822613123565      );
   int xbin = id10->FindBin(   81.000000000000000      );
  id10 -> SetBinContent( xbin,    232.61270509936617      );
  id10 -> SetBinError( xbin,    1.7553320389087088      );
   int xbin = id10->FindBin(   83.000000000000000      );
  id10 -> SetBinContent( xbin,    218.28534714360458      );
  id10 -> SetBinError( xbin,    1.7219031839564520      );
   int xbin = id10->FindBin(   85.000000000000000      );
  id10 -> SetBinContent( xbin,    198.39904726651423      );
  id10 -> SetBinError( xbin,    1.5944162057758589      );
   int xbin = id10->FindBin(   87.000000000000000      );
  id10 -> SetBinContent( xbin,    183.86670926255397      );
  id10 -> SetBinError( xbin,    1.5489272128119544      );
   int xbin = id10->FindBin(   89.000000000000000      );
  id10 -> SetBinContent( xbin,    169.28498861877020      );
  id10 -> SetBinError( xbin,    1.4604809277234401      );
   int xbin = id10->FindBin(   91.000000000000000      );
  id10 -> SetBinContent( xbin,    157.16098481068516      );
  id10 -> SetBinError( xbin,    1.3799557683886294      );
   int xbin = id10->FindBin(   93.000000000000000      );
  id10 -> SetBinContent( xbin,    147.76779078187667      );
  id10 -> SetBinError( xbin,    1.3604718524859620      );
   int xbin = id10->FindBin(   95.000000000000000      );
  id10 -> SetBinContent( xbin,    136.53397518867632      );
  id10 -> SetBinError( xbin,    1.2942914921133002      );
   int xbin = id10->FindBin(   97.000000000000000      );
  id10 -> SetBinContent( xbin,    127.48667477290684      );
  id10 -> SetBinError( xbin,    1.2195469567526502      );
   int xbin = id10->FindBin(   99.000000000000000      );
  id10 -> SetBinContent( xbin,    119.43270414315205      );
  id10 -> SetBinError( xbin,    1.1936049456215059      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id11", "m34 forward lepton", 32,   40.00000,  200.00000);

  id11 -> GetXaxis() -> SetTitle("m34 forward lepton");
  id11 -> GetYaxis() -> SetTitle(" d#sigma/dm34 forward lepton [fb]");

  id11 -> GetYaxis() -> SetTitleOffset(1.2);
  id11 -> SetStats(false);
   int xbin = id11->FindBin(   62.500000000000000      );
  id11 -> SetBinContent( xbin,    475.51444972129298      );
  id11 -> SetBinError( xbin,    5.9114225076802471      );
   int xbin = id11->FindBin(   67.500000000000000      );
  id11 -> SetBinContent( xbin,    458.00362984348408      );
  id11 -> SetBinError( xbin,    4.9697353018678498      );
   int xbin = id11->FindBin(   72.500000000000000      );
  id11 -> SetBinContent( xbin,    515.09750482760614      );
  id11 -> SetBinError( xbin,    5.9527726472478237      );
   int xbin = id11->FindBin(   77.500000000000000      );
  id11 -> SetBinContent( xbin,    797.52456608686884      );
  id11 -> SetBinError( xbin,    7.3657636959460859      );
   int xbin = id11->FindBin(   82.500000000000000      );
  id11 -> SetBinContent( xbin,    1857.3872615561941      );
  id11 -> SetBinError( xbin,    11.890658450873202      );
   int xbin = id11->FindBin(   87.500000000000000      );
  id11 -> SetBinContent( xbin,    12618.996407164686      );
  id11 -> SetBinError( xbin,    33.150102949396391      );
   int xbin = id11->FindBin(   92.500000000000000      );
  id11 -> SetBinContent( xbin,    42366.802267160645      );
  id11 -> SetBinError( xbin,    61.531938894140872      );
   int xbin = id11->FindBin(   97.500000000000000      );
  id11 -> SetBinContent( xbin,    3812.3287237133272      );
  id11 -> SetBinError( xbin,    19.247780630776866      );
   int xbin = id11->FindBin(   102.50000000000000      );
  id11 -> SetBinContent( xbin,    1133.4000994426854      );
  id11 -> SetBinError( xbin,    10.657904995663861      );
   int xbin = id11->FindBin(   107.50000000000000      );
  id11 -> SetBinContent( xbin,    546.65616974771820      );
  id11 -> SetBinError( xbin,    7.6093753409748084      );
   int xbin = id11->FindBin(   112.50000000000000      );
  id11 -> SetBinContent( xbin,    325.54508511731598      );
  id11 -> SetBinError( xbin,    5.9014853662731968      );
   int xbin = id11->FindBin(   117.50000000000000      );
  id11 -> SetBinContent( xbin,    211.14992737716889      );
  id11 -> SetBinError( xbin,    4.8145052477615202      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id12", "m34 backward lepton", 32,   40.00000,  200.00000);

  id12 -> GetXaxis() -> SetTitle("m34 backward lepton");
  id12 -> GetYaxis() -> SetTitle(" d#sigma/dm34 backward lepton [fb]");

  id12 -> GetYaxis() -> SetTitleOffset(1.2);
  id12 -> SetStats(false);
   int xbin = id12->FindBin(   62.500000000000000      );
  id12 -> SetBinContent( xbin,    752.84290491690160      );
  id12 -> SetBinError( xbin,    9.7084396183430588      );
   int xbin = id12->FindBin(   67.500000000000000      );
  id12 -> SetBinContent( xbin,    718.64317575459290      );
  id12 -> SetBinError( xbin,    8.1267793132041923      );
   int xbin = id12->FindBin(   72.500000000000000      );
  id12 -> SetBinContent( xbin,    800.32459006085026      );
  id12 -> SetBinError( xbin,    9.5678845438002220      );
   int xbin = id12->FindBin(   77.500000000000000      );
  id12 -> SetBinContent( xbin,    1098.8808405550951      );
  id12 -> SetBinError( xbin,    10.379240080273830      );
   int xbin = id12->FindBin(   82.500000000000000      );
  id12 -> SetBinContent( xbin,    2178.1649443869969      );
  id12 -> SetBinError( xbin,    14.145012848715304      );
   int xbin = id12->FindBin(   87.500000000000000      );
  id12 -> SetBinContent( xbin,    12349.581268391337      );
  id12 -> SetBinError( xbin,    32.384829137455540      );
   int xbin = id12->FindBin(   92.500000000000000      );
  id12 -> SetBinContent( xbin,    37494.777827788545      );
  id12 -> SetBinError( xbin,    54.388379661994378      );
   int xbin = id12->FindBin(   97.500000000000000      );
  id12 -> SetBinContent( xbin,    2919.5522528018232      );
  id12 -> SetBinError( xbin,    14.649289280264984      );
   int xbin = id12->FindBin(   102.50000000000000      );
  id12 -> SetBinContent( xbin,    791.73164284380994      );
  id12 -> SetBinError( xbin,    7.3906326849501882      );
   int xbin = id12->FindBin(   107.50000000000000      );
  id12 -> SetBinContent( xbin,    361.70451403916849      );
  id12 -> SetBinError( xbin,    4.9511324039286091      );
   int xbin = id12->FindBin(   112.50000000000000      );
  id12 -> SetBinContent( xbin,    204.23384401394023      );
  id12 -> SetBinError( xbin,    3.6767804031068674      );
   int xbin = id12->FindBin(   117.50000000000000      );
  id12 -> SetBinContent( xbin,    131.79032803434896      );
  id12 -> SetBinError( xbin,    2.9378469018269016      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id13", "lepton FB asymmetry", 32,   40.00000,  200.00000);

  id13 -> GetXaxis() -> SetTitle("lepton FB asymmetry");
  id13 -> GetYaxis() -> SetTitle(" d#sigma/dlepton FB asymmetry [fb]");

  id13 -> GetYaxis() -> SetTitleOffset(1.2);
  id13 -> SetStats(false);
   int xbin = id13->FindBin(   62.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.2577180341570399E-002 );
  id13 -> SetBinError( xbin,    7.8602242575046385E-006 );
   int xbin = id13->FindBin(   67.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.2151043513744001E-002 );
  id13 -> SetBinError( xbin,    7.7118651187449686E-006 );
   int xbin = id13->FindBin(   72.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.1683312629580734E-002 );
  id13 -> SetBinError( xbin,    7.5490250481044877E-006 );
   int xbin = id13->FindBin(   77.500000000000000      );
  id13 -> SetBinContent( xbin,   -1.5890920444160149E-002 );
  id13 -> SetBinError( xbin,    5.5324091166193829E-006 );
   int xbin = id13->FindBin(   82.500000000000000      );
  id13 -> SetBinContent( xbin,   -7.9487927911920126E-003 );
  id13 -> SetBinError( xbin,    2.7673647891346732E-006 );
   int xbin = id13->FindBin(   87.500000000000000      );
  id13 -> SetBinContent( xbin,    1.0790167636865599E-003 );
  id13 -> SetBinError( xbin,    3.7565867889033807E-007 );
   int xbin = id13->FindBin(   92.500000000000000      );
  id13 -> SetBinContent( xbin,    6.1005860800652824E-003 );
  id13 -> SetBinError( xbin,    2.1239133481709561E-006 );
   int xbin = id13->FindBin(   97.500000000000000      );
  id13 -> SetBinContent( xbin,    1.3261917048534359E-002 );
  id13 -> SetBinError( xbin,    4.6171240389114663E-006 );
   int xbin = id13->FindBin(   102.50000000000000      );
  id13 -> SetBinContent( xbin,    1.7747796116699677E-002 );
  id13 -> SetBinError( xbin,    6.1788786484054873E-006 );
   int xbin = id13->FindBin(   107.50000000000000      );
  id13 -> SetBinContent( xbin,    2.0361037086887156E-002 );
  id13 -> SetBinError( xbin,    7.0886760524131043E-006 );
   int xbin = id13->FindBin(   112.50000000000000      );
  id13 -> SetBinContent( xbin,    2.2898464705326194E-002 );
  id13 -> SetBinError( xbin,    7.9720791087900474E-006 );
   int xbin = id13->FindBin(   117.50000000000000      );
  id13 -> SetBinContent( xbin,    2.3140940175597299E-002 );
  id13 -> SetBinError( xbin,    8.0564967173859952E-006 );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
