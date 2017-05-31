// Cross-section is:      1865626.7081880008 +/-          801.4245704077)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -49216.54359   -2.64%
//        GQB    |      -45689.35896   -2.45%
//        QG     |      -47935.45019   -2.57%
//        QBG    |      -43890.42978   -2.35%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      954538.16693   51.16%
//        QBQ    |     1105773.45732   59.27%

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
//Wm_NNPDF23_nlo_as_01            [runstring]  
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
//             NNPDF23            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//NNPDF23_nlo_as_0114.            [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//NNPDF23_nlo_as_0114.            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_NNPDF23_80__80__Wm_NNPDF23_nlo_as_0114.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -8.7703997353385053E-003 );
  id1 -> SetBinError( xbin,    6.4773266722215228E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    16.540286477832126      );
  id1 -> SetBinError( xbin,    2.1730575715485130      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    257.39063099891609      );
  id1 -> SetBinError( xbin,    44.079863028299997      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2101.0285493494534      );
  id1 -> SetBinError( xbin,    138.10204481603105      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    9075.2376057435140      );
  id1 -> SetBinError( xbin,    410.69952820591658      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    28749.423493900955      );
  id1 -> SetBinError( xbin,    909.69248110584317      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    70305.427324579083      );
  id1 -> SetBinError( xbin,    1276.8433272020152      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    132365.81475468716      );
  id1 -> SetBinError( xbin,    1311.2866312393080      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    203455.06235268223      );
  id1 -> SetBinError( xbin,    1543.3527210268132      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    283562.78489645681      );
  id1 -> SetBinError( xbin,    1734.6095896164495      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    340992.83377787872      );
  id1 -> SetBinError( xbin,    1827.6676858581484      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    382319.73819818272      );
  id1 -> SetBinError( xbin,    1907.4635959478187      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    394094.56171351200      );
  id1 -> SetBinError( xbin,    1912.7969796459904      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    396695.74334016826      );
  id1 -> SetBinError( xbin,    1899.8416020397278      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    397682.38698850235      );
  id1 -> SetBinError( xbin,    1921.6337121537540      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    398490.72131898114      );
  id1 -> SetBinError( xbin,    1939.2356361693712      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    403405.94861174258      );
  id1 -> SetBinError( xbin,    1952.1373491954905      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    400408.49554712622      );
  id1 -> SetBinError( xbin,    1957.2185587709655      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    401917.71521032165      );
  id1 -> SetBinError( xbin,    1854.3005948607738      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    393400.13422697649      );
  id1 -> SetBinError( xbin,    1868.7676987037757      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    400509.20425264485      );
  id1 -> SetBinError( xbin,    1887.8495449064137      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    392624.82306429051      );
  id1 -> SetBinError( xbin,    1877.5850417847932      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    388157.83327578678      );
  id1 -> SetBinError( xbin,    1846.4926736399793      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    384356.68408340280      );
  id1 -> SetBinError( xbin,    1834.9250249529330      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    379867.12568813516      );
  id1 -> SetBinError( xbin,    1930.8733708176455      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    362916.60506354488      );
  id1 -> SetBinError( xbin,    2376.0490989790783      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    357929.18171857530      );
  id1 -> SetBinError( xbin,    2280.0803314924528      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    349311.26461734541      );
  id1 -> SetBinError( xbin,    1765.1890050615773      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    331507.62743324367      );
  id1 -> SetBinError( xbin,    1777.4867983596862      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    314079.69276678923      );
  id1 -> SetBinError( xbin,    1742.4335520103418      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    296426.91082373215      );
  id1 -> SetBinError( xbin,    1689.5918939589349      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    248572.48170309441      );
  id1 -> SetBinError( xbin,    1595.0363519012019      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    193510.22579945702      );
  id1 -> SetBinError( xbin,    1452.7954540244380      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    137886.35077685036      );
  id1 -> SetBinError( xbin,    1274.7282873358765      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    84645.281037270674      );
  id1 -> SetBinError( xbin,    1094.2190820423907      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    42903.824010435295      );
  id1 -> SetBinError( xbin,    882.16294002933626      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    17285.431173764999      );
  id1 -> SetBinError( xbin,    538.30546075892289      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    5353.4898442680933      );
  id1 -> SetBinError( xbin,    275.86901445187033      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1025.8364987315601      );
  id1 -> SetBinError( xbin,    79.517434972189463      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    77.710402095495908      );
  id1 -> SetBinError( xbin,    9.6611237982572948      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    8.6123503710592608      );
  id1 -> SetBinError( xbin,    1.0960959663096645      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   0.12436948784250586      );
  id1 -> SetBinError( xbin,    9.0509672035471209E-002 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    778295.26043399866      );
  id2 -> SetBinError( xbin,    6985.9961434246015      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    748093.22241172811      );
  id2 -> SetBinError( xbin,    6350.4412486327501      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    719704.57724762720      );
  id2 -> SetBinError( xbin,    6673.7422419746945      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    686526.91016479861      );
  id2 -> SetBinError( xbin,    6693.1396660951268      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    648090.32447458047      );
  id2 -> SetBinError( xbin,    4893.7455812721946      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    611102.26122590364      );
  id2 -> SetBinError( xbin,    4494.3290590778424      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    578056.13787956489      );
  id2 -> SetBinError( xbin,    3877.7526609570054      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    556068.56625954807      );
  id2 -> SetBinError( xbin,    6094.8041073019585      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    516567.40623006580      );
  id2 -> SetBinError( xbin,    3713.0282631264049      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    485822.40524739982      );
  id2 -> SetBinError( xbin,    3358.3954239777290      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    454621.27157805156      );
  id2 -> SetBinError( xbin,    2966.7672481679274      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    422018.64559703332      );
  id2 -> SetBinError( xbin,    2624.2769812516744      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    390086.29394195171      );
  id2 -> SetBinError( xbin,    2604.2085833246447      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    364759.09342817008      );
  id2 -> SetBinError( xbin,    2122.1845255670642      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    337401.03960275016      );
  id2 -> SetBinError( xbin,    2412.8109166160248      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    302328.97746527795      );
  id2 -> SetBinError( xbin,    1848.3563074765723      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    270804.40714844456      );
  id2 -> SetBinError( xbin,    1687.7952308995502      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    244738.12644211433      );
  id2 -> SetBinError( xbin,    1762.8232423057268      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    221359.03979462606      );
  id2 -> SetBinError( xbin,    1557.7602999120147      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    195056.77356826497      );
  id2 -> SetBinError( xbin,    1328.1660698470080      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    171121.34276625334      );
  id2 -> SetBinError( xbin,    1253.8903898315141      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    149143.06445257913      );
  id2 -> SetBinError( xbin,    973.37834947605336      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    134492.15692801765      );
  id2 -> SetBinError( xbin,    1562.9079471525702      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    115826.50098509976      );
  id2 -> SetBinError( xbin,    956.66686307085524      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    100972.14254222900      );
  id2 -> SetBinError( xbin,    720.36505990221758      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    89580.264963225185      );
  id2 -> SetBinError( xbin,    753.38908168780983      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    79530.811504516663      );
  id2 -> SetBinError( xbin,    620.24789166699441      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    72912.531694660414      );
  id2 -> SetBinError( xbin,    621.01447906533315      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    68609.120463264902      );
  id2 -> SetBinError( xbin,    700.73782545207428      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    66416.228844438025      );
  id2 -> SetBinError( xbin,    637.02905038207518      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    65953.378907809267      );
  id2 -> SetBinError( xbin,    636.96566877469036      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    67563.545219037856      );
  id2 -> SetBinError( xbin,    571.88210426258274      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    72490.781438487204      );
  id2 -> SetBinError( xbin,    1023.3657096097054      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    77048.587865364985      );
  id2 -> SetBinError( xbin,    627.64776897480249      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    85835.129218790840      );
  id2 -> SetBinError( xbin,    664.19574607114612      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    98323.163129699809      );
  id2 -> SetBinError( xbin,    918.41510580443833      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    109754.52156711217      );
  id2 -> SetBinError( xbin,    878.86023408869323      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    125695.64071782779      );
  id2 -> SetBinError( xbin,    1031.9342770551423      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    142053.73599358017      );
  id2 -> SetBinError( xbin,    966.73039127904872      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    161059.06516840230      );
  id2 -> SetBinError( xbin,    1123.5737872843356      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    181486.28391540417      );
  id2 -> SetBinError( xbin,    1474.6241483586830      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    200915.69220391125      );
  id2 -> SetBinError( xbin,    1352.4903966949967      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    225674.97614640454      );
  id2 -> SetBinError( xbin,    1642.8889431719249      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    252015.77416131707      );
  id2 -> SetBinError( xbin,    1792.7923497875363      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    273188.49078960152      );
  id2 -> SetBinError( xbin,    1922.3305950686345      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    297881.07755754725      );
  id2 -> SetBinError( xbin,    1878.2192820278794      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    325836.39446155203      );
  id2 -> SetBinError( xbin,    2249.4902350139669      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    356903.92230236495      );
  id2 -> SetBinError( xbin,    2747.1124418990698      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    376189.49624434765      );
  id2 -> SetBinError( xbin,    2397.4338585182991      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    412890.41654802178      );
  id2 -> SetBinError( xbin,    4063.8725565686814      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    433687.32884134812      );
  id2 -> SetBinError( xbin,    2981.1230838863767      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    465652.95094433473      );
  id2 -> SetBinError( xbin,    4708.6791535004877      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    490599.22896017996      );
  id2 -> SetBinError( xbin,    3616.5777975218639      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    517299.37044173240      );
  id2 -> SetBinError( xbin,    4505.9460928325052      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    548376.49405932683      );
  id2 -> SetBinError( xbin,    5818.9247780548112      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    579845.94504777319      );
  id2 -> SetBinError( xbin,    4841.5965263891667      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    603728.13660172594      );
  id2 -> SetBinError( xbin,    8190.2397848604724      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    624598.19186397409      );
  id2 -> SetBinError( xbin,    5295.6820287231876      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    652344.45606416848      );
  id2 -> SetBinError( xbin,    6910.1724290632492      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    677663.16280751955      );
  id2 -> SetBinError( xbin,    6550.1049846026544      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    279835.82261999854      );
  id3 -> SetBinError( xbin,    2331.9912555474002      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    301811.30972409615      );
  id3 -> SetBinError( xbin,    2246.1425485011773      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    313437.73982337851      );
  id3 -> SetBinError( xbin,    2106.7671548561298      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    324900.84064674366      );
  id3 -> SetBinError( xbin,    2041.6979586775906      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    332981.10937399091      );
  id3 -> SetBinError( xbin,    2064.3657872011886      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    340411.95106707350      );
  id3 -> SetBinError( xbin,    1934.3584435443386      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    341010.47528606892      );
  id3 -> SetBinError( xbin,    1893.6368998545963      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    346639.93943871814      );
  id3 -> SetBinError( xbin,    1870.0301559228956      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    348617.78122395667      );
  id3 -> SetBinError( xbin,    1783.2397005455882      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    350999.69661239558      );
  id3 -> SetBinError( xbin,    1779.9895938464761      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    354422.25953874423      );
  id3 -> SetBinError( xbin,    1768.2085064429623      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    351657.46093137312      );
  id3 -> SetBinError( xbin,    1743.6936081875776      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    353502.41049241618      );
  id3 -> SetBinError( xbin,    1770.4265626632853      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    353158.10848611686      );
  id3 -> SetBinError( xbin,    1732.8958531374972      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    351300.96494888794      );
  id3 -> SetBinError( xbin,    1748.5691298219856      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    350007.72664451320      );
  id3 -> SetBinError( xbin,    2180.0103083788977      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    344077.23208287405      );
  id3 -> SetBinError( xbin,    2287.0673575783508      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    338595.77526577236      );
  id3 -> SetBinError( xbin,    1884.8284745434880      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    333299.49849896296      );
  id3 -> SetBinError( xbin,    1771.1893703538171      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    326446.87825097766      );
  id3 -> SetBinError( xbin,    2017.7010312338666      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    314642.98306213180      );
  id3 -> SetBinError( xbin,    1957.8902993145853      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    305568.67311728577      );
  id3 -> SetBinError( xbin,    1987.5660669846295      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    297772.71103149437      );
  id3 -> SetBinError( xbin,    1963.6733565421557      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    282140.45227244700      );
  id3 -> SetBinError( xbin,    1673.7463002528139      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    272766.05575927603      );
  id3 -> SetBinError( xbin,    1691.7491262056069      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    261078.42743214272      );
  id3 -> SetBinError( xbin,    1767.9761084906077      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    247666.38237171588      );
  id3 -> SetBinError( xbin,    2101.7840528551774      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    226137.47680697494      );
  id3 -> SetBinError( xbin,    2141.0910905229853      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    202903.15366588646      );
  id3 -> SetBinError( xbin,    1866.2986917187318      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    180462.00433473304      );
  id3 -> SetBinError( xbin,    1951.3137470791617      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    98636.612527247358      );
  id4 -> SetBinError( xbin,    2758.6640219454634      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    269090.05652862252      );
  id4 -> SetBinError( xbin,    3691.4286531587550      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    293792.66212140658      );
  id4 -> SetBinError( xbin,    3562.0462843075234      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    301841.77648821077      );
  id4 -> SetBinError( xbin,    3775.0427508660523      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    304348.03096305230      );
  id4 -> SetBinError( xbin,    3664.3769077956586      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    312440.46308030596      );
  id4 -> SetBinError( xbin,    3460.2629003098468      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    326431.45708796318      );
  id4 -> SetBinError( xbin,    3668.2434241354836      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    311254.76415750524      );
  id4 -> SetBinError( xbin,    7475.0495900203105      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    338888.52423669951      );
  id4 -> SetBinError( xbin,    7363.6099935319089      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    331528.45931017544      );
  id4 -> SetBinError( xbin,    3197.7568541618493      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    341155.21837521403      );
  id4 -> SetBinError( xbin,    3131.2832435821128      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    336093.23156058742      );
  id4 -> SetBinError( xbin,    3087.9076944522308      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    337146.13700616098      );
  id4 -> SetBinError( xbin,    2982.8857447660685      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    344119.82108115091      );
  id4 -> SetBinError( xbin,    2979.7516848383889      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    340891.73790845863      );
  id4 -> SetBinError( xbin,    3003.5323085520135      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    348057.72330028372      );
  id4 -> SetBinError( xbin,    2893.3512141228662      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    347193.02992217726      );
  id4 -> SetBinError( xbin,    2801.1059949422192      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    347428.45539771696      );
  id4 -> SetBinError( xbin,    2841.6586648574935      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    351664.28319203662      );
  id4 -> SetBinError( xbin,    2905.5607146379093      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    348824.81456985528      );
  id4 -> SetBinError( xbin,    2904.0766931840094      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    352203.20518381469      );
  id4 -> SetBinError( xbin,    2835.1918504480836      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    353707.58791705879      );
  id4 -> SetBinError( xbin,    2742.7356547853055      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    355335.71609206597      );
  id4 -> SetBinError( xbin,    2706.5696674176875      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    351601.38322049339      );
  id4 -> SetBinError( xbin,    2702.2389323134394      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    357099.61573905224      );
  id4 -> SetBinError( xbin,    2753.8952537267628      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    346594.88023252861      );
  id4 -> SetBinError( xbin,    2756.0541106934515      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    355617.95754021290      );
  id4 -> SetBinError( xbin,    2757.7957358497761      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    355605.05737472908      );
  id4 -> SetBinError( xbin,    2783.0240138462364      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    350236.17933041567      );
  id4 -> SetBinError( xbin,    2862.9399078504193      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    350615.33142365492      );
  id4 -> SetBinError( xbin,    3011.1052792152104      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    352427.49800896691      );
  id4 -> SetBinError( xbin,    2932.3844899385836      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    348227.58883557940      );
  id4 -> SetBinError( xbin,    3383.9103618437339      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    348512.09558290808      );
  id4 -> SetBinError( xbin,    3454.4809476510541      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    344119.24742131046      );
  id4 -> SetBinError( xbin,    2945.5490516143477      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    344897.45233964239      );
  id4 -> SetBinError( xbin,    2885.1187548035505      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    337941.63342200313      );
  id4 -> SetBinError( xbin,    2820.1369776375745      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    334873.53892571724      );
  id4 -> SetBinError( xbin,    2724.0161048248951      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    337384.82957342052      );
  id4 -> SetBinError( xbin,    2669.7175349148874      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    329765.28944856912      );
  id4 -> SetBinError( xbin,    2655.1278070548301      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    328360.93639527087      );
  id4 -> SetBinError( xbin,    2709.2434801835520      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    320265.34495092387      );
  id4 -> SetBinError( xbin,    2793.3058840353847      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    313098.80547235260      );
  id4 -> SetBinError( xbin,    2794.2145324543117      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    314082.57838290336      );
  id4 -> SetBinError( xbin,    2731.1977569404244      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    304172.97789770743      );
  id4 -> SetBinError( xbin,    2753.8319137390909      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    303482.42453657056      );
  id4 -> SetBinError( xbin,    2853.2932997026810      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    294291.62665737205      );
  id4 -> SetBinError( xbin,    2873.9365263721884      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    296597.04218464252      );
  id4 -> SetBinError( xbin,    2842.6294438610066      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    280811.04235531687      );
  id4 -> SetBinError( xbin,    2807.6266040758110      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    275294.83071013802      );
  id4 -> SetBinError( xbin,    2966.7440870400023      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    274623.58792654326      );
  id4 -> SetBinError( xbin,    2952.3587435546715      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    268408.94446311076      );
  id4 -> SetBinError( xbin,    3373.9824733813534      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    264642.24477032223      );
  id4 -> SetBinError( xbin,    3346.1563551985796      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    255588.90940915805      );
  id4 -> SetBinError( xbin,    2767.1000963488582      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    247975.79722588725      );
  id4 -> SetBinError( xbin,    2819.3979036657397      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    235446.71418319709      );
  id4 -> SetBinError( xbin,    3078.9097668233094      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    230426.50492611501      );
  id4 -> SetBinError( xbin,    3044.6070788730499      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    28009.081893931027      );
  id5 -> SetBinError( xbin,    508.41284094353489      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    60723.190363011767      );
  id5 -> SetBinError( xbin,    564.49986184279896      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    68973.905125298814      );
  id5 -> SetBinError( xbin,    446.33362635995610      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    78606.339377894212      );
  id5 -> SetBinError( xbin,    486.59818702025149      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    89396.742463538307      );
  id5 -> SetBinError( xbin,    532.92163868318221      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    104161.66621277417      );
  id5 -> SetBinError( xbin,    650.88879318621935      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    121995.07853198113      );
  id5 -> SetBinError( xbin,    734.36311120438336      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    124130.58344699904      );
  id5 -> SetBinError( xbin,    880.62094731685625      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    98480.455462582089      );
  id5 -> SetBinError( xbin,    708.85863381853983      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    48318.060307952299      );
  id5 -> SetBinError( xbin,    225.65457087444369      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    26118.029755303731      );
  id5 -> SetBinError( xbin,    143.00029355303411      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    16961.263160712071      );
  id5 -> SetBinError( xbin,    104.41144876494226      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    11699.949984506347      );
  id5 -> SetBinError( xbin,    120.18423507540535      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    8974.4429916476656      );
  id5 -> SetBinError( xbin,    108.87730354809723      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    6977.2651864302943      );
  id5 -> SetBinError( xbin,    51.938995673085778      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5549.4529914787536      );
  id5 -> SetBinError( xbin,    44.821331996819517      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4460.4901957142520      );
  id5 -> SetBinError( xbin,    43.371099612648280      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3705.3046362761888      );
  id5 -> SetBinError( xbin,    38.325015689727138      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3138.3369078823885      );
  id5 -> SetBinError( xbin,    31.342250999763845      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2620.7036960914438      );
  id5 -> SetBinError( xbin,    30.437001998703373      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2254.4293939059094      );
  id5 -> SetBinError( xbin,    31.556636163520459      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    2017.4101976175757      );
  id5 -> SetBinError( xbin,    73.206861468857355      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1572.5303415584281      );
  id5 -> SetBinError( xbin,    71.584092074819992      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1445.8082954303291      );
  id5 -> SetBinError( xbin,    20.860896987912991      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1265.1782997581658      );
  id5 -> SetBinError( xbin,    21.505226373562046      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1130.8186123121984      );
  id5 -> SetBinError( xbin,    20.581953780581458      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    947.98043947925839      );
  id5 -> SetBinError( xbin,    16.918589231217059      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    865.45800637354648      );
  id5 -> SetBinError( xbin,    15.082625118196036      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    745.86731994919523      );
  id5 -> SetBinError( xbin,    17.054208083103621      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    687.92480244023136      );
  id5 -> SetBinError( xbin,    17.642589842757545      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    595.51656998980263      );
  id5 -> SetBinError( xbin,    21.941722737329524      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    568.08928941299314      );
  id5 -> SetBinError( xbin,    20.903670393109728      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    492.85799801058829      );
  id5 -> SetBinError( xbin,    12.956590979558843      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    442.12180979043274      );
  id5 -> SetBinError( xbin,    12.455299742614663      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    409.13053040941440      );
  id5 -> SetBinError( xbin,    11.783983800598660      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    357.88880797925850      );
  id5 -> SetBinError( xbin,    13.161966962934345      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    304.59786412073078      );
  id5 -> SetBinError( xbin,    12.381029639634162      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    384.70854272098194      );
  id5 -> SetBinError( xbin,    72.165533208203669      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2150.4409926255694      );
  id6 -> SetBinError( xbin,    39.757203546067075      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    6960.6274277041830      );
  id6 -> SetBinError( xbin,    70.972595417469478      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13512.367347209893      );
  id6 -> SetBinError( xbin,    99.211777577488391      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    23089.033401860528      );
  id6 -> SetBinError( xbin,    124.36279927431457      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    37253.089153717076      );
  id6 -> SetBinError( xbin,    151.05319660481936      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    60620.613510712377      );
  id6 -> SetBinError( xbin,    184.40909356551651      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    104613.69483927038      );
  id6 -> SetBinError( xbin,    246.28412794118123      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    170531.71335954586      );
  id6 -> SetBinError( xbin,    342.69057686170817      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    74386.986846091429      );
  id6 -> SetBinError( xbin,    273.52185195859425      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    28131.527645073693      );
  id6 -> SetBinError( xbin,    201.29446517715513      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    11775.448539004066      );
  id6 -> SetBinError( xbin,    147.74060806819995      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4517.4156306525138      );
  id6 -> SetBinError( xbin,    100.92027281792961      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    10873.905290641800      );
  id7 -> SetBinError( xbin,    122.97410779425863      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    14280.276076294445      );
  id7 -> SetBinError( xbin,    139.16639317557303      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    18687.532738011312      );
  id7 -> SetBinError( xbin,    159.09078523648688      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23135.416932875058      );
  id7 -> SetBinError( xbin,    180.07588563534287      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28172.831208638312      );
  id7 -> SetBinError( xbin,    195.81773043462522      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    32627.362980774971      );
  id7 -> SetBinError( xbin,    210.00376065629266      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37436.291619488104      );
  id7 -> SetBinError( xbin,    228.36526727070338      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    41440.995362912683      );
  id7 -> SetBinError( xbin,    245.66210301293899      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45620.450952284868      );
  id7 -> SetBinError( xbin,    261.82071050274800      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    48928.133785931401      );
  id7 -> SetBinError( xbin,    275.02050270307996      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52064.546926179639      );
  id7 -> SetBinError( xbin,    287.15873181010829      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    54618.018339681468      );
  id7 -> SetBinError( xbin,    300.53459326262788      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    55717.409046953078      );
  id7 -> SetBinError( xbin,    306.83799843524736      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    57000.285349926562      );
  id7 -> SetBinError( xbin,    311.40805025479557      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    56675.313848710095      );
  id7 -> SetBinError( xbin,    312.82012571380318      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    55992.849462703103      );
  id7 -> SetBinError( xbin,    309.84889876407453      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    55332.442437671278      );
  id7 -> SetBinError( xbin,    308.46661194765920      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    53159.875872205026      );
  id7 -> SetBinError( xbin,    303.35866894768066      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    49713.736075755703      );
  id7 -> SetBinError( xbin,    290.92803803032911      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    46706.889335704545      );
  id7 -> SetBinError( xbin,    278.57363460011709      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    42772.531357377542      );
  id7 -> SetBinError( xbin,    262.38681645059967      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    39261.569493108618      );
  id7 -> SetBinError( xbin,    249.11066580001196      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    34449.543424122581      );
  id7 -> SetBinError( xbin,    227.30769789142332      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    30021.711445862522      );
  id7 -> SetBinError( xbin,    210.93236269988191      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    25869.230786167551      );
  id7 -> SetBinError( xbin,    194.34155511888127      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    21336.622461526273      );
  id7 -> SetBinError( xbin,    172.61637736853322      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17195.848899189481      );
  id7 -> SetBinError( xbin,    155.29606542066199      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    13581.703911147022      );
  id7 -> SetBinError( xbin,    139.16035908679149      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9966.9987176917421      );
  id7 -> SetBinError( xbin,    117.45574376391666      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7183.1230015594820      );
  id7 -> SetBinError( xbin,    101.13633384671130      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5738.1194911271250      );
  id8 -> SetBinError( xbin,    32.510120161984503      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10277.739261975141      );
  id8 -> SetBinError( xbin,    43.079183562958960      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    8986.1371011344781      );
  id8 -> SetBinError( xbin,    39.931774355893886      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    7914.0968112898627      );
  id8 -> SetBinError( xbin,    37.125678449584541      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    6944.5799811639636      );
  id8 -> SetBinError( xbin,    34.541777566445852      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6246.6884201311886      );
  id8 -> SetBinError( xbin,    32.391217682036327      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5465.2080743636816      );
  id8 -> SetBinError( xbin,    30.291710025948678      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    4851.6001253476379      );
  id8 -> SetBinError( xbin,    28.033641268728893      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4381.1193758586242      );
  id8 -> SetBinError( xbin,    26.481988391154928      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    3927.2208189053290      );
  id8 -> SetBinError( xbin,    24.802284630204557      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3538.9980723974386      );
  id8 -> SetBinError( xbin,    23.463571848110131      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3196.5451348368283      );
  id8 -> SetBinError( xbin,    22.095637825648524      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2874.3837164144170      );
  id8 -> SetBinError( xbin,    20.657925782738850      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2568.8577137220432      );
  id8 -> SetBinError( xbin,    19.433141460119391      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2384.2047682779626      );
  id8 -> SetBinError( xbin,    18.573958095328223      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2198.5513785171161      );
  id8 -> SetBinError( xbin,    17.724928400269391      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1969.5191880682787      );
  id8 -> SetBinError( xbin,    16.775649622506300      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1807.1764816448108      );
  id8 -> SetBinError( xbin,    16.064356698923493      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1665.3396386726047      );
  id8 -> SetBinError( xbin,    15.405161004805347      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1526.8685126263028      );
  id8 -> SetBinError( xbin,    14.411114031236698      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1394.9346845512589      );
  id8 -> SetBinError( xbin,    13.582671899404959      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1277.3407119655806      );
  id8 -> SetBinError( xbin,    13.001416267555921      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1186.0441173720617      );
  id8 -> SetBinError( xbin,    12.415967594774074      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1072.6473685640269      );
  id8 -> SetBinError( xbin,    11.667538430827578      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1015.1192001025743      );
  id8 -> SetBinError( xbin,    11.574151094003856      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    914.88502517404038      );
  id8 -> SetBinError( xbin,    10.819267971991691      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    840.59148095980674      );
  id8 -> SetBinError( xbin,    10.405961120342749      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    802.15311833557848      );
  id8 -> SetBinError( xbin,    10.123836357009530      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
