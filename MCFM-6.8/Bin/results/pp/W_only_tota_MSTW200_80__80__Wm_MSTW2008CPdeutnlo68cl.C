// Cross-section is:      1937180.3621648743 +/-          842.6885307730)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -52309.92326   -2.70%
//        GQB    |      -48212.70059   -2.49%
//        QG     |      -50893.92730   -2.63%
//        QBG    |      -46212.41407   -2.39%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      993374.80455   51.28%
//        QBQ    |     1149624.01804   59.35%

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
//Wm_MSTW2008CPdeutnlo            [runstring]  
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
//MSTW2008CPdeutnlo68c            [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//MSTW2008CPdeutnlo68c            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_MSTW200_80__80__Wm_MSTW2008CPdeutnlo68cl.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -9.0958206809952698E-003 );
  id1 -> SetBinError( xbin,    8.0810943766700481E-003 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    13.309436784362417      );
  id1 -> SetBinError( xbin,    2.7315462873610405      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    293.89987756344766      );
  id1 -> SetBinError( xbin,    44.766896633575200      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2363.4082437489374      );
  id1 -> SetBinError( xbin,    156.56573849833717      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    9598.0220063979559      );
  id1 -> SetBinError( xbin,    538.47171658113712      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    30634.583045378015      );
  id1 -> SetBinError( xbin,    790.83954164638430      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    72994.907276920538      );
  id1 -> SetBinError( xbin,    1200.1307311430285      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    137211.84017374678      );
  id1 -> SetBinError( xbin,    1347.2242748378148      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    210926.03168264171      );
  id1 -> SetBinError( xbin,    1691.6615103350748      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    294135.39431369602      );
  id1 -> SetBinError( xbin,    1926.6095968510645      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    355838.17467606004      );
  id1 -> SetBinError( xbin,    1936.3198006038683      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    401544.63264586538      );
  id1 -> SetBinError( xbin,    1976.4029909547469      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    411761.57128188247      );
  id1 -> SetBinError( xbin,    2192.4673178752068      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    414639.13117546029      );
  id1 -> SetBinError( xbin,    2056.1139478394271      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    418680.40852685343      );
  id1 -> SetBinError( xbin,    2011.3205349219118      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    416078.75943816244      );
  id1 -> SetBinError( xbin,    1990.9201837478693      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    421014.68419070821      );
  id1 -> SetBinError( xbin,    2003.2675118496697      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    414632.47096871893      );
  id1 -> SetBinError( xbin,    1985.8311566572736      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    416167.39890360495      );
  id1 -> SetBinError( xbin,    1928.9253067618833      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    406332.42301143397      );
  id1 -> SetBinError( xbin,    1918.0945720210730      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    410030.69944561832      );
  id1 -> SetBinError( xbin,    1926.0382574189762      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    404225.31975066289      );
  id1 -> SetBinError( xbin,    1919.0808538362344      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    396887.48350280721      );
  id1 -> SetBinError( xbin,    1942.6228305993297      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    396611.87193603819      );
  id1 -> SetBinError( xbin,    2051.0200802864160      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    390292.96586730436      );
  id1 -> SetBinError( xbin,    2037.2257369251029      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    377691.27853160055      );
  id1 -> SetBinError( xbin,    1900.6867689942742      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    370317.93007355870      );
  id1 -> SetBinError( xbin,    1900.3100072060929      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    363858.30374111061      );
  id1 -> SetBinError( xbin,    1883.6288063846637      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    344085.87253614224      );
  id1 -> SetBinError( xbin,    1859.0855199369189      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    328120.35721529316      );
  id1 -> SetBinError( xbin,    1813.0700028529982      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    305196.83060489601      );
  id1 -> SetBinError( xbin,    1839.7479530326755      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    260961.34130561940      );
  id1 -> SetBinError( xbin,    1703.1195197503316      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    198857.10709743455      );
  id1 -> SetBinError( xbin,    1659.9092777137143      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    144244.62625700844      );
  id1 -> SetBinError( xbin,    1488.7405365489230      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    88245.721735844854      );
  id1 -> SetBinError( xbin,    1146.6854641762675      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    46246.055905778689      );
  id1 -> SetBinError( xbin,    930.55365601898870      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    18795.833344414186      );
  id1 -> SetBinError( xbin,    567.02028231936185      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    5919.1771313895933      );
  id1 -> SetBinError( xbin,    307.87772261826956      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1246.3459713997936      );
  id1 -> SetBinError( xbin,    97.202539378515510      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    109.59867605484794      );
  id1 -> SetBinError( xbin,    12.617414370711659      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    2.5608291546763020      );
  id1 -> SetBinError( xbin,   0.63844434443509168      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    2.8427427799053236E-003 );
  id1 -> SetBinError( xbin,    1.0875611643024793E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    849484.67813745374      );
  id2 -> SetBinError( xbin,    11170.469640212279      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    805102.51269009802      );
  id2 -> SetBinError( xbin,    8956.7742013808966      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    760262.98602268810      );
  id2 -> SetBinError( xbin,    6261.3531752936779      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    735929.87783744885      );
  id2 -> SetBinError( xbin,    7139.0373681046440      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    701481.07713081583      );
  id2 -> SetBinError( xbin,    6564.5396742792300      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    663175.17997524876      );
  id2 -> SetBinError( xbin,    5003.6296878782550      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    629781.32259984640      );
  id2 -> SetBinError( xbin,    8475.2972819753486      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    592053.62019926205      );
  id2 -> SetBinError( xbin,    5017.0706215932869      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    546975.62430800975      );
  id2 -> SetBinError( xbin,    3940.1882538266777      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    528824.43312051450      );
  id2 -> SetBinError( xbin,    4215.3539802232090      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    482298.22823859326      );
  id2 -> SetBinError( xbin,    3168.0485977642061      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    453382.78765420563      );
  id2 -> SetBinError( xbin,    3280.3066192198262      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    423849.33241313131      );
  id2 -> SetBinError( xbin,    4562.2851752570805      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    380131.31272467982      );
  id2 -> SetBinError( xbin,    2469.7750582266617      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    350090.13977548457      );
  id2 -> SetBinError( xbin,    2068.8160262543679      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    319690.54276311345      );
  id2 -> SetBinError( xbin,    1934.7712791563818      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    288969.18685265857      );
  id2 -> SetBinError( xbin,    1859.9646590310429      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    260402.78258270110      );
  id2 -> SetBinError( xbin,    1544.5971627725157      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    232022.78565966297      );
  id2 -> SetBinError( xbin,    1586.5515373821786      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    204626.99630390308      );
  id2 -> SetBinError( xbin,    1265.2746621869539      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    179096.34002213579      );
  id2 -> SetBinError( xbin,    1160.0794559507558      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    158328.59774054372      );
  id2 -> SetBinError( xbin,    1274.8311348089715      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    136149.65838383042      );
  id2 -> SetBinError( xbin,    900.51437027848556      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    121423.46002913079      );
  id2 -> SetBinError( xbin,    969.14249176266492      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    107493.76633353095      );
  id2 -> SetBinError( xbin,    1029.9744866000524      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    94246.841850769648      );
  id2 -> SetBinError( xbin,    1038.8119282310358      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    85266.566751922408      );
  id2 -> SetBinError( xbin,    718.89315418569367      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    76812.264994381738      );
  id2 -> SetBinError( xbin,    664.93566012730298      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    71322.848928962194      );
  id2 -> SetBinError( xbin,    651.30900775600117      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    68903.602677974864      );
  id2 -> SetBinError( xbin,    622.70139968298383      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    68471.175858629445      );
  id2 -> SetBinError( xbin,    593.89606130627590      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    71762.027310915801      );
  id2 -> SetBinError( xbin,    752.83207568846797      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    75943.732438169318      );
  id2 -> SetBinError( xbin,    816.32576740314175      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    81056.845271002268      );
  id2 -> SetBinError( xbin,    778.53693950366585      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    90189.443370682027      );
  id2 -> SetBinError( xbin,    743.84394623987987      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    102882.03195105183      );
  id2 -> SetBinError( xbin,    834.17216429520693      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    115688.44071640035      );
  id2 -> SetBinError( xbin,    1037.0439683752836      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    131146.37940369899      );
  id2 -> SetBinError( xbin,    1015.4313403555752      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    150029.13263419166      );
  id2 -> SetBinError( xbin,    1200.5906246323000      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    168217.62183609218      );
  id2 -> SetBinError( xbin,    1171.0972824639412      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    192516.36167385045      );
  id2 -> SetBinError( xbin,    1668.6795320896317      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    211859.67695963359      );
  id2 -> SetBinError( xbin,    1311.7595002769444      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    237554.43215202336      );
  id2 -> SetBinError( xbin,    1544.3591672430518      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    266225.75982866663      );
  id2 -> SetBinError( xbin,    2324.5221813383100      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    294911.16150233091      );
  id2 -> SetBinError( xbin,    3187.1970524811545      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    313038.25278160739      );
  id2 -> SetBinError( xbin,    1950.3439835819290      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    345991.89967217855      );
  id2 -> SetBinError( xbin,    2689.9277649713326      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    371215.68167699239      );
  id2 -> SetBinError( xbin,    2463.2005639109125      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    403409.13062510191      );
  id2 -> SetBinError( xbin,    4006.5219448031389      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    435579.46132530365      );
  id2 -> SetBinError( xbin,    4424.5804773269592      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    464252.14055307489      );
  id2 -> SetBinError( xbin,    3685.6974591976368      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    492376.29335773841      );
  id2 -> SetBinError( xbin,    4871.1618605618651      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    512679.06289605866      );
  id2 -> SetBinError( xbin,    3786.3501315136236      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    555959.93858495075      );
  id2 -> SetBinError( xbin,    5117.0112146923648      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    582463.48303987109      );
  id2 -> SetBinError( xbin,    6554.4710930474494      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    614777.34028230107      );
  id2 -> SetBinError( xbin,    5873.9949464958363      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    650473.51863772795      );
  id2 -> SetBinError( xbin,    6838.2934175242617      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    673177.12419539993      );
  id2 -> SetBinError( xbin,    6367.4858295828271      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    690935.98800460401      );
  id2 -> SetBinError( xbin,    6865.4277910156052      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    718669.31790869718      );
  id2 -> SetBinError( xbin,    7658.9576666450866      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    286231.19050323387      );
  id3 -> SetBinError( xbin,    2569.7524211179357      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    310661.81529521907      );
  id3 -> SetBinError( xbin,    2341.0617440371279      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    323179.24479453824      );
  id3 -> SetBinError( xbin,    2159.9049073465312      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    338329.74639210774      );
  id3 -> SetBinError( xbin,    2124.8583440559296      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    345831.45998590754      );
  id3 -> SetBinError( xbin,    2114.8699331296766      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    353277.72300281154      );
  id3 -> SetBinError( xbin,    1985.9140263476579      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    355680.31822683616      );
  id3 -> SetBinError( xbin,    1942.5390704907793      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    365667.31735936948      );
  id3 -> SetBinError( xbin,    1917.4754795265160      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    364831.18000301381      );
  id3 -> SetBinError( xbin,    1865.8763287780027      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    367373.83567980205      );
  id3 -> SetBinError( xbin,    1991.2144056332863      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    371659.98903565435      );
  id3 -> SetBinError( xbin,    1987.7178114867379      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    367309.27959872590      );
  id3 -> SetBinError( xbin,    1811.0332857364981      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    367501.46285350923      );
  id3 -> SetBinError( xbin,    1830.8558908651685      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    368777.84370566241      );
  id3 -> SetBinError( xbin,    1844.8926161949732      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    364732.29593513161      );
  id3 -> SetBinError( xbin,    1839.4698281157348      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    362798.63188504986      );
  id3 -> SetBinError( xbin,    1813.7315427707831      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    356306.74745117390      );
  id3 -> SetBinError( xbin,    1816.1809724607003      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    350689.54686579836      );
  id3 -> SetBinError( xbin,    1791.0951391919273      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    346398.25245677499      );
  id3 -> SetBinError( xbin,    1792.0311247161792      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    338986.25703774299      );
  id3 -> SetBinError( xbin,    1821.6499238148149      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    325980.45928406256      );
  id3 -> SetBinError( xbin,    1772.8819586175935      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    320712.19328464550      );
  id3 -> SetBinError( xbin,    1777.2522497397797      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    305865.58197686420      );
  id3 -> SetBinError( xbin,    1845.6054528290410      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    293326.00844008219      );
  id3 -> SetBinError( xbin,    1854.6231776174975      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    284053.33062922762      );
  id3 -> SetBinError( xbin,    1859.2585584780259      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    268258.44721314264      );
  id3 -> SetBinError( xbin,    1950.7642136643690      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    253334.50443018187      );
  id3 -> SetBinError( xbin,    1905.9192211647871      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    233345.51009564032      );
  id3 -> SetBinError( xbin,    1956.1465759459252      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    210089.84056211461      );
  id3 -> SetBinError( xbin,    1985.2797829544536      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    185618.31209768233      );
  id3 -> SetBinError( xbin,    2025.6388899936317      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    96708.449971995782      );
  id4 -> SetBinError( xbin,    3044.7132847893263      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    284964.99812949152      );
  id4 -> SetBinError( xbin,    4144.1790102548102      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    295951.59859571123      );
  id4 -> SetBinError( xbin,    3664.3659471387591      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    311939.40696325497      );
  id4 -> SetBinError( xbin,    4640.3110554410159      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    312647.27477220562      );
  id4 -> SetBinError( xbin,    4670.2284045938295      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    325675.50306528306      );
  id4 -> SetBinError( xbin,    4671.6802906793309      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    332102.85879704042      );
  id4 -> SetBinError( xbin,    4617.4298464688964      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    328370.65694581345      );
  id4 -> SetBinError( xbin,    3425.8401665627948      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    347240.96311398933      );
  id4 -> SetBinError( xbin,    3407.8774335728936      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    348134.25222855556      );
  id4 -> SetBinError( xbin,    3831.8731264984340      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    349686.57952303567      );
  id4 -> SetBinError( xbin,    3802.6878334798498      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    354119.72359489300      );
  id4 -> SetBinError( xbin,    3130.3166796163291      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    353810.09566218097      );
  id4 -> SetBinError( xbin,    3160.6149775793551      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    352540.55118141789      );
  id4 -> SetBinError( xbin,    3105.9520417384974      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    361857.89567933040      );
  id4 -> SetBinError( xbin,    3117.6384075163687      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    363003.04995975527      );
  id4 -> SetBinError( xbin,    3543.7278016504883      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    365568.41662287642      );
  id4 -> SetBinError( xbin,    3473.9520655594179      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    363662.20560769277      );
  id4 -> SetBinError( xbin,    3514.3313265648644      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    367838.94893064880      );
  id4 -> SetBinError( xbin,    3487.2809742543141      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    368877.44004707993      );
  id4 -> SetBinError( xbin,    3280.4658641946185      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    369393.92942867381      );
  id4 -> SetBinError( xbin,    3255.7077308347161      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    365582.54752454534      );
  id4 -> SetBinError( xbin,    3030.3605548257497      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    376149.85595030920      );
  id4 -> SetBinError( xbin,    3276.6774067110005      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    367977.90583543369      );
  id4 -> SetBinError( xbin,    3373.4116453893380      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    372243.12380194175      );
  id4 -> SetBinError( xbin,    3405.0277525149463      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    363407.12984406832      );
  id4 -> SetBinError( xbin,    3197.3403094561904      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    364616.37176811200      );
  id4 -> SetBinError( xbin,    2956.1849497142607      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    373583.10705893673      );
  id4 -> SetBinError( xbin,    3048.7651375486344      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    353743.93440520071      );
  id4 -> SetBinError( xbin,    11099.828487221939      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    371235.82803103613      );
  id4 -> SetBinError( xbin,    11102.007052824953      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    366608.27641582792      );
  id4 -> SetBinError( xbin,    3198.4643633802661      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    364567.14613238245      );
  id4 -> SetBinError( xbin,    3142.2548255157644      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    357396.43630363018      );
  id4 -> SetBinError( xbin,    2895.7435658262402      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    355325.09789492568      );
  id4 -> SetBinError( xbin,    2876.7154690372422      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    358483.30235987372      );
  id4 -> SetBinError( xbin,    2866.3969830053138      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    349678.54720870237      );
  id4 -> SetBinError( xbin,    3029.6439904677482      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    347818.79938696761      );
  id4 -> SetBinError( xbin,    3053.4700429616764      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    343865.99554622802      );
  id4 -> SetBinError( xbin,    2985.8820115683930      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    348432.21652936540      );
  id4 -> SetBinError( xbin,    2998.6507153861739      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    337223.23733906623      );
  id4 -> SetBinError( xbin,    2929.3848998278318      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    335939.85035044648      );
  id4 -> SetBinError( xbin,    2877.3376416786009      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    330317.69166436192      );
  id4 -> SetBinError( xbin,    3466.9782701235126      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    317904.71975735028      );
  id4 -> SetBinError( xbin,    3488.9651373081274      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    318599.30483351694      );
  id4 -> SetBinError( xbin,    2834.1608663168336      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    318817.38169207226      );
  id4 -> SetBinError( xbin,    3022.9386498307822      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    304753.86812197202      );
  id4 -> SetBinError( xbin,    3148.5681973195842      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    304883.95123822446      );
  id4 -> SetBinError( xbin,    3291.4833721500090      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    294301.95327559306      );
  id4 -> SetBinError( xbin,    3148.6028068551673      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    285659.78159226279      );
  id4 -> SetBinError( xbin,    3079.1251365806465      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    281551.40422097471      );
  id4 -> SetBinError( xbin,    3185.1904820132581      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    281881.42548094620      );
  id4 -> SetBinError( xbin,    2988.0090005742368      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    270256.25380285695      );
  id4 -> SetBinError( xbin,    2945.5440303122909      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    262456.46844369726      );
  id4 -> SetBinError( xbin,    3438.2727256263029      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    255103.85186268191      );
  id4 -> SetBinError( xbin,    3468.5616362315905      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    247567.97987054070      );
  id4 -> SetBinError( xbin,    3017.6627266254659      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    232129.70383286511      );
  id4 -> SetBinError( xbin,    3242.6384894061543      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    28491.328615594983      );
  id5 -> SetBinError( xbin,    329.80254146901393      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    63928.252541623580      );
  id5 -> SetBinError( xbin,    516.97244473168655      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    70803.698150482625      );
  id5 -> SetBinError( xbin,    598.51037036187461      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    83103.951990016038      );
  id5 -> SetBinError( xbin,    585.20042519498747      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    91851.187037954063      );
  id5 -> SetBinError( xbin,    622.09177848728109      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    109365.66515099707      );
  id5 -> SetBinError( xbin,    704.31275080142973      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    126585.47383447103      );
  id5 -> SetBinError( xbin,    778.47459975882987      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    126642.08591483082      );
  id5 -> SetBinError( xbin,    916.17693259813768      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    101569.54091672093      );
  id5 -> SetBinError( xbin,    724.97118141927945      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    51225.681111284932      );
  id5 -> SetBinError( xbin,    236.45986293020403      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    27694.747850495241      );
  id5 -> SetBinError( xbin,    159.70301040958827      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17512.287301811895      );
  id5 -> SetBinError( xbin,    129.81991475348721      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12414.638801184872      );
  id5 -> SetBinError( xbin,    86.258965326026981      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9406.9958127312366      );
  id5 -> SetBinError( xbin,    76.299964553123345      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7240.3796491689791      );
  id5 -> SetBinError( xbin,    57.206265454690296      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5804.2300438596103      );
  id5 -> SetBinError( xbin,    48.866296813119853      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4587.8393697302299      );
  id5 -> SetBinError( xbin,    44.190174006998646      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3863.9802017130223      );
  id5 -> SetBinError( xbin,    40.279667466030247      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3266.9933120795722      );
  id5 -> SetBinError( xbin,    36.514562062528192      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2800.6872915246754      );
  id5 -> SetBinError( xbin,    33.309204148144929      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2306.3048058452528      );
  id5 -> SetBinError( xbin,    30.862736683612976      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    2013.8049513945830      );
  id5 -> SetBinError( xbin,    28.909554468587331      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1735.8266838226839      );
  id5 -> SetBinError( xbin,    23.507312031510263      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1500.8012012095451      );
  id5 -> SetBinError( xbin,    23.646494616869287      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1325.8677855758715      );
  id5 -> SetBinError( xbin,    23.874722426909695      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1141.8957258751468      );
  id5 -> SetBinError( xbin,    21.625477224835031      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    1015.0291898012082      );
  id5 -> SetBinError( xbin,    19.711421167849156      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    876.16504702012685      );
  id5 -> SetBinError( xbin,    17.876934591994420      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    839.08790982693563      );
  id5 -> SetBinError( xbin,    17.546697910087730      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    702.56849000540672      );
  id5 -> SetBinError( xbin,    14.959364115254420      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    628.53451166661432      );
  id5 -> SetBinError( xbin,    15.156955675786779      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    542.80913026817029      );
  id5 -> SetBinError( xbin,    14.027068429506013      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    515.41837518286479      );
  id5 -> SetBinError( xbin,    12.366263057120682      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    439.26357822151169      );
  id5 -> SetBinError( xbin,    12.004299281762771      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    421.40728740178133      );
  id5 -> SetBinError( xbin,    11.740286924929176      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    386.56869022384143      );
  id5 -> SetBinError( xbin,    10.470151891923832      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    321.38415371784038      );
  id5 -> SetBinError( xbin,    11.520570418566882      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    300.47691338381713      );
  id5 -> SetBinError( xbin,    11.208650409222383      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2240.7966185338992      );
  id6 -> SetBinError( xbin,    43.496779637036255      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    7285.7947561616857      );
  id6 -> SetBinError( xbin,    77.388394548725103      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    14178.979642286498      );
  id6 -> SetBinError( xbin,    107.16193070983165      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    24386.990151349681      );
  id6 -> SetBinError( xbin,    135.81231443047423      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    39420.919181105768      );
  id6 -> SetBinError( xbin,    164.51798347966053      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    63992.172983348544      );
  id6 -> SetBinError( xbin,    200.73744426413407      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    109737.61756415170      );
  id6 -> SetBinError( xbin,    266.21420542362404      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    177331.44783799344      );
  id6 -> SetBinError( xbin,    367.13084556804580      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    77515.633629245873      );
  id6 -> SetBinError( xbin,    290.28585251882822      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    29213.578005296833      );
  id6 -> SetBinError( xbin,    210.84748909859053      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    12080.456844728571      );
  id6 -> SetBinError( xbin,    154.19470922370473      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4843.8018083524585      );
  id6 -> SetBinError( xbin,    108.94192851827373      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11502.191936401960      );
  id7 -> SetBinError( xbin,    132.72110364156183      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15220.875496591600      );
  id7 -> SetBinError( xbin,    148.34952946795403      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19603.403426543246      );
  id7 -> SetBinError( xbin,    168.71903588413358      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24522.962196996992      );
  id7 -> SetBinError( xbin,    188.97173088535882      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28827.652040291643      );
  id7 -> SetBinError( xbin,    204.43200009166895      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    34458.648735792529      );
  id7 -> SetBinError( xbin,    227.55748274016162      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    38938.831729436839      );
  id7 -> SetBinError( xbin,    240.96321771190833      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    44011.499131625809      );
  id7 -> SetBinError( xbin,    264.21085965013032      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    47803.940540220210      );
  id7 -> SetBinError( xbin,    279.85407465118220      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    51406.256382707114      );
  id7 -> SetBinError( xbin,    295.95783437079194      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    54456.556744031172      );
  id7 -> SetBinError( xbin,    308.83241940227271      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    56780.577046006540      );
  id7 -> SetBinError( xbin,    318.06166845774976      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58206.284093379334      );
  id7 -> SetBinError( xbin,    326.22561350298901      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    58986.094650039675      );
  id7 -> SetBinError( xbin,    328.87364671405174      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    58581.374640451017      );
  id7 -> SetBinError( xbin,    330.59662566935140      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    58664.274680462528      );
  id7 -> SetBinError( xbin,    332.20419613416749      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    57070.487513766275      );
  id7 -> SetBinError( xbin,    326.50849111675331      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    54857.518400132300      );
  id7 -> SetBinError( xbin,    318.67925346122883      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    52486.256903993635      );
  id7 -> SetBinError( xbin,    313.08179771593274      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    48425.114276956367      );
  id7 -> SetBinError( xbin,    298.30336702777481      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    44816.569895301880      );
  id7 -> SetBinError( xbin,    287.37033783062617      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    40945.592691634360      );
  id7 -> SetBinError( xbin,    268.34544567187601      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    36392.493943697504      );
  id7 -> SetBinError( xbin,    250.38316806739647      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    31650.447057963116      );
  id7 -> SetBinError( xbin,    229.42675799213393      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    27177.456400677696      );
  id7 -> SetBinError( xbin,    212.76525179157821      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    22375.167046987601      );
  id7 -> SetBinError( xbin,    189.61460623822498      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    18591.527292392868      );
  id7 -> SetBinError( xbin,    173.57099356316618      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    14294.380761213119      );
  id7 -> SetBinError( xbin,    151.12969090514426      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    10552.340123801871      );
  id7 -> SetBinError( xbin,    134.68453448200719      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    8001.0340919472192      );
  id7 -> SetBinError( xbin,    114.32133719473522      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    6048.0902064975571      );
  id8 -> SetBinError( xbin,    35.336802863719782      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10804.049669855949      );
  id8 -> SetBinError( xbin,    46.638143842509635      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9458.7487899918906      );
  id8 -> SetBinError( xbin,    43.329107983690669      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    8300.3650255264183      );
  id8 -> SetBinError( xbin,    40.071087062573504      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7300.8469733358115      );
  id8 -> SetBinError( xbin,    37.037496843228695      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6514.9272836202490      );
  id8 -> SetBinError( xbin,    34.890121565391297      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5741.8029392138733      );
  id8 -> SetBinError( xbin,    32.216332175165682      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5057.5173013958629      );
  id8 -> SetBinError( xbin,    29.937614647474589      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4581.1792446396603      );
  id8 -> SetBinError( xbin,    28.497618117542064      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4107.0507936849999      );
  id8 -> SetBinError( xbin,    26.532638795139089      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3675.8709726217198      );
  id8 -> SetBinError( xbin,    25.080159488719037      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3350.8692999829495      );
  id8 -> SetBinError( xbin,    23.562719684983346      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3005.7478813346929      );
  id8 -> SetBinError( xbin,    22.319957052574868      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2729.7651173288214      );
  id8 -> SetBinError( xbin,    20.808270749989362      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2492.5131168185890      );
  id8 -> SetBinError( xbin,    19.903064076557055      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2283.5418122648548      );
  id8 -> SetBinError( xbin,    18.837837186721547      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2073.4814237833393      );
  id8 -> SetBinError( xbin,    17.403085790462043      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1851.5471151036422      );
  id8 -> SetBinError( xbin,    16.440556337258680      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1718.3080550787281      );
  id8 -> SetBinError( xbin,    16.032748849311716      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1604.3786586938188      );
  id8 -> SetBinError( xbin,    15.330475009022461      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1447.4955960641146      );
  id8 -> SetBinError( xbin,    14.283149902716959      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1342.8711693414555      );
  id8 -> SetBinError( xbin,    13.749715689450206      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1234.4059731835405      );
  id8 -> SetBinError( xbin,    13.321809348811810      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1133.6154105149342      );
  id8 -> SetBinError( xbin,    12.447890019927085      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1053.8242367025616      );
  id8 -> SetBinError( xbin,    12.305214565474580      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    965.75471271591982      );
  id8 -> SetBinError( xbin,    11.615234137229406      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    874.31369839927049      );
  id8 -> SetBinError( xbin,    10.698723893489467      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    811.53120134600522      );
  id8 -> SetBinError( xbin,    10.283301701118344      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
