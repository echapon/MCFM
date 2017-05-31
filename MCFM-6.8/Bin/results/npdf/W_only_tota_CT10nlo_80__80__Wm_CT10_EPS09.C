// Cross-section is:      1875029.8824972231 +/-          808.8547906911)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -53386.77540   -2.85%
//        GQB    |      -44812.01646   -2.39%
//        QG     |      -51182.10447   -2.73%
//        QBG    |      -45109.27912   -2.41%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      930599.41355   49.63%
//        QBQ    |     1147994.63720   61.23%

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
//Wm_CT10_EPS09                   [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wm_CT10_EPS09.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -3.3434183366629427E-002 );
  id1 -> SetBinError( xbin,    7.4958739646626291E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    15.268151508453270      );
  id1 -> SetBinError( xbin,    2.7847785007854871      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    283.69202840255389      );
  id1 -> SetBinError( xbin,    39.998073492155939      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2252.2317203280763      );
  id1 -> SetBinError( xbin,    170.37115971650826      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    9108.1227909696590      );
  id1 -> SetBinError( xbin,    429.69620674731004      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    29002.916270524016      );
  id1 -> SetBinError( xbin,    684.97717010196379      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    68220.252025568436      );
  id1 -> SetBinError( xbin,    1141.6596020133190      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    132773.05334232436      );
  id1 -> SetBinError( xbin,    1303.8204948564448      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    207313.12162327443      );
  id1 -> SetBinError( xbin,    1564.8175021219865      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    293681.26288030640      );
  id1 -> SetBinError( xbin,    1792.1491970636016      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    361900.69330012961      );
  id1 -> SetBinError( xbin,    1908.6758634335499      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    410053.96481706947      );
  id1 -> SetBinError( xbin,    1990.7942577807180      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    427987.91443980695      );
  id1 -> SetBinError( xbin,    2027.2650115071604      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    435717.56835297524      );
  id1 -> SetBinError( xbin,    2101.2404251961234      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    436319.64704916370      );
  id1 -> SetBinError( xbin,    2063.9463450790104      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    438154.11041615880      );
  id1 -> SetBinError( xbin,    1968.7768627945018      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    433516.49401192117      );
  id1 -> SetBinError( xbin,    1965.9405384934112      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    429569.45854997006      );
  id1 -> SetBinError( xbin,    1966.1905008091205      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    419015.92135823832      );
  id1 -> SetBinError( xbin,    1904.8871535523751      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    416869.29248549347      );
  id1 -> SetBinError( xbin,    1878.6360147195724      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    402034.45166003681      );
  id1 -> SetBinError( xbin,    1867.0026997539560      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    391861.48205242748      );
  id1 -> SetBinError( xbin,    1894.7802621504654      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    384228.63085097627      );
  id1 -> SetBinError( xbin,    1845.0136084895205      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    371358.75248195790      );
  id1 -> SetBinError( xbin,    1811.9715847312868      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    359664.48239026731      );
  id1 -> SetBinError( xbin,    1766.5637290762706      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    347041.96266999695      );
  id1 -> SetBinError( xbin,    1755.8410188310063      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    333774.49543833494      );
  id1 -> SetBinError( xbin,    1761.1056152984183      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    324156.67240540788      );
  id1 -> SetBinError( xbin,    1716.3243725901482      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    303558.92203399213      );
  id1 -> SetBinError( xbin,    1691.4295950565006      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    289853.02561185288      );
  id1 -> SetBinError( xbin,    1670.6213748293874      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    264484.27196840307      );
  id1 -> SetBinError( xbin,    1602.2190177087734      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    224251.06095661176      );
  id1 -> SetBinError( xbin,    1502.7720307414786      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    175386.07434927713      );
  id1 -> SetBinError( xbin,    1443.5032481668702      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    119388.29165280578      );
  id1 -> SetBinError( xbin,    1245.8587065397319      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    72619.725385145357      );
  id1 -> SetBinError( xbin,    1043.1782036082132      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    38781.814909577341      );
  id1 -> SetBinError( xbin,    759.22729462514246      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    15611.249586765774      );
  id1 -> SetBinError( xbin,    552.30999936812202      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    4505.1343571027992      );
  id1 -> SetBinError( xbin,    232.04708420134273      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1006.9806761573545      );
  id1 -> SetBinError( xbin,    68.642662966236244      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    132.47769393465248      );
  id1 -> SetBinError( xbin,    12.712393181728849      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    7.0412227379088925      );
  id1 -> SetBinError( xbin,    1.1557981457966442      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.0513940284652728E-002 );
  id1 -> SetBinError( xbin,    9.7434221331531776E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    844957.74831278366      );
  id2 -> SetBinError( xbin,    7077.4933496360854      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    815617.13668725046      );
  id2 -> SetBinError( xbin,    8112.8959692311173      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    775870.53234829172      );
  id2 -> SetBinError( xbin,    5679.4058058776063      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    734289.81709999451      );
  id2 -> SetBinError( xbin,    5524.3118190180348      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    694519.03456190880      );
  id2 -> SetBinError( xbin,    6236.7662124423141      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    667180.05952720798      );
  id2 -> SetBinError( xbin,    4749.4294962707108      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    628927.93242023885      );
  id2 -> SetBinError( xbin,    4656.7717727149384      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    598144.26006262691      );
  id2 -> SetBinError( xbin,    4012.7905632395632      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    553962.85292645195      );
  id2 -> SetBinError( xbin,    3438.1852491949644      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    526821.69216997910      );
  id2 -> SetBinError( xbin,    3791.0351719390160      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    485915.68329188752      );
  id2 -> SetBinError( xbin,    2689.0876449716079      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    452189.84259631619      );
  id2 -> SetBinError( xbin,    2837.0713282630727      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    420899.63552064862      );
  id2 -> SetBinError( xbin,    2364.0528240346221      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    387933.66123404494      );
  id2 -> SetBinError( xbin,    2138.6688817173222      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    355820.98527798941      );
  id2 -> SetBinError( xbin,    2569.6011410460960      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    326090.45318144147      );
  id2 -> SetBinError( xbin,    1935.5113017968556      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    295770.57380153512      );
  id2 -> SetBinError( xbin,    2017.3954246054491      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    266866.88484465005      );
  id2 -> SetBinError( xbin,    5050.8390282282835      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    232177.73738010554      );
  id2 -> SetBinError( xbin,    1282.1367699268958      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    210983.62403451526      );
  id2 -> SetBinError( xbin,    2065.8537106062540      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    182813.12804129630      );
  id2 -> SetBinError( xbin,    1268.9095351654962      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    160038.93362947929      );
  id2 -> SetBinError( xbin,    1106.2610479221698      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    137400.23984356973      );
  id2 -> SetBinError( xbin,    833.50831391933536      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    130826.59230833655      );
  id2 -> SetBinError( xbin,    10190.626761162091      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    109305.33849931683      );
  id2 -> SetBinError( xbin,    986.39209258055564      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    93748.142572485609      );
  id2 -> SetBinError( xbin,    723.61977619752804      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    83234.891701689630      );
  id2 -> SetBinError( xbin,    619.16048665337883      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    76400.865986616656      );
  id2 -> SetBinError( xbin,    616.61928885371788      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    70317.851211791465      );
  id2 -> SetBinError( xbin,    569.53172578335784      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    69151.133966485620      );
  id2 -> SetBinError( xbin,    605.18207975717121      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    68614.298061685127      );
  id2 -> SetBinError( xbin,    630.57382388052395      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    70109.550785864834      );
  id2 -> SetBinError( xbin,    613.68767276745382      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    74550.028056725030      );
  id2 -> SetBinError( xbin,    772.50740575744737      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    80717.484434195416      );
  id2 -> SetBinError( xbin,    685.89112162241918      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    91941.321089891222      );
  id2 -> SetBinError( xbin,    2535.7102453719581      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    102297.90250814806      );
  id2 -> SetBinError( xbin,    2414.3689405332566      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    113891.48048127588      );
  id2 -> SetBinError( xbin,    938.91192826345423      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    129315.76709621247      );
  id2 -> SetBinError( xbin,    946.10022670701733      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    142602.42801742844      );
  id2 -> SetBinError( xbin,    940.06444177691537      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    163618.21421529987      );
  id2 -> SetBinError( xbin,    1089.0080046176529      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    180798.89641268292      );
  id2 -> SetBinError( xbin,    1235.1601536174787      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    204852.31337698892      );
  id2 -> SetBinError( xbin,    1307.5575563262769      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    229665.40857764301      );
  id2 -> SetBinError( xbin,    1658.1005896244906      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    251740.15812786791      );
  id2 -> SetBinError( xbin,    1515.7407623739484      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    271712.36095366022      );
  id2 -> SetBinError( xbin,    1679.5868354868562      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    305224.85947866284      );
  id2 -> SetBinError( xbin,    4600.0495581660971      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    324678.27332820464      );
  id2 -> SetBinError( xbin,    2071.7965593028994      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    355939.93696735357      );
  id2 -> SetBinError( xbin,    3181.5470518560060      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    382536.16100248764      );
  id2 -> SetBinError( xbin,    3005.2818690451068      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    401254.81955325033      );
  id2 -> SetBinError( xbin,    2852.3638565882720      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    430875.70120246656      );
  id2 -> SetBinError( xbin,    2970.7500020993493      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    463282.54677058611      );
  id2 -> SetBinError( xbin,    3703.2362212073785      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    487726.35600326810      );
  id2 -> SetBinError( xbin,    3984.0698632706958      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    516166.00860763853      );
  id2 -> SetBinError( xbin,    6460.3299256602477      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    538060.82413432596      );
  id2 -> SetBinError( xbin,    4336.9576328015946      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    564687.33399144060      );
  id2 -> SetBinError( xbin,    4589.1131670989089      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    593969.20388760266      );
  id2 -> SetBinError( xbin,    5673.1501095378353      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    611006.25264523888      );
  id2 -> SetBinError( xbin,    5544.8552428274497      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    650280.46495147015      );
  id2 -> SetBinError( xbin,    6619.8442747436093      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    672931.35164754849      );
  id2 -> SetBinError( xbin,    6354.7235780546371      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    288871.30124259775      );
  id3 -> SetBinError( xbin,    2420.2803478852252      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    314714.23504061479      );
  id3 -> SetBinError( xbin,    2233.0033850298928      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    334633.14280362683      );
  id3 -> SetBinError( xbin,    2260.3468089532885      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    350187.20304285223      );
  id3 -> SetBinError( xbin,    2211.1044014726331      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    356813.70382154628      );
  id3 -> SetBinError( xbin,    2029.4938900245425      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    365680.20430750964      );
  id3 -> SetBinError( xbin,    2270.1948560330643      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    372515.82162758225      );
  id3 -> SetBinError( xbin,    2262.5278779228615      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    375333.18960250448      );
  id3 -> SetBinError( xbin,    1903.4471740444142      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    374644.74579982483      );
  id3 -> SetBinError( xbin,    1828.1278462201894      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    377459.93212555826      );
  id3 -> SetBinError( xbin,    1820.3101514335326      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    372050.30698396580      );
  id3 -> SetBinError( xbin,    1815.7590468798135      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    370444.79012079118      );
  id3 -> SetBinError( xbin,    1787.7114068028729      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    368292.00919423823      );
  id3 -> SetBinError( xbin,    1786.6593646707370      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    361273.58934070094      );
  id3 -> SetBinError( xbin,    1768.0589630521679      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    355404.70119984023      );
  id3 -> SetBinError( xbin,    1799.1195402860988      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    348311.24014672730      );
  id3 -> SetBinError( xbin,    1737.4877398632088      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    341946.45739556267      );
  id3 -> SetBinError( xbin,    1676.1473509567445      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    332243.75401054620      );
  id3 -> SetBinError( xbin,    1674.9955199864589      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    323793.24433719454      );
  id3 -> SetBinError( xbin,    1739.2366389318763      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    309197.48106831271      );
  id3 -> SetBinError( xbin,    1758.0981706642051      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    301134.66781081568      );
  id3 -> SetBinError( xbin,    1780.3705467350981      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    287687.42515657924      );
  id3 -> SetBinError( xbin,    1699.1407191088322      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    274717.73642637290      );
  id3 -> SetBinError( xbin,    1718.9334124625791      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    264027.31839772349      );
  id3 -> SetBinError( xbin,    1764.1207816053397      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    252108.26784823110      );
  id3 -> SetBinError( xbin,    1734.0896668841185      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    238743.32607888628      );
  id3 -> SetBinError( xbin,    1722.8157693245398      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    222148.26306201681      );
  id3 -> SetBinError( xbin,    1742.2454717146848      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    201655.80118188221      );
  id3 -> SetBinError( xbin,    1779.8650964375042      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    180358.28691769336      );
  id3 -> SetBinError( xbin,    1777.8225178526400      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    159069.81695539880      );
  id3 -> SetBinError( xbin,    1836.7371741573431      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    99290.733002839072      );
  id4 -> SetBinError( xbin,    3041.8539787129698      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    284432.22598144406      );
  id4 -> SetBinError( xbin,    3793.9658877183433      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    301288.63472407818      );
  id4 -> SetBinError( xbin,    3959.5943756655483      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    314319.99893743236      );
  id4 -> SetBinError( xbin,    3840.7683492527021      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    322865.83871730714      );
  id4 -> SetBinError( xbin,    3413.1040534216281      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    333825.28398627171      );
  id4 -> SetBinError( xbin,    3885.0720414761231      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    338747.22897840827      );
  id4 -> SetBinError( xbin,    3885.7972377249866      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    347361.47363553080      );
  id4 -> SetBinError( xbin,    3385.8440725290729      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    356117.98092894536      );
  id4 -> SetBinError( xbin,    3266.9908694131632      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    358950.84019233735      );
  id4 -> SetBinError( xbin,    3408.8654896912390      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    363164.27038400259      );
  id4 -> SetBinError( xbin,    3351.6059179548956      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    367705.28335564688      );
  id4 -> SetBinError( xbin,    3025.5261897741480      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    365705.22068064392      );
  id4 -> SetBinError( xbin,    3065.1526372231360      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    367725.57802205207      );
  id4 -> SetBinError( xbin,    3049.9432588391783      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    373605.18320398452      );
  id4 -> SetBinError( xbin,    2991.2642641184575      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    374787.00948608381      );
  id4 -> SetBinError( xbin,    3115.1015379703085      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    377739.55302898382      );
  id4 -> SetBinError( xbin,    3077.9571383021794      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    375872.25670641731      );
  id4 -> SetBinError( xbin,    3159.1906443731118      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    372488.59342564788      );
  id4 -> SetBinError( xbin,    3247.9562079625489      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    379523.66607977857      );
  id4 -> SetBinError( xbin,    3006.1377141900716      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    379330.94252922200      );
  id4 -> SetBinError( xbin,    2886.6407040954023      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    371147.29542931681      );
  id4 -> SetBinError( xbin,    2829.5004130829457      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    372065.76636745105      );
  id4 -> SetBinError( xbin,    2911.0514065591092      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    369851.00916412903      );
  id4 -> SetBinError( xbin,    2925.2514545866161      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    368488.40513392462      );
  id4 -> SetBinError( xbin,    2856.4351416051322      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    370141.51048577746      );
  id4 -> SetBinError( xbin,    2886.5350747251919      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    364440.88245710870      );
  id4 -> SetBinError( xbin,    2805.2127377046304      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    358412.40342984570      );
  id4 -> SetBinError( xbin,    2878.8747228631169      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    363521.78847144195      );
  id4 -> SetBinError( xbin,    2829.1394837177340      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    354111.37533287425      );
  id4 -> SetBinError( xbin,    2757.1057323910181      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    353647.16326432762      );
  id4 -> SetBinError( xbin,    2761.3255086795057      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    347610.41686238209      );
  id4 -> SetBinError( xbin,    2756.5190308514620      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    348272.80226360075      );
  id4 -> SetBinError( xbin,    2726.9889391718389      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    338883.34458009101      );
  id4 -> SetBinError( xbin,    2780.7097281841648      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    338262.73603724665      );
  id4 -> SetBinError( xbin,    2903.8937758675766      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    330708.74234519969      );
  id4 -> SetBinError( xbin,    2901.7841583959953      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    329616.37184072449      );
  id4 -> SetBinError( xbin,    2828.3549139277984      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    327910.02343644120      );
  id4 -> SetBinError( xbin,    2820.9611743884825      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    317979.57848115923      );
  id4 -> SetBinError( xbin,    2803.6722488711198      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    309372.24374542816      );
  id4 -> SetBinError( xbin,    2723.2531553229837      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    304451.88209453475      );
  id4 -> SetBinError( xbin,    2704.2057722369118      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    303943.79309348139      );
  id4 -> SetBinError( xbin,    2872.1045459430998      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    293193.93289023772      );
  id4 -> SetBinError( xbin,    2802.2293069493858      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    287777.54393604049      );
  id4 -> SetBinError( xbin,    2695.4220679974783      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    284025.82429462479      );
  id4 -> SetBinError( xbin,    2859.6849019000288      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    279675.20005850372      );
  id4 -> SetBinError( xbin,    2924.1128247149577      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    266346.37184121035      );
  id4 -> SetBinError( xbin,    2963.6369605399100      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    264510.87168760627      );
  id4 -> SetBinError( xbin,    2931.1532205794679      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    262231.85375691811      );
  id4 -> SetBinError( xbin,    2701.2823878413851      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    252295.95584009937      );
  id4 -> SetBinError( xbin,    2786.3625551675805      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    244424.60754055684      );
  id4 -> SetBinError( xbin,    2867.4851442735953      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    240812.06951364386      );
  id4 -> SetBinError( xbin,    3120.4110640796303      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    230871.46416002829      );
  id4 -> SetBinError( xbin,    3633.6146461030376      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    226402.18401490335      );
  id4 -> SetBinError( xbin,    3295.4756486359584      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    213174.33637376782      );
  id4 -> SetBinError( xbin,    2829.9859558136964      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    203369.71380406118      );
  id4 -> SetBinError( xbin,    3128.1296604817080      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    28005.252819365374      );
  id5 -> SetBinError( xbin,    306.49481794861697      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    60885.636615714408      );
  id5 -> SetBinError( xbin,    406.88319966855369      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    68401.967407677017      );
  id5 -> SetBinError( xbin,    1419.1452413355375      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    80674.023230836479      );
  id5 -> SetBinError( xbin,    1428.5465808416816      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    90125.168397653775      );
  id5 -> SetBinError( xbin,    539.99514142385715      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    104741.38624811593      );
  id5 -> SetBinError( xbin,    688.41336890738114      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    122473.83423412935      );
  id5 -> SetBinError( xbin,    762.53820983326341      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    121283.47362496432      );
  id5 -> SetBinError( xbin,    918.46359999308777      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    98014.062852664036      );
  id5 -> SetBinError( xbin,    763.96347431868537      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    49695.521538107983      );
  id5 -> SetBinError( xbin,    246.98941416557582      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    27119.695663267761      );
  id5 -> SetBinError( xbin,    138.71052431288462      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17204.257178435146      );
  id5 -> SetBinError( xbin,    94.653988246145119      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12357.375429891996      );
  id5 -> SetBinError( xbin,    77.061679999771798      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9082.0667581349499      );
  id5 -> SetBinError( xbin,    64.021928099669523      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7225.6158039559787      );
  id5 -> SetBinError( xbin,    52.308888078127389      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5657.2554513614077      );
  id5 -> SetBinError( xbin,    47.600715443813890      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4574.9153779889684      );
  id5 -> SetBinError( xbin,    46.129293972078322      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3796.7573403743395      );
  id5 -> SetBinError( xbin,    45.120255767820623      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3225.2000842671755      );
  id5 -> SetBinError( xbin,    38.731563511224884      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2722.3767231707188      );
  id5 -> SetBinError( xbin,    39.507339373974162      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2292.7054187367407      );
  id5 -> SetBinError( xbin,    37.838021926445137      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1962.6145246490819      );
  id5 -> SetBinError( xbin,    26.561907657898828      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1719.2173786989890      );
  id5 -> SetBinError( xbin,    30.321738725503618      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1473.7125073910647      );
  id5 -> SetBinError( xbin,    30.145110121031838      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1299.7887212271514      );
  id5 -> SetBinError( xbin,    26.130673591197464      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1152.4235986489671      );
  id5 -> SetBinError( xbin,    20.896541595726568      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    1006.5146349092743      );
  id5 -> SetBinError( xbin,    17.030734498388931      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    891.23937396770407      );
  id5 -> SetBinError( xbin,    15.789993574766584      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    759.63266088980038      );
  id5 -> SetBinError( xbin,    19.221714474525033      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    706.85303449567652      );
  id5 -> SetBinError( xbin,    25.337942222515984      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    630.59997869352776      );
  id5 -> SetBinError( xbin,    20.986443437374930      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    523.86595374319791      );
  id5 -> SetBinError( xbin,    17.429150999164868      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    520.15848717353060      );
  id5 -> SetBinError( xbin,    17.632572075987813      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    473.54620320613378      );
  id5 -> SetBinError( xbin,    12.890391522528775      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    400.39957345212241      );
  id5 -> SetBinError( xbin,    12.936860591185543      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    334.90073797514674      );
  id5 -> SetBinError( xbin,    15.156330673893612      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    361.87036235229738      );
  id5 -> SetBinError( xbin,    14.523700440945714      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    301.21574337624583      );
  id5 -> SetBinError( xbin,    12.150744349614865      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2187.9048618744969      );
  id6 -> SetBinError( xbin,    41.352189515640745      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    7112.1760935940883      );
  id6 -> SetBinError( xbin,    74.505981743027732      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13720.193488500609      );
  id6 -> SetBinError( xbin,    102.53647108603761      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    23742.086961087458      );
  id6 -> SetBinError( xbin,    130.12267032840114      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    38640.221191005257      );
  id6 -> SetBinError( xbin,    158.35328300439141      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    62331.851945136244      );
  id6 -> SetBinError( xbin,    192.95409630356619      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    107890.33871835298      );
  id6 -> SetBinError( xbin,    259.48105593959758      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    175503.81832131045      );
  id6 -> SetBinError( xbin,    358.04507729658894      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    76962.897046323924      );
  id6 -> SetBinError( xbin,    285.80227943327480      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    29510.053938137404      );
  id6 -> SetBinError( xbin,    210.92906955958409      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    11872.886584409836      );
  id6 -> SetBinError( xbin,    150.97666388058843      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4776.4352931853073      );
  id6 -> SetBinError( xbin,    105.19516182988031      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    10946.600148208927      );
  id7 -> SetBinError( xbin,    124.85224174663821      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    14804.015823291222      );
  id7 -> SetBinError( xbin,    143.33283475292779      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    18891.062138857364      );
  id7 -> SetBinError( xbin,    159.62933750418017      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23884.483879965672      );
  id7 -> SetBinError( xbin,    182.13933118612505      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28765.267413746049      );
  id7 -> SetBinError( xbin,    201.32505298559713      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33884.207056695530      );
  id7 -> SetBinError( xbin,    218.82165550141497      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    39172.591679764635      );
  id7 -> SetBinError( xbin,    242.34074197132909      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    43810.769436365437      );
  id7 -> SetBinError( xbin,    259.98912488134516      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    48206.673288614336      );
  id7 -> SetBinError( xbin,    279.31771883800315      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    51969.961399465901      );
  id7 -> SetBinError( xbin,    292.06979587622897      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    55617.738370856612      );
  id7 -> SetBinError( xbin,    304.30304667114456      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    57385.415385879111      );
  id7 -> SetBinError( xbin,    314.84102559277824      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58964.442758749276      );
  id7 -> SetBinError( xbin,    321.95292069930252      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    59797.586858924224      );
  id7 -> SetBinError( xbin,    325.49064153330403      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59142.749242050806      );
  id7 -> SetBinError( xbin,    326.93453094057639      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    58567.999968007120      );
  id7 -> SetBinError( xbin,    324.78656085908227      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    57244.207747012530      );
  id7 -> SetBinError( xbin,    326.06336979109778      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    53519.507034164111      );
  id7 -> SetBinError( xbin,    310.15798761591657      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    51111.350202948750      );
  id7 -> SetBinError( xbin,    303.34574865276267      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    47090.364978086902      );
  id7 -> SetBinError( xbin,    286.15343060351523      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    43158.906575491885      );
  id7 -> SetBinError( xbin,    272.86610063611323      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    39252.474790229273      );
  id7 -> SetBinError( xbin,    257.79696694398609      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    34824.865873354800      );
  id7 -> SetBinError( xbin,    240.74836188354567      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    29974.741184142513      );
  id7 -> SetBinError( xbin,    220.73725526625603      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    25393.111695807122      );
  id7 -> SetBinError( xbin,    201.59110465312170      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    21252.810826628516      );
  id7 -> SetBinError( xbin,    182.09570855668139      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17113.337162952783      );
  id7 -> SetBinError( xbin,    166.54025261417601      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    13115.141735002062      );
  id7 -> SetBinError( xbin,    142.36467067318975      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9780.7212537449177      );
  id7 -> SetBinError( xbin,    124.40202309010031      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7165.5474941661523      );
  id7 -> SetBinError( xbin,    107.52423999789822      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5898.9651922092999      );
  id8 -> SetBinError( xbin,    34.237349158326168      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10642.569339398382      );
  id8 -> SetBinError( xbin,    45.143605549608843      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9291.6571099360408      );
  id8 -> SetBinError( xbin,    41.830333793355891      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    8161.3527088172023      );
  id8 -> SetBinError( xbin,    39.213179749265272      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7245.4680821699967      );
  id8 -> SetBinError( xbin,    36.146639083464137      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6416.4368295734894      );
  id8 -> SetBinError( xbin,    33.538111486618043      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5634.3801267849503      );
  id8 -> SetBinError( xbin,    31.185527863496183      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5036.2701474556752      );
  id8 -> SetBinError( xbin,    28.999933600009275      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4494.7135869234089      );
  id8 -> SetBinError( xbin,    27.128500245371061      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4045.2310083786324      );
  id8 -> SetBinError( xbin,    25.884582270729496      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3692.1706310603208      );
  id8 -> SetBinError( xbin,    24.726220595408531      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3289.4770564958294      );
  id8 -> SetBinError( xbin,    23.105644237935305      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2980.4233681855658      );
  id8 -> SetBinError( xbin,    21.857290983888717      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2692.9649409894337      );
  id8 -> SetBinError( xbin,    20.528899200714946      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2475.5888694381219      );
  id8 -> SetBinError( xbin,    19.502677606822100      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2199.4441562911484      );
  id8 -> SetBinError( xbin,    18.374207844371576      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2029.3788540965184      );
  id8 -> SetBinError( xbin,    17.430410052703625      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1861.2719832773200      );
  id8 -> SetBinError( xbin,    16.654755107496467      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1725.5097820995152      );
  id8 -> SetBinError( xbin,    15.783238267457076      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1549.3566345557190      );
  id8 -> SetBinError( xbin,    14.916965917746964      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1445.1764580902734      );
  id8 -> SetBinError( xbin,    14.412722050766305      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1309.3576722915873      );
  id8 -> SetBinError( xbin,    13.600796982580867      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1214.2730466475521      );
  id8 -> SetBinError( xbin,    13.504444557852782      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1129.8241720498827      );
  id8 -> SetBinError( xbin,    12.619829959717356      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1036.8043050951908      );
  id8 -> SetBinError( xbin,    11.926689135309967      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    951.95804196770098      );
  id8 -> SetBinError( xbin,    11.552908153764625      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    873.65928349578303      );
  id8 -> SetBinError( xbin,    10.819452751958403      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    800.12521650944188      );
  id8 -> SetBinError( xbin,    10.375797748344956      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
