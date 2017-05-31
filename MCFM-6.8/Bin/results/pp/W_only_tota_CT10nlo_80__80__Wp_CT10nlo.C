// Cross-section is:      2489047.8910315013 +/-         1011.5854417866)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -81254.24112   -3.26%
//        GQB    |      -45910.58959   -1.84%
//        QG     |      -99397.95781   -3.99%
//        QBG    |      -47652.25301   -1.91%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1495207.67826   60.07%
//        QBQ    |     1273392.25779   51.16%

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
//Wp_CT10nlo                      [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wp_CT10nlo.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    1.9037948795327435      );
  id1 -> SetBinError( xbin,   0.81788853799137962      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    579.40470819724794      );
  id1 -> SetBinError( xbin,    94.581546527920196      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    5311.2846394548678      );
  id1 -> SetBinError( xbin,    404.75656725029393      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    27123.497692151577      );
  id1 -> SetBinError( xbin,    1064.0860732252513      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    62983.351524440804      );
  id1 -> SetBinError( xbin,    1409.4372767957539      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    117793.60675471026      );
  id1 -> SetBinError( xbin,    1590.4781300502516      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    175675.80039749143      );
  id1 -> SetBinError( xbin,    1864.1570714568777      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    227777.81770393692      );
  id1 -> SetBinError( xbin,    2021.1934216223228      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    276844.75985838351      );
  id1 -> SetBinError( xbin,    2122.6049204822170      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    310086.69900114462      );
  id1 -> SetBinError( xbin,    2264.8681446028900      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    345865.17847487598      );
  id1 -> SetBinError( xbin,    2307.7704437794255      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    365720.22079067602      );
  id1 -> SetBinError( xbin,    2327.1088839249437      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    385495.90433334152      );
  id1 -> SetBinError( xbin,    2329.9398811418941      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    392559.54549057642      );
  id1 -> SetBinError( xbin,    2306.3999622129231      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    399024.57311731752      );
  id1 -> SetBinError( xbin,    2310.8750215808004      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    409544.88564758719      );
  id1 -> SetBinError( xbin,    2330.9130946103201      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    414506.19066897867      );
  id1 -> SetBinError( xbin,    2341.8317575317415      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    420522.65439460962      );
  id1 -> SetBinError( xbin,    2331.7648873367020      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    427558.83426561835      );
  id1 -> SetBinError( xbin,    2288.0783204605168      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    429991.90252735419      );
  id1 -> SetBinError( xbin,    2303.9193559813070      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    439011.43756194779      );
  id1 -> SetBinError( xbin,    2380.7034162870946      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    434992.13481974736      );
  id1 -> SetBinError( xbin,    2308.8015203433520      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    439006.37245922006      );
  id1 -> SetBinError( xbin,    2339.3381949382124      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    451357.32274904614      );
  id1 -> SetBinError( xbin,    2362.8485827887812      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    450876.52938062913      );
  id1 -> SetBinError( xbin,    2365.1849735079645      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    454915.35791166342      );
  id1 -> SetBinError( xbin,    2383.7583536456859      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    460926.30247375317      );
  id1 -> SetBinError( xbin,    2423.4766253772104      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    465847.12770176958      );
  id1 -> SetBinError( xbin,    2421.1871240668061      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    466917.42606639129      );
  id1 -> SetBinError( xbin,    2455.4600558456314      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    466158.25946120761      );
  id1 -> SetBinError( xbin,    2488.4077678756789      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    462482.66065539321      );
  id1 -> SetBinError( xbin,    2551.9690734530786      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    458098.16926310468      );
  id1 -> SetBinError( xbin,    2531.7603224763075      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    425093.51959041273      );
  id1 -> SetBinError( xbin,    2601.7872763368368      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    394776.39218794275      );
  id1 -> SetBinError( xbin,    2490.4096372911049      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    344199.57738765469      );
  id1 -> SetBinError( xbin,    2426.3420493130579      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    273647.99589200126      );
  id1 -> SetBinError( xbin,    2262.2679421524617      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    195818.35494720616      );
  id1 -> SetBinError( xbin,    2027.6693994162902      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    112358.44065530202      );
  id1 -> SetBinError( xbin,    1740.5542129471708      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    43282.154319350586      );
  id1 -> SetBinError( xbin,    1244.4340995309037      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    9577.9840595890328      );
  id1 -> SetBinError( xbin,    582.19570751384822      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    867.70246445047508      );
  id1 -> SetBinError( xbin,    112.58664121985936      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    2.1211624742228041      );
  id1 -> SetBinError( xbin,    1.2326358936061117      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    853528.94226343674      );
  id2 -> SetBinError( xbin,    9295.2542474982565      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    819124.33819670824      );
  id2 -> SetBinError( xbin,    7645.4648633412689      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    790777.27144400822      );
  id2 -> SetBinError( xbin,    7918.3975121378844      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    750089.74435665703      );
  id2 -> SetBinError( xbin,    7386.4621879713804      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    706569.91376120318      );
  id2 -> SetBinError( xbin,    6276.7627774491975      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    680108.66294783086      );
  id2 -> SetBinError( xbin,    6327.3247779463081      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    627043.87334305141      );
  id2 -> SetBinError( xbin,    5009.2702335547519      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    592620.72975018667      );
  id2 -> SetBinError( xbin,    4680.7795970663674      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    556985.52774200251      );
  id2 -> SetBinError( xbin,    4587.8000843833252      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    520686.37913498806      );
  id2 -> SetBinError( xbin,    4009.8526522888624      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    477943.79928360361      );
  id2 -> SetBinError( xbin,    3335.4432807749240      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    445517.82593311975      );
  id2 -> SetBinError( xbin,    3321.1037998385896      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    415572.53124054801      );
  id2 -> SetBinError( xbin,    3160.1952184431912      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    381628.98139216728      );
  id2 -> SetBinError( xbin,    2917.9888787558839      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    344209.50022834307      );
  id2 -> SetBinError( xbin,    2416.6173403891198      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    311713.96236661228      );
  id2 -> SetBinError( xbin,    2302.0839546948637      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    282061.68055128900      );
  id2 -> SetBinError( xbin,    1952.6828020083601      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    253976.54508580430      );
  id2 -> SetBinError( xbin,    1823.5053669944512      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    226747.36376631825      );
  id2 -> SetBinError( xbin,    1648.6622799786624      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    201830.80033858112      );
  id2 -> SetBinError( xbin,    1630.1932034479998      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    179063.33386092944      );
  id2 -> SetBinError( xbin,    1616.9275879923084      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    157330.64601013972      );
  id2 -> SetBinError( xbin,    1303.2694534869941      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    138497.90039058888      );
  id2 -> SetBinError( xbin,    1149.2530436394004      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    121574.70782649366      );
  id2 -> SetBinError( xbin,    987.49719066464934      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    107183.30498282482      );
  id2 -> SetBinError( xbin,    979.93339781722705      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    95397.559352139884      );
  id2 -> SetBinError( xbin,    1005.4524411145150      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    84286.647622341028      );
  id2 -> SetBinError( xbin,    791.58745490468220      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    77699.010737107761      );
  id2 -> SetBinError( xbin,    759.42093173465014      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    73504.412126671916      );
  id2 -> SetBinError( xbin,    928.44630235613965      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    71637.306855694973      );
  id2 -> SetBinError( xbin,    728.93820328664162      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    72432.977005779583      );
  id2 -> SetBinError( xbin,    769.48887812881947      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    74204.368932049736      );
  id2 -> SetBinError( xbin,    781.55396655265258      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    79908.433628288432      );
  id2 -> SetBinError( xbin,    767.20124281843391      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    84793.819072155253      );
  id2 -> SetBinError( xbin,    714.01809714247224      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    97536.863798651437      );
  id2 -> SetBinError( xbin,    848.81541493355644      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    111409.20783912482      );
  id2 -> SetBinError( xbin,    997.36508681116459      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    126001.95774588617      );
  id2 -> SetBinError( xbin,    962.27914241090343      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    144233.10719825525      );
  id2 -> SetBinError( xbin,    1073.0338492497649      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    166020.72928937731      );
  id2 -> SetBinError( xbin,    1307.0450707907728      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    190315.68302535766      );
  id2 -> SetBinError( xbin,    1360.5824687182246      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    217161.61730082711      );
  id2 -> SetBinError( xbin,    1488.8700411388966      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    244424.41411055165      );
  id2 -> SetBinError( xbin,    1577.4510600394731      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    276091.75840285508      );
  id2 -> SetBinError( xbin,    1961.3009735076187      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    309142.93491143046      );
  id2 -> SetBinError( xbin,    1944.4528865832790      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    345438.21370581281      );
  id2 -> SetBinError( xbin,    2193.1819748348871      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    379369.74878490437      );
  id2 -> SetBinError( xbin,    2230.3233724866859      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    419836.57020025403      );
  id2 -> SetBinError( xbin,    2563.3447693294506      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    468585.42818808951      );
  id2 -> SetBinError( xbin,    3719.7120671358289      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    501465.06491193874      );
  id2 -> SetBinError( xbin,    3151.1108797219285      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    543710.33332977770      );
  id2 -> SetBinError( xbin,    3377.6967155905136      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    588455.75962566969      );
  id2 -> SetBinError( xbin,    3776.5950590622210      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    634106.52998992102      );
  id2 -> SetBinError( xbin,    4248.0703628425817      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    674377.05904959049      );
  id2 -> SetBinError( xbin,    4381.2468481868445      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    720640.17024273786      );
  id2 -> SetBinError( xbin,    5787.0771959811882      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    782281.26932009950      );
  id2 -> SetBinError( xbin,    5900.2894481861258      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    818167.41626496345      );
  id2 -> SetBinError( xbin,    6185.9237181548870      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    861428.36346839706      );
  id2 -> SetBinError( xbin,    6636.8451123990362      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    918965.62298771646      );
  id2 -> SetBinError( xbin,    8450.5335574715518      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    951435.24796706531      );
  id2 -> SetBinError( xbin,    11375.338882096426      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1001412.7280426124      );
  id2 -> SetBinError( xbin,    10434.276955748046      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    147590.61050045479      );
  id3 -> SetBinError( xbin,    1503.7864039713324      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    200849.64343456295      );
  id3 -> SetBinError( xbin,    2721.3986028835770      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    260909.06402629812      );
  id3 -> SetBinError( xbin,    2904.6656545550923      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    304866.94977928133      );
  id3 -> SetBinError( xbin,    2456.2132421792494      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    341311.93060568202      );
  id3 -> SetBinError( xbin,    2682.9660637544202      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    370856.43796355370      );
  id3 -> SetBinError( xbin,    2614.1998312003593      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    409913.88995085651      );
  id3 -> SetBinError( xbin,    2653.7821723716752      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    421898.11752862867      );
  id3 -> SetBinError( xbin,    2685.1422278561213      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    438234.23380313953      );
  id3 -> SetBinError( xbin,    2872.0245759172008      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    449901.96793495811      );
  id3 -> SetBinError( xbin,    2952.1360784580538      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    452992.95107680321      );
  id3 -> SetBinError( xbin,    2761.9248968827269      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    464419.04491961538      );
  id3 -> SetBinError( xbin,    2832.3411763033578      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    464629.33025301388      );
  id3 -> SetBinError( xbin,    2870.8130859082962      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    473849.61564020358      );
  id3 -> SetBinError( xbin,    2806.0532691254484      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    471459.06030926335      );
  id3 -> SetBinError( xbin,    2742.4021404925047      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    479599.46364246210      );
  id3 -> SetBinError( xbin,    2803.9292178168766      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    487504.19998005847      );
  id3 -> SetBinError( xbin,    3011.9959340161354      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    494982.96182509162      );
  id3 -> SetBinError( xbin,    2961.3965732285560      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    503254.76354085724      );
  id3 -> SetBinError( xbin,    3025.5110327680595      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    506196.29927481926      );
  id3 -> SetBinError( xbin,    3078.5312226603396      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    516954.31159297493      );
  id3 -> SetBinError( xbin,    2972.6315473125610      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    512126.02754882595      );
  id3 -> SetBinError( xbin,    3007.6933940196241      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    511745.29342902201      );
  id3 -> SetBinError( xbin,    2953.1655399241936      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    512467.69670527085      );
  id3 -> SetBinError( xbin,    3017.9199322809127      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    488680.36330308730      );
  id3 -> SetBinError( xbin,    3045.5803470757523      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    458444.20561198983      );
  id3 -> SetBinError( xbin,    2871.2710149495779      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    419750.10988260363      );
  id3 -> SetBinError( xbin,    2631.9121444043890      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    364002.30023697857      );
  id3 -> SetBinError( xbin,    2431.1664996999393      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    294429.89482495020      );
  id3 -> SetBinError( xbin,    2165.5266489519572      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    221360.61983061457      );
  id3 -> SetBinError( xbin,    1875.9409848068804      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    44595.795892087954      );
  id4 -> SetBinError( xbin,    1551.7672343595943      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    141093.85298775585      );
  id4 -> SetBinError( xbin,    2296.4075330956680      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    175511.93700689357      );
  id4 -> SetBinError( xbin,    2616.5887877687051      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    196581.70520150595      );
  id4 -> SetBinError( xbin,    2805.9476435277420      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    224546.10638191603      );
  id4 -> SetBinError( xbin,    3028.9865381684745      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    251732.37422479913      );
  id4 -> SetBinError( xbin,    3179.6770636572346      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    288129.52704915812      );
  id4 -> SetBinError( xbin,    3424.9041324536556      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    290952.47530676780      );
  id4 -> SetBinError( xbin,    3936.1407635238957      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    329053.60445769655      );
  id4 -> SetBinError( xbin,    4280.0091877247723      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    333769.91901079478      );
  id4 -> SetBinError( xbin,    4027.6337169536296      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    364768.14206914633      );
  id4 -> SetBinError( xbin,    4015.4158647182635      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    369089.74623989110      );
  id4 -> SetBinError( xbin,    4125.8656470279666      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    381679.83315786812      );
  id4 -> SetBinError( xbin,    4316.6176964569695      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    404189.90359455755      );
  id4 -> SetBinError( xbin,    4425.8722124670203      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    417024.83052968350      );
  id4 -> SetBinError( xbin,    4327.0524750678633      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    422654.54891245370      );
  id4 -> SetBinError( xbin,    4644.5402118138709      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    430426.86354077561      );
  id4 -> SetBinError( xbin,    4735.1335191052458      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    444939.87166156975      );
  id4 -> SetBinError( xbin,    4423.6613705962536      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    442504.77069950459      );
  id4 -> SetBinError( xbin,    4961.2260784351374      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    441890.65377204784      );
  id4 -> SetBinError( xbin,    5043.3907335881186      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    453741.60411427880      );
  id4 -> SetBinError( xbin,    4310.4401411975814      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    454021.27843447676      );
  id4 -> SetBinError( xbin,    4981.3790258746194      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    457229.49606022704      );
  id4 -> SetBinError( xbin,    5133.9375717443118      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    460628.42617731704      );
  id4 -> SetBinError( xbin,    4495.5475934809729      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    463406.15498891845      );
  id4 -> SetBinError( xbin,    4371.4244840593938      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    475589.48403214116      );
  id4 -> SetBinError( xbin,    5678.2306671422184      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    458810.89975756279      );
  id4 -> SetBinError( xbin,    6125.7845374880108      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    477580.58396613994      );
  id4 -> SetBinError( xbin,    4963.7382842727657      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    471605.95798871026      );
  id4 -> SetBinError( xbin,    4333.1136405663665      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    474529.32593505486      );
  id4 -> SetBinError( xbin,    4405.3004802257919      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    477203.96382482536      );
  id4 -> SetBinError( xbin,    4441.1848655877620      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    471828.12636277359      );
  id4 -> SetBinError( xbin,    4370.0896151239849      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    485660.69458773354      );
  id4 -> SetBinError( xbin,    4498.0593941368679      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    484206.58802408923      );
  id4 -> SetBinError( xbin,    4442.8144810884341      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    494961.16323634703      );
  id4 -> SetBinError( xbin,    4556.2881275950249      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    498493.50582019362      );
  id4 -> SetBinError( xbin,    4537.0706359589267      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    493227.72857720574      );
  id4 -> SetBinError( xbin,    4533.6016059421845      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    501080.49818235030      );
  id4 -> SetBinError( xbin,    4651.7286547393032      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    499920.71752397466      );
  id4 -> SetBinError( xbin,    6220.5634425354892      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    508294.66451366089      );
  id4 -> SetBinError( xbin,    6397.4322528325483      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    513934.25971808744      );
  id4 -> SetBinError( xbin,    4973.5018251098127      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    512355.57228688686      );
  id4 -> SetBinError( xbin,    4737.4690460696793      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    520239.59152043401      );
  id4 -> SetBinError( xbin,    6898.5847980498775      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    513219.99656235590      );
  id4 -> SetBinError( xbin,    6823.2353957323976      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    505917.16709132469      );
  id4 -> SetBinError( xbin,    5643.1411810756363      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    519900.26554260758      );
  id4 -> SetBinError( xbin,    5896.8127244398329      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    516236.83859855880      );
  id4 -> SetBinError( xbin,    5295.3038770824905      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    506588.54306157335      );
  id4 -> SetBinError( xbin,    5044.5389571278683      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    495944.25739737705      );
  id4 -> SetBinError( xbin,    4823.2090862210916      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    496076.55350532068      );
  id4 -> SetBinError( xbin,    4933.6650302963308      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    480831.16891874385      );
  id4 -> SetBinError( xbin,    5032.1230036120796      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    459988.11713166907      );
  id4 -> SetBinError( xbin,    4681.9691942017180      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    449963.99195689318      );
  id4 -> SetBinError( xbin,    4409.7736390555574      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    424263.31815980119      );
  id4 -> SetBinError( xbin,    4455.9053438132951      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    395567.95905273687      );
  id4 -> SetBinError( xbin,    4422.0767586045431      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    367947.19831540232      );
  id4 -> SetBinError( xbin,    4075.5283472945339      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    44806.895130700948      );
  id5 -> SetBinError( xbin,    471.62416709045937      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    94726.351355200619      );
  id5 -> SetBinError( xbin,    613.29437475817258      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    106589.42558300059      );
  id5 -> SetBinError( xbin,    742.20222433451988      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    114418.69549600741      );
  id5 -> SetBinError( xbin,    1048.5390765828154      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    127304.82649491215      );
  id5 -> SetBinError( xbin,    1053.9264263293146      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    141658.50456846520      );
  id5 -> SetBinError( xbin,    936.85665248563862      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    161393.47895032237      );
  id5 -> SetBinError( xbin,    1031.5783050612254      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    152571.65754950300      );
  id5 -> SetBinError( xbin,    2574.8576112837800      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    123164.03472989914      );
  id5 -> SetBinError( xbin,    2468.6786917494919      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    59225.153006793793      );
  id5 -> SetBinError( xbin,    296.15155174553888      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    31173.840939443700      );
  id5 -> SetBinError( xbin,    190.62178391514576      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19536.739503668767      );
  id5 -> SetBinError( xbin,    127.43907164939181      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13546.090132404923      );
  id5 -> SetBinError( xbin,    107.78159746377395      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9878.0739227025697      );
  id5 -> SetBinError( xbin,    85.848994762721603      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7569.0190637448832      );
  id5 -> SetBinError( xbin,    73.456472033227371      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5747.4049782508337      );
  id5 -> SetBinError( xbin,    73.671742440446906      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4688.1080277391766      );
  id5 -> SetBinError( xbin,    63.244638736593579      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3765.9365016063589      );
  id5 -> SetBinError( xbin,    52.235055129313260      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3136.4298548603529      );
  id5 -> SetBinError( xbin,    55.505674247647057      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2537.8742310137895      );
  id5 -> SetBinError( xbin,    52.952064489459964      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2129.8132893900743      );
  id5 -> SetBinError( xbin,    40.336109363693339      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1752.5337331337698      );
  id5 -> SetBinError( xbin,    33.525432514333474      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1537.0260186800231      );
  id5 -> SetBinError( xbin,    30.437745011946522      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1291.8376070815641      );
  id5 -> SetBinError( xbin,    29.123720413758118      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1127.3137399862492      );
  id5 -> SetBinError( xbin,    24.864781195636411      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    984.31365182295986      );
  id5 -> SetBinError( xbin,    24.408876623834942      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    880.74231997902393      );
  id5 -> SetBinError( xbin,    24.031664542178213      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    750.32035718951602      );
  id5 -> SetBinError( xbin,    19.314265059257831      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    695.03823760941384      );
  id5 -> SetBinError( xbin,    17.859722548139189      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    578.37989066641831      );
  id5 -> SetBinError( xbin,    20.794335969297308      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    493.95243809984817      );
  id5 -> SetBinError( xbin,    23.031791998824932      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    442.01328286817079      );
  id5 -> SetBinError( xbin,    18.436295799334211      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    370.15576030068422      );
  id5 -> SetBinError( xbin,    12.351123659199139      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    352.85018435603990      );
  id5 -> SetBinError( xbin,    12.155459583697827      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    328.65410002926774      );
  id5 -> SetBinError( xbin,    12.924816836771619      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    271.74985037796495      );
  id5 -> SetBinError( xbin,    16.196433050641488      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    273.43126158756519      );
  id5 -> SetBinError( xbin,    13.955577687854625      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    239.99352328430260      );
  id5 -> SetBinError( xbin,    8.9116832660622194      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2850.1100310983866      );
  id6 -> SetBinError( xbin,    55.030825729142606      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9591.9708503607635      );
  id6 -> SetBinError( xbin,    104.91918679909811      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19116.150699733516      );
  id6 -> SetBinError( xbin,    152.24733817443646      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33873.682697631382      );
  id6 -> SetBinError( xbin,    203.60898294083796      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    54756.173380170287      );
  id6 -> SetBinError( xbin,    249.34401424496255      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    85619.776533288139      );
  id6 -> SetBinError( xbin,    293.93860417000252      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    130707.31940584230      );
  id6 -> SetBinError( xbin,    353.60653010714242      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    183195.80269376663      );
  id6 -> SetBinError( xbin,    424.90376714738233      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    70363.815461394115      );
  id6 -> SetBinError( xbin,    295.66799472833998      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24043.972015965795      );
  id6 -> SetBinError( xbin,    192.83303833655509      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    8932.1823160859512      );
  id6 -> SetBinError( xbin,    127.20351633450825      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3392.9629414176970      );
  id6 -> SetBinError( xbin,    87.181597330552506      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11652.518448585804      );
  id7 -> SetBinError( xbin,    148.29868126527057      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15396.395430364964      );
  id7 -> SetBinError( xbin,    173.14361219555124      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19638.380704245570      );
  id7 -> SetBinError( xbin,    200.18794943600588      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23710.251443354169      );
  id7 -> SetBinError( xbin,    218.31651582225822      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28291.876293597576      );
  id7 -> SetBinError( xbin,    244.87910917251668      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    32249.938831081843      );
  id7 -> SetBinError( xbin,    259.35569057044563      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    36523.443147996535      );
  id7 -> SetBinError( xbin,    279.96584098764356      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    40851.762721492269      );
  id7 -> SetBinError( xbin,    300.12650567490431      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45053.793368132079      );
  id7 -> SetBinError( xbin,    321.78669399557094      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    49178.831507870047      );
  id7 -> SetBinError( xbin,    342.34868257772962      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52034.952913261601      );
  id7 -> SetBinError( xbin,    349.03892061685508      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    54879.630585901956      );
  id7 -> SetBinError( xbin,    363.97375311086705      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    57230.483119645694      );
  id7 -> SetBinError( xbin,    371.81266813471984      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    59086.465125940740      );
  id7 -> SetBinError( xbin,    378.83575487730371      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59773.622484347026      );
  id7 -> SetBinError( xbin,    380.75852562517025      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    60803.756570275000      );
  id7 -> SetBinError( xbin,    384.20717474641384      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    60116.902115959725      );
  id7 -> SetBinError( xbin,    378.58549006457071      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    60071.742617453310      );
  id7 -> SetBinError( xbin,    374.17471589502361      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    59124.207823704746      );
  id7 -> SetBinError( xbin,    369.21451316643345      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    57480.453731534224      );
  id7 -> SetBinError( xbin,    358.05600724491762      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    55576.621198598448      );
  id7 -> SetBinError( xbin,    348.04423183669826      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    51408.978713062155      );
  id7 -> SetBinError( xbin,    328.52728911550651      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    49011.120508092354      );
  id7 -> SetBinError( xbin,    318.05584012760943      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    45350.080672264798      );
  id7 -> SetBinError( xbin,    299.66924607281084      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    40546.946267249237      );
  id7 -> SetBinError( xbin,    277.01521160933436      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    36277.494927520216      );
  id7 -> SetBinError( xbin,    258.28346535369616      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    31021.192773805531      );
  id7 -> SetBinError( xbin,    235.92238301115026      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    25940.686727060867      );
  id7 -> SetBinError( xbin,    217.94724331173856      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    21482.131434185532      );
  id7 -> SetBinError( xbin,    197.01286070653376      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    16603.497000256993      );
  id7 -> SetBinError( xbin,    172.23856257669141      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7094.7949970873224      );
  id8 -> SetBinError( xbin,    44.553026911074198      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12751.547038163764      );
  id8 -> SetBinError( xbin,    59.282468945047533      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    10944.080011840641      );
  id8 -> SetBinError( xbin,    53.524782384626860      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9592.6742721371593      );
  id8 -> SetBinError( xbin,    49.770694906136370      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8469.6729237400014      );
  id8 -> SetBinError( xbin,    45.979992052395161      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7478.4896354475095      );
  id8 -> SetBinError( xbin,    42.640601909808346      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6524.9663542620219      );
  id8 -> SetBinError( xbin,    39.118281390220311      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5757.0055332087022      );
  id8 -> SetBinError( xbin,    36.079392974283238      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5108.5571258349555      );
  id8 -> SetBinError( xbin,    33.522826532910848      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4498.5038924529754      );
  id8 -> SetBinError( xbin,    30.769388052683478      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4070.6922438072379      );
  id8 -> SetBinError( xbin,    28.989314605006488      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3616.2337281466544      );
  id8 -> SetBinError( xbin,    26.931402776172110      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3204.0666591464324      );
  id8 -> SetBinError( xbin,    25.196727190353169      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2910.0850799117734      );
  id8 -> SetBinError( xbin,    23.478208847246911      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2671.1495172043278      );
  id8 -> SetBinError( xbin,    22.278339179035243      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2414.1277906538007      );
  id8 -> SetBinError( xbin,    20.945508142723792      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2182.0683979082869      );
  id8 -> SetBinError( xbin,    19.921684752797244      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1990.5899138040968      );
  id8 -> SetBinError( xbin,    18.668443402416827      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1822.1124443829794      );
  id8 -> SetBinError( xbin,    17.418114845560833      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1645.7725424036616      );
  id8 -> SetBinError( xbin,    16.608698528565260      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1502.8127511031521      );
  id8 -> SetBinError( xbin,    15.636695641700417      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1373.7563652877734      );
  id8 -> SetBinError( xbin,    14.821522079155560      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1275.7506007425743      );
  id8 -> SetBinError( xbin,    14.061349890126197      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1182.6672349968958      );
  id8 -> SetBinError( xbin,    13.366962837344092      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1060.8993785073401      );
  id8 -> SetBinError( xbin,    12.642380745078897      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    989.63582966046749      );
  id8 -> SetBinError( xbin,    12.194956088300019      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    909.99317990032148      );
  id8 -> SetBinError( xbin,    11.756013518720945      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    842.10497244124622      );
  id8 -> SetBinError( xbin,    10.908376571391017      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
