// Cross-section is:      2490816.8310306529 +/-         1032.8352718186)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -82899.95456   -3.33%
//        GQB    |      -46453.60808   -1.86%
//        QG     |     -100131.76995   -4.02%
//        QBG    |      -47754.45785   -1.92%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1494989.97470   60.02%
//        QBQ    |     1278480.35974   51.33%

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
//Wp_MSTW2008nlo68cl              [runstring]  
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
//MSTW2008nlo68cl.LHpd            [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//MSTW2008nlo68cl.LHpd            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_MSTW200_80__80__Wp_MSTW2008nlo68cl.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.52735745905302445      );
  id1 -> SetBinError( xbin,   0.26570754747396097      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    487.85012328610310      );
  id1 -> SetBinError( xbin,    74.753632140317166      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4529.3049276538841      );
  id1 -> SetBinError( xbin,    413.96202905775812      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    24753.780271908105      );
  id1 -> SetBinError( xbin,    1004.7758323954921      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    60380.316393120833      );
  id1 -> SetBinError( xbin,    1398.8657232411776      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    115834.79534341309      );
  id1 -> SetBinError( xbin,    1582.2938860332799      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    173966.81969239921      );
  id1 -> SetBinError( xbin,    1847.1246492644489      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    227954.83179290258      );
  id1 -> SetBinError( xbin,    2041.1975079136419      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    276533.62839139969      );
  id1 -> SetBinError( xbin,    2138.6356286188493      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    312332.92626951676      );
  id1 -> SetBinError( xbin,    2221.2120465706116      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    348953.75623425061      );
  id1 -> SetBinError( xbin,    2330.2932067173897      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    374584.98001934495      );
  id1 -> SetBinError( xbin,    2314.0632511328449      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    388323.63101411768      );
  id1 -> SetBinError( xbin,    2329.2756192074739      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    403041.20619900688      );
  id1 -> SetBinError( xbin,    2346.7958172993585      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    404889.40239811112      );
  id1 -> SetBinError( xbin,    2339.4692272530983      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    412277.18626406166      );
  id1 -> SetBinError( xbin,    2422.2148913072738      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    415422.92685939162      );
  id1 -> SetBinError( xbin,    2880.0192747156107      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    421986.29970763461      );
  id1 -> SetBinError( xbin,    2329.9739548012931      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    425961.78049077303      );
  id1 -> SetBinError( xbin,    2313.3732133280760      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    430867.66703172703      );
  id1 -> SetBinError( xbin,    2324.8813351585982      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    432348.02896085428      );
  id1 -> SetBinError( xbin,    2360.7126186953933      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    430601.63122991222      );
  id1 -> SetBinError( xbin,    2324.7106857288418      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    436412.77573840064      );
  id1 -> SetBinError( xbin,    2312.8931877631971      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    445858.09536065004      );
  id1 -> SetBinError( xbin,    2403.9978105030218      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    447180.23600860772      );
  id1 -> SetBinError( xbin,    2406.9182564415810      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    454585.00348417781      );
  id1 -> SetBinError( xbin,    2491.8253530793986      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    456549.97119317384      );
  id1 -> SetBinError( xbin,    2499.0497760506596      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    467660.52136298141      );
  id1 -> SetBinError( xbin,    2458.9645206891428      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    471005.07578506268      );
  id1 -> SetBinError( xbin,    2534.6305452660199      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    471037.80908735795      );
  id1 -> SetBinError( xbin,    2518.0080487549963      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    469547.28739053966      );
  id1 -> SetBinError( xbin,    2523.1500591661747      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    458567.89194344619      );
  id1 -> SetBinError( xbin,    2541.2082647633260      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    427246.76525150391      );
  id1 -> SetBinError( xbin,    2615.8399862443548      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    394155.46555382467      );
  id1 -> SetBinError( xbin,    2585.1378810725992      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    337730.80316802918      );
  id1 -> SetBinError( xbin,    2485.1350851670149      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    273455.64242708124      );
  id1 -> SetBinError( xbin,    2334.6934515589132      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    192093.86723808583      );
  id1 -> SetBinError( xbin,    2016.7082226153450      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    109532.18804532467      );
  id1 -> SetBinError( xbin,    1712.7607744860638      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    44527.650904036433      );
  id1 -> SetBinError( xbin,    1234.7640163293001      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    9288.2805274777256      );
  id1 -> SetBinError( xbin,    590.70720122693785      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    800.63347095225356      );
  id1 -> SetBinError( xbin,    117.53072590892252      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    2.1848054896337068      );
  id1 -> SetBinError( xbin,   0.93899415234219319      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    880301.96599615726      );
  id2 -> SetBinError( xbin,    8338.9610625215410      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    843902.88836730830      );
  id2 -> SetBinError( xbin,    8582.1138857768674      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    801431.95987274253      );
  id2 -> SetBinError( xbin,    7522.2415940202745      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    757410.00007379777      );
  id2 -> SetBinError( xbin,    6096.4558040139300      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    719114.04385599401      );
  id2 -> SetBinError( xbin,    7072.5253185642114      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    684454.83416515542      );
  id2 -> SetBinError( xbin,    5378.1473110197576      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    652674.05281097942      );
  id2 -> SetBinError( xbin,    5146.0803683949480      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    608840.22274138907      );
  id2 -> SetBinError( xbin,    4529.3098985175802      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    563145.93181000859      );
  id2 -> SetBinError( xbin,    4003.3677895453334      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    529443.70977352920      );
  id2 -> SetBinError( xbin,    3783.3199089860805      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    490472.14423413662      );
  id2 -> SetBinError( xbin,    4028.8260002669076      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    458881.46450806747      );
  id2 -> SetBinError( xbin,    3143.6864605633746      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    414352.61715906858      );
  id2 -> SetBinError( xbin,    2784.2598975921424      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    384994.58332675463      );
  id2 -> SetBinError( xbin,    3618.3153359821395      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    353572.70367107319      );
  id2 -> SetBinError( xbin,    2841.6157464103035      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    320782.15525550046      );
  id2 -> SetBinError( xbin,    2339.9662588654851      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    290697.17399871832      );
  id2 -> SetBinError( xbin,    2357.9712520757575      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    259552.68754483818      );
  id2 -> SetBinError( xbin,    2088.4653272370524      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    234213.27329627002      );
  id2 -> SetBinError( xbin,    2293.1363100143567      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    205530.34726815994      );
  id2 -> SetBinError( xbin,    1688.7554240031145      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    182533.79552167805      );
  id2 -> SetBinError( xbin,    1519.8285291872587      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    162400.79720875103      );
  id2 -> SetBinError( xbin,    1720.3353751265249      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    142382.69630790895      );
  id2 -> SetBinError( xbin,    1308.3932103908182      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    124088.84620738622      );
  id2 -> SetBinError( xbin,    1228.5014643244645      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    110494.34158957307      );
  id2 -> SetBinError( xbin,    1217.6357446810432      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    95967.735925138346      );
  id2 -> SetBinError( xbin,    952.86307630898330      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    86128.552891100000      );
  id2 -> SetBinError( xbin,    954.54132964533915      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    80368.347933245139      );
  id2 -> SetBinError( xbin,    907.35960988806005      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    75537.853473250158      );
  id2 -> SetBinError( xbin,    788.45948399321105      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    72046.429902810298      );
  id2 -> SetBinError( xbin,    906.22611882373917      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    74516.498167506768      );
  id2 -> SetBinError( xbin,    901.69376532988292      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    76488.737741741192      );
  id2 -> SetBinError( xbin,    782.23485784611648      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    82372.904464000516      );
  id2 -> SetBinError( xbin,    1191.6309207924287      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    87795.989537495872      );
  id2 -> SetBinError( xbin,    903.28966891315770      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    100288.90574277862      );
  id2 -> SetBinError( xbin,    986.22496468620454      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    113695.36536878863      );
  id2 -> SetBinError( xbin,    1167.2510494370497      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    130092.03379344869      );
  id2 -> SetBinError( xbin,    1294.5418450400878      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    146598.63163071248      );
  id2 -> SetBinError( xbin,    1161.2001868078523      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    168789.67716230941      );
  id2 -> SetBinError( xbin,    1382.2953414725114      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    191477.46981618786      );
  id2 -> SetBinError( xbin,    1450.3699097430833      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    214721.88542608137      );
  id2 -> SetBinError( xbin,    1454.0747787518974      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    250059.06476428575      );
  id2 -> SetBinError( xbin,    1771.0909021071006      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    280657.55293442629      );
  id2 -> SetBinError( xbin,    1927.3433388071514      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    310649.33665181027      );
  id2 -> SetBinError( xbin,    2086.0879593071104      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    355027.48751516419      );
  id2 -> SetBinError( xbin,    2651.0539255242761      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    385783.90462820249      );
  id2 -> SetBinError( xbin,    2462.3108078462874      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    427752.51915845787      );
  id2 -> SetBinError( xbin,    2797.3047814963238      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    469646.84152375208      );
  id2 -> SetBinError( xbin,    3546.8122469066993      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    509317.08005518303      );
  id2 -> SetBinError( xbin,    3256.5438771933536      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    557909.52531912818      );
  id2 -> SetBinError( xbin,    3895.8640503470174      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    605819.84308759065      );
  id2 -> SetBinError( xbin,    4978.6730187927478      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    640718.38363689824      );
  id2 -> SetBinError( xbin,    4307.9201745401815      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    693968.25082869770      );
  id2 -> SetBinError( xbin,    4678.6567961870969      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    741393.78225357446      );
  id2 -> SetBinError( xbin,    6581.7880032661651      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    785320.91172144213      );
  id2 -> SetBinError( xbin,    6025.8684651203484      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    823972.67770038371      );
  id2 -> SetBinError( xbin,    7021.2552674955787      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    872439.80704735278      );
  id2 -> SetBinError( xbin,    6999.9968165481278      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    924367.95820824802      );
  id2 -> SetBinError( xbin,    7540.8542748915725      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    978957.92174279864      );
  id2 -> SetBinError( xbin,    10414.304653023975      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1015946.0145725268      );
  id2 -> SetBinError( xbin,    9351.1200670108428      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    150882.44888172197      );
  id3 -> SetBinError( xbin,    1506.8866859822999      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    203979.58767697139      );
  id3 -> SetBinError( xbin,    1827.9266961050812      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    263397.22811272455      );
  id3 -> SetBinError( xbin,    2083.5668336520589      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    306843.55665681831      );
  id3 -> SetBinError( xbin,    2274.9677941453997      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    349092.64885908010      );
  id3 -> SetBinError( xbin,    2466.0604303925293      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    378938.44608736993      );
  id3 -> SetBinError( xbin,    2591.1448316530036      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    405857.15632774873      );
  id3 -> SetBinError( xbin,    2687.0519849696816      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    427334.44185469759      );
  id3 -> SetBinError( xbin,    2664.6073666872753      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    441094.51480113063      );
  id3 -> SetBinError( xbin,    2738.1703059213937      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    442143.70168286341      );
  id3 -> SetBinError( xbin,    3224.5683396304476      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    458826.21594795753      );
  id3 -> SetBinError( xbin,    3170.6628939287584      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    458547.02289898600      );
  id3 -> SetBinError( xbin,    3587.4344031314918      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    464543.64378740109      );
  id3 -> SetBinError( xbin,    3210.3967034323769      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    469607.55008145492      );
  id3 -> SetBinError( xbin,    2779.2279125442706      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    469231.97879097128      );
  id3 -> SetBinError( xbin,    2812.4663507450750      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    474259.67543562525      );
  id3 -> SetBinError( xbin,    2850.5466227809575      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    485399.17300898844      );
  id3 -> SetBinError( xbin,    2885.5458429127848      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    490032.97979735094      );
  id3 -> SetBinError( xbin,    2881.3886348596998      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    497535.29842319619      );
  id3 -> SetBinError( xbin,    2891.8498631933676      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    504680.88666649285      );
  id3 -> SetBinError( xbin,    2899.4210105294314      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    511343.50340062683      );
  id3 -> SetBinError( xbin,    3068.6838498563670      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    514117.06323914533      );
  id3 -> SetBinError( xbin,    3059.0753733607303      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    512808.03795837826      );
  id3 -> SetBinError( xbin,    3116.9844822791138      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    509520.18221564632      );
  id3 -> SetBinError( xbin,    3289.9565796999168      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    492378.05440555356      );
  id3 -> SetBinError( xbin,    3104.9664666925937      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    462924.25851951010      );
  id3 -> SetBinError( xbin,    3134.5249253538482      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    424016.51142337167      );
  id3 -> SetBinError( xbin,    3146.2493969933498      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    362531.39522191568      );
  id3 -> SetBinError( xbin,    2910.2146754940513      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    300282.80973357294      );
  id3 -> SetBinError( xbin,    2566.2614108903313      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    221121.45382119913      );
  id3 -> SetBinError( xbin,    1969.1628459918168      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    44820.818774379230      );
  id4 -> SetBinError( xbin,    1585.1971794912226      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    146928.12851948777      );
  id4 -> SetBinError( xbin,    2321.5535402325290      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    173145.57854591508      );
  id4 -> SetBinError( xbin,    2710.7145454861202      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    200040.52704413771      );
  id4 -> SetBinError( xbin,    2929.5224070148784      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    232345.21036121098      );
  id4 -> SetBinError( xbin,    3295.6173014471533      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    254833.92281880160      );
  id4 -> SetBinError( xbin,    3640.9826870637280      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    286654.74311438366      );
  id4 -> SetBinError( xbin,    3634.8299204313553      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    301761.77685530082      );
  id4 -> SetBinError( xbin,    3621.4706515340176      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    331286.76685227716      );
  id4 -> SetBinError( xbin,    3862.9955504553650      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    344147.80015001475      );
  id4 -> SetBinError( xbin,    3956.4521347199307      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    355398.30216218322      );
  id4 -> SetBinError( xbin,    4092.8851197271547      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    377792.52429447230      );
  id4 -> SetBinError( xbin,    4250.3349573651230      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    396400.91671458934      );
  id4 -> SetBinError( xbin,    4228.6608764129869      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    398109.15084632469      );
  id4 -> SetBinError( xbin,    4327.7845259246797      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    424267.93684917048      );
  id4 -> SetBinError( xbin,    4552.7659074111007      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    421428.34183637501      );
  id4 -> SetBinError( xbin,    4448.2241455369767      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    437542.46047610766      );
  id4 -> SetBinError( xbin,    4552.1820909888629      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    437838.18018364720      );
  id4 -> SetBinError( xbin,    4597.6661224802729      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    444526.76780681632      );
  id4 -> SetBinError( xbin,    4505.7953266392742      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    439910.59214665892      );
  id4 -> SetBinError( xbin,    4877.4754392309414      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    459680.58165212628      );
  id4 -> SetBinError( xbin,    4837.5055620666053      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    451250.97992880712      );
  id4 -> SetBinError( xbin,    5229.9968021746390      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    453961.97080915235      );
  id4 -> SetBinError( xbin,    5252.5760219955637      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    463733.67172404518      );
  id4 -> SetBinError( xbin,    4547.4512230382152      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    462855.25742766052      );
  id4 -> SetBinError( xbin,    5514.2770070493434      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    462685.36879483983      );
  id4 -> SetBinError( xbin,    4562.9315078130667      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    462800.51379656047      );
  id4 -> SetBinError( xbin,    6057.8504456728278      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    472154.51384715672      );
  id4 -> SetBinError( xbin,    6118.2154294216534      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    465097.49853033602      );
  id4 -> SetBinError( xbin,    4603.5806070013687      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    473205.92852321919      );
  id4 -> SetBinError( xbin,    4555.0786676333628      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    466686.88001407479      );
  id4 -> SetBinError( xbin,    4416.6191460208638      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    478620.21849330043      );
  id4 -> SetBinError( xbin,    4427.7560041060970      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    477333.51780178142      );
  id4 -> SetBinError( xbin,    4429.8292591198388      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    482568.95124254638      );
  id4 -> SetBinError( xbin,    4440.5091252367702      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    490619.16841606639      );
  id4 -> SetBinError( xbin,    4568.3714282682704      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    488126.43152329861      );
  id4 -> SetBinError( xbin,    5161.0177724438581      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    492234.63069497445      );
  id4 -> SetBinError( xbin,    5199.8774339523488      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    496367.02663238480      );
  id4 -> SetBinError( xbin,    4771.2025321829997      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    497429.74006713368      );
  id4 -> SetBinError( xbin,    4860.7237041008975      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    508632.55863213440      );
  id4 -> SetBinError( xbin,    4904.6004789325798      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    513643.02392639371      );
  id4 -> SetBinError( xbin,    5267.7209087957672      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    495428.66969239892      );
  id4 -> SetBinError( xbin,    5522.9083188188179      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    518028.74282128253      );
  id4 -> SetBinError( xbin,    5181.4732464045692      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    516072.25792166591      );
  id4 -> SetBinError( xbin,    4938.8031855017052      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    517655.01864827576      );
  id4 -> SetBinError( xbin,    4871.6859391186144      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    510461.32520584849      );
  id4 -> SetBinError( xbin,    6155.8739879310961      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    514886.76015835861      );
  id4 -> SetBinError( xbin,    6208.4871013838210      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    508465.68713998125      );
  id4 -> SetBinError( xbin,    4896.7414259474035      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    504349.15175986709      );
  id4 -> SetBinError( xbin,    4846.6485665372866      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    494788.33576803387      );
  id4 -> SetBinError( xbin,    4804.2651379834397      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    480656.74584482634      );
  id4 -> SetBinError( xbin,    5291.5327254063359      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    469094.60025596555      );
  id4 -> SetBinError( xbin,    5199.6195832258591      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    447467.42095982842      );
  id4 -> SetBinError( xbin,    4413.4463191501472      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    428381.41965542716      );
  id4 -> SetBinError( xbin,    4285.4594575016517      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    397987.29093931935      );
  id4 -> SetBinError( xbin,    4511.3391990665850      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    372459.96293136879      );
  id4 -> SetBinError( xbin,    4703.7993730026201      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    44073.646985488493      );
  id5 -> SetBinError( xbin,    482.23718389608695      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    95676.801428525840      );
  id5 -> SetBinError( xbin,    626.19381841518259      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    105826.10149005242      );
  id5 -> SetBinError( xbin,    724.49244941168047      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    114287.95158324894      );
  id5 -> SetBinError( xbin,    775.07973399422895      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    126839.80669872119      );
  id5 -> SetBinError( xbin,    843.71577037570319      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    141371.64102445132      );
  id5 -> SetBinError( xbin,    912.35193199238984      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    159821.85898573123      );
  id5 -> SetBinError( xbin,    994.57270181528713      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    155436.63726890317      );
  id5 -> SetBinError( xbin,    1126.7685392224425      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    120489.06268239206      );
  id5 -> SetBinError( xbin,    868.13830184471215      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    60532.159471059662      );
  id5 -> SetBinError( xbin,    336.64083094199583      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    31609.044166322688      );
  id5 -> SetBinError( xbin,    185.83866116895777      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19872.624263957328      );
  id5 -> SetBinError( xbin,    139.77702877175972      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13727.717471560092      );
  id5 -> SetBinError( xbin,    109.87833979127495      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    10195.587426136899      );
  id5 -> SetBinError( xbin,    95.808670878413537      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7714.0520618722094      );
  id5 -> SetBinError( xbin,    67.308425314434189      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5868.0110983694904      );
  id5 -> SetBinError( xbin,    56.918658085622731      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4762.3566167567433      );
  id5 -> SetBinError( xbin,    55.277967167248747      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3856.5364018344249      );
  id5 -> SetBinError( xbin,    50.602996987952451      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3162.2861889120227      );
  id5 -> SetBinError( xbin,    42.215763809262697      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2627.1592050270629      );
  id5 -> SetBinError( xbin,    42.348312602246331      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2138.1516610530634      );
  id5 -> SetBinError( xbin,    37.293861940443072      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1856.9376708099751      );
  id5 -> SetBinError( xbin,    31.309768445507220      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1606.3525067019300      );
  id5 -> SetBinError( xbin,    37.028340318874882      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1336.7107277864579      );
  id5 -> SetBinError( xbin,    37.947448251866163      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1138.8920273147376      );
  id5 -> SetBinError( xbin,    28.415018369612852      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1035.0429675988296      );
  id5 -> SetBinError( xbin,    23.871001315978432      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    875.99533700671736      );
  id5 -> SetBinError( xbin,    19.357442093376132      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    742.28117681421838      );
  id5 -> SetBinError( xbin,    28.541770940409087      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    665.53547474565221      );
  id5 -> SetBinError( xbin,    38.815484082180596      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    616.18047678247331      );
  id5 -> SetBinError( xbin,    31.137623649348047      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    529.28521569242901      );
  id5 -> SetBinError( xbin,    18.168329660485018      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    432.00190481821522      );
  id5 -> SetBinError( xbin,    21.452510691245646      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    428.91081577539489      );
  id5 -> SetBinError( xbin,    17.369647772474110      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    355.17923846534586      );
  id5 -> SetBinError( xbin,    15.262691735267774      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    318.23538849205028      );
  id5 -> SetBinError( xbin,    13.721554811560733      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    307.79270950100045      );
  id5 -> SetBinError( xbin,    13.026618278891776      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    263.20079369265471      );
  id5 -> SetBinError( xbin,    14.609468030118114      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    240.47463783176514      );
  id5 -> SetBinError( xbin,    14.199318143677708      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2922.4707616207324      );
  id6 -> SetBinError( xbin,    58.755379192199669      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9657.4627261979549      );
  id6 -> SetBinError( xbin,    110.18400801478973      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19571.243506823379      );
  id6 -> SetBinError( xbin,    160.91668457143905      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    34511.581534208708      );
  id6 -> SetBinError( xbin,    215.02529556370354      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    55893.445910152339      );
  id6 -> SetBinError( xbin,    263.63628001852402      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    86976.228103879112      );
  id6 -> SetBinError( xbin,    310.02260681409052      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    133980.30816893058      );
  id6 -> SetBinError( xbin,    375.40427780658501      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    186542.00751535973      );
  id6 -> SetBinError( xbin,    448.81249778132309      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    72939.534936771117      );
  id6 -> SetBinError( xbin,    317.60295040259780      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24859.238463162157      );
  id6 -> SetBinError( xbin,    210.14470060428357      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    9488.3650811899479      );
  id6 -> SetBinError( xbin,    140.54056924585129      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3582.2653724464612      );
  id6 -> SetBinError( xbin,    89.336984248813238      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    12036.302782064466      );
  id7 -> SetBinError( xbin,    156.89557388184676      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15454.384348271189      );
  id7 -> SetBinError( xbin,    176.28867003140221      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19388.150731140653      );
  id7 -> SetBinError( xbin,    195.81698230499651      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24426.725394608191      );
  id7 -> SetBinError( xbin,    225.48781952568413      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28647.709800858833      );
  id7 -> SetBinError( xbin,    246.38159377065472      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33892.923770332643      );
  id7 -> SetBinError( xbin,    276.40813929448035      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37415.465764795241      );
  id7 -> SetBinError( xbin,    298.02729304299459      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    41847.661161103199      );
  id7 -> SetBinError( xbin,    310.69285259990284      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    46045.222047346862      );
  id7 -> SetBinError( xbin,    334.38381424227254      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    49662.796372073200      );
  id7 -> SetBinError( xbin,    346.40410332376331      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    53545.722896650812      );
  id7 -> SetBinError( xbin,    372.43952815511335      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    55853.849606671138      );
  id7 -> SetBinError( xbin,    382.46556625156131      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58552.405496999425      );
  id7 -> SetBinError( xbin,    393.73367881848549      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    60402.720003684670      );
  id7 -> SetBinError( xbin,    399.25115490053736      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    61777.862433734233      );
  id7 -> SetBinError( xbin,    403.52654506752179      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    61150.470372396092      );
  id7 -> SetBinError( xbin,    401.12358956630948      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    61573.065765029976      );
  id7 -> SetBinError( xbin,    402.49034003072126      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    62399.454872041562      );
  id7 -> SetBinError( xbin,    405.03363119896073      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    61005.731819942994      );
  id7 -> SetBinError( xbin,    400.94906987290091      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    59445.005635443253      );
  id7 -> SetBinError( xbin,    389.97105966806572      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    56159.735808759535      );
  id7 -> SetBinError( xbin,    368.68272588754365      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    53251.181410435405      );
  id7 -> SetBinError( xbin,    358.56457697533881      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    50666.180996799434      );
  id7 -> SetBinError( xbin,    348.05993773046237      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    46055.573337578244      );
  id7 -> SetBinError( xbin,    323.71497454555555      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    41599.244605645479      );
  id7 -> SetBinError( xbin,    302.42488407065809      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    36827.687518228624      );
  id7 -> SetBinError( xbin,    278.20591494514429      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    31196.194045974742      );
  id7 -> SetBinError( xbin,    254.22340176509772      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    26973.929773120719      );
  id7 -> SetBinError( xbin,    237.36436042091864      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    21282.773293231097      );
  id7 -> SetBinError( xbin,    208.25210423708776      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    16838.061746228537      );
  id7 -> SetBinError( xbin,    181.98728126422472      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7175.4773201588505      );
  id8 -> SetBinError( xbin,    46.745950960601071      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12960.806300616940      );
  id8 -> SetBinError( xbin,    62.800611048695217      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    11220.964629125894      );
  id8 -> SetBinError( xbin,    57.198799532171968      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9906.6424749848738      );
  id8 -> SetBinError( xbin,    53.294531440586439      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8639.1806085362150      );
  id8 -> SetBinError( xbin,    48.797551714741800      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7660.6455384249293      );
  id8 -> SetBinError( xbin,    45.485471005727881      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6644.1679968085446      );
  id8 -> SetBinError( xbin,    41.036294523299738      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5937.7443942323625      );
  id8 -> SetBinError( xbin,    38.671816259672845      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5307.8777969332423      );
  id8 -> SetBinError( xbin,    36.078949930934591      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4543.3049443448735      );
  id8 -> SetBinError( xbin,    32.458798337858497      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4125.2165721056463      );
  id8 -> SetBinError( xbin,    30.418708720015093      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3667.4308440365076      );
  id8 -> SetBinError( xbin,    28.262403784724523      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3330.5967104102392      );
  id8 -> SetBinError( xbin,    27.097113450335655      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2963.4284984848946      );
  id8 -> SetBinError( xbin,    25.083435511188952      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2727.4455852940605      );
  id8 -> SetBinError( xbin,    23.580205394828408      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2476.3247006792171      );
  id8 -> SetBinError( xbin,    22.238726131472216      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2247.9367181859484      );
  id8 -> SetBinError( xbin,    21.312042210014813      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2028.9553788660460      );
  id8 -> SetBinError( xbin,    19.785961139418944      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1851.9952530924093      );
  id8 -> SetBinError( xbin,    18.510938484505072      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1669.2014043664421      );
  id8 -> SetBinError( xbin,    17.365578026795575      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1557.0050795862915      );
  id8 -> SetBinError( xbin,    16.635515751288949      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1415.7739170887542      );
  id8 -> SetBinError( xbin,    15.601935937962340      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1281.4898790879095      );
  id8 -> SetBinError( xbin,    14.523914099034217      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1217.0764004373384      );
  id8 -> SetBinError( xbin,    14.099235595418849      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1092.1087828439720      );
  id8 -> SetBinError( xbin,    13.389247808307827      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    1012.9061140463933      );
  id8 -> SetBinError( xbin,    12.528012475335185      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    946.50657374022467      );
  id8 -> SetBinError( xbin,    12.411377116013325      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    864.71704463282185      );
  id8 -> SetBinError( xbin,    12.069683779686294      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
