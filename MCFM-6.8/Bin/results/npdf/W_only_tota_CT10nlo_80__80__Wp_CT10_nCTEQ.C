// Cross-section is:      2182386.6924264603 +/-          836.4358442113)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -50384.27798   -2.31%
//        GQB    |      -25087.78720   -1.15%
//        QG     |      -57119.36561   -2.62%
//        QBG    |      -29179.53401   -1.34%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1171008.37823   53.66%
//        QBQ    |     1177246.71594   53.94%

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
//Wp_CT10_nCTEQ                   [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wp_CT10_nCTEQ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    1.6838190166428202      );
  id1 -> SetBinError( xbin,   0.90585102763938963      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    414.89154333141363      );
  id1 -> SetBinError( xbin,    53.287080074810625      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4804.0435181045568      );
  id1 -> SetBinError( xbin,    309.51052917154345      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    24548.256177291525      );
  id1 -> SetBinError( xbin,    894.14833006402989      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    61079.727716051391      );
  id1 -> SetBinError( xbin,    1285.5037337488757      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    119499.69657195179      );
  id1 -> SetBinError( xbin,    1478.6238103465582      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    177167.55682159690      );
  id1 -> SetBinError( xbin,    1739.4201673464208      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    239710.51125409460      );
  id1 -> SetBinError( xbin,    1903.6729756789080      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    280301.77877329040      );
  id1 -> SetBinError( xbin,    1976.1534265498542      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    318603.31271726592      );
  id1 -> SetBinError( xbin,    2071.7128553738689      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    348871.00420073135      );
  id1 -> SetBinError( xbin,    2093.7056438019636      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    371055.95162222767      );
  id1 -> SetBinError( xbin,    2139.2769585165070      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    386097.74825523968      );
  id1 -> SetBinError( xbin,    2132.1454496436745      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    393134.67360493320      );
  id1 -> SetBinError( xbin,    2141.1561333167715      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    399551.74613994383      );
  id1 -> SetBinError( xbin,    2219.1071065521714      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    405231.13145814778      );
  id1 -> SetBinError( xbin,    2212.7135303257123      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    410224.34166213009      );
  id1 -> SetBinError( xbin,    2139.2280194945383      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    414166.31968506722      );
  id1 -> SetBinError( xbin,    2129.0860276888629      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    413876.67571406858      );
  id1 -> SetBinError( xbin,    2159.8610387664839      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    407412.74467542983      );
  id1 -> SetBinError( xbin,    2133.4317395024013      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    397358.86057541141      );
  id1 -> SetBinError( xbin,    2081.5539552507244      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    398490.96932834707      );
  id1 -> SetBinError( xbin,    2091.9096796486706      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    390324.97903494217      );
  id1 -> SetBinError( xbin,    2064.7112561326139      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    383599.11572906229      );
  id1 -> SetBinError( xbin,    2030.3633784965255      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    375931.74515310669      );
  id1 -> SetBinError( xbin,    2027.2967680737486      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    371140.07739151712      );
  id1 -> SetBinError( xbin,    2012.6339778966435      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    372051.11540704820      );
  id1 -> SetBinError( xbin,    2049.2890209988432      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    362347.04892703216      );
  id1 -> SetBinError( xbin,    2036.0020667433246      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    359268.38645380782      );
  id1 -> SetBinError( xbin,    2037.1710441242185      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    353544.04098137934      );
  id1 -> SetBinError( xbin,    2083.0608718672156      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    352009.92133039795      );
  id1 -> SetBinError( xbin,    2047.1276773400016      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    331813.33174646070      );
  id1 -> SetBinError( xbin,    2027.4156585864896      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    314013.28995809151      );
  id1 -> SetBinError( xbin,    2092.7377268946379      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    282681.96304089238      );
  id1 -> SetBinError( xbin,    1983.6136198251068      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    244414.68078757881      );
  id1 -> SetBinError( xbin,    1914.6990988655118      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    195457.39745117608      );
  id1 -> SetBinError( xbin,    1807.6681596254855      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    137948.90521571651      );
  id1 -> SetBinError( xbin,    1562.5319265471910      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    76799.850055128642      );
  id1 -> SetBinError( xbin,    1373.2052685628523      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    29536.357189965885      );
  id1 -> SetBinError( xbin,    956.60470204298520      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    6679.8408728355853      );
  id1 -> SetBinError( xbin,    416.32843537427317      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    525.35979689292299      );
  id1 -> SetBinError( xbin,    69.758144426861506      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   0.67233770821421879      );
  id1 -> SetBinError( xbin,   0.69143400272590338      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    551645.41927293933      );
  id2 -> SetBinError( xbin,    7416.7130728728598      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    523352.67418847186      );
  id2 -> SetBinError( xbin,    5046.2324052654312      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    488689.69459457969      );
  id2 -> SetBinError( xbin,    4032.9563938874016      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    470824.06487292668      );
  id2 -> SetBinError( xbin,    3720.1727404178782      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    450382.13222938846      );
  id2 -> SetBinError( xbin,    4232.0901141285367      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    423293.73116490844      );
  id2 -> SetBinError( xbin,    3382.7436817368230      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    395738.90660640964      );
  id2 -> SetBinError( xbin,    2971.5839755388670      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    377580.69695813523      );
  id2 -> SetBinError( xbin,    3146.2076619740883      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    354789.74647883401      );
  id2 -> SetBinError( xbin,    3108.3576513505209      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    331514.47099854454      );
  id2 -> SetBinError( xbin,    3102.3042399177380      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    307148.99324801244      );
  id2 -> SetBinError( xbin,    3164.3347979531445      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    290228.94261823903      );
  id2 -> SetBinError( xbin,    2983.2189374098680      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    259608.28054204799      );
  id2 -> SetBinError( xbin,    1884.1073775132684      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    237376.72013880560      );
  id2 -> SetBinError( xbin,    1624.9772717573712      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    217016.22454637234      );
  id2 -> SetBinError( xbin,    1510.9228240046257      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    197371.63760682565      );
  id2 -> SetBinError( xbin,    1753.5944365870957      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    177505.14509688981      );
  id2 -> SetBinError( xbin,    1149.9123753378881      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    162681.73139108907      );
  id2 -> SetBinError( xbin,    1268.5447855197672      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    142412.89124646963      );
  id2 -> SetBinError( xbin,    1006.4244055935136      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    125289.83536252758      );
  id2 -> SetBinError( xbin,    1413.6317964888199      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    112733.09662629418      );
  id2 -> SetBinError( xbin,    1109.9289368602349      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    97792.973975651112      );
  id2 -> SetBinError( xbin,    750.49589132955396      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    84909.967427164185      );
  id2 -> SetBinError( xbin,    697.90794404181383      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    75343.538768715473      );
  id2 -> SetBinError( xbin,    643.00146242183882      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    66858.717569690925      );
  id2 -> SetBinError( xbin,    557.64686168104890      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    61123.820586900314      );
  id2 -> SetBinError( xbin,    1812.8539331727900      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    53787.210535811879      );
  id2 -> SetBinError( xbin,    485.65776569983308      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    48523.717647586745      );
  id2 -> SetBinError( xbin,    427.47459513582322      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    46358.695352841489      );
  id2 -> SetBinError( xbin,    501.74883580892470      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    44288.108695768169      );
  id2 -> SetBinError( xbin,    473.02528157196582      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    44734.122594296030      );
  id2 -> SetBinError( xbin,    486.35551849041525      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    46095.204035493880      );
  id2 -> SetBinError( xbin,    503.54014867193411      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    48811.652802587567      );
  id2 -> SetBinError( xbin,    445.98850241581283      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    54410.038453326008      );
  id2 -> SetBinError( xbin,    770.23801748536323      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    59244.638775296829      );
  id2 -> SetBinError( xbin,    561.46252793953681      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    66909.110296946514      );
  id2 -> SetBinError( xbin,    579.02016150980921      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    77196.356548457945      );
  id2 -> SetBinError( xbin,    630.89942465326328      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    87929.719970995691      );
  id2 -> SetBinError( xbin,    827.74655579830949      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    99805.536450282292      );
  id2 -> SetBinError( xbin,    892.70856944596972      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    111898.93549731966      );
  id2 -> SetBinError( xbin,    781.12252262577033      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    125658.87421320821      );
  id2 -> SetBinError( xbin,    830.66174920444223      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    145604.95178755955      );
  id2 -> SetBinError( xbin,    2353.5179709317099      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    162150.03777493356      );
  id2 -> SetBinError( xbin,    1300.0122491542204      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    178017.46381723517      );
  id2 -> SetBinError( xbin,    1162.5024259349311      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    196148.19581596035      );
  id2 -> SetBinError( xbin,    1427.4255524046539      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    217572.74683744568      );
  id2 -> SetBinError( xbin,    1524.2132197068295      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    239295.94977026663      );
  id2 -> SetBinError( xbin,    1582.1983758359868      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    261375.49445832070      );
  id2 -> SetBinError( xbin,    1886.2108256433182      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    280757.87547683547      );
  id2 -> SetBinError( xbin,    2136.2835018989877      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    300230.67964385526      );
  id2 -> SetBinError( xbin,    1841.1128189740728      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    328031.83306151885      );
  id2 -> SetBinError( xbin,    2335.5695764628285      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    348505.49139439635      );
  id2 -> SetBinError( xbin,    2495.0410670721212      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    369671.80483529129      );
  id2 -> SetBinError( xbin,    2909.4684222156138      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    397370.59041030507      );
  id2 -> SetBinError( xbin,    3238.6993307996736      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    420143.93249104405      );
  id2 -> SetBinError( xbin,    3222.8408410561851      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    448339.18007407174      );
  id2 -> SetBinError( xbin,    3833.0150072322372      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    459315.69950356270      );
  id2 -> SetBinError( xbin,    3627.5792169550014      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    488132.42042574729      );
  id2 -> SetBinError( xbin,    4187.4612432275599      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    507528.28443216125      );
  id2 -> SetBinError( xbin,    4867.0701602445815      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    535353.81624667067      );
  id2 -> SetBinError( xbin,    5442.3854446374899      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    145375.60947208872      );
  id3 -> SetBinError( xbin,    1313.7435977762250      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    197231.78237542507      );
  id3 -> SetBinError( xbin,    1713.8932336892974      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    259684.35396264624      );
  id3 -> SetBinError( xbin,    1989.9840958158491      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    305023.98354745627      );
  id3 -> SetBinError( xbin,    2045.8133849547673      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    343073.19907274697      );
  id3 -> SetBinError( xbin,    2168.9588005784904      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    380943.62249286275      );
  id3 -> SetBinError( xbin,    2291.3475121763263      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    406129.75039836176      );
  id3 -> SetBinError( xbin,    2343.8245159333292      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    426243.91241502698      );
  id3 -> SetBinError( xbin,    2447.8833495271820      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    434548.13714754034      );
  id3 -> SetBinError( xbin,    2454.0340159867496      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    441804.96557868994      );
  id3 -> SetBinError( xbin,    2442.0723911545933      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    444346.04714160954      );
  id3 -> SetBinError( xbin,    2401.8252800789528      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    445893.44077264261      );
  id3 -> SetBinError( xbin,    2521.3949854792381      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    444444.14091567392      );
  id3 -> SetBinError( xbin,    2531.6246422392469      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    435868.76894680830      );
  id3 -> SetBinError( xbin,    2407.7137204546025      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    436240.28734066430      );
  id3 -> SetBinError( xbin,    2369.9623550203210      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    435338.37683250272      );
  id3 -> SetBinError( xbin,    2386.0611964866716      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    425774.99491129490      );
  id3 -> SetBinError( xbin,    2365.1372093307800      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    426180.66678456910      );
  id3 -> SetBinError( xbin,    2347.2971214954541      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    417854.57883286104      );
  id3 -> SetBinError( xbin,    2403.5592096737769      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    414307.71372421645      );
  id3 -> SetBinError( xbin,    2381.5726838969667      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    412641.71046068647      );
  id3 -> SetBinError( xbin,    2377.1052547217832      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    402717.70280643902      );
  id3 -> SetBinError( xbin,    2403.9454173415434      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    399531.72928263637      );
  id3 -> SetBinError( xbin,    2358.1679767678493      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    384099.05598295166      );
  id3 -> SetBinError( xbin,    2337.9938300648614      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    365637.86544409732      );
  id3 -> SetBinError( xbin,    2288.4130548230837      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    343948.06627019029      );
  id3 -> SetBinError( xbin,    2202.3935586721700      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    306740.15023107390      );
  id3 -> SetBinError( xbin,    2049.2105644991757      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    264154.14848573634      );
  id3 -> SetBinError( xbin,    1918.0551959100344      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    209574.73052582107      );
  id3 -> SetBinError( xbin,    1718.3610714782478      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    156338.21253903431      );
  id3 -> SetBinError( xbin,    1416.8378687925911      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    46855.451951951814      );
  id4 -> SetBinError( xbin,    1213.5063943452051      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    140166.56222287758      );
  id4 -> SetBinError( xbin,    1889.9615130563625      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    167056.16654443747      );
  id4 -> SetBinError( xbin,    2118.7126985558348      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    192102.11058666545      );
  id4 -> SetBinError( xbin,    2328.0495813395514      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    227957.14128967107      );
  id4 -> SetBinError( xbin,    2539.0805450906919      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    249213.66790589402      );
  id4 -> SetBinError( xbin,    2767.4567331814542      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    282684.17868535273      );
  id4 -> SetBinError( xbin,    2956.1939683450328      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    301638.77210684377      );
  id4 -> SetBinError( xbin,    3030.3764871246085      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    322302.44940979220      );
  id4 -> SetBinError( xbin,    3103.3743868973761      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    342391.69318740192      );
  id4 -> SetBinError( xbin,    3231.6558741146455      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    356326.00902244734      );
  id4 -> SetBinError( xbin,    3364.7383913245008      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    377600.55955769488      );
  id4 -> SetBinError( xbin,    3416.3782357244045      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    396044.44008959591      );
  id4 -> SetBinError( xbin,    3522.4150761671531      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    404175.61689515039      );
  id4 -> SetBinError( xbin,    3525.3012727097343      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    413948.61462979903      );
  id4 -> SetBinError( xbin,    3637.8958996461783      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    421779.45686102915      );
  id4 -> SetBinError( xbin,    3784.8063749396542      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    437732.98627384467      );
  id4 -> SetBinError( xbin,    3825.2983678416331      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    428981.04285813740      );
  id4 -> SetBinError( xbin,    3767.8260683520416      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    445077.49022981804      );
  id4 -> SetBinError( xbin,    3748.2485355393142      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    439537.61724832142      );
  id4 -> SetBinError( xbin,    3733.7480937479490      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    442351.56675211183      );
  id4 -> SetBinError( xbin,    3722.5244214366512      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    445972.51565857587      );
  id4 -> SetBinError( xbin,    3874.8118581404051      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    445090.11609086947      );
  id4 -> SetBinError( xbin,    3916.1491120039759      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    446962.91886217514      );
  id4 -> SetBinError( xbin,    3665.2316435637872      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    444205.26020464348      );
  id4 -> SetBinError( xbin,    3592.4718997483164      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    444513.92368217581      );
  id4 -> SetBinError( xbin,    3552.0570888317548      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    441478.84689157456      );
  id4 -> SetBinError( xbin,    3571.6317951102551      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    431866.90009371808      );
  id4 -> SetBinError( xbin,    3551.0825849953567      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    441615.86322511197      );
  id4 -> SetBinError( xbin,    3815.1186217703307      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    431172.74602971267      );
  id4 -> SetBinError( xbin,    3802.7017264863457      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    437820.53547428094      );
  id4 -> SetBinError( xbin,    3589.0027028580344      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    432863.36005390616      );
  id4 -> SetBinError( xbin,    3600.6184490983769      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    435246.19856162148      );
  id4 -> SetBinError( xbin,    3643.3203970805203      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    425547.73336350202      );
  id4 -> SetBinError( xbin,    3790.2114917638919      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    425340.53327437979      );
  id4 -> SetBinError( xbin,    3740.6320471358063      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    425677.33803395065      );
  id4 -> SetBinError( xbin,    3554.3321047276299      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    422660.59172192909      );
  id4 -> SetBinError( xbin,    3552.6461028662388      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    421028.94659256993      );
  id4 -> SetBinError( xbin,    3817.8278136164395      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    411642.26487491169      );
  id4 -> SetBinError( xbin,    3736.3021344717008      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    420923.85887929541      );
  id4 -> SetBinError( xbin,    3569.1210226903027      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    410637.97300147422      );
  id4 -> SetBinError( xbin,    3562.6835066272060      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    413421.27731368988      );
  id4 -> SetBinError( xbin,    3630.4704016934425      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    407867.82406580378      );
  id4 -> SetBinError( xbin,    3621.9596138149391      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    404889.38945336267      );
  id4 -> SetBinError( xbin,    3490.6279691597379      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    399519.40415538754      );
  id4 -> SetBinError( xbin,    3550.0546016547082      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    400259.28758971492      );
  id4 -> SetBinError( xbin,    3474.4336202420068      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    397942.02952470770      );
  id4 -> SetBinError( xbin,    3478.8857170846227      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    382089.07941363868      );
  id4 -> SetBinError( xbin,    3453.8655928335347      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    380443.75416859612      );
  id4 -> SetBinError( xbin,    3458.6570047889459      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    371221.88818127237      );
  id4 -> SetBinError( xbin,    5093.6740111389818      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    351246.65481158509      );
  id4 -> SetBinError( xbin,    5071.8456855060540      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    347129.64224822132      );
  id4 -> SetBinError( xbin,    3370.0372869975495      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    328789.96226001147      );
  id4 -> SetBinError( xbin,    3187.9338722580342      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    310557.08074909385      );
  id4 -> SetBinError( xbin,    3072.0989610008060      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    288958.75087141845      );
  id4 -> SetBinError( xbin,    2928.6625977644121      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    264088.17654461402      );
  id4 -> SetBinError( xbin,    2825.4908891345135      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    38679.158661945461      );
  id5 -> SetBinError( xbin,    332.32913473619334      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    83934.271004922426      );
  id5 -> SetBinError( xbin,    462.87836016014086      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    92582.849571993618      );
  id5 -> SetBinError( xbin,    516.79545264850140      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    100394.03695570596      );
  id5 -> SetBinError( xbin,    546.00502325326397      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    111857.98819602335      );
  id5 -> SetBinError( xbin,    574.59415614100305      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    126232.79200313965      );
  id5 -> SetBinError( xbin,    640.77993379119710      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    145405.95675050982      );
  id5 -> SetBinError( xbin,    722.69849224127302      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    169383.61157949734      );
  id5 -> SetBinError( xbin,    787.58735783025793      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    106524.35366184705      );
  id5 -> SetBinError( xbin,    566.81543053446796      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    39311.679938439942      );
  id5 -> SetBinError( xbin,    194.75181760978072      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    20485.607918390946      );
  id5 -> SetBinError( xbin,    119.87911388366896      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    12601.020246223386      );
  id5 -> SetBinError( xbin,    82.051531295768768      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8707.7762333855117      );
  id5 -> SetBinError( xbin,    64.332701962028707      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    6350.1300123895562      );
  id5 -> SetBinError( xbin,    54.770728523666804      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4827.8750210480630      );
  id5 -> SetBinError( xbin,    49.658766874176209      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3641.8073580101759      );
  id5 -> SetBinError( xbin,    44.722129454005959      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    3044.5808670500614      );
  id5 -> SetBinError( xbin,    37.535236011216163      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2412.1226831916456      );
  id5 -> SetBinError( xbin,    30.973435117018262      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2021.6943662492495      );
  id5 -> SetBinError( xbin,    26.801821682397865      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1650.9199210029012      );
  id5 -> SetBinError( xbin,    22.651101705640670      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1340.2916919301338      );
  id5 -> SetBinError( xbin,    20.827328388271884      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1174.2670689107636      );
  id5 -> SetBinError( xbin,    19.237281735342684      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1002.0200715650441      );
  id5 -> SetBinError( xbin,    17.091033056500734      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    841.82392993896292      );
  id5 -> SetBinError( xbin,    16.515438906622954      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    737.95271620819017      );
  id5 -> SetBinError( xbin,    20.020852093103915      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    643.15634079940719      );
  id5 -> SetBinError( xbin,    19.407797179217610      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    546.14418606010167      );
  id5 -> SetBinError( xbin,    15.006448833635011      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    491.03917560995563      );
  id5 -> SetBinError( xbin,    11.912377567614630      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    424.47592342488434      );
  id5 -> SetBinError( xbin,    10.484448375787899      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    368.00614046803190      );
  id5 -> SetBinError( xbin,    8.8861318800117175      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    339.73801848170655      );
  id5 -> SetBinError( xbin,    9.4935755301389602      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    289.41044124511825      );
  id5 -> SetBinError( xbin,    9.4735917011221815      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    259.39459731408436      );
  id5 -> SetBinError( xbin,    9.5570094315331158      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    224.96002390689188      );
  id5 -> SetBinError( xbin,    8.4211128112949680      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    202.12637879436824      );
  id5 -> SetBinError( xbin,    8.4982749698328615      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    198.02134350680114      );
  id5 -> SetBinError( xbin,    8.2932312833833866      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    175.16206082300658      );
  id5 -> SetBinError( xbin,    5.9088556968995105      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    144.63116163461686      );
  id5 -> SetBinError( xbin,    5.0100979946577038      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1750.9288934080751      );
  id6 -> SetBinError( xbin,    32.255070082800707      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    5792.5669031733823      );
  id6 -> SetBinError( xbin,    60.705612542526957      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    11629.929046501758      );
  id6 -> SetBinError( xbin,    88.345246575377885      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    20478.022066319332      );
  id6 -> SetBinError( xbin,    118.21461753878208      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    33711.305494994092      );
  id6 -> SetBinError( xbin,    146.70452349120808      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    52280.846478169275      );
  id6 -> SetBinError( xbin,    173.00947148911430      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    80351.753854493945      );
  id6 -> SetBinError( xbin,    207.75520565745740      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    112256.67836877660      );
  id6 -> SetBinError( xbin,    248.49331405453162      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    43878.009400323965      );
  id6 -> SetBinError( xbin,    176.40554529461747      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    14958.201949588609      );
  id6 -> SetBinError( xbin,    116.98656556933267      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    5582.3724704396163      );
  id6 -> SetBinError( xbin,    78.024998745368094      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2134.9206872123464      );
  id6 -> SetBinError( xbin,    50.175265249794947      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    7187.3957673020777      );
  id7 -> SetBinError( xbin,    84.336938237963679      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9624.0682689681616      );
  id7 -> SetBinError( xbin,    99.973922425105656      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    12203.849314539490      );
  id7 -> SetBinError( xbin,    113.11661841564379      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    14962.763038740042      );
  id7 -> SetBinError( xbin,    126.79341045365881      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    17959.193631301925      );
  id7 -> SetBinError( xbin,    140.26500792878028      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    21097.673952671754      );
  id7 -> SetBinError( xbin,    157.40730544712983      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    23969.615711843740      );
  id7 -> SetBinError( xbin,    169.17831198510973      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    26579.930774929428      );
  id7 -> SetBinError( xbin,    180.47153645935603      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    29365.007812524491      );
  id7 -> SetBinError( xbin,    194.87239399066445      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    31533.263992204076      );
  id7 -> SetBinError( xbin,    204.25373852812686      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    33907.231461395379      );
  id7 -> SetBinError( xbin,    213.77433915179438      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    34798.765050427894      );
  id7 -> SetBinError( xbin,    216.13903216750199      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    36522.588764981345      );
  id7 -> SetBinError( xbin,    221.11509874436578      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    37974.550909075893      );
  id7 -> SetBinError( xbin,    229.45157751565222      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    38272.786908750240      );
  id7 -> SetBinError( xbin,    229.86210516903117      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    38258.687433707753      );
  id7 -> SetBinError( xbin,    228.86075748748959      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    37961.567269356849      );
  id7 -> SetBinError( xbin,    226.53053498086626      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    36973.696247774918      );
  id7 -> SetBinError( xbin,    221.51737816396459      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    36420.809180127420      );
  id7 -> SetBinError( xbin,    218.85617270617442      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    34719.001996922401      );
  id7 -> SetBinError( xbin,    210.61180269801653      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    32378.511766849937      );
  id7 -> SetBinError( xbin,    201.07787705382205      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    30455.557590061013      );
  id7 -> SetBinError( xbin,    190.80618384556968      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    28163.699385572254      );
  id7 -> SetBinError( xbin,    180.80598692149601      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    25763.201552518734      );
  id7 -> SetBinError( xbin,    170.61347396756247      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    23144.802781353457      );
  id7 -> SetBinError( xbin,    159.13609516844616      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    20131.443686534778      );
  id7 -> SetBinError( xbin,    145.78267512043672      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    16832.518845024751      );
  id7 -> SetBinError( xbin,    129.60954176673204      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    14170.532179812983      );
  id7 -> SetBinError( xbin,    118.84568175894260      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    11647.213987949703      );
  id7 -> SetBinError( xbin,    107.52681641864658      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    8820.1278119930921      );
  id7 -> SetBinError( xbin,    96.088047820870528      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    4300.3528452574765      );
  id8 -> SetBinError( xbin,    26.178267012532832      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    7757.7011745922837      );
  id8 -> SetBinError( xbin,    34.789351559313971      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    6648.7506457366435      );
  id8 -> SetBinError( xbin,    31.458185603378393      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    5890.4400638166089      );
  id8 -> SetBinError( xbin,    29.200836576980880      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    5128.2127397514587      );
  id8 -> SetBinError( xbin,    26.813266818658132      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    4559.3869613295728      );
  id8 -> SetBinError( xbin,    24.850657386033177      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    4006.8304558977939      );
  id8 -> SetBinError( xbin,    22.906326603126189      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    3524.2168510117262      );
  id8 -> SetBinError( xbin,    21.326040798638950      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    3135.9853727825189      );
  id8 -> SetBinError( xbin,    19.661932339463920      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2763.0664849113928      );
  id8 -> SetBinError( xbin,    18.089840608586943      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2461.0773789057444      );
  id8 -> SetBinError( xbin,    16.925668617867593      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    2243.3372263668066      );
  id8 -> SetBinError( xbin,    15.991670557484294      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2007.7407943607043      );
  id8 -> SetBinError( xbin,    14.981463018074297      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1788.1104494685756      );
  id8 -> SetBinError( xbin,    14.045921045374008      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1613.1529034166301      );
  id8 -> SetBinError( xbin,    13.076072700262610      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1508.6251467481445      );
  id8 -> SetBinError( xbin,    12.435334368509777      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1364.0669511823180      );
  id8 -> SetBinError( xbin,    11.908547037041007      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1234.8416796744893      );
  id8 -> SetBinError( xbin,    11.172646368331128      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1113.7627519536366      );
  id8 -> SetBinError( xbin,    10.400642192418381      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1021.3785447444051      );
  id8 -> SetBinError( xbin,    9.8903441583548446      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    946.89945434623155      );
  id8 -> SetBinError( xbin,    9.4679635646703080      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    873.18524760512889      );
  id8 -> SetBinError( xbin,    8.9536608134713322      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    785.78841656874658      );
  id8 -> SetBinError( xbin,    8.4342198027049005      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    716.04114744248659      );
  id8 -> SetBinError( xbin,    7.9960544394239141      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    670.04283555510119      );
  id8 -> SetBinError( xbin,    7.6107937339480696      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    624.81641194841029      );
  id8 -> SetBinError( xbin,    7.2920334037536412      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    560.12014774329782      );
  id8 -> SetBinError( xbin,    6.8097924288041192      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    532.02459172849842      );
  id8 -> SetBinError( xbin,    6.7445234992866716      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
