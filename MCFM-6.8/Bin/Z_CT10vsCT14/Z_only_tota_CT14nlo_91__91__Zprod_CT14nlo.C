// Cross-section is:       613923.5864383556 +/-           93.9233647412)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -25182.18272   -4.10%
//        GQB    |      -13194.70835   -2.15%
//        QG     |      -24484.17770   -3.99%
//        QBG    |      -13683.26717   -2.23%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      328805.24224   53.56%
//        QBQ    |      363761.28785   59.25%

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
//Zprod_CT14nlo                   [runstring]  
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
//             CT14nlo            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//CT14nlo.LHpdf                   [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//CT14nlo.LHpdf                   [LHAPDF group 2]  
//                   0            [LHAPDF set 2]  

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


void macro()  {
  mcfmhisto = new TFile("Z_only_tota_CT14nlo_91__91__Zprod_CT14nlo.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *id1 = new TH1F( "id1", "y3", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("y3");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dy3 [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -5.9000000000000004      );
  id1 -> SetBinContent( xbin,    762.10007811311198      );
  id1 -> SetBinError( xbin,    187.12532765976610      );
   xbin = id1->FindBin(  -5.7000000000000002      );
  id1 -> SetBinContent( xbin,   -390.67046507655078      );
  id1 -> SetBinError( xbin,    1182.1769206014828      );
   xbin = id1->FindBin(  -5.5000000000000000      );
  id1 -> SetBinContent( xbin,    2677.8560174686022      );
  id1 -> SetBinError( xbin,    1182.2405652727450      );
   xbin = id1->FindBin(  -5.2999999999999998      );
  id1 -> SetBinContent( xbin,    2760.2903505591985      );
  id1 -> SetBinError( xbin,    788.17927722221634      );
   xbin = id1->FindBin(  -5.0999999999999996      );
  id1 -> SetBinContent( xbin,    2040.6006928727843      );
  id1 -> SetBinError( xbin,    804.63467403317543      );
   xbin = id1->FindBin(  -4.9000000000000004      );
  id1 -> SetBinContent( xbin,    5165.8476428683643      );
  id1 -> SetBinError( xbin,    1090.8409414398866      );
   xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    4835.8307738117483      );
  id1 -> SetBinError( xbin,    1108.2743425142112      );
   xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,    8927.5398976295601      );
  id1 -> SetBinError( xbin,    433.84619589825678      );
   xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    11326.871191381399      );
  id1 -> SetBinError( xbin,    477.72874976827228      );
   xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    15483.634387103728      );
  id1 -> SetBinError( xbin,    454.96685118945265      );
   xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    21127.307528127847      );
  id1 -> SetBinError( xbin,    462.35080630451768      );
   xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    26797.167690820905      );
  id1 -> SetBinError( xbin,    510.44449415009382      );
   xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    35026.293348809406      );
  id1 -> SetBinError( xbin,    1047.1419321130415      );
   xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    40356.143562109151      );
  id1 -> SetBinError( xbin,    1091.2432154785836      );
   xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    48359.308082480915      );
  id1 -> SetBinError( xbin,    656.82102860928217      );
   xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    56301.736569127548      );
  id1 -> SetBinError( xbin,    883.31949528084374      );
   xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    64750.618039913061      );
  id1 -> SetBinError( xbin,    894.07533767857683      );
   xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    72503.221219411891      );
  id1 -> SetBinError( xbin,    646.37921858118807      );
   xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    79246.581246119429      );
  id1 -> SetBinError( xbin,    849.73731814995847      );
   xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    84493.092072959946      );
  id1 -> SetBinError( xbin,    922.28683233500794      );
   xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    89911.127567983087      );
  id1 -> SetBinError( xbin,    729.25322169299511      );
   xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    96212.201272797131      );
  id1 -> SetBinError( xbin,    731.59566895574721      );
   xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    98999.357682964255      );
  id1 -> SetBinError( xbin,    765.60152661223390      );
   xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    102990.33651861059      );
  id1 -> SetBinError( xbin,    775.09236289638716      );
   xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    105314.93368360279      );
  id1 -> SetBinError( xbin,    773.08764091428270      );
   xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    105636.20356649850      );
  id1 -> SetBinError( xbin,    778.43271140557385      );
   xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    107041.65319044591      );
  id1 -> SetBinError( xbin,    855.81667119371662      );
   xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    106290.60041771499      );
  id1 -> SetBinError( xbin,    1719.4756662509130      );
   xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    109233.47861478582      );
  id1 -> SetBinError( xbin,    1867.6449437712220      );
   xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    105690.94383512228      );
  id1 -> SetBinError( xbin,    1447.5254653713487      );
   xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    132942.05709719850      );
  id1 -> SetBinError( xbin,    25472.192496669770      );
   xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    78700.573600137664      );
  id1 -> SetBinError( xbin,    25454.846339204149      );
   xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    103510.61532927498      );
  id1 -> SetBinError( xbin,    781.96989336931654      );
   xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    101122.53390963918      );
  id1 -> SetBinError( xbin,    914.25612998832389      );
   xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    98776.047822440625      );
  id1 -> SetBinError( xbin,    882.74033717213194      );
   xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    96413.589182787007      );
  id1 -> SetBinError( xbin,    733.86757903526507      );
   xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    92900.984412344114      );
  id1 -> SetBinError( xbin,    726.16907090541361      );
   xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    89180.369581049876      );
  id1 -> SetBinError( xbin,    662.62780352544723      );
   xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    85355.300331522187      );
  id1 -> SetBinError( xbin,    664.67595591503084      );
   xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    78585.702436290550      );
  id1 -> SetBinError( xbin,    978.27638558478372      );
   xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    75779.942001662756      );
  id1 -> SetBinError( xbin,    1015.5298978860807      );
   xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    67896.360710674780      );
  id1 -> SetBinError( xbin,    779.85119085321924      );
   xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    62144.413584992210      );
  id1 -> SetBinError( xbin,    745.44202442119649      );
   xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    55155.092635383357      );
  id1 -> SetBinError( xbin,    822.40411636577767      );
   xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    49107.160402474197      );
  id1 -> SetBinError( xbin,    827.97516438387618      );
   xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    40889.008001112990      );
  id1 -> SetBinError( xbin,    726.94450326451852      );
   xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    36959.504516802255      );
  id1 -> SetBinError( xbin,    1034.5639448025427      );
   xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    27087.167012274331      );
  id1 -> SetBinError( xbin,    948.80423516510848      );
   xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    22051.871565059697      );
  id1 -> SetBinError( xbin,    444.95649904497390      );
   xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    18301.790828414578      );
  id1 -> SetBinError( xbin,    932.04580777448268      );
   xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    12640.844818282314      );
  id1 -> SetBinError( xbin,    940.02851862898115      );
   xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,    9877.8661445365215      );
  id1 -> SetBinError( xbin,    391.26390010372450      );
   xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    7398.0704989644528      );
  id1 -> SetBinError( xbin,    296.78558778754933      );
   xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    5021.2327239281076      );
  id1 -> SetBinError( xbin,    322.10526624762696      );
   xbin = id1->FindBin(   4.9000000000000004      );
  id1 -> SetBinContent( xbin,    3132.8432147656340      );
  id1 -> SetBinError( xbin,    317.36992680132386      );
   xbin = id1->FindBin(   5.1000000000000014      );
  id1 -> SetBinContent( xbin,    2551.3434918006901      );
  id1 -> SetBinError( xbin,    253.35387035549942      );
   xbin = id1->FindBin(   5.3000000000000007      );
  id1 -> SetBinContent( xbin,    1819.4930182298606      );
  id1 -> SetBinError( xbin,    236.45894848189107      );
   xbin = id1->FindBin(   5.5000000000000000      );
  id1 -> SetBinContent( xbin,    924.80026310001710      );
  id1 -> SetBinError( xbin,    161.87283708358609      );
   xbin = id1->FindBin(   5.7000000000000011      );
  id1 -> SetBinContent( xbin,    985.76642023969293      );
  id1 -> SetBinError( xbin,    120.39274473178367      );
   xbin = id1->FindBin(   5.9000000000000004      );
  id1 -> SetBinContent( xbin,    580.61661638413580      );
  id1 -> SetBinError( xbin,    102.11407175300755      );
  histos -> Add(id1); 
 
 

  mcfmhisto -> cd();
  TH1F *id2 = new TH1F( "id2", "y4", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("y4");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dy4 [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    427.18742750859013      );
  id2 -> SetBinError( xbin,    103.58527149901572      );
   xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    838.99616131830646      );
  id2 -> SetBinError( xbin,    154.20052894419268      );
   xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1093.4318104266654      );
  id2 -> SetBinError( xbin,    224.39195551041911      );
   xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    1799.7495247948766      );
  id2 -> SetBinError( xbin,    457.42470561135423      );
   xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    1943.1362962561941      );
  id2 -> SetBinError( xbin,    468.70225047915443      );
   xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    2742.0378068631380      );
  id2 -> SetBinError( xbin,    334.30709188089332      );
   xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    5511.6022574702183      );
  id2 -> SetBinError( xbin,    413.55703879593790      );
   xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    7048.3670713610863      );
  id2 -> SetBinError( xbin,    413.12175759487900      );
   xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    9060.2442603067320      );
  id2 -> SetBinError( xbin,    360.37002493053552      );
   xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    13398.564167830898      );
  id2 -> SetBinError( xbin,    459.78242842133221      );
   xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    17037.871770358914      );
  id2 -> SetBinError( xbin,    498.70314852990242      );
   xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    23318.904557535709      );
  id2 -> SetBinError( xbin,    1508.5579240270458      );
   xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    27216.059946361489      );
  id2 -> SetBinError( xbin,    1545.5409369110221      );
   xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    33693.052462724627      );
  id2 -> SetBinError( xbin,    1221.9028335862827      );
   xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    45156.618641244830      );
  id2 -> SetBinError( xbin,    1236.9466805375246      );
   xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    49673.503939125985      );
  id2 -> SetBinError( xbin,    622.61236125555320      );
   xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    59839.195139728305      );
  id2 -> SetBinError( xbin,    837.06367663373851      );
   xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    67494.810501994900      );
  id2 -> SetBinError( xbin,    849.44842990816164      );
   xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    76990.385241463344      );
  id2 -> SetBinError( xbin,    744.63392486043028      );
   xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    84198.390784634568      );
  id2 -> SetBinError( xbin,    864.64985788989702      );
   xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    92011.434828943180      );
  id2 -> SetBinError( xbin,    839.11292301267258      );
   xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    96888.219166445735      );
  id2 -> SetBinError( xbin,    797.30868521962907      );
   xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    102865.30616335460      );
  id2 -> SetBinError( xbin,    987.30846289294004      );
   xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    108459.19961775420      );
  id2 -> SetBinError( xbin,    1014.0271382708441      );
   xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    109526.65407312618      );
  id2 -> SetBinError( xbin,    948.85468062849509      );
   xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    113788.43203329598      );
  id2 -> SetBinError( xbin,    1205.8452995720752      );
   xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    110445.87328006733      );
  id2 -> SetBinError( xbin,    1164.8625701801727      );
   xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    114479.10460667106      );
  id2 -> SetBinError( xbin,    1420.6788630718963      );
   xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    113946.04945914287      );
  id2 -> SetBinError( xbin,    1384.9570924003078      );
   xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    113815.68150310167      );
  id2 -> SetBinError( xbin,    1352.1010091902363      );
   xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    113278.13231864330      );
  id2 -> SetBinError( xbin,    1358.2378261430329      );
   xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    111449.05818108926      );
  id2 -> SetBinError( xbin,    1022.8321185833369      );
   xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    109175.60321716347      );
  id2 -> SetBinError( xbin,    996.20608633607787      );
   xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    107156.72639464773      );
  id2 -> SetBinError( xbin,    817.69363199459906      );
   xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    103219.43061846339      );
  id2 -> SetBinError( xbin,    816.26842255996291      );
   xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    100811.47459484599      );
  id2 -> SetBinError( xbin,    903.99965452439005      );
   xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    98050.986988406250      );
  id2 -> SetBinError( xbin,    889.74389098282791      );
   xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    92183.497623541873      );
  id2 -> SetBinError( xbin,    815.33393808993708      );
   xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    86446.176598835809      );
  id2 -> SetBinError( xbin,    771.64509609408492      );
   xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    80506.614642007480      );
  id2 -> SetBinError( xbin,    684.09318238002356      );
   xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    74450.677232256377      );
  id2 -> SetBinError( xbin,    836.30282287160560      );
   xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    66839.469794860968      );
  id2 -> SetBinError( xbin,    826.83222593822586      );
   xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    59992.322274683895      );
  id2 -> SetBinError( xbin,    687.33976740937726      );
   xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    51386.920486943098      );
  id2 -> SetBinError( xbin,    695.03494041487420      );
   xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    43551.487031646269      );
  id2 -> SetBinError( xbin,    580.19312899739953      );
   xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    36625.349191922542      );
  id2 -> SetBinError( xbin,    541.35102748930603      );
   xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    30331.103502901831      );
  id2 -> SetBinError( xbin,    547.34220213451442      );
   xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    25405.399846860913      );
  id2 -> SetBinError( xbin,    743.67729233699231      );
   xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    18492.348170198758      );
  id2 -> SetBinError( xbin,    716.96783245507436      );
   xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    15918.950038105824      );
  id2 -> SetBinError( xbin,    417.89504801076168      );
   xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    11491.688613196133      );
  id2 -> SetBinError( xbin,    487.04301147362906      );
   xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    8053.7116851880000      );
  id2 -> SetBinError( xbin,    530.12367510426066      );
   xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    5911.1696087287564      );
  id2 -> SetBinError( xbin,    439.18230726365317      );
   xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    3840.4143875928348      );
  id2 -> SetBinError( xbin,    258.28086855212371      );
   xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    3033.2284737325062      );
  id2 -> SetBinError( xbin,    212.09802677635955      );
   xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    2397.3603085854934      );
  id2 -> SetBinError( xbin,    260.11203470002249      );
   xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    1272.7589629213517      );
  id2 -> SetBinError( xbin,    220.61453436809828      );
   xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    723.30909293687296      );
  id2 -> SetBinError( xbin,    137.13650415764945      );
   xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    560.81042693359780      );
  id2 -> SetBinError( xbin,    119.89664080960272      );
   xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    918.78010374709140      );
  id2 -> SetBinError( xbin,    649.66119711734370      );
  histos -> Add(id2); 
 
 

  mcfmhisto -> cd();
  TH1F *id3 = new TH1F( "id3", "y34", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y34");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy34 [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,   -1.4293331084397213E-006 );
  id3 -> SetBinError( xbin,    9.0719862456002077E-007 );
   xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,    1.0485951207216435      );
  id3 -> SetBinError( xbin,   0.53342038882672682      );
   xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    28.535386961829960      );
  id3 -> SetBinError( xbin,    6.3872450427011982      );
   xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    326.07766215383748      );
  id3 -> SetBinError( xbin,    27.270249636759786      );
   xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    2808.0030456116524      );
  id3 -> SetBinError( xbin,    93.067835551984714      );
   xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    10097.704389499049      );
  id3 -> SetBinError( xbin,    220.53736034177433      );
   xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    22428.763111547640      );
  id3 -> SetBinError( xbin,    302.05592602103155      );
   xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    38199.635287066769      );
  id3 -> SetBinError( xbin,    357.82538966113788      );
   xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    54251.970104524255      );
  id3 -> SetBinError( xbin,    452.13462480161769      );
   xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    70363.178732029381      );
  id3 -> SetBinError( xbin,    516.25131212174244      );
   xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    84009.493839835472      );
  id3 -> SetBinError( xbin,    512.60822133330169      );
   xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    95091.170465392279      );
  id3 -> SetBinError( xbin,    1301.8558245498189      );
   xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    99968.954248331662      );
  id3 -> SetBinError( xbin,    1312.8475174674256      );
   xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    108079.10379200269      );
  id3 -> SetBinError( xbin,    551.40188704427817      );
   xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    111314.50707943147      );
  id3 -> SetBinError( xbin,    546.23423286849493      );
   xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    114820.01699454797      );
  id3 -> SetBinError( xbin,    599.45684033636837      );
   xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    114904.56902492545      );
  id3 -> SetBinError( xbin,    613.16817909447468      );
   xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    116073.48323794271      );
  id3 -> SetBinError( xbin,    582.88015864803162      );
   xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    117701.24689236596      );
  id3 -> SetBinError( xbin,    570.35020369844358      );
   xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    116265.16804739075      );
  id3 -> SetBinError( xbin,    545.80369151577872      );
   xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    116578.09771987477      );
  id3 -> SetBinError( xbin,    550.27078998828858      );
   xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    114130.96690266338      );
  id3 -> SetBinError( xbin,    548.24523227080613      );
   xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    114756.16516605997      );
  id3 -> SetBinError( xbin,    566.70213818797401      );
   xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    113171.27304641722      );
  id3 -> SetBinError( xbin,    554.71548789083488      );
   xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    111710.01085641794      );
  id3 -> SetBinError( xbin,    536.94300926837400      );
   xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    109554.68140532350      );
  id3 -> SetBinError( xbin,    585.69468334944361      );
   xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    108229.21466490190      );
  id3 -> SetBinError( xbin,    576.85458960801168      );
   xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    107480.91266166604      );
  id3 -> SetBinError( xbin,    559.99655314300492      );
   xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    103320.56340845994      );
  id3 -> SetBinError( xbin,    553.84900827527429      );
   xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    101335.91521442590      );
  id3 -> SetBinError( xbin,    515.41269166624477      );
   xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    99904.232697421961      );
  id3 -> SetBinError( xbin,    509.70159234870482      );
   xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    95655.214905063622      );
  id3 -> SetBinError( xbin,    499.62659691671587      );
   xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    91265.079698448666      );
  id3 -> SetBinError( xbin,    511.10709686426605      );
   xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    86416.097225747784      );
  id3 -> SetBinError( xbin,    546.97283048422116      );
   xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    79090.996278823615      );
  id3 -> SetBinError( xbin,    545.72966275152396      );
   xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    70776.183792780081      );
  id3 -> SetBinError( xbin,    487.24469583463861      );
   xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    59041.137383910740      );
  id3 -> SetBinError( xbin,    411.87997522933989      );
   xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    47205.063990324881      );
  id3 -> SetBinError( xbin,    400.36306630398934      );
   xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    33053.435107904115      );
  id3 -> SetBinError( xbin,    355.49022714624772      );
   xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    19472.090085803917      );
  id3 -> SetBinError( xbin,    267.21554419515161      );
   xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    8166.6390462095578      );
  id3 -> SetBinError( xbin,    184.01740087967065      );
   xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    2196.9106828944891      );
  id3 -> SetBinError( xbin,    83.292327214137330      );
   xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    309.25571530281212      );
  id3 -> SetBinError( xbin,    30.972222675238516      );
   xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    30.417029276280598      );
  id3 -> SetBinError( xbin,    7.9910859239325207      );
   xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,   0.86928834961291157      );
  id3 -> SetBinError( xbin,   0.47540625274652115      );
   xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    9.8832567107178072E-007 );
  id3 -> SetBinError( xbin,    1.0154863144339974E-006 );
  histos -> Add(id3); 
 
 

  mcfmhisto -> cd();
  TH1F *id4 = new TH1F( "id4", "pt3", 40,    0.00000,   80.00000);

  id4 -> GetXaxis() -> SetTitle("pt3");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/dpt3 [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   xbin = id4->FindBin(   1.0000000000000000      );
  id4 -> SetBinContent( xbin,    332.94101578315633      );
  id4 -> SetBinError( xbin,    84.855571758997357      );
   xbin = id4->FindBin(   3.0000000000000000      );
  id4 -> SetBinContent( xbin,    1503.1461444093745      );
  id4 -> SetBinError( xbin,    114.58331830856312      );
   xbin = id4->FindBin(   5.0000000000000000      );
  id4 -> SetBinContent( xbin,    2064.3104224571653      );
  id4 -> SetBinError( xbin,    93.424544273948214      );
   xbin = id4->FindBin(   7.0000000000000000      );
  id4 -> SetBinContent( xbin,    3181.9454590387418      );
  id4 -> SetBinError( xbin,    115.29345919493744      );
   xbin = id4->FindBin(   9.0000000000000000      );
  id4 -> SetBinContent( xbin,    4056.0955141883628      );
  id4 -> SetBinError( xbin,    266.76792062679976      );
   xbin = id4->FindBin(   11.000000000000000      );
  id4 -> SetBinContent( xbin,    4623.4661248285147      );
  id4 -> SetBinError( xbin,    262.25941213013647      );
   xbin = id4->FindBin(   13.000000000000000      );
  id4 -> SetBinContent( xbin,    6723.0454784875928      );
  id4 -> SetBinError( xbin,    657.67843085492314      );
   xbin = id4->FindBin(   15.000000000000000      );
  id4 -> SetBinContent( xbin,    5709.2532361855119      );
  id4 -> SetBinError( xbin,    657.11225192242409      );
   xbin = id4->FindBin(   17.000000000000000      );
  id4 -> SetBinContent( xbin,    7402.4750142959520      );
  id4 -> SetBinError( xbin,    193.80273964781554      );
   xbin = id4->FindBin(   19.000000000000000      );
  id4 -> SetBinContent( xbin,    8421.4323535553103      );
  id4 -> SetBinError( xbin,    302.38851700260687      );
   xbin = id4->FindBin(   21.000000000000000      );
  id4 -> SetBinContent( xbin,    9890.8881453884060      );
  id4 -> SetBinError( xbin,    270.77482428047216      );
   xbin = id4->FindBin(   23.000000000000000      );
  id4 -> SetBinContent( xbin,    10672.948378504276      );
  id4 -> SetBinError( xbin,    172.33128154595460      );
   xbin = id4->FindBin(   25.000000000000000      );
  id4 -> SetBinContent( xbin,    11040.380805402401      );
  id4 -> SetBinError( xbin,    370.41884194921636      );
   xbin = id4->FindBin(   27.000000000000000      );
  id4 -> SetBinContent( xbin,    13084.881958624483      );
  id4 -> SetBinError( xbin,    374.00554796719206      );
   xbin = id4->FindBin(   29.000000000000000      );
  id4 -> SetBinContent( xbin,    14022.682577423930      );
  id4 -> SetBinError( xbin,    324.90950324932186      );
   xbin = id4->FindBin(   31.000000000000000      );
  id4 -> SetBinContent( xbin,    14653.304273723303      );
  id4 -> SetBinError( xbin,    376.91092844156492      );
   xbin = id4->FindBin(   33.000000000000000      );
  id4 -> SetBinContent( xbin,    15996.711385753679      );
  id4 -> SetBinError( xbin,    314.55599300730984      );
   xbin = id4->FindBin(   35.000000000000000      );
  id4 -> SetBinContent( xbin,    16327.954304775250      );
  id4 -> SetBinError( xbin,    780.81773867985521      );
   xbin = id4->FindBin(   37.000000000000000      );
  id4 -> SetBinContent( xbin,    19836.286810730198      );
  id4 -> SetBinError( xbin,    785.55500233669216      );
   xbin = id4->FindBin(   39.000000000000000      );
  id4 -> SetBinContent( xbin,    20640.823755165547      );
  id4 -> SetBinError( xbin,    266.91202256498912      );
   xbin = id4->FindBin(   41.000000000000000      );
  id4 -> SetBinContent( xbin,    22744.896121364323      );
  id4 -> SetBinError( xbin,    251.42060090898227      );
   xbin = id4->FindBin(   43.000000000000000      );
  id4 -> SetBinContent( xbin,    26527.382472381963      );
  id4 -> SetBinError( xbin,    312.10999207469030      );
   xbin = id4->FindBin(   45.000000000000000      );
  id4 -> SetBinContent( xbin,    20966.339937325207      );
  id4 -> SetBinError( xbin,    398.12959183138179      );
   xbin = id4->FindBin(   47.000000000000000      );
  id4 -> SetBinContent( xbin,    18102.346203283436      );
  id4 -> SetBinError( xbin,    318.23167300757126      );
   xbin = id4->FindBin(   49.000000000000000      );
  id4 -> SetBinContent( xbin,    8396.6096501050688      );
  id4 -> SetBinError( xbin,    65.847535479103328      );
   xbin = id4->FindBin(   51.000000000000000      );
  id4 -> SetBinContent( xbin,    4758.9032999727069      );
  id4 -> SetBinError( xbin,    37.720905282412858      );
   xbin = id4->FindBin(   53.000000000000000      );
  id4 -> SetBinContent( xbin,    3180.8435036022115      );
  id4 -> SetBinError( xbin,    32.645379219126504      );
   xbin = id4->FindBin(   55.000000000000000      );
  id4 -> SetBinContent( xbin,    2250.3358318440733      );
  id4 -> SetBinError( xbin,    31.064066176220106      );
   xbin = id4->FindBin(   57.000000000000000      );
  id4 -> SetBinContent( xbin,    1673.8933907911455      );
  id4 -> SetBinError( xbin,    21.516748268609209      );
   xbin = id4->FindBin(   59.000000000000000      );
  id4 -> SetBinContent( xbin,    1275.5254999406511      );
  id4 -> SetBinError( xbin,    13.784966555522439      );
   xbin = id4->FindBin(   61.000000000000000      );
  id4 -> SetBinContent( xbin,    990.79887024956065      );
  id4 -> SetBinError( xbin,    6.0394869397232060      );
   xbin = id4->FindBin(   63.000000000000000      );
  id4 -> SetBinContent( xbin,    792.41229731114629      );
  id4 -> SetBinError( xbin,    4.5074079841072763      );
   xbin = id4->FindBin(   65.000000000000000      );
  id4 -> SetBinContent( xbin,    648.28678995606572      );
  id4 -> SetBinError( xbin,    3.8409941050691323      );
   xbin = id4->FindBin(   67.000000000000000      );
  id4 -> SetBinContent( xbin,    542.43851847977032      );
  id4 -> SetBinError( xbin,    3.3876026727517599      );
   xbin = id4->FindBin(   69.000000000000000      );
  id4 -> SetBinContent( xbin,    457.12072973121377      );
  id4 -> SetBinError( xbin,    3.0539094960453159      );
   xbin = id4->FindBin(   71.000000000000000      );
  id4 -> SetBinContent( xbin,    389.58669831680703      );
  id4 -> SetBinError( xbin,    2.8303118125788376      );
   xbin = id4->FindBin(   73.000000000000000      );
  id4 -> SetBinContent( xbin,    333.69778068963393      );
  id4 -> SetBinError( xbin,    2.4537155917060933      );
   xbin = id4->FindBin(   75.000000000000000      );
  id4 -> SetBinContent( xbin,    292.27087803076142      );
  id4 -> SetBinError( xbin,    2.3221455498686887      );
   xbin = id4->FindBin(   77.000000000000000      );
  id4 -> SetBinContent( xbin,    252.18028763418471      );
  id4 -> SetBinError( xbin,    2.2207930714514204      );
   xbin = id4->FindBin(   79.000000000000000      );
  id4 -> SetBinContent( xbin,    220.79053013751047      );
  id4 -> SetBinError( xbin,    2.0087872540570628      );
  histos -> Add(id4); 
 
 

  mcfmhisto -> cd();
  TH1F *id5 = new TH1F( "id5", "pt4", 40,    0.00000,   80.00000);

  id5 -> GetXaxis() -> SetTitle("pt4");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt4 [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   xbin = id5->FindBin(   1.0000000000000000      );
  id5 -> SetBinContent( xbin,    487.12303712081530      );
  id5 -> SetBinError( xbin,    40.252005070511110      );
   xbin = id5->FindBin(   3.0000000000000000      );
  id5 -> SetBinContent( xbin,    1248.5298264220041      );
  id5 -> SetBinError( xbin,    57.897217184561889      );
   xbin = id5->FindBin(   5.0000000000000000      );
  id5 -> SetBinContent( xbin,    2241.0081576075877      );
  id5 -> SetBinError( xbin,    98.271700512791824      );
   xbin = id5->FindBin(   7.0000000000000000      );
  id5 -> SetBinContent( xbin,    2952.0860858994615      );
  id5 -> SetBinError( xbin,    121.31563306048531      );
   xbin = id5->FindBin(   9.0000000000000000      );
  id5 -> SetBinContent( xbin,    3946.1394210414287      );
  id5 -> SetBinError( xbin,    121.72597384276612      );
   xbin = id5->FindBin(   11.000000000000000      );
  id5 -> SetBinContent( xbin,    4211.8780146327235      );
  id5 -> SetBinError( xbin,    688.27197592125174      );
   xbin = id5->FindBin(   13.000000000000000      );
  id5 -> SetBinContent( xbin,    6588.8164527148538      );
  id5 -> SetBinError( xbin,    689.27543406572238      );
   xbin = id5->FindBin(   15.000000000000000      );
  id5 -> SetBinContent( xbin,    6800.4737146518228      );
  id5 -> SetBinError( xbin,    274.30911789388239      );
   xbin = id5->FindBin(   17.000000000000000      );
  id5 -> SetBinContent( xbin,    7441.5629207303245      );
  id5 -> SetBinError( xbin,    286.99146578540234      );
   xbin = id5->FindBin(   19.000000000000000      );
  id5 -> SetBinContent( xbin,    8258.6032352222028      );
  id5 -> SetBinError( xbin,    253.42339956534201      );
   xbin = id5->FindBin(   21.000000000000000      );
  id5 -> SetBinContent( xbin,    9543.6342340623614      );
  id5 -> SetBinError( xbin,    260.84656840339204      );
   xbin = id5->FindBin(   23.000000000000000      );
  id5 -> SetBinContent( xbin,    10980.114821901776      );
  id5 -> SetBinError( xbin,    202.96769277144216      );
   xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    11311.407370232149      );
  id5 -> SetBinError( xbin,    211.15695064248450      );
   xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    12687.640493221197      );
  id5 -> SetBinError( xbin,    213.58720694451068      );
   xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    13902.125982736128      );
  id5 -> SetBinError( xbin,    224.80689523911934      );
   xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    14518.609900742476      );
  id5 -> SetBinError( xbin,    479.76913352670465      );
   xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    16354.506751100414      );
  id5 -> SetBinError( xbin,    528.35110924374521      );
   xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    17489.171176559918      );
  id5 -> SetBinError( xbin,    316.53963858448799      );
   xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    18924.231697000152      );
  id5 -> SetBinError( xbin,    236.65795178657135      );
   xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    20731.989727885317      );
  id5 -> SetBinError( xbin,    248.47553052594367      );
   xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    22732.243359487227      );
  id5 -> SetBinError( xbin,    415.94236669433997      );
   xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    27093.569834101119      );
  id5 -> SetBinError( xbin,    461.56320875289958      );
   xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    21122.938501176857      );
  id5 -> SetBinError( xbin,    335.52872820228919      );
   xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17483.796401002226      );
  id5 -> SetBinError( xbin,    209.78782853431369      );
   xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8279.6628338665523      );
  id5 -> SetBinError( xbin,    63.742859126206071      );
   xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    4779.0078404260958      );
  id5 -> SetBinError( xbin,    37.710754218709617      );
   xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    3147.2109632853453      );
  id5 -> SetBinError( xbin,    30.841965945860519      );
   xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    2236.5789369059362      );
  id5 -> SetBinError( xbin,    21.080161601881624      );
   xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    1622.2234407355686      );
  id5 -> SetBinError( xbin,    17.422240178702701      );
   xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    1263.3311666598538      );
  id5 -> SetBinError( xbin,    14.513231009310722      );
   xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    970.82689070683136      );
  id5 -> SetBinError( xbin,    7.4520267243741385      );
   xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    769.31994043422378      );
  id5 -> SetBinError( xbin,    4.2475802710539607      );
   xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    633.33315341989874      );
  id5 -> SetBinError( xbin,    3.6053254867933213      );
   xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    518.27945663432081      );
  id5 -> SetBinError( xbin,    3.1102794472662993      );
   xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    439.95204070028205      );
  id5 -> SetBinError( xbin,    2.8218691196000427      );
   xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    372.96675256024173      );
  id5 -> SetBinError( xbin,    2.5453751568920220      );
   xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    319.49875645541016      );
  id5 -> SetBinError( xbin,    2.3041854779587436      );
   xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    277.83231014516593      );
  id5 -> SetBinError( xbin,    2.1120955160211610      );
   xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    237.25916193609009      );
  id5 -> SetBinError( xbin,    1.8456978891552978      );
   xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    207.51219489139942      );
  id5 -> SetBinError( xbin,    1.7676269092094656      );
  histos -> Add(id5); 
 
 

  mcfmhisto -> cd();
  TH1F *id6 = new TH1F( "id6", "pt34", 25,    0.00000,   50.00000);

  id6 -> GetXaxis() -> SetTitle("pt34");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dpt34 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,   -22639.602613701845      );
  id6 -> SetBinError( xbin,    365.10637818589373      );
   xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    114192.63903729018      );
  id6 -> SetBinError( xbin,    223.51284263660216      );
   xbin = id6->FindBin(   5.0000000000000000      );
  id6 -> SetBinContent( xbin,    54747.054932733990      );
  id6 -> SetBinError( xbin,    102.70080692225532      );
   xbin = id6->FindBin(   7.0000000000000000      );
  id6 -> SetBinContent( xbin,    33594.881358939318      );
  id6 -> SetBinError( xbin,    63.498400598127134      );
   xbin = id6->FindBin(   9.0000000000000000      );
  id6 -> SetBinContent( xbin,    23027.255323653979      );
  id6 -> SetBinError( xbin,    45.106853388654471      );
   xbin = id6->FindBin(   11.000000000000000      );
  id6 -> SetBinContent( xbin,    16845.700321800887      );
  id6 -> SetBinError( xbin,    34.100525510095416      );
   xbin = id6->FindBin(   13.000000000000000      );
  id6 -> SetBinContent( xbin,    12952.222385418616      );
  id6 -> SetBinError( xbin,    27.824171137610794      );
   xbin = id6->FindBin(   15.000000000000000      );
  id6 -> SetBinContent( xbin,    10197.129055092177      );
  id6 -> SetBinError( xbin,    23.033782402774964      );
   xbin = id6->FindBin(   17.000000000000000      );
  id6 -> SetBinContent( xbin,    8227.9189501608216      );
  id6 -> SetBinError( xbin,    19.480389149324967      );
   xbin = id6->FindBin(   19.000000000000000      );
  id6 -> SetBinContent( xbin,    6799.4663318722351      );
  id6 -> SetBinError( xbin,    16.753758097709547      );
   xbin = id6->FindBin(   21.000000000000000      );
  id6 -> SetBinContent( xbin,    5685.0660554896504      );
  id6 -> SetBinError( xbin,    14.678819245897555      );
   xbin = id6->FindBin(   23.000000000000000      );
  id6 -> SetBinContent( xbin,    4829.3588992882133      );
  id6 -> SetBinError( xbin,    13.008092085864902      );
   xbin = id6->FindBin(   25.000000000000000      );
  id6 -> SetBinContent( xbin,    4114.8378722965272      );
  id6 -> SetBinError( xbin,    11.605096521484670      );
   xbin = id6->FindBin(   27.000000000000000      );
  id6 -> SetBinContent( xbin,    3537.8453586002488      );
  id6 -> SetBinError( xbin,    10.302319303454702      );
   xbin = id6->FindBin(   29.000000000000000      );
  id6 -> SetBinContent( xbin,    3094.1958931926088      );
  id6 -> SetBinError( xbin,    9.4075648081255103      );
   xbin = id6->FindBin(   31.000000000000000      );
  id6 -> SetBinContent( xbin,    2706.0591312896831      );
  id6 -> SetBinError( xbin,    8.5198135812544145      );
   xbin = id6->FindBin(   33.000000000000000      );
  id6 -> SetBinContent( xbin,    2387.9529110015824      );
  id6 -> SetBinError( xbin,    7.8836958224686819      );
   xbin = id6->FindBin(   35.000000000000000      );
  id6 -> SetBinContent( xbin,    2098.5734037278780      );
  id6 -> SetBinError( xbin,    7.2516277476905886      );
   xbin = id6->FindBin(   37.000000000000000      );
  id6 -> SetBinContent( xbin,    1863.3736786911031      );
  id6 -> SetBinError( xbin,    6.6103679967311555      );
   xbin = id6->FindBin(   39.000000000000000      );
  id6 -> SetBinContent( xbin,    1662.2048187933524      );
  id6 -> SetBinError( xbin,    6.0499405243501085      );
   xbin = id6->FindBin(   41.000000000000000      );
  id6 -> SetBinContent( xbin,    1487.1416209409342      );
  id6 -> SetBinError( xbin,    5.6303767752682399      );
   xbin = id6->FindBin(   43.000000000000000      );
  id6 -> SetBinContent( xbin,    1336.5169263661746      );
  id6 -> SetBinError( xbin,    5.2177823346064649      );
   xbin = id6->FindBin(   45.000000000000000      );
  id6 -> SetBinContent( xbin,    1198.6968818597854      );
  id6 -> SetBinError( xbin,    4.8569632969531256      );
   xbin = id6->FindBin(   47.000000000000000      );
  id6 -> SetBinContent( xbin,    1077.2209364653220      );
  id6 -> SetBinError( xbin,    4.5504394606345286      );
   xbin = id6->FindBin(   49.000000000000000      );
  id6 -> SetBinContent( xbin,    974.58754208957168      );
  id6 -> SetBinError( xbin,    4.3122993243935852      );
  histos -> Add(id6); 
 
 

  mcfmhisto -> cd();
  TH1F *id7 = new TH1F( "id7", "m34", 80,   70.00000,  110.00000);

  id7 -> GetXaxis() -> SetTitle("m34");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dm34 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   xbin = id7->FindBin(   70.250000000000000      );
  id7 -> SetBinContent( xbin,    1199.4107511889883      );
  id7 -> SetBinError( xbin,    36.585931018330541      );
   xbin = id7->FindBin(   70.750000000000000      );
  id7 -> SetBinContent( xbin,    1239.8263730685583      );
  id7 -> SetBinError( xbin,    36.414360248990029      );
   xbin = id7->FindBin(   71.250000000000000      );
  id7 -> SetBinContent( xbin,    1203.9836952762660      );
  id7 -> SetBinError( xbin,    34.600036686521399      );
   xbin = id7->FindBin(   71.750000000000000      );
  id7 -> SetBinContent( xbin,    1279.8383413558179      );
  id7 -> SetBinError( xbin,    36.718284628354994      );
   xbin = id7->FindBin(   72.250000000000000      );
  id7 -> SetBinContent( xbin,    1226.9473001558697      );
  id7 -> SetBinError( xbin,    33.905107304897214      );
   xbin = id7->FindBin(   72.750000000000000      );
  id7 -> SetBinContent( xbin,    1301.9223246583699      );
  id7 -> SetBinError( xbin,    35.454402582816861      );
   xbin = id7->FindBin(   73.250000000000000      );
  id7 -> SetBinContent( xbin,    1342.2386618756057      );
  id7 -> SetBinError( xbin,    34.568507274639032      );
   xbin = id7->FindBin(   73.750000000000000      );
  id7 -> SetBinContent( xbin,    1400.0033692196539      );
  id7 -> SetBinError( xbin,    34.356113398438197      );
   xbin = id7->FindBin(   74.250000000000000      );
  id7 -> SetBinContent( xbin,    1382.1916867361761      );
  id7 -> SetBinError( xbin,    33.766180730261141      );
   xbin = id7->FindBin(   74.750000000000000      );
  id7 -> SetBinContent( xbin,    1436.6663464409230      );
  id7 -> SetBinError( xbin,    35.206099493225636      );
   xbin = id7->FindBin(   75.250000000000000      );
  id7 -> SetBinContent( xbin,    1463.9959714152501      );
  id7 -> SetBinError( xbin,    35.690341776298872      );
   xbin = id7->FindBin(   75.750000000000000      );
  id7 -> SetBinContent( xbin,    1485.2178208740756      );
  id7 -> SetBinError( xbin,    35.830515100674944      );
   xbin = id7->FindBin(   76.250000000000000      );
  id7 -> SetBinContent( xbin,    1677.8753810115902      );
  id7 -> SetBinError( xbin,    37.730973705013845      );
   xbin = id7->FindBin(   76.750000000000000      );
  id7 -> SetBinContent( xbin,    1672.9727131923946      );
  id7 -> SetBinError( xbin,    36.724799914263421      );
   xbin = id7->FindBin(   77.250000000000000      );
  id7 -> SetBinContent( xbin,    1747.4445110206143      );
  id7 -> SetBinError( xbin,    37.214279308704597      );
   xbin = id7->FindBin(   77.750000000000000      );
  id7 -> SetBinContent( xbin,    1912.3871107198092      );
  id7 -> SetBinError( xbin,    38.471175417724943      );
   xbin = id7->FindBin(   78.250000000000000      );
  id7 -> SetBinContent( xbin,    1951.7648251625048      );
  id7 -> SetBinError( xbin,    40.655554235020197      );
   xbin = id7->FindBin(   78.750000000000000      );
  id7 -> SetBinContent( xbin,    2081.4013331734691      );
  id7 -> SetBinError( xbin,    43.273978462882916      );
   xbin = id7->FindBin(   79.250000000000000      );
  id7 -> SetBinContent( xbin,    2282.9027537068228      );
  id7 -> SetBinError( xbin,    44.676162828320166      );
   xbin = id7->FindBin(   79.750000000000000      );
  id7 -> SetBinContent( xbin,    2389.3734966131401      );
  id7 -> SetBinError( xbin,    45.305123502397279      );
   xbin = id7->FindBin(   80.250000000000000      );
  id7 -> SetBinContent( xbin,    2585.8847052974111      );
  id7 -> SetBinError( xbin,    46.499932218075408      );
   xbin = id7->FindBin(   80.750000000000000      );
  id7 -> SetBinContent( xbin,    2728.2310949964390      );
  id7 -> SetBinError( xbin,    47.500566797698532      );
   xbin = id7->FindBin(   81.250000000000000      );
  id7 -> SetBinContent( xbin,    2921.8329415642902      );
  id7 -> SetBinError( xbin,    49.947400254727782      );
   xbin = id7->FindBin(   81.750000000000000      );
  id7 -> SetBinContent( xbin,    3200.1048124445751      );
  id7 -> SetBinError( xbin,    52.231976483496560      );
   xbin = id7->FindBin(   82.250000000000000      );
  id7 -> SetBinContent( xbin,    3511.5984617689014      );
  id7 -> SetBinError( xbin,    53.908212459071493      );
   xbin = id7->FindBin(   82.750000000000000      );
  id7 -> SetBinContent( xbin,    3794.5995358042037      );
  id7 -> SetBinError( xbin,    55.830007919665832      );
   xbin = id7->FindBin(   83.250000000000000      );
  id7 -> SetBinContent( xbin,    4310.3626882894232      );
  id7 -> SetBinError( xbin,    59.738546087256267      );
   xbin = id7->FindBin(   83.750000000000000      );
  id7 -> SetBinContent( xbin,    4912.0996877275311      );
  id7 -> SetBinError( xbin,    63.378775425614350      );
   xbin = id7->FindBin(   84.250000000000000      );
  id7 -> SetBinContent( xbin,    5441.9163467493399      );
  id7 -> SetBinError( xbin,    67.478770867614557      );
   xbin = id7->FindBin(   84.750000000000000      );
  id7 -> SetBinContent( xbin,    6345.0572082499930      );
  id7 -> SetBinError( xbin,    73.425662969974042      );
   xbin = id7->FindBin(   85.250000000000000      );
  id7 -> SetBinContent( xbin,    7195.8634064708822      );
  id7 -> SetBinError( xbin,    77.185090283854223      );
   xbin = id7->FindBin(   85.750000000000000      );
  id7 -> SetBinContent( xbin,    8504.5031603650841      );
  id7 -> SetBinError( xbin,    83.785066619793582      );
   xbin = id7->FindBin(   86.250000000000000      );
  id7 -> SetBinContent( xbin,    10102.282214994599      );
  id7 -> SetBinError( xbin,    92.929451166848636      );
   xbin = id7->FindBin(   86.750000000000000      );
  id7 -> SetBinContent( xbin,    12048.993202484513      );
  id7 -> SetBinError( xbin,    99.185559852039418      );
   xbin = id7->FindBin(   87.250000000000000      );
  id7 -> SetBinContent( xbin,    15190.497920361171      );
  id7 -> SetBinError( xbin,    113.41850267205618      );
   xbin = id7->FindBin(   87.750000000000000      );
  id7 -> SetBinContent( xbin,    19013.205246492893      );
  id7 -> SetBinError( xbin,    125.82772300745069      );
   xbin = id7->FindBin(   88.250000000000000      );
  id7 -> SetBinContent( xbin,    24690.180809971967      );
  id7 -> SetBinError( xbin,    143.30279577787687      );
   xbin = id7->FindBin(   88.750000000000000      );
  id7 -> SetBinContent( xbin,    33312.246148620521      );
  id7 -> SetBinError( xbin,    166.88916052878702      );
   xbin = id7->FindBin(   89.250000000000000      );
  id7 -> SetBinContent( xbin,    46889.509762738155      );
  id7 -> SetBinError( xbin,    197.71139324403040      );
   xbin = id7->FindBin(   89.750000000000000      );
  id7 -> SetBinContent( xbin,    68418.211566817190      );
  id7 -> SetBinError( xbin,    238.72748199334575      );
   xbin = id7->FindBin(   90.250000000000000      );
  id7 -> SetBinContent( xbin,    100732.29582056116      );
  id7 -> SetBinError( xbin,    288.68231253350137      );
   xbin = id7->FindBin(   90.750000000000000      );
  id7 -> SetBinContent( xbin,    138377.72548995598      );
  id7 -> SetBinError( xbin,    337.85353793878920      );
   xbin = id7->FindBin(   91.250000000000000      );
  id7 -> SetBinContent( xbin,    154154.39067376207      );
  id7 -> SetBinError( xbin,    356.63983061680932      );
   xbin = id7->FindBin(   91.750000000000000      );
  id7 -> SetBinContent( xbin,    129184.62201944792      );
  id7 -> SetBinError( xbin,    327.29414049928960      );
   xbin = id7->FindBin(   92.250000000000000      );
  id7 -> SetBinContent( xbin,    90912.415611989025      );
  id7 -> SetBinError( xbin,    275.46829952251454      );
   xbin = id7->FindBin(   92.750000000000000      );
  id7 -> SetBinContent( xbin,    61134.096635505222      );
  id7 -> SetBinError( xbin,    226.37311960563102      );
   xbin = id7->FindBin(   93.250000000000000      );
  id7 -> SetBinContent( xbin,    41944.111823729414      );
  id7 -> SetBinError( xbin,    187.51715463000215      );
   xbin = id7->FindBin(   93.750000000000000      );
  id7 -> SetBinContent( xbin,    29490.774821744762      );
  id7 -> SetBinError( xbin,    157.72837103549327      );
   xbin = id7->FindBin(   94.250000000000000      );
  id7 -> SetBinContent( xbin,    21961.661125198763      );
  id7 -> SetBinError( xbin,    136.56989108928559      );
   xbin = id7->FindBin(   94.750000000000000      );
  id7 -> SetBinContent( xbin,    16807.707395764421      );
  id7 -> SetBinError( xbin,    119.46775609863317      );
   xbin = id7->FindBin(   95.250000000000000      );
  id7 -> SetBinContent( xbin,    13082.299362330605      );
  id7 -> SetBinError( xbin,    105.61142023363354      );
   xbin = id7->FindBin(   95.750000000000000      );
  id7 -> SetBinContent( xbin,    10489.431802471698      );
  id7 -> SetBinError( xbin,    94.551287146654488      );
   xbin = id7->FindBin(   96.250000000000000      );
  id7 -> SetBinContent( xbin,    8797.2532883854274      );
  id7 -> SetBinError( xbin,    86.067698216538204      );
   xbin = id7->FindBin(   96.750000000000000      );
  id7 -> SetBinContent( xbin,    7325.9425663182483      );
  id7 -> SetBinError( xbin,    80.706803916562464      );
   xbin = id7->FindBin(   97.250000000000000      );
  id7 -> SetBinContent( xbin,    6152.2507022125565      );
  id7 -> SetBinError( xbin,    72.849900811777687      );
   xbin = id7->FindBin(   97.750000000000000      );
  id7 -> SetBinContent( xbin,    5253.8074595264097      );
  id7 -> SetBinError( xbin,    66.306029244208645      );
   xbin = id7->FindBin(   98.250000000000000      );
  id7 -> SetBinContent( xbin,    4492.6508205703885      );
  id7 -> SetBinError( xbin,    61.340799748429433      );
   xbin = id7->FindBin(   98.750000000000000      );
  id7 -> SetBinContent( xbin,    3932.3231640568101      );
  id7 -> SetBinError( xbin,    59.245172359898696      );
   xbin = id7->FindBin(   99.250000000000000      );
  id7 -> SetBinContent( xbin,    3517.8330246010173      );
  id7 -> SetBinError( xbin,    56.395376122414227      );
   xbin = id7->FindBin(   99.750000000000000      );
  id7 -> SetBinContent( xbin,    3095.7916595571410      );
  id7 -> SetBinError( xbin,    52.572313255068757      );
   xbin = id7->FindBin(   100.25000000000000      );
  id7 -> SetBinContent( xbin,    2841.1531306913421      );
  id7 -> SetBinError( xbin,    49.751404414443471      );
   xbin = id7->FindBin(   100.75000000000000      );
  id7 -> SetBinContent( xbin,    2524.8330520721183      );
  id7 -> SetBinError( xbin,    46.286294960204806      );
   xbin = id7->FindBin(   101.25000000000000      );
  id7 -> SetBinContent( xbin,    2221.2239235283901      );
  id7 -> SetBinError( xbin,    43.129111681670977      );
   xbin = id7->FindBin(   101.75000000000000      );
  id7 -> SetBinContent( xbin,    2088.6182083745312      );
  id7 -> SetBinError( xbin,    42.054297031011366      );
   xbin = id7->FindBin(   102.25000000000000      );
  id7 -> SetBinContent( xbin,    1951.7257851756135      );
  id7 -> SetBinError( xbin,    40.840580832471062      );
   xbin = id7->FindBin(   102.75000000000000      );
  id7 -> SetBinContent( xbin,    1651.2983303090325      );
  id7 -> SetBinError( xbin,    37.112227590989313      );
   xbin = id7->FindBin(   103.25000000000000      );
  id7 -> SetBinContent( xbin,    1584.8880423985424      );
  id7 -> SetBinError( xbin,    37.304426891300615      );
   xbin = id7->FindBin(   103.75000000000000      );
  id7 -> SetBinContent( xbin,    1468.3382633052684      );
  id7 -> SetBinError( xbin,    35.938052942672172      );
   xbin = id7->FindBin(   104.25000000000000      );
  id7 -> SetBinContent( xbin,    1362.3681645869797      );
  id7 -> SetBinError( xbin,    35.166267148216960      );
   xbin = id7->FindBin(   104.75000000000000      );
  id7 -> SetBinContent( xbin,    1234.6798837257822      );
  id7 -> SetBinError( xbin,    32.821269189769559      );
   xbin = id7->FindBin(   105.25000000000000      );
  id7 -> SetBinContent( xbin,    1156.2654023013154      );
  id7 -> SetBinError( xbin,    32.955138278573521      );
   xbin = id7->FindBin(   105.75000000000000      );
  id7 -> SetBinContent( xbin,    1124.5726024978571      );
  id7 -> SetBinError( xbin,    31.787709728856186      );
   xbin = id7->FindBin(   106.25000000000000      );
  id7 -> SetBinContent( xbin,    1024.6754118999081      );
  id7 -> SetBinError( xbin,    30.309350310921868      );
   xbin = id7->FindBin(   106.75000000000000      );
  id7 -> SetBinContent( xbin,    940.28941556405869      );
  id7 -> SetBinError( xbin,    29.111576095401507      );
   xbin = id7->FindBin(   107.25000000000000      );
  id7 -> SetBinContent( xbin,    867.53170311585222      );
  id7 -> SetBinError( xbin,    27.932274682549227      );
   xbin = id7->FindBin(   107.75000000000000      );
  id7 -> SetBinContent( xbin,    935.80350689585703      );
  id7 -> SetBinError( xbin,    29.469154523855337      );
   xbin = id7->FindBin(   108.25000000000000      );
  id7 -> SetBinContent( xbin,    775.88897618147621      );
  id7 -> SetBinError( xbin,    25.992574306331498      );
   xbin = id7->FindBin(   108.75000000000000      );
  id7 -> SetBinContent( xbin,    752.46099153009561      );
  id7 -> SetBinError( xbin,    25.691337104080997      );
   xbin = id7->FindBin(   109.25000000000000      );
  id7 -> SetBinContent( xbin,    667.96111166491755      );
  id7 -> SetBinError( xbin,    24.335989120159763      );
   xbin = id7->FindBin(   109.75000000000000      );
  id7 -> SetBinContent( xbin,    666.80082053658134      );
  id7 -> SetBinError( xbin,    24.182365888548528      );
  histos -> Add(id7); 
 
 

  mcfmhisto -> cd();
  TH1F *id8 = new TH1F( "id8", "DeltaR35", 50,    0.00000,    5.00000);

  id8 -> GetXaxis() -> SetTitle("DeltaR35");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaR35 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   xbin = id8->FindBin(   5.0000000000000003E-002 );
  id8 -> SetBinContent( xbin,    585.76851282206746      );
  id8 -> SetBinError( xbin,    13.660707225520898      );
   xbin = id8->FindBin(  0.15000000000000002      );
  id8 -> SetBinContent( xbin,    1786.8550777829387      );
  id8 -> SetBinError( xbin,    23.357680617116269      );
   xbin = id8->FindBin(  0.25000000000000000      );
  id8 -> SetBinContent( xbin,    2858.0732600274614      );
  id8 -> SetBinError( xbin,    29.838208660634237      );
   xbin = id8->FindBin(  0.35000000000000003      );
  id8 -> SetBinContent( xbin,    4005.5010028999895      );
  id8 -> SetBinError( xbin,    35.312665876844314      );
   xbin = id8->FindBin(  0.45000000000000001      );
  id8 -> SetBinContent( xbin,    5186.3339794088470      );
  id8 -> SetBinError( xbin,    40.661234387475972      );
   xbin = id8->FindBin(  0.55000000000000004      );
  id8 -> SetBinContent( xbin,    6251.1445774137956      );
  id8 -> SetBinError( xbin,    45.038966355474209      );
   xbin = id8->FindBin(  0.65000000000000002      );
  id8 -> SetBinContent( xbin,    7322.8547911898168      );
  id8 -> SetBinError( xbin,    48.575547174723283      );
   xbin = id8->FindBin(  0.75000000000000000      );
  id8 -> SetBinContent( xbin,    8535.2533608349422      );
  id8 -> SetBinError( xbin,    53.254823177857773      );
   xbin = id8->FindBin(  0.85000000000000009      );
  id8 -> SetBinContent( xbin,    9668.7858686232084      );
  id8 -> SetBinError( xbin,    56.918699791547596      );
   xbin = id8->FindBin(  0.95000000000000007      );
  id8 -> SetBinContent( xbin,    10878.791916483811      );
  id8 -> SetBinError( xbin,    60.942784685679698      );
   xbin = id8->FindBin(   1.0500000000000000      );
  id8 -> SetBinContent( xbin,    11920.564844520544      );
  id8 -> SetBinError( xbin,    64.199431541608078      );
   xbin = id8->FindBin(   1.1500000000000001      );
  id8 -> SetBinContent( xbin,    12876.359266654819      );
  id8 -> SetBinError( xbin,    66.961599585745745      );
   xbin = id8->FindBin(   1.2500000000000000      );
  id8 -> SetBinContent( xbin,    14129.937882601957      );
  id8 -> SetBinError( xbin,    70.383498714684492      );
   xbin = id8->FindBin(   1.3500000000000001      );
  id8 -> SetBinContent( xbin,    15157.297828463603      );
  id8 -> SetBinError( xbin,    73.583586850976630      );
   xbin = id8->FindBin(   1.4500000000000002      );
  id8 -> SetBinContent( xbin,    16176.232048663529      );
  id8 -> SetBinError( xbin,    76.356149730710342      );
   xbin = id8->FindBin(   1.5500000000000000      );
  id8 -> SetBinContent( xbin,    17416.620634792285      );
  id8 -> SetBinError( xbin,    79.749879799775442      );
   xbin = id8->FindBin(   1.6500000000000001      );
  id8 -> SetBinContent( xbin,    18743.931378318182      );
  id8 -> SetBinError( xbin,    82.717305705845703      );
   xbin = id8->FindBin(   1.7500000000000000      );
  id8 -> SetBinContent( xbin,    19782.132447719530      );
  id8 -> SetBinError( xbin,    85.317356383625068      );
   xbin = id8->FindBin(   1.8500000000000001      );
  id8 -> SetBinContent( xbin,    21296.285698331852      );
  id8 -> SetBinError( xbin,    88.851871880841600      );
   xbin = id8->FindBin(   1.9500000000000002      );
  id8 -> SetBinContent( xbin,    22814.300805505467      );
  id8 -> SetBinError( xbin,    92.363402807504187      );
   xbin = id8->FindBin(   2.0500000000000003      );
  id8 -> SetBinContent( xbin,    24306.047123318713      );
  id8 -> SetBinError( xbin,    95.489222364055223      );
   xbin = id8->FindBin(   2.1499999999999999      );
  id8 -> SetBinContent( xbin,    26008.326619733038      );
  id8 -> SetBinError( xbin,    98.722874346557717      );
   xbin = id8->FindBin(   2.2500000000000000      );
  id8 -> SetBinContent( xbin,    27993.298060186524      );
  id8 -> SetBinError( xbin,    102.70867046911893      );
   xbin = id8->FindBin(   2.3500000000000001      );
  id8 -> SetBinContent( xbin,    30099.112561271726      );
  id8 -> SetBinError( xbin,    105.84513209091620      );
   xbin = id8->FindBin(   2.4500000000000002      );
  id8 -> SetBinContent( xbin,    32522.991298660549      );
  id8 -> SetBinError( xbin,    109.62275802912652      );
   xbin = id8->FindBin(   2.5500000000000003      );
  id8 -> SetBinContent( xbin,    35395.290999633224      );
  id8 -> SetBinError( xbin,    114.20639343877562      );
   xbin = id8->FindBin(   2.6500000000000004      );
  id8 -> SetBinContent( xbin,    38317.267884218927      );
  id8 -> SetBinError( xbin,    118.59809985467226      );
   xbin = id8->FindBin(   2.7500000000000000      );
  id8 -> SetBinContent( xbin,    42054.880619336895      );
  id8 -> SetBinError( xbin,    124.88208055924981      );
   xbin = id8->FindBin(   2.8500000000000001      );
  id8 -> SetBinContent( xbin,    45505.728365766350      );
  id8 -> SetBinError( xbin,    129.21197080086748      );
   xbin = id8->FindBin(   2.9500000000000002      );
  id8 -> SetBinContent( xbin,    49425.330909714452      );
  id8 -> SetBinError( xbin,    135.74201823153336      );
   xbin = id8->FindBin(   3.0500000000000003      );
  id8 -> SetBinContent( xbin,    53013.010732527706      );
  id8 -> SetBinError( xbin,    139.59353432213052      );
   xbin = id8->FindBin(   3.1500000000000004      );
  id8 -> SetBinContent( xbin,    48581.424321789178      );
  id8 -> SetBinError( xbin,    140.03280283574867      );
   xbin = id8->FindBin(   3.2500000000000000      );
  id8 -> SetBinContent( xbin,    32298.480695198610      );
  id8 -> SetBinError( xbin,    128.73368727494429      );
   xbin = id8->FindBin(   3.3500000000000001      );
  id8 -> SetBinContent( xbin,    24968.006778159852      );
  id8 -> SetBinError( xbin,    124.46851170546806      );
   xbin = id8->FindBin(   3.4500000000000002      );
  id8 -> SetBinContent( xbin,    20316.670474354534      );
  id8 -> SetBinError( xbin,    120.82958250376129      );
   xbin = id8->FindBin(   3.5500000000000003      );
  id8 -> SetBinContent( xbin,    16691.158651974027      );
  id8 -> SetBinError( xbin,    118.63680281054381      );
   xbin = id8->FindBin(   3.6500000000000004      );
  id8 -> SetBinContent( xbin,    13757.640752756224      );
  id8 -> SetBinError( xbin,    114.99910161260470      );
   xbin = id8->FindBin(   3.7500000000000000      );
  id8 -> SetBinContent( xbin,    11374.495149519658      );
  id8 -> SetBinError( xbin,    110.42244800491150      );
   xbin = id8->FindBin(   3.8500000000000001      );
  id8 -> SetBinContent( xbin,    9468.8815609619160      );
  id8 -> SetBinError( xbin,    106.13824264817899      );
   xbin = id8->FindBin(   3.9500000000000002      );
  id8 -> SetBinContent( xbin,    7999.6242940476623      );
  id8 -> SetBinError( xbin,    103.30267454013718      );
   xbin = id8->FindBin(   4.0499999999999998      );
  id8 -> SetBinContent( xbin,    6599.8854029006216      );
  id8 -> SetBinError( xbin,    95.797317561123265      );
   xbin = id8->FindBin(   4.1500000000000004      );
  id8 -> SetBinContent( xbin,    5676.0440279494915      );
  id8 -> SetBinError( xbin,    93.942646845741649      );
   xbin = id8->FindBin(   4.2500000000000000      );
  id8 -> SetBinContent( xbin,    4714.1046138148822      );
  id8 -> SetBinError( xbin,    88.877258478060298      );
   xbin = id8->FindBin(   4.3500000000000005      );
  id8 -> SetBinContent( xbin,    3951.3694113258057      );
  id8 -> SetBinError( xbin,    84.520457893961051      );
   xbin = id8->FindBin(   4.4500000000000002      );
  id8 -> SetBinContent( xbin,    3343.7989827827209      );
  id8 -> SetBinError( xbin,    81.029893081429393      );
   xbin = id8->FindBin(   4.5499999999999998      );
  id8 -> SetBinContent( xbin,    2925.4694436144587      );
  id8 -> SetBinError( xbin,    79.581300656685599      );
   xbin = id8->FindBin(   4.6500000000000004      );
  id8 -> SetBinContent( xbin,    2328.9137421455607      );
  id8 -> SetBinError( xbin,    72.614652891399786      );
   xbin = id8->FindBin(   4.7500000000000000      );
  id8 -> SetBinContent( xbin,    1922.4264758762356      );
  id8 -> SetBinError( xbin,    66.563226561231417      );
   xbin = id8->FindBin(   4.8500000000000005      );
  id8 -> SetBinContent( xbin,    1709.6100679953631      );
  id8 -> SetBinError( xbin,    66.169908416433088      );
   xbin = id8->FindBin(   4.9500000000000002      );
  id8 -> SetBinContent( xbin,    1420.5494000498434      );
  id8 -> SetBinError( xbin,    61.674607302677209      );
  histos -> Add(id8); 
 
 

  mcfmhisto -> cd();
  TH1F *id9 = new TH1F( "id9", "y5", 12,   -3.20000,    3.20000);

  id9 -> GetXaxis() -> SetTitle("y5");
  id9 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id9 -> GetYaxis() -> SetTitleOffset(1.2);
  id9 -> SetStats(false);
   xbin = id9->FindBin(  -2.4500000000000002      );
  id9 -> SetBinContent( xbin,    4174.7515984134607      );
  id9 -> SetBinError( xbin,    20.583771145259824      );
   xbin = id9->FindBin(  -1.9500000000000002      );
  id9 -> SetBinContent( xbin,    13422.376568921240      );
  id9 -> SetBinError( xbin,    35.743074242648738      );
   xbin = id9->FindBin(  -1.4500000000000002      );
  id9 -> SetBinContent( xbin,    17629.137898598437      );
  id9 -> SetBinError( xbin,    41.708688698159634      );
   xbin = id9->FindBin( -0.95000000000000018      );
  id9 -> SetBinContent( xbin,    20766.887668822208      );
  id9 -> SetBinError( xbin,    45.196111366624805      );
   xbin = id9->FindBin( -0.45000000000000018      );
  id9 -> SetBinContent( xbin,    22667.901608807926      );
  id9 -> SetBinError( xbin,    48.621829006386790      );
   xbin = id9->FindBin(   4.9999999999999822E-002 );
  id9 -> SetBinContent( xbin,    22977.280948201136      );
  id9 -> SetBinError( xbin,    49.082809454453468      );
   xbin = id9->FindBin(  0.54999999999999982      );
  id9 -> SetBinContent( xbin,    21665.807344984165      );
  id9 -> SetBinError( xbin,    47.555138652837122      );
   xbin = id9->FindBin(   1.0499999999999998      );
  id9 -> SetBinContent( xbin,    19294.277803347377      );
  id9 -> SetBinError( xbin,    44.423888424370773      );
   xbin = id9->FindBin(   1.5499999999999998      );
  id9 -> SetBinContent( xbin,    15723.008809318193      );
  id9 -> SetBinError( xbin,    39.969566420397072      );
   xbin = id9->FindBin(   2.0499999999999998      );
  id9 -> SetBinContent( xbin,    11540.137946342824      );
  id9 -> SetBinError( xbin,    33.928161106320573      );
   xbin = id9->FindBin(   2.5499999999999998      );
  id9 -> SetBinContent( xbin,    1801.3576940699329      );
  id9 -> SetBinError( xbin,    13.455884356442590      );
  histos -> Add(id9); 
 
 

  mcfmhisto -> cd();
  TH1F *id10 = new TH1F( "id10", "pt5", 50,    0.00000,  100.00000);

  id10 -> GetXaxis() -> SetTitle("pt5");
  id10 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id10 -> GetYaxis() -> SetTitleOffset(1.2);
  id10 -> SetStats(false);
   xbin = id10->FindBin(   21.000000000000000      );
  id10 -> SetBinContent( xbin,    4722.9819963883565      );
  id10 -> SetBinError( xbin,    13.451139101186131      );
   xbin = id10->FindBin(   23.000000000000000      );
  id10 -> SetBinContent( xbin,    4043.6891182295726      );
  id10 -> SetBinError( xbin,    11.910099421566038      );
   xbin = id10->FindBin(   25.000000000000000      );
  id10 -> SetBinContent( xbin,    3468.2415620320517      );
  id10 -> SetBinError( xbin,    10.654494289462285      );
   xbin = id10->FindBin(   27.000000000000000      );
  id10 -> SetBinContent( xbin,    3010.3453129582194      );
  id10 -> SetBinError( xbin,    9.5588454631180966      );
   xbin = id10->FindBin(   29.000000000000000      );
  id10 -> SetBinContent( xbin,    2649.1775003199646      );
  id10 -> SetBinError( xbin,    8.7159565462554447      );
   xbin = id10->FindBin(   31.000000000000000      );
  id10 -> SetBinContent( xbin,    2334.3425729022215      );
  id10 -> SetBinError( xbin,    7.9589206074556209      );
   xbin = id10->FindBin(   33.000000000000000      );
  id10 -> SetBinContent( xbin,    2070.4329788750902      );
  id10 -> SetBinError( xbin,    7.4081593085914879      );
   xbin = id10->FindBin(   35.000000000000000      );
  id10 -> SetBinContent( xbin,    1831.8317133414967      );
  id10 -> SetBinError( xbin,    6.8333841013534666      );
   xbin = id10->FindBin(   37.000000000000000      );
  id10 -> SetBinContent( xbin,    1633.3169573453251      );
  id10 -> SetBinError( xbin,    6.2269218795251007      );
   xbin = id10->FindBin(   39.000000000000000      );
  id10 -> SetBinContent( xbin,    1466.4368805868371      );
  id10 -> SetBinError( xbin,    5.7214289509458940      );
   xbin = id10->FindBin(   41.000000000000000      );
  id10 -> SetBinContent( xbin,    1319.4133576476170      );
  id10 -> SetBinError( xbin,    5.3539383606551354      );
   xbin = id10->FindBin(   43.000000000000000      );
  id10 -> SetBinContent( xbin,    1193.2066775859976      );
  id10 -> SetBinError( xbin,    4.9714997855964240      );
   xbin = id10->FindBin(   45.000000000000000      );
  id10 -> SetBinContent( xbin,    1073.3011492126054      );
  id10 -> SetBinError( xbin,    4.6302774078709792      );
   xbin = id10->FindBin(   47.000000000000000      );
  id10 -> SetBinContent( xbin,    964.63578067919252      );
  id10 -> SetBinError( xbin,    4.3422176194432858      );
   xbin = id10->FindBin(   49.000000000000000      );
  id10 -> SetBinContent( xbin,    878.79861420896566      );
  id10 -> SetBinError( xbin,    4.1283732191849651      );
   xbin = id10->FindBin(   51.000000000000000      );
  id10 -> SetBinContent( xbin,    797.36997920343538      );
  id10 -> SetBinError( xbin,    3.8419414587037366      );
   xbin = id10->FindBin(   53.000000000000000      );
  id10 -> SetBinContent( xbin,    724.19551972265606      );
  id10 -> SetBinError( xbin,    3.6245159499965212      );
   xbin = id10->FindBin(   55.000000000000000      );
  id10 -> SetBinContent( xbin,    664.38652276086043      );
  id10 -> SetBinError( xbin,    3.4390039934379457      );
   xbin = id10->FindBin(   57.000000000000000      );
  id10 -> SetBinContent( xbin,    606.96254687980627      );
  id10 -> SetBinError( xbin,    3.1547063855980029      );
   xbin = id10->FindBin(   59.000000000000000      );
  id10 -> SetBinContent( xbin,    554.88559656300470      );
  id10 -> SetBinError( xbin,    3.0364206465355088      );
   xbin = id10->FindBin(   61.000000000000000      );
  id10 -> SetBinContent( xbin,    502.71999579716743      );
  id10 -> SetBinError( xbin,    2.8525581608155219      );
   xbin = id10->FindBin(   63.000000000000000      );
  id10 -> SetBinContent( xbin,    461.73991871804014      );
  id10 -> SetBinError( xbin,    2.6844231827456078      );
   xbin = id10->FindBin(   65.000000000000000      );
  id10 -> SetBinContent( xbin,    425.67261442691847      );
  id10 -> SetBinError( xbin,    2.5817169385679271      );
   xbin = id10->FindBin(   67.000000000000000      );
  id10 -> SetBinContent( xbin,    390.38585537652699      );
  id10 -> SetBinError( xbin,    2.4093493393476475      );
   xbin = id10->FindBin(   69.000000000000000      );
  id10 -> SetBinContent( xbin,    357.58852086316841      );
  id10 -> SetBinError( xbin,    2.3045040927850438      );
   xbin = id10->FindBin(   71.000000000000000      );
  id10 -> SetBinContent( xbin,    326.41310352332965      );
  id10 -> SetBinError( xbin,    2.1269870035559784      );
   xbin = id10->FindBin(   73.000000000000000      );
  id10 -> SetBinContent( xbin,    303.98199591068936      );
  id10 -> SetBinError( xbin,    2.0700522582838907      );
   xbin = id10->FindBin(   75.000000000000000      );
  id10 -> SetBinContent( xbin,    280.69052723093120      );
  id10 -> SetBinError( xbin,    1.9791516489789649      );
   xbin = id10->FindBin(   77.000000000000000      );
  id10 -> SetBinContent( xbin,    259.84419996955370      );
  id10 -> SetBinError( xbin,    1.9345802735525326      );
   xbin = id10->FindBin(   79.000000000000000      );
  id10 -> SetBinContent( xbin,    239.08130211479670      );
  id10 -> SetBinError( xbin,    1.7784081587667491      );
   xbin = id10->FindBin(   81.000000000000000      );
  id10 -> SetBinContent( xbin,    222.58621072954980      );
  id10 -> SetBinError( xbin,    1.6923889507624510      );
   xbin = id10->FindBin(   83.000000000000000      );
  id10 -> SetBinContent( xbin,    206.92542062787061      );
  id10 -> SetBinError( xbin,    1.6219950070288802      );
   xbin = id10->FindBin(   85.000000000000000      );
  id10 -> SetBinContent( xbin,    186.60138093209062      );
  id10 -> SetBinError( xbin,    1.5220363052032082      );
   xbin = id10->FindBin(   87.000000000000000      );
  id10 -> SetBinContent( xbin,    175.37827555061193      );
  id10 -> SetBinError( xbin,    1.4931943687122993      );
   xbin = id10->FindBin(   89.000000000000000      );
  id10 -> SetBinContent( xbin,    162.02874318750312      );
  id10 -> SetBinError( xbin,    1.4050089019106897      );
   xbin = id10->FindBin(   91.000000000000000      );
  id10 -> SetBinContent( xbin,    149.60049011734844      );
  id10 -> SetBinError( xbin,    1.3427702350934372      );
   xbin = id10->FindBin(   93.000000000000000      );
  id10 -> SetBinContent( xbin,    140.84376292996873      );
  id10 -> SetBinError( xbin,    1.3122433514442264      );
   xbin = id10->FindBin(   95.000000000000000      );
  id10 -> SetBinContent( xbin,    130.85680391303913      );
  id10 -> SetBinError( xbin,    1.2751451642563760      );
   xbin = id10->FindBin(   97.000000000000000      );
  id10 -> SetBinContent( xbin,    120.93890183630718      );
  id10 -> SetBinError( xbin,    1.1636207383510100      );
   xbin = id10->FindBin(   99.000000000000000      );
  id10 -> SetBinContent( xbin,    111.78355437413434      );
  id10 -> SetBinError( xbin,    1.1135016344149573      );
  histos -> Add(id10); 
 
 

  mcfmhisto -> cd();
  TH1F *id11 = new TH1F( "id11", "m34 forward lepton", 32,   40.00000,  200.00000);

  id11 -> GetXaxis() -> SetTitle("m34 forward lepton");
  id11 -> GetYaxis() -> SetTitle(" d#sigma/dm34 forward lepton [fb]");

  id11 -> GetYaxis() -> SetTitleOffset(1.2);
  id11 -> SetStats(false);
   xbin = id11->FindBin(   62.500000000000000      );
  id11 -> SetBinContent( xbin,    459.64022691822652      );
  id11 -> SetBinError( xbin,    7.7422592716104557      );
   xbin = id11->FindBin(   67.500000000000000      );
  id11 -> SetBinContent( xbin,    448.08424529830631      );
  id11 -> SetBinError( xbin,    4.9054050146374735      );
   xbin = id11->FindBin(   72.500000000000000      );
  id11 -> SetBinContent( xbin,    503.29991200247372      );
  id11 -> SetBinError( xbin,    5.8499772317430310      );
   xbin = id11->FindBin(   77.500000000000000      );
  id11 -> SetBinContent( xbin,    775.56297388906603      );
  id11 -> SetBinError( xbin,    7.1891867185917695      );
   xbin = id11->FindBin(   82.500000000000000      );
  id11 -> SetBinContent( xbin,    1822.7414749134869      );
  id11 -> SetBinError( xbin,    11.687664645626565      );
   xbin = id11->FindBin(   87.500000000000000      );
  id11 -> SetBinContent( xbin,    12412.244365264965      );
  id11 -> SetBinError( xbin,    32.363692368488131      );
   xbin = id11->FindBin(   92.500000000000000      );
  id11 -> SetBinContent( xbin,    41717.462069204528      );
  id11 -> SetBinError( xbin,    60.011986442259456      );
   xbin = id11->FindBin(   97.500000000000000      );
  id11 -> SetBinContent( xbin,    3765.0792484757985      );
  id11 -> SetBinError( xbin,    19.081647102918147      );
   xbin = id11->FindBin(   102.50000000000000      );
  id11 -> SetBinContent( xbin,    1122.6987601420249      );
  id11 -> SetBinError( xbin,    10.570422790588692      );
   xbin = id11->FindBin(   107.50000000000000      );
  id11 -> SetBinContent( xbin,    541.08511014672911      );
  id11 -> SetBinError( xbin,    7.5753451503798201      );
   xbin = id11->FindBin(   112.50000000000000      );
  id11 -> SetBinContent( xbin,    323.06809741651449      );
  id11 -> SetBinError( xbin,    5.8610627171394460      );
   xbin = id11->FindBin(   117.50000000000000      );
  id11 -> SetBinContent( xbin,    210.57998602850296      );
  id11 -> SetBinError( xbin,    4.8007443924412900      );
  histos -> Add(id11); 
 
 

  mcfmhisto -> cd();
  TH1F *id12 = new TH1F( "id12", "m34 backward lepton", 32,   40.00000,  200.00000);

  id12 -> GetXaxis() -> SetTitle("m34 backward lepton");
  id12 -> GetYaxis() -> SetTitle(" d#sigma/dm34 backward lepton [fb]");

  id12 -> GetYaxis() -> SetTitleOffset(1.2);
  id12 -> SetStats(false);
   xbin = id12->FindBin(   62.500000000000000      );
  id12 -> SetBinContent( xbin,    761.40526331890601      );
  id12 -> SetBinError( xbin,    10.949950081439273      );
   xbin = id12->FindBin(   67.500000000000000      );
  id12 -> SetBinContent( xbin,    709.11878412679675      );
  id12 -> SetBinError( xbin,    8.1357772710581706      );
   xbin = id12->FindBin(   72.500000000000000      );
  id12 -> SetBinContent( xbin,    798.00297299516546      );
  id12 -> SetBinError( xbin,    9.5279054808417243      );
   xbin = id12->FindBin(   77.500000000000000      );
  id12 -> SetBinContent( xbin,    1090.9706177999162      );
  id12 -> SetBinError( xbin,    10.321793014051885      );
   xbin = id12->FindBin(   82.500000000000000      );
  id12 -> SetBinContent( xbin,    2152.4272733756529      );
  id12 -> SetBinError( xbin,    14.009255266980462      );
   xbin = id12->FindBin(   87.500000000000000      );
  id12 -> SetBinContent( xbin,    12124.304978666916      );
  id12 -> SetBinError( xbin,    31.546667637827412      );
   xbin = id12->FindBin(   92.500000000000000      );
  id12 -> SetBinContent( xbin,    36752.518072561259      );
  id12 -> SetBinError( xbin,    52.543798088182925      );
   xbin = id12->FindBin(   97.500000000000000      );
  id12 -> SetBinContent( xbin,    2848.8791365274269      );
  id12 -> SetBinError( xbin,    14.343157358172382      );
   xbin = id12->FindBin(   102.50000000000000      );
  id12 -> SetBinContent( xbin,    770.21391827471052      );
  id12 -> SetBinError( xbin,    7.1880848643397997      );
   xbin = id12->FindBin(   107.50000000000000      );
  id12 -> SetBinContent( xbin,    350.13988407206443      );
  id12 -> SetBinError( xbin,    4.8146095168077263      );
   xbin = id12->FindBin(   112.50000000000000      );
  id12 -> SetBinContent( xbin,    197.33547918129054      );
  id12 -> SetBinError( xbin,    3.5653686476460327      );
   xbin = id12->FindBin(   117.50000000000000      );
  id12 -> SetBinContent( xbin,    126.49930582751406      );
  id12 -> SetBinError( xbin,    2.8406786305816110      );
  histos -> Add(id12); 
 
 

  mcfmhisto -> cd();
  TH1F *id13 = new TH1F( "id13", "lepton FB asymmetry", 32,   40.00000,  200.00000);

  id13 -> GetXaxis() -> SetTitle("lepton FB asymmetry");
  id13 -> GetYaxis() -> SetTitle(" d#sigma/dlepton FB asymmetry [fb]");

  id13 -> GetYaxis() -> SetTitleOffset(1.2);
  id13 -> SetStats(false);
   xbin = id13->FindBin(   62.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.4713660450281456E-002 );
  id13 -> SetBinError( xbin,    8.5894517764103257E-006 );
   xbin = id13->FindBin(   67.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.2557367392839620E-002 );
  id13 -> SetBinError( xbin,    7.8400130087309666E-006 );
   xbin = id13->FindBin(   72.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.2646769202638507E-002 );
  id13 -> SetBinError( xbin,    7.8710854002747541E-006 );
   xbin = id13->FindBin(   77.500000000000000      );
  id13 -> SetBinContent( xbin,   -1.6898042730934478E-002 );
  id13 -> SetBinError( xbin,    5.8730645525005472E-006 );
   xbin = id13->FindBin(   82.500000000000000      );
  id13 -> SetBinContent( xbin,   -8.2936302667417274E-003 );
  id13 -> SetBinError( xbin,    2.8825247223441504E-006 );
   xbin = id13->FindBin(   87.500000000000000      );
  id13 -> SetBinContent( xbin,    1.1735121453386379E-003 );
  id13 -> SetBinError( xbin,    4.0786454931257499E-007 );
   xbin = id13->FindBin(   92.500000000000000      );
  id13 -> SetBinContent( xbin,    6.3271890554610442E-003 );
  id13 -> SetBinError( xbin,    2.1990706468371378E-006 );
   xbin = id13->FindBin(   97.500000000000000      );
  id13 -> SetBinContent( xbin,    1.3852523082482700E-002 );
  id13 -> SetBinError( xbin,    4.8145672001106158E-006 );
   xbin = id13->FindBin(   102.50000000000000      );
  id13 -> SetBinContent( xbin,    1.8621294362196283E-002 );
  id13 -> SetBinError( xbin,    6.4719959335932716E-006 );
   xbin = id13->FindBin(   107.50000000000000      );
  id13 -> SetBinContent( xbin,    2.1425030414686529E-002 );
  id13 -> SetBinError( xbin,    7.4464592537921114E-006 );
   xbin = id13->FindBin(   112.50000000000000      );
  id13 -> SetBinContent( xbin,    2.4160598406570269E-002 );
  id13 -> SetBinError( xbin,    8.3972301602164330E-006 );
   xbin = id13->FindBin(   117.50000000000000      );
  id13 -> SetBinContent( xbin,    2.4943887753538965E-002 );
  id13 -> SetBinError( xbin,    8.6694693166254515E-006 );
  histos -> Add(id13); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 )   {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
