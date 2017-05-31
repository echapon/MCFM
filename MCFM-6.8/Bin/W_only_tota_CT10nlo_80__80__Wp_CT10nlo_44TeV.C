// Cross-section is:      2615684.8547512079 +/-         1003.1051746178)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -87244.36709   -3.34%
//        GQB    |      -48889.31788   -1.87%
//        QG     |     -109000.68042   -4.17%
//        QBG    |      -50542.53954   -1.93%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1582095.68479   60.48%
//        QBQ    |     1334849.34407   51.03%

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
//CT10nlo.LHpdf                   [LHAPDF group 2]  
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
//              0.0006            [cutoff]  
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
   int xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    4.0868060683462446E-004 );
  id1 -> SetBinError( xbin,    3.2674113803254955E-004 );
   int xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,   0.42375649245235786      );
  id1 -> SetBinError( xbin,   0.18575122910617078      );
   int xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    19.181864333639879      );
  id1 -> SetBinError( xbin,    9.8654764180322267      );
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    277.81557408889256      );
  id1 -> SetBinError( xbin,    36.688572309908764      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    4204.3332476747291      );
  id1 -> SetBinError( xbin,    198.31787545062920      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    21249.247427219267      );
  id1 -> SetBinError( xbin,    676.69806274382381      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    56820.332236169481      );
  id1 -> SetBinError( xbin,    1148.1160917007549      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    107027.11350948020      );
  id1 -> SetBinError( xbin,    1567.6420189350738      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    162438.36560166359      );
  id1 -> SetBinError( xbin,    1759.1709216682978      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    209480.55874933995      );
  id1 -> SetBinError( xbin,    1945.0964191320152      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    263010.60017127125      );
  id1 -> SetBinError( xbin,    2211.1706509452215      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    298183.58871500392      );
  id1 -> SetBinError( xbin,    2266.8055897519944      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    327519.28530100081      );
  id1 -> SetBinError( xbin,    2300.1523675760391      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    352877.52436568786      );
  id1 -> SetBinError( xbin,    2335.8446106688475      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    367650.07371045969      );
  id1 -> SetBinError( xbin,    2432.5624366519442      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    383784.49749869824      );
  id1 -> SetBinError( xbin,    2440.4626669405702      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    393107.20831149654      );
  id1 -> SetBinError( xbin,    2398.8144024178578      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    401724.20452134567      );
  id1 -> SetBinError( xbin,    2359.8411477113577      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    410521.65917642170      );
  id1 -> SetBinError( xbin,    2368.6685517655915      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    413333.84442265332      );
  id1 -> SetBinError( xbin,    2458.7641083721123      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    423266.30083928281      );
  id1 -> SetBinError( xbin,    2386.5129276556354      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    426498.69761511416      );
  id1 -> SetBinError( xbin,    2365.0105530666433      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    428938.87523425021      );
  id1 -> SetBinError( xbin,    2357.5164638608603      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    438781.60717491945      );
  id1 -> SetBinError( xbin,    2385.1112949610756      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    436530.90170202591      );
  id1 -> SetBinError( xbin,    2410.7960059749989      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    438060.51457836555      );
  id1 -> SetBinError( xbin,    2423.1455773922808      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    452331.48305951618      );
  id1 -> SetBinError( xbin,    2457.8954721585073      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    451121.11193054880      );
  id1 -> SetBinError( xbin,    2494.4442741780308      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    452663.05718075653      );
  id1 -> SetBinError( xbin,    3933.8593702425605      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    456285.64433467417      );
  id1 -> SetBinError( xbin,    2548.5481581450626      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    466615.48745407566      );
  id1 -> SetBinError( xbin,    2499.5603497799966      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    470282.92255056463      );
  id1 -> SetBinError( xbin,    2667.8139000104647      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    468161.97888199420      );
  id1 -> SetBinError( xbin,    2725.0799990317496      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    462228.40843057865      );
  id1 -> SetBinError( xbin,    2668.7942118259271      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    465218.29752773198      );
  id1 -> SetBinError( xbin,    2629.5086129963634      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    447249.68727223494      );
  id1 -> SetBinError( xbin,    2744.7669198015060      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    422997.44522577611      );
  id1 -> SetBinError( xbin,    2795.0249883946167      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    383734.19086592854      );
  id1 -> SetBinError( xbin,    2538.1628687429870      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    326571.61801318836      );
  id1 -> SetBinError( xbin,    2332.8692521528733      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    262214.09721985314      );
  id1 -> SetBinError( xbin,    2164.9301879508453      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    178610.44156053496      );
  id1 -> SetBinError( xbin,    1817.9644411477132      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    100034.35264335258      );
  id1 -> SetBinError( xbin,    1546.9451414664809      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    37687.681578363299      );
  id1 -> SetBinError( xbin,    988.97160836859291      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    7167.5543615701245      );
  id1 -> SetBinError( xbin,    282.66131741152265      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    281.66984047169120      );
  id1 -> SetBinError( xbin,    42.934786482305547      );
   int xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,    11.378894752887657      );
  id1 -> SetBinError( xbin,    4.3494124425519196      );
   int xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    1.1250135999045363      );
  id1 -> SetBinError( xbin,   0.70702742635014937      );
   int xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    1.2649849671097038E-004 );
  id1 -> SetBinError( xbin,    9.3186705079810033E-005 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    878856.71171170252      );
  id2 -> SetBinError( xbin,    9437.4860179458010      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    844731.71694805007      );
  id2 -> SetBinError( xbin,    9148.5375785942033      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    798838.16139733198      );
  id2 -> SetBinError( xbin,    7695.8223515501377      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    772690.02947618836      );
  id2 -> SetBinError( xbin,    8753.5441772765298      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    735209.27251571743      );
  id2 -> SetBinError( xbin,    9830.5283216559055      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    679176.53439443186      );
  id2 -> SetBinError( xbin,    6287.5549167926720      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    647059.37390572322      );
  id2 -> SetBinError( xbin,    5689.3303707844652      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    611170.47308763594      );
  id2 -> SetBinError( xbin,    5700.6129236320203      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    566688.86238124897      );
  id2 -> SetBinError( xbin,    4517.2937038717109      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    524697.21345322195      );
  id2 -> SetBinError( xbin,    4291.2884446786129      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    482927.77095397539      );
  id2 -> SetBinError( xbin,    3775.5173182361332      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    455278.31915340479      );
  id2 -> SetBinError( xbin,    3999.7984788840449      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    415406.48051751603      );
  id2 -> SetBinError( xbin,    4238.2109715247234      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    378459.76627448061      );
  id2 -> SetBinError( xbin,    3020.5839242015277      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    346890.41698464967      );
  id2 -> SetBinError( xbin,    2720.8517603098335      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    316155.64185431128      );
  id2 -> SetBinError( xbin,    2641.6792898414888      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    283228.26876401901      );
  id2 -> SetBinError( xbin,    2661.0582772590014      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    253705.38885776722      );
  id2 -> SetBinError( xbin,    2107.8513629091440      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    226382.71456672304      );
  id2 -> SetBinError( xbin,    1822.7148573940242      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    205860.76906078879      );
  id2 -> SetBinError( xbin,    5412.1061198433672      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    175598.55518652088      );
  id2 -> SetBinError( xbin,    1398.6968524711694      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    158162.42358523904      );
  id2 -> SetBinError( xbin,    1438.5895992077787      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    140091.10399770501      );
  id2 -> SetBinError( xbin,    3068.2735328543295      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    122923.75709704751      );
  id2 -> SetBinError( xbin,    2059.7954583038918      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    106195.03808779284      );
  id2 -> SetBinError( xbin,    1044.7168501119436      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    95258.901554818076      );
  id2 -> SetBinError( xbin,    1077.1328584049190      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    84733.150082271372      );
  id2 -> SetBinError( xbin,    888.80784512041112      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    77492.264200033373      );
  id2 -> SetBinError( xbin,    941.64926869192880      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    74426.919277958455      );
  id2 -> SetBinError( xbin,    833.68054062666658      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    70627.523197703733      );
  id2 -> SetBinError( xbin,    798.74010881937056      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    71907.598580488455      );
  id2 -> SetBinError( xbin,    935.48813789935809      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    74399.251621529052      );
  id2 -> SetBinError( xbin,    812.75964189449905      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    80171.967576492112      );
  id2 -> SetBinError( xbin,    936.09792732086623      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    87749.337726568599      );
  id2 -> SetBinError( xbin,    921.79538632223330      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    98566.910802227139      );
  id2 -> SetBinError( xbin,    1478.8960953659641      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    111555.37819773861      );
  id2 -> SetBinError( xbin,    1045.3530628715080      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    125585.56086814716      );
  id2 -> SetBinError( xbin,    1155.0750889785725      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    144478.39164248222      );
  id2 -> SetBinError( xbin,    1261.0620338238245      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    167299.50975529154      );
  id2 -> SetBinError( xbin,    1473.2948708243268      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    189058.66173877977      );
  id2 -> SetBinError( xbin,    1509.1059976704107      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    214299.50890901784      );
  id2 -> SetBinError( xbin,    1582.6291550077460      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    243359.82045645817      );
  id2 -> SetBinError( xbin,    2035.4219106960538      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    275319.76128881855      );
  id2 -> SetBinError( xbin,    2037.7091782703592      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    311043.98858290439      );
  id2 -> SetBinError( xbin,    2254.0726693541887      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    345369.22157421231      );
  id2 -> SetBinError( xbin,    3247.6211516091039      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    382422.50522668764      );
  id2 -> SetBinError( xbin,    2643.2059964529371      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    421846.12269365921      );
  id2 -> SetBinError( xbin,    2805.5927546835596      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    468685.08513523242      );
  id2 -> SetBinError( xbin,    3589.4215694945924      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    508558.30135279812      );
  id2 -> SetBinError( xbin,    3408.4646904132028      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    563176.03965374676      );
  id2 -> SetBinError( xbin,    5702.4623463772296      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    595652.14930078667      );
  id2 -> SetBinError( xbin,    4130.5784003657163      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    646345.35532059614      );
  id2 -> SetBinError( xbin,    4568.3215747579134      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    686731.37734718679      );
  id2 -> SetBinError( xbin,    5027.2563842365826      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    738599.91146831564      );
  id2 -> SetBinError( xbin,    5509.9455069715696      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    781698.65040562639      );
  id2 -> SetBinError( xbin,    6166.0027505360276      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    840505.45242093957      );
  id2 -> SetBinError( xbin,    14284.767238102226      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    871288.20253019582      );
  id2 -> SetBinError( xbin,    6538.2784975571412      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    930895.59873596346      );
  id2 -> SetBinError( xbin,    12375.504011604802      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    971076.39734251949      );
  id2 -> SetBinError( xbin,    8245.8988545185985      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1025803.7826711473      );
  id2 -> SetBinError( xbin,    8723.9015558997817      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -5.0999999999999996      );
  id3 -> SetBinContent( xbin,   0.22926173772109643      );
  id3 -> SetBinError( xbin,    6.1165986612548802E-002 );
   int xbin = id3->FindBin(  -4.9000000000000004      );
  id3 -> SetBinContent( xbin,    7.4436963058310246      );
  id3 -> SetBinError( xbin,    1.6631453085014278      );
   int xbin = id3->FindBin(  -4.7000000000000002      );
  id3 -> SetBinContent( xbin,    84.481378826760107      );
  id3 -> SetBinError( xbin,    8.1115705613393718      );
   int xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,    439.85216773018055      );
  id3 -> SetBinError( xbin,    24.922544761790409      );
   int xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,    1570.2409792456072      );
  id3 -> SetBinError( xbin,    59.377059837889000      );
   int xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    4611.7284696939823      );
  id3 -> SetBinError( xbin,    123.00968227640305      );
   int xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    10621.532855834781      );
  id3 -> SetBinError( xbin,    217.21600739810350      );
   int xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    21142.343176980168      );
  id3 -> SetBinError( xbin,    387.11103058443604      );
   int xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    40160.968262075410      );
  id3 -> SetBinError( xbin,    591.52469404142221      );
   int xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    69804.429888140497      );
  id3 -> SetBinError( xbin,    883.32633848642433      );
   int xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    105440.81328910236      );
  id3 -> SetBinError( xbin,    1186.3293667994706      );
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    147552.71087981857      );
  id3 -> SetBinError( xbin,    1489.9739746964185      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    203702.74245490640      );
  id3 -> SetBinError( xbin,    1764.6483396355382      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    256604.12131264328      );
  id3 -> SetBinError( xbin,    2187.4303495057684      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    305344.06824558618      );
  id3 -> SetBinError( xbin,    2422.8872902587254      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    338527.43888544687      );
  id3 -> SetBinError( xbin,    2454.8153388678502      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    379587.06328112364      );
  id3 -> SetBinError( xbin,    2609.4335832039719      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    403309.57237473386      );
  id3 -> SetBinError( xbin,    2711.7165777475998      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    424692.35697834240      );
  id3 -> SetBinError( xbin,    2764.8077035821289      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    438414.19471276348      );
  id3 -> SetBinError( xbin,    2843.4978394246809      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    450432.32654829882      );
  id3 -> SetBinError( xbin,    2948.2219896596621      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    452170.69012155209      );
  id3 -> SetBinError( xbin,    3035.3382723012837      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    467418.15826400567      );
  id3 -> SetBinError( xbin,    3267.8058171518001      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    462713.31716700154      );
  id3 -> SetBinError( xbin,    4057.0477454785296      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    470891.12427835166      );
  id3 -> SetBinError( xbin,    3851.2157715662702      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    473652.40327840019      );
  id3 -> SetBinError( xbin,    4296.4156815550523      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    477632.66276370781      );
  id3 -> SetBinError( xbin,    2973.9258261236555      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    486494.71538504516      );
  id3 -> SetBinError( xbin,    3059.8170923764310      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    497518.27989601600      );
  id3 -> SetBinError( xbin,    3037.0056591888911      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    499500.14000685385      );
  id3 -> SetBinError( xbin,    2896.9420867563736      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    512634.38525093114      );
  id3 -> SetBinError( xbin,    2981.2060203467554      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    512664.08796399157      );
  id3 -> SetBinError( xbin,    3069.9190364364704      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    515772.21795277664      );
  id3 -> SetBinError( xbin,    3184.0539150098848      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    514782.83240984159      );
  id3 -> SetBinError( xbin,    3135.2418879875686      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    506452.41875798203      );
  id3 -> SetBinError( xbin,    3079.6367931596419      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    493047.68879130337      );
  id3 -> SetBinError( xbin,    3106.9131904286451      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    455818.22899954068      );
  id3 -> SetBinError( xbin,    3057.8121623042857      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    420227.31174019986      );
  id3 -> SetBinError( xbin,    2900.9850669155257      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    362007.36836274056      );
  id3 -> SetBinError( xbin,    2477.2640687838389      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    296066.44237998448      );
  id3 -> SetBinError( xbin,    2182.1996878864256      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    219444.34509579820      );
  id3 -> SetBinError( xbin,    1893.1455656862420      );
   int xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    156856.34546673743      );
  id3 -> SetBinError( xbin,    1515.7880868350653      );
   int xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    103405.24077203788      );
  id3 -> SetBinError( xbin,    1136.9985657887689      );
   int xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    60118.802149309093      );
  id3 -> SetBinError( xbin,    766.88480170506887      );
   int xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    31871.254363607222      );
  id3 -> SetBinError( xbin,    499.26936686433476      );
   int xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    16012.947269388294      );
  id3 -> SetBinError( xbin,    292.51849491871161      );
   int xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    6464.3451779107927      );
  id3 -> SetBinError( xbin,    150.45939851015751      );
   int xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,    2257.4377817945392      );
  id3 -> SetBinError( xbin,    73.823352860429495      );
   int xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    692.35044908433770      );
  id3 -> SetBinError( xbin,    31.457049404404223      );
   int xbin = id3->FindBin(   4.7000000000000011      );
  id3 -> SetBinContent( xbin,    124.13096223922554      );
  id3 -> SetBinError( xbin,    11.509406295015896      );
   int xbin = id3->FindBin(   4.9000000000000004      );
  id3 -> SetBinContent( xbin,    13.899047903251194      );
  id3 -> SetBinError( xbin,    1.8146078186335022      );
   int xbin = id3->FindBin(   5.1000000000000014      );
  id3 -> SetBinContent( xbin,   0.15826223604198353      );
  id3 -> SetBinError( xbin,    9.4376295806775229E-002 );
   int xbin = id3->FindBin(   5.3000000000000007      );
  id3 -> SetBinContent( xbin,    1.1994909576239181E-005 );
  id3 -> SetBinError( xbin,    1.1994908928471004E-005 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -4.7500000000000000      );
  id4 -> SetBinContent( xbin,    4.5507228824170607E-005 );
  id4 -> SetBinError( xbin,    1.0682369335861396E-004 );
   int xbin = id4->FindBin(  -4.6500000000000004      );
  id4 -> SetBinContent( xbin,    2.1868818194075244E-002 );
  id4 -> SetBinError( xbin,    2.5837378586823518E-002 );
   int xbin = id4->FindBin(  -4.5499999999999998      );
  id4 -> SetBinContent( xbin,   0.76563931593796930      );
  id4 -> SetBinError( xbin,   0.18044419014309127      );
   int xbin = id4->FindBin(  -4.4500000000000002      );
  id4 -> SetBinContent( xbin,    6.2390853458797091      );
  id4 -> SetBinError( xbin,    1.5126258468574116      );
   int xbin = id4->FindBin(  -4.3499999999999996      );
  id4 -> SetBinContent( xbin,    21.052759083829947      );
  id4 -> SetBinError( xbin,    3.3568682780786587      );
   int xbin = id4->FindBin(  -4.2500000000000000      );
  id4 -> SetBinContent( xbin,    60.883913281620238      );
  id4 -> SetBinError( xbin,    7.5838553851830746      );
   int xbin = id4->FindBin(  -4.1500000000000004      );
  id4 -> SetBinContent( xbin,    156.13269248342317      );
  id4 -> SetBinError( xbin,    18.534744949759435      );
   int xbin = id4->FindBin(  -4.0499999999999998      );
  id4 -> SetBinContent( xbin,    395.12421732149539      );
  id4 -> SetBinError( xbin,    34.062577163028408      );
   int xbin = id4->FindBin(  -3.9500000000000002      );
  id4 -> SetBinContent( xbin,    848.95699697882992      );
  id4 -> SetBinError( xbin,    52.626566437768126      );
   int xbin = id4->FindBin(  -3.8499999999999996      );
  id4 -> SetBinContent( xbin,    1325.7010628610356      );
  id4 -> SetBinError( xbin,    98.347917738324568      );
   int xbin = id4->FindBin(  -3.7500000000000000      );
  id4 -> SetBinContent( xbin,    2548.2073369607970      );
  id4 -> SetBinError( xbin,    140.88815255907863      );
   int xbin = id4->FindBin(  -3.6499999999999999      );
  id4 -> SetBinContent( xbin,    4018.9198304550018      );
  id4 -> SetBinError( xbin,    230.86291682920699      );
   int xbin = id4->FindBin(  -3.5499999999999998      );
  id4 -> SetBinContent( xbin,    6477.0528323665012      );
  id4 -> SetBinError( xbin,    282.40729426823270      );
   int xbin = id4->FindBin(  -3.4500000000000002      );
  id4 -> SetBinContent( xbin,    9759.3422632806378      );
  id4 -> SetBinError( xbin,    320.24919705119100      );
   int xbin = id4->FindBin(  -3.3499999999999996      );
  id4 -> SetBinContent( xbin,    14012.579409937049      );
  id4 -> SetBinError( xbin,    411.36935296515577      );
   int xbin = id4->FindBin(  -3.2500000000000000      );
  id4 -> SetBinContent( xbin,    20454.295483708411      );
  id4 -> SetBinError( xbin,    573.21112075124768      );
   int xbin = id4->FindBin(  -3.1499999999999999      );
  id4 -> SetBinContent( xbin,    27580.306773814515      );
  id4 -> SetBinError( xbin,    670.85714068148479      );
   int xbin = id4->FindBin(  -3.0499999999999998      );
  id4 -> SetBinContent( xbin,    38370.912942707255      );
  id4 -> SetBinError( xbin,    861.33736286239446      );
   int xbin = id4->FindBin(  -2.9499999999999997      );
  id4 -> SetBinContent( xbin,    51434.076847213219      );
  id4 -> SetBinError( xbin,    1112.9805127279194      );
   int xbin = id4->FindBin(  -2.8500000000000001      );
  id4 -> SetBinContent( xbin,    66289.468877363484      );
  id4 -> SetBinError( xbin,    1358.5881416292366      );
   int xbin = id4->FindBin(  -2.7500000000000000      );
  id4 -> SetBinContent( xbin,    84711.556166750670      );
  id4 -> SetBinError( xbin,    1625.0497013640324      );
   int xbin = id4->FindBin(  -2.6499999999999999      );
  id4 -> SetBinContent( xbin,    103416.17924907780      );
  id4 -> SetBinError( xbin,    1797.0764741338103      );
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    115930.02108233164      );
  id4 -> SetBinError( xbin,    1999.2318015355704      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    148144.02029752007      );
  id4 -> SetBinError( xbin,    2324.7430420828618      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    170980.16181329306      );
  id4 -> SetBinError( xbin,    2542.7738026460456      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    197812.60807648717      );
  id4 -> SetBinError( xbin,    3012.5475640855584      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    226168.50170801903      );
  id4 -> SetBinError( xbin,    3373.7950937608834      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    255910.29333405965      );
  id4 -> SetBinError( xbin,    4713.0003421403317      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    275130.40159134404      );
  id4 -> SetBinError( xbin,    4791.3025143110772      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    301570.12157856632      );
  id4 -> SetBinError( xbin,    3891.9652933187413      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    324119.30631059833      );
  id4 -> SetBinError( xbin,    4036.2152009955744      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    335541.81246862223      );
  id4 -> SetBinError( xbin,    3904.4878128717010      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    357588.29843448772      );
  id4 -> SetBinError( xbin,    4627.0414745521566      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    374931.82735828857      );
  id4 -> SetBinError( xbin,    4746.7638857954789      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    388730.55299398286      );
  id4 -> SetBinError( xbin,    4269.2454629896283      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    400721.09430471406      );
  id4 -> SetBinError( xbin,    4371.2848377617711      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    418485.40816106083      );
  id4 -> SetBinError( xbin,    4641.5353298297068      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    421725.94410467643      );
  id4 -> SetBinError( xbin,    6065.1201296014951      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    436300.95553686126      );
  id4 -> SetBinError( xbin,    6068.9939933319820      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    436425.54086306412      );
  id4 -> SetBinError( xbin,    4635.3067528397878      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    438592.82205810252      );
  id4 -> SetBinError( xbin,    4588.4802817464670      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    447626.61731478164      );
  id4 -> SetBinError( xbin,    4633.8586011654425      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    451660.33803104633      );
  id4 -> SetBinError( xbin,    4959.5093546978351      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    454047.86166211509      );
  id4 -> SetBinError( xbin,    5630.6956993036283      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    463507.03307503927      );
  id4 -> SetBinError( xbin,    5309.0269136013376      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    459775.37641487934      );
  id4 -> SetBinError( xbin,    4719.0999421282468      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    469137.19785269379      );
  id4 -> SetBinError( xbin,    4743.8442360456156      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    467966.73649584205      );
  id4 -> SetBinError( xbin,    4667.9928059265967      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    456045.34905479301      );
  id4 -> SetBinError( xbin,    4740.4251665233869      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    479206.68997391197      );
  id4 -> SetBinError( xbin,    4777.9608656425607      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    473948.15923532128      );
  id4 -> SetBinError( xbin,    4626.9043582859804      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    469985.84493269166      );
  id4 -> SetBinError( xbin,    7743.7848248467208      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    474231.69268120511      );
  id4 -> SetBinError( xbin,    5011.6513421151476      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    480173.44095975795      );
  id4 -> SetBinError( xbin,    4953.1094597691663      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    481931.14502584602      );
  id4 -> SetBinError( xbin,    4696.2866734887539      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    480518.62550378183      );
  id4 -> SetBinError( xbin,    5016.5202159447635      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    497368.45275959227      );
  id4 -> SetBinError( xbin,    5137.3500271543553      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    498903.28933106916      );
  id4 -> SetBinError( xbin,    4638.8953179996679      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    491383.39223043958      );
  id4 -> SetBinError( xbin,    4716.9802742330694      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    507098.29102651170      );
  id4 -> SetBinError( xbin,    5061.8204822083126      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    501746.81405460800      );
  id4 -> SetBinError( xbin,    5026.2614670908224      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    511925.79801071621      );
  id4 -> SetBinError( xbin,    4926.8209663925500      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    504067.74134377250      );
  id4 -> SetBinError( xbin,    5066.2312311741098      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    516779.96177646448      );
  id4 -> SetBinError( xbin,    5107.6238972270930      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    515212.76400988485      );
  id4 -> SetBinError( xbin,    5092.3815194429126      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    514208.30109103641      );
  id4 -> SetBinError( xbin,    5526.4831678298924      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    516665.49121482886      );
  id4 -> SetBinError( xbin,    5766.1459578619870      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    519895.03345064027      );
  id4 -> SetBinError( xbin,    5413.0402606002408      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    509619.73598200548      );
  id4 -> SetBinError( xbin,    5191.9959619934680      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    511996.14677687356      );
  id4 -> SetBinError( xbin,    5351.0932191461607      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    492849.74472062004      );
  id4 -> SetBinError( xbin,    5142.1500658428031      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    500260.32721965830      );
  id4 -> SetBinError( xbin,    4993.4789390126398      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    475874.33862859756      );
  id4 -> SetBinError( xbin,    5114.6972816872103      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    465953.81240251748      );
  id4 -> SetBinError( xbin,    5024.5423754299045      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    441199.37712450570      );
  id4 -> SetBinError( xbin,    4632.0417579098257      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    422422.80449086241      );
  id4 -> SetBinError( xbin,    4587.8171989132825      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    398299.37151190249      );
  id4 -> SetBinError( xbin,    4312.8865343917996      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    365317.83174723160      );
  id4 -> SetBinError( xbin,    4182.2005603540265      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    337699.77495819074      );
  id4 -> SetBinError( xbin,    4235.9049671241173      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    302207.45960281725      );
  id4 -> SetBinError( xbin,    5277.0750518197510      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    258708.25549893259      );
  id4 -> SetBinError( xbin,    4805.5032839622872      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    227188.37486085534      );
  id4 -> SetBinError( xbin,    3001.3750135789392      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    193154.13237299793      );
  id4 -> SetBinError( xbin,    2666.9924681622138      );
   int xbin = id4->FindBin(   3.5500000000000007      );
  id4 -> SetBinContent( xbin,    158640.95333264669      );
  id4 -> SetBinError( xbin,    2380.8025176077895      );
   int xbin = id4->FindBin(   3.6500000000000004      );
  id4 -> SetBinContent( xbin,    131144.82454722768      );
  id4 -> SetBinError( xbin,    2059.9584028840964      );
   int xbin = id4->FindBin(   3.7500000000000000      );
  id4 -> SetBinContent( xbin,    106515.32745788217      );
  id4 -> SetBinError( xbin,    1927.4483904737531      );
   int xbin = id4->FindBin(   3.8499999999999996      );
  id4 -> SetBinContent( xbin,    83051.856026405061      );
  id4 -> SetBinError( xbin,    1623.4243131905537      );
   int xbin = id4->FindBin(   3.9500000000000011      );
  id4 -> SetBinContent( xbin,    63125.386091483095      );
  id4 -> SetBinError( xbin,    1173.7036872861850      );
   int xbin = id4->FindBin(   4.0500000000000007      );
  id4 -> SetBinContent( xbin,    45835.372352020320      );
  id4 -> SetBinError( xbin,    977.60505883859958      );
   int xbin = id4->FindBin(   4.1500000000000004      );
  id4 -> SetBinContent( xbin,    32745.678801793514      );
  id4 -> SetBinError( xbin,    786.29762954599653      );
   int xbin = id4->FindBin(   4.2500000000000000      );
  id4 -> SetBinContent( xbin,    25080.937084285870      );
  id4 -> SetBinError( xbin,    617.97581165999384      );
   int xbin = id4->FindBin(   4.3499999999999996      );
  id4 -> SetBinContent( xbin,    16101.538970901925      );
  id4 -> SetBinError( xbin,    461.78915415058907      );
   int xbin = id4->FindBin(   4.4500000000000011      );
  id4 -> SetBinContent( xbin,    10956.978974700840      );
  id4 -> SetBinError( xbin,    329.30828231084956      );
   int xbin = id4->FindBin(   4.5500000000000007      );
  id4 -> SetBinContent( xbin,    6658.9367112179161      );
  id4 -> SetBinError( xbin,    253.58120235551567      );
   int xbin = id4->FindBin(   4.6500000000000004      );
  id4 -> SetBinContent( xbin,    4257.8005894710550      );
  id4 -> SetBinError( xbin,    171.25735017966775      );
   int xbin = id4->FindBin(   4.7500000000000000      );
  id4 -> SetBinContent( xbin,    2478.9336886985607      );
  id4 -> SetBinError( xbin,    127.01364121272177      );
   int xbin = id4->FindBin(   4.8500000000000014      );
  id4 -> SetBinContent( xbin,    1201.6634963372205      );
  id4 -> SetBinError( xbin,    74.008311623449316      );
   int xbin = id4->FindBin(   4.9500000000000011      );
  id4 -> SetBinContent( xbin,    710.36186142696943      );
  id4 -> SetBinError( xbin,    50.646136088246543      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    47388.772500630330      );
  id5 -> SetBinError( xbin,    571.01893678428928      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    98667.626565073384      );
  id5 -> SetBinError( xbin,    625.98132123376968      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    110609.50180555522      );
  id5 -> SetBinError( xbin,    761.15913436661754      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    119069.22638267349      );
  id5 -> SetBinError( xbin,    849.37791458882475      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    132386.68083966602      );
  id5 -> SetBinError( xbin,    939.44491042765651      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    149697.59202993804      );
  id5 -> SetBinError( xbin,    1074.5053282536855      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    168355.57168380136      );
  id5 -> SetBinError( xbin,    1113.5061937746623      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    168356.83263735118      );
  id5 -> SetBinError( xbin,    1205.5951167593869      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    129493.03387666555      );
  id5 -> SetBinError( xbin,    933.13667694852313      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    61893.165124025072      );
  id5 -> SetBinError( xbin,    317.08206679088300      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    32191.142190098486      );
  id5 -> SetBinError( xbin,    203.14635221895142      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    20579.350975195644      );
  id5 -> SetBinError( xbin,    164.91251632163497      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13741.630091716361      );
  id5 -> SetBinError( xbin,    119.24667510625461      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    10138.818107752197      );
  id5 -> SetBinError( xbin,    93.093982824373313      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7776.4559287698448      );
  id5 -> SetBinError( xbin,    70.821054741997969      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5913.5745723968466      );
  id5 -> SetBinError( xbin,    61.116655494889649      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4751.2334876599289      );
  id5 -> SetBinError( xbin,    54.468038990680434      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3816.0498795762865      );
  id5 -> SetBinError( xbin,    48.760526426626107      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2996.1913975046341      );
  id5 -> SetBinError( xbin,    83.112605386654153      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2690.0060714590418      );
  id5 -> SetBinError( xbin,    84.374816648386584      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2127.2550961741208      );
  id5 -> SetBinError( xbin,    41.573413701652946      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1815.7261102969624      );
  id5 -> SetBinError( xbin,    43.403835487064647      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1513.6254407507590      );
  id5 -> SetBinError( xbin,    40.272905269026147      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1341.8252566616868      );
  id5 -> SetBinError( xbin,    28.196679598370174      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1114.3373213871628      );
  id5 -> SetBinError( xbin,    23.421258568384275      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    959.20476648563329      );
  id5 -> SetBinError( xbin,    23.153527356406659      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    906.82036135308886      );
  id5 -> SetBinError( xbin,    27.659891245909858      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    748.66260516728755      );
  id5 -> SetBinError( xbin,    24.956296118442840      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    634.33817757806969      );
  id5 -> SetBinError( xbin,    17.750010123592016      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    567.03155256244429      );
  id5 -> SetBinError( xbin,    19.442205129584782      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    529.75200934524457      );
  id5 -> SetBinError( xbin,    17.500485055810195      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    458.34585582661680      );
  id5 -> SetBinError( xbin,    13.914590034800501      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    398.54761439170352      );
  id5 -> SetBinError( xbin,    14.687913567158525      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    336.96602895775294      );
  id5 -> SetBinError( xbin,    16.146136403423281      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    306.25507007423533      );
  id5 -> SetBinError( xbin,    13.050298224401834      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    294.25493272660333      );
  id5 -> SetBinError( xbin,    12.118207501242507      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    248.84628632133555      );
  id5 -> SetBinError( xbin,    12.054629153293760      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    253.08845309731311      );
  id5 -> SetBinError( xbin,    9.6008877486340989      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    3121.2534297677885      );
  id6 -> SetBinError( xbin,    62.301020932234778      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    10028.834721633340      );
  id6 -> SetBinError( xbin,    124.00759796624746      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    20127.008351635694      );
  id6 -> SetBinError( xbin,    172.77049734884170      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    36072.946559759104      );
  id6 -> SetBinError( xbin,    235.64234201581436      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    58068.450654736807      );
  id6 -> SetBinError( xbin,    290.20504231801249      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    90197.193340953119      );
  id6 -> SetBinError( xbin,    340.43455188492254      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    138026.42475074317      );
  id6 -> SetBinError( xbin,    411.92170105527197      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    193152.54628481701      );
  id6 -> SetBinError( xbin,    494.57275334181173      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    78316.929092422390      );
  id6 -> SetBinError( xbin,    354.70325212515257      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    28832.775704679763      );
  id6 -> SetBinError( xbin,    244.63761713516871      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    11433.896091811226      );
  id6 -> SetBinError( xbin,    160.69438863423863      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4614.2884562711324      );
  id6 -> SetBinError( xbin,    103.99571375352936      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    12373.176474514288      );
  id7 -> SetBinError( xbin,    175.10549914361448      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    16195.712663824888      );
  id7 -> SetBinError( xbin,    197.87144840115994      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    20327.055166425307      );
  id7 -> SetBinError( xbin,    225.86632470402492      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24619.902922933445      );
  id7 -> SetBinError( xbin,    250.30268261281284      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    29281.910422790395      );
  id7 -> SetBinError( xbin,    275.55324926176735      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    34193.012049980680      );
  id7 -> SetBinError( xbin,    304.80014291206447      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37822.443410704844      );
  id7 -> SetBinError( xbin,    327.80139395674894      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    42258.902405019660      );
  id7 -> SetBinError( xbin,    348.86693941681239      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45969.696848227795      );
  id7 -> SetBinError( xbin,    375.44727399890672      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    49486.485829832847      );
  id7 -> SetBinError( xbin,    381.04151310170420      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52582.616076431055      );
  id7 -> SetBinError( xbin,    409.12457953696065      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    55976.691278072612      );
  id7 -> SetBinError( xbin,    422.83758862389550      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    57882.140501863149      );
  id7 -> SetBinError( xbin,    429.06523090013661      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    59251.736475082980      );
  id7 -> SetBinError( xbin,    430.70430507479330      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    60514.361046561447      );
  id7 -> SetBinError( xbin,    437.21478243505965      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    61655.977648939719      );
  id7 -> SetBinError( xbin,    443.48497255475013      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    61594.288016565319      );
  id7 -> SetBinError( xbin,    439.86954405970175      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    61397.902563112526      );
  id7 -> SetBinError( xbin,    432.59659632461796      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    59905.085470579594      );
  id7 -> SetBinError( xbin,    423.80116286437567      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    58544.841250864825      );
  id7 -> SetBinError( xbin,    410.89843405989893      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    56259.124125954906      );
  id7 -> SetBinError( xbin,    401.04015942160675      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    53993.537617693728      );
  id7 -> SetBinError( xbin,    383.71308826888418      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    50531.721242301050      );
  id7 -> SetBinError( xbin,    361.87409538977647      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    45927.120124615416      );
  id7 -> SetBinError( xbin,    339.59099692983636      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    42397.267787484358      );
  id7 -> SetBinError( xbin,    323.46550408778393      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    37861.402344539769      );
  id7 -> SetBinError( xbin,    300.00570586718607      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    32731.536891395310      );
  id7 -> SetBinError( xbin,    273.83769813232226      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    27351.062802644989      );
  id7 -> SetBinError( xbin,    249.61782545647674      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    22694.243468030611      );
  id7 -> SetBinError( xbin,    225.48295408370876      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    18095.363566075011      );
  id7 -> SetBinError( xbin,    206.73434959362567      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7942.7789160298271      );
  id8 -> SetBinError( xbin,    53.059829377632809      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    14093.841795027492      );
  id8 -> SetBinError( xbin,    68.545900206161122      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    12191.538028804443      );
  id8 -> SetBinError( xbin,    63.860611276373184      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    10507.169292592456      );
  id8 -> SetBinError( xbin,    58.156044886095991      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    9272.9929140963632      );
  id8 -> SetBinError( xbin,    54.025274468090544      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    8163.2531551402462      );
  id8 -> SetBinError( xbin,    50.542610258472237      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6982.8110532837181      );
  id8 -> SetBinError( xbin,    45.532050198111641      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    6240.7792831816441      );
  id8 -> SetBinError( xbin,    42.771557757969589      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5433.3444906415825      );
  id8 -> SetBinError( xbin,    39.439040856138504      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4853.9163767386071      );
  id8 -> SetBinError( xbin,    36.300712941719112      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4342.1556380441270      );
  id8 -> SetBinError( xbin,    35.083929041784700      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3818.3133224983940      );
  id8 -> SetBinError( xbin,    31.198998221965308      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3456.5996946729101      );
  id8 -> SetBinError( xbin,    30.004480640070948      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    3081.3973378826904      );
  id8 -> SetBinError( xbin,    27.651871613120218      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2812.4971632442985      );
  id8 -> SetBinError( xbin,    26.306400551734196      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2508.9543528936879      );
  id8 -> SetBinError( xbin,    24.333392804033924      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2273.1805911435449      );
  id8 -> SetBinError( xbin,    23.034509422941614      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2038.5646733593503      );
  id8 -> SetBinError( xbin,    21.256618488341317      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1882.7483838256212      );
  id8 -> SetBinError( xbin,    20.165093125442272      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1705.4808498662833      );
  id8 -> SetBinError( xbin,    19.384549945953740      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1550.7934140332004      );
  id8 -> SetBinError( xbin,    17.820223715260397      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1452.3135554519233      );
  id8 -> SetBinError( xbin,    17.950836454646588      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1335.4154524728940      );
  id8 -> SetBinError( xbin,    17.305447889911523      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1214.1846430043149      );
  id8 -> SetBinError( xbin,    15.592874384676890      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1106.7971379372295      );
  id8 -> SetBinError( xbin,    15.041889916873652      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    998.62418650748009      );
  id8 -> SetBinError( xbin,    13.626571072248488      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    941.00005904715636      );
  id8 -> SetBinError( xbin,    13.663404641133715      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    859.58411521830226      );
  id8 -> SetBinError( xbin,    13.587285751073827      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
