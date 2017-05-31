// Cross-section is:      1834327.3997415728 +/-          787.6658289545)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -54674.20091   -2.98%
//        GQB    |      -44727.56990   -2.44%
//        QG     |      -49890.64825   -2.72%
//        QBG    |      -44990.95277   -2.45%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      901738.50089   49.16%
//        QBQ    |     1135962.55527   61.93%

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
//Wm_CT10_nCTEQ_ratio             [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wm_CT10_nCTEQ_ratio.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    2.6193359031898795E-002 );
  id1 -> SetBinError( xbin,    1.7651556081380845E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    11.183506722864131      );
  id1 -> SetBinError( xbin,    2.6367721705560854      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    259.88677602149500      );
  id1 -> SetBinError( xbin,    43.543707744144477      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1771.6091201186427      );
  id1 -> SetBinError( xbin,    128.68046305158865      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    7960.6158931263599      );
  id1 -> SetBinError( xbin,    371.29767699902465      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    25440.895315944188      );
  id1 -> SetBinError( xbin,    648.63536475035107      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    63049.920578133038      );
  id1 -> SetBinError( xbin,    1120.1920308358249      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    123258.45169942608      );
  id1 -> SetBinError( xbin,    1269.6628616476312      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    194002.40822386372      );
  id1 -> SetBinError( xbin,    1535.8018512251720      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    281496.31417465949      );
  id1 -> SetBinError( xbin,    1744.0142984058173      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    350839.34457985358      );
  id1 -> SetBinError( xbin,    1869.2956939322958      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    402450.59978404292      );
  id1 -> SetBinError( xbin,    1955.9643310400597      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    426151.27791006718      );
  id1 -> SetBinError( xbin,    2032.9005738809126      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    436914.70167957211      );
  id1 -> SetBinError( xbin,    2012.4578706543541      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    441112.87978636252      );
  id1 -> SetBinError( xbin,    2009.2084695205517      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    447237.46716868191      );
  id1 -> SetBinError( xbin,    2006.2572934537729      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    450084.55063323613      );
  id1 -> SetBinError( xbin,    1974.2343209602529      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    447709.00782407075      );
  id1 -> SetBinError( xbin,    1996.4410845372963      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    432094.55531549326      );
  id1 -> SetBinError( xbin,    1945.5763556681168      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    430226.90797712601      );
  id1 -> SetBinError( xbin,    1919.5758700418655      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    414948.30959491862      );
  id1 -> SetBinError( xbin,    2143.1250890797551      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    397172.60943280277      );
  id1 -> SetBinError( xbin,    2131.7417279375450      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    382081.96983964968      );
  id1 -> SetBinError( xbin,    1819.5701831079646      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    367567.44866745808      );
  id1 -> SetBinError( xbin,    1768.3787855259898      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    347981.08921649848      );
  id1 -> SetBinError( xbin,    1757.2224773212856      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    330193.97489780793      );
  id1 -> SetBinError( xbin,    1760.6352458103179      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    320024.17642385582      );
  id1 -> SetBinError( xbin,    1680.9663661214665      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    298129.41426405445      );
  id1 -> SetBinError( xbin,    1658.4566463980718      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    278705.34948544612      );
  id1 -> SetBinError( xbin,    1628.4673446206502      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    263726.15694144100      );
  id1 -> SetBinError( xbin,    1581.2938774472395      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    237447.92108496244      );
  id1 -> SetBinError( xbin,    1538.4824545927165      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    198760.66474483805      );
  id1 -> SetBinError( xbin,    1419.5207834731796      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    154717.73803161146      );
  id1 -> SetBinError( xbin,    1303.5436684977933      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    104321.25750977706      );
  id1 -> SetBinError( xbin,    1098.5017010765932      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    63161.871082228645      );
  id1 -> SetBinError( xbin,    992.01896565249194      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    33247.072175528585      );
  id1 -> SetBinError( xbin,    695.15072580478636      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    13007.563202384761      );
  id1 -> SetBinError( xbin,    481.46737116970843      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    3876.4262336215174      );
  id1 -> SetBinError( xbin,    188.75687782098547      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    848.42740929323486      );
  id1 -> SetBinError( xbin,    59.319852323955779      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    109.27450529415360      );
  id1 -> SetBinError( xbin,    11.687153046306769      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    6.7063808894833619      );
  id1 -> SetBinError( xbin,    1.0400478802328117      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    6.3977721693934207E-003 );
  id1 -> SetBinError( xbin,    1.0861601633205265E-002 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    853271.23675512453      );
  id2 -> SetBinError( xbin,    7102.8539648895949      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    820683.09819282836      );
  id2 -> SetBinError( xbin,    6752.7083460490257      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    779407.97398380330      );
  id2 -> SetBinError( xbin,    5768.6201956809118      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    740195.77155477286      );
  id2 -> SetBinError( xbin,    5260.9526890903317      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    712708.80946674477      );
  id2 -> SetBinError( xbin,    4991.7068074732788      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    676557.14114498300      );
  id2 -> SetBinError( xbin,    4563.5861240143777      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    636051.02800641861      );
  id2 -> SetBinError( xbin,    4342.2070349458527      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    598872.61888166529      );
  id2 -> SetBinError( xbin,    3627.6287803126365      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    564664.94986874459      );
  id2 -> SetBinError( xbin,    3524.2239318196525      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    528554.81114282832      );
  id2 -> SetBinError( xbin,    3171.6600856915215      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    494597.14252137247      );
  id2 -> SetBinError( xbin,    2924.1592884106631      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    459862.02884936309      );
  id2 -> SetBinError( xbin,    2558.3258800773315      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    430783.61336592049      );
  id2 -> SetBinError( xbin,    3024.7176853284118      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    393759.86499703984      );
  id2 -> SetBinError( xbin,    2162.6160380729557      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    361037.28346956405      );
  id2 -> SetBinError( xbin,    1966.5105289279095      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    334860.15065001859      );
  id2 -> SetBinError( xbin,    2886.6976885968129      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    301137.17989451851      );
  id2 -> SetBinError( xbin,    1815.6225113655557      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    268355.23345353542      );
  id2 -> SetBinError( xbin,    1727.3024235598364      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    239178.03157305383      );
  id2 -> SetBinError( xbin,    1453.9787682886958      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    210180.14225144862      );
  id2 -> SetBinError( xbin,    1285.8067996520876      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    185758.75264778477      );
  id2 -> SetBinError( xbin,    1184.6539540170102      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    165641.02353068622      );
  id2 -> SetBinError( xbin,    1478.5535538134882      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    142244.11251940939      );
  id2 -> SetBinError( xbin,    905.84492707240361      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    124967.64293106676      );
  id2 -> SetBinError( xbin,    824.36708463584716      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    109238.72701725816      );
  id2 -> SetBinError( xbin,    732.54443261433153      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    96672.854706810569      );
  id2 -> SetBinError( xbin,    789.34105951015567      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    86600.286082659601      );
  id2 -> SetBinError( xbin,    699.00081977182629      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    78785.160232132723      );
  id2 -> SetBinError( xbin,    647.13770289617696      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    75948.797112141372      );
  id2 -> SetBinError( xbin,    1665.2217484650885      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    70855.916194479432      );
  id2 -> SetBinError( xbin,    948.63249220152795      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    70710.955204056329      );
  id2 -> SetBinError( xbin,    628.73137863224554      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    73114.337365193554      );
  id2 -> SetBinError( xbin,    1600.4026342606960      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    77567.029889833211      );
  id2 -> SetBinError( xbin,    692.59412371283474      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    83076.121286972135      );
  id2 -> SetBinError( xbin,    698.89513283272788      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    91466.409671726156      );
  id2 -> SetBinError( xbin,    745.92939039906582      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    103705.83270422852      );
  id2 -> SetBinError( xbin,    1000.9470856911183      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    114500.92578459290      );
  id2 -> SetBinError( xbin,    787.32175488458063      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    129300.68596685200      );
  id2 -> SetBinError( xbin,    862.19985386095038      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    146973.26053954416      );
  id2 -> SetBinError( xbin,    1386.0943955526200      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    163017.57039450659      );
  id2 -> SetBinError( xbin,    1341.7162118306460      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    185163.71421469835      );
  id2 -> SetBinError( xbin,    1192.3278940642094      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    204439.48597185829      );
  id2 -> SetBinError( xbin,    1356.9941532953299      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    226692.17502425649      );
  id2 -> SetBinError( xbin,    1554.6476976467438      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    248673.61044980283      );
  id2 -> SetBinError( xbin,    1682.8299702289776      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    275146.69724866137      );
  id2 -> SetBinError( xbin,    1843.9703702611409      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    297978.10014819866      );
  id2 -> SetBinError( xbin,    2020.7637592139686      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    324074.67860136554      );
  id2 -> SetBinError( xbin,    2381.4687177645583      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    347136.27799283795      );
  id2 -> SetBinError( xbin,    2312.5156719442598      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    370625.15842646227      );
  id2 -> SetBinError( xbin,    2656.5920670594110      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    394812.94282291026      );
  id2 -> SetBinError( xbin,    2836.4413956950443      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    420397.12390911905      );
  id2 -> SetBinError( xbin,    3792.9360092460006      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    449083.52710611169      );
  id2 -> SetBinError( xbin,    3506.3423251647441      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    477520.80141623301      );
  id2 -> SetBinError( xbin,    3739.0692897361705      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    499431.29842848331      );
  id2 -> SetBinError( xbin,    3817.2955060721415      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    523646.03057134320      );
  id2 -> SetBinError( xbin,    4388.1189292189110      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    544995.86201816518      );
  id2 -> SetBinError( xbin,    4549.7152354873806      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    578286.27128924418      );
  id2 -> SetBinError( xbin,    5729.2015856840362      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    596326.09610525414      );
  id2 -> SetBinError( xbin,    5433.2069619960967      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    625227.46084265143      );
  id2 -> SetBinError( xbin,    6125.4468268487472      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    653302.78498384089      );
  id2 -> SetBinError( xbin,    6556.6074817595118      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    271473.82533353724      );
  id3 -> SetBinError( xbin,    2276.2327656501784      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    300238.16015769326      );
  id3 -> SetBinError( xbin,    2318.3267973517941      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    322538.95913593209      );
  id3 -> SetBinError( xbin,    2209.0211549862051      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    340337.54067304049      );
  id3 -> SetBinError( xbin,    2064.5774059719615      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    354124.52986918023      );
  id3 -> SetBinError( xbin,    1999.9720780611844      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    363432.08329010080      );
  id3 -> SetBinError( xbin,    1897.8522624351383      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    371889.74375761981      );
  id3 -> SetBinError( xbin,    1893.6777164734747      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    379078.13387937500      );
  id3 -> SetBinError( xbin,    1991.6639555646843      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    383294.36248471477      );
  id3 -> SetBinError( xbin,    2016.3140926985586      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    386232.92942541779      );
  id3 -> SetBinError( xbin,    1871.1387855300156      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    384200.54341064766      );
  id3 -> SetBinError( xbin,    1799.1132013068509      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    379573.58916962263      );
  id3 -> SetBinError( xbin,    1816.4889890222016      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    378547.28234506800      );
  id3 -> SetBinError( xbin,    1895.2709372148156      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    372206.64517229749      );
  id3 -> SetBinError( xbin,    1850.7612079233229      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    362467.00006905728      );
  id3 -> SetBinError( xbin,    1749.3502442731585      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    353316.20500109019      );
  id3 -> SetBinError( xbin,    1715.5743427109835      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    340285.79790411604      );
  id3 -> SetBinError( xbin,    1724.6121171526568      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    330497.20344485081      );
  id3 -> SetBinError( xbin,    1690.3976061480550      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    315289.23936311435      );
  id3 -> SetBinError( xbin,    1662.6777919440851      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    302101.02593567601      );
  id3 -> SetBinError( xbin,    1681.4816874181047      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    286629.94371164095      );
  id3 -> SetBinError( xbin,    1678.8315080833561      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    272041.52250501321      );
  id3 -> SetBinError( xbin,    1659.0703644545126      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    258273.45879557787      );
  id3 -> SetBinError( xbin,    1613.4517790442480      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    243162.24879454006      );
  id3 -> SetBinError( xbin,    1617.8556047285258      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    228816.16156257724      );
  id3 -> SetBinError( xbin,    2913.3001616675510      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    218003.74719785378      );
  id3 -> SetBinError( xbin,    2890.9437132694302      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    197680.78302696545      );
  id3 -> SetBinError( xbin,    1611.7298337276295      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    178116.51138912400      );
  id3 -> SetBinError( xbin,    1613.7878680489296      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    159093.03978365473      );
  id3 -> SetBinError( xbin,    1646.6903542740556      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    139165.81507290606      );
  id3 -> SetBinError( xbin,    1712.4381175220062      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    88832.391069851365      );
  id4 -> SetBinError( xbin,    2795.2790534275309      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    266998.42492737493      );
  id4 -> SetBinError( xbin,    3748.5924738791955      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    288750.40646032995      );
  id4 -> SetBinError( xbin,    3780.1634281153479      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    298846.89008388272      );
  id4 -> SetBinError( xbin,    3525.7253190943807      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    308563.47047036065      );
  id4 -> SetBinError( xbin,    3373.7995204325280      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    323491.55950916745      );
  id4 -> SetBinError( xbin,    3316.6171756667168      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    334411.46464003436      );
  id4 -> SetBinError( xbin,    3329.3052389508175      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    333298.35945114587      );
  id4 -> SetBinError( xbin,    3630.0692262270186      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    346813.29280349636      );
  id4 -> SetBinError( xbin,    3495.7897856731547      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    354702.11839061661      );
  id4 -> SetBinError( xbin,    3173.2963754224356      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    357157.13985561463      );
  id4 -> SetBinError( xbin,    3254.3786766319322      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    365484.09804484044      );
  id4 -> SetBinError( xbin,    3263.3083954777344      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    366456.92966681177      );
  id4 -> SetBinError( xbin,    3235.1480655488549      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    371621.08823522314      );
  id4 -> SetBinError( xbin,    3255.7760003213216      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    371114.82286325603      );
  id4 -> SetBinError( xbin,    3080.2598131474970      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    383643.43507269979      );
  id4 -> SetBinError( xbin,    3131.6883573431078      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    378327.64103375765      );
  id4 -> SetBinError( xbin,    3296.1226468311725      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    384501.74950923928      );
  id4 -> SetBinError( xbin,    3133.4431418820341      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    383752.04364521016      );
  id4 -> SetBinError( xbin,    3079.6318094052699      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    389741.63349695830      );
  id4 -> SetBinError( xbin,    3136.7805781695083      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    383385.78139861382      );
  id4 -> SetBinError( xbin,    3035.9371711232670      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    381842.65570208535      );
  id4 -> SetBinError( xbin,    2980.4205940290058      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    379181.88810261164      );
  id4 -> SetBinError( xbin,    4394.4119178965511      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    385691.40091805131      );
  id4 -> SetBinError( xbin,    4430.6856579505184      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    382587.37699907838      );
  id4 -> SetBinError( xbin,    3002.1203800337958      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    376753.11895694799      );
  id4 -> SetBinError( xbin,    2873.7516238538738      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    373491.27226895822      );
  id4 -> SetBinError( xbin,    2875.8682426829450      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    370419.92400927946      );
  id4 -> SetBinError( xbin,    3108.2844832994533      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    371077.76468629262      );
  id4 -> SetBinError( xbin,    3072.4891796367669      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    363861.39263838431      );
  id4 -> SetBinError( xbin,    2811.2927223937763      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    361145.87127805367      );
  id4 -> SetBinError( xbin,    2751.9654922460677      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    351165.08459255693      );
  id4 -> SetBinError( xbin,    2761.4854881609449      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    350047.33833297505      );
  id4 -> SetBinError( xbin,    2859.9303682081450      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    341796.50559970277      );
  id4 -> SetBinError( xbin,    2933.4371540470424      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    336971.09106717561      );
  id4 -> SetBinError( xbin,    2813.9993504160084      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    332018.61221009848      );
  id4 -> SetBinError( xbin,    2710.0235811337416      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    324530.77703991946      );
  id4 -> SetBinError( xbin,    2839.0464018050980      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    318390.06683433754      );
  id4 -> SetBinError( xbin,    2778.1370730271792      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    303789.10369270080      );
  id4 -> SetBinError( xbin,    2622.2226332561736      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    301914.05082947080      );
  id4 -> SetBinError( xbin,    2798.2003027188189      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    298228.94702183141      );
  id4 -> SetBinError( xbin,    2824.1534593175061      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    285672.46559899760      );
  id4 -> SetBinError( xbin,    2639.7190698781874      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    280544.87958146952      );
  id4 -> SetBinError( xbin,    2577.9283872949022      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    274005.82582245930      );
  id4 -> SetBinError( xbin,    3256.7947516946524      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    267235.16903210530      );
  id4 -> SetBinError( xbin,    3249.9206418371391      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    258439.78093236612      );
  id4 -> SetBinError( xbin,    2554.7541750438327      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    252071.52437064878      );
  id4 -> SetBinError( xbin,    2584.7005069571910      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    244856.13404390146      );
  id4 -> SetBinError( xbin,    2656.5555202274645      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    238285.07454740594      );
  id4 -> SetBinError( xbin,    2670.1386323909646      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    229881.94889484422      );
  id4 -> SetBinError( xbin,    2630.8699921130342      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    225556.87416794203      );
  id4 -> SetBinError( xbin,    2461.1281427938511      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    217059.35266924041      );
  id4 -> SetBinError( xbin,    2530.4311377934823      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    211219.59978945955      );
  id4 -> SetBinError( xbin,    2638.0398626301098      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    195406.72517755270      );
  id4 -> SetBinError( xbin,    2637.4221326166262      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    192186.93619510598      );
  id4 -> SetBinError( xbin,    2641.9015837103402      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    177613.02793980134      );
  id4 -> SetBinError( xbin,    2699.2133017823994      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    171393.64357819385      );
  id4 -> SetBinError( xbin,    2625.0415347614726      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    161724.90183356495      );
  id4 -> SetBinError( xbin,    2635.3297037389757      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    151797.91919197456      );
  id4 -> SetBinError( xbin,    2762.5837941780878      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    138988.60210681669      );
  id4 -> SetBinError( xbin,    2780.8971435404178      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    85476.694441166910      );
  id4 -> SetBinError( xbin,    2380.0939030331492      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    27188.210869673803      );
  id5 -> SetBinError( xbin,    301.95949247752759      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    60850.330138602971      );
  id5 -> SetBinError( xbin,    420.76750784868153      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    67314.467477460043      );
  id5 -> SetBinError( xbin,    503.20378734591173      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    79064.845958751626      );
  id5 -> SetBinError( xbin,    532.97896130841661      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    87524.000244082956      );
  id5 -> SetBinError( xbin,    566.52912198570834      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    102127.90730702334      );
  id5 -> SetBinError( xbin,    622.45026004887711      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    120518.80195449032      );
  id5 -> SetBinError( xbin,    1003.5886734670050      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    115531.51443107305      );
  id5 -> SetBinError( xbin,    1095.8050347212256      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    96257.201575804385      );
  id5 -> SetBinError( xbin,    645.97210964776434      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    48947.452133228508      );
  id5 -> SetBinError( xbin,    239.65953899089683      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    26634.911777494286      );
  id5 -> SetBinError( xbin,    132.29104284125961      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17029.653234049572      );
  id5 -> SetBinError( xbin,    93.020867497163152      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12039.529123124576      );
  id5 -> SetBinError( xbin,    118.61389216085701      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9211.4363361077430      );
  id5 -> SetBinError( xbin,    111.90100944544874      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7077.3032571582371      );
  id5 -> SetBinError( xbin,    54.082497123040582      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5616.6453430926631      );
  id5 -> SetBinError( xbin,    50.157432609718086      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4566.8532415555846      );
  id5 -> SetBinError( xbin,    43.060886978556987      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3755.3667047367667      );
  id5 -> SetBinError( xbin,    35.540533452045523      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3196.5230564144113      );
  id5 -> SetBinError( xbin,    34.265607480854314      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2717.6371328776095      );
  id5 -> SetBinError( xbin,    31.999269373309954      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2251.4701906445930      );
  id5 -> SetBinError( xbin,    28.714759855959940      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1996.4482371280160      );
  id5 -> SetBinError( xbin,    26.484042054010221      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1671.3631554299818      );
  id5 -> SetBinError( xbin,    26.205033886129829      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1465.9628162313102      );
  id5 -> SetBinError( xbin,    26.920365711533687      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1288.9594361072807      );
  id5 -> SetBinError( xbin,    23.830271476429342      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1135.2788308463093      );
  id5 -> SetBinError( xbin,    19.723061381600864      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    958.44556914189855      );
  id5 -> SetBinError( xbin,    28.777779065380081      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    898.35784758646503      );
  id5 -> SetBinError( xbin,    28.654638078887142      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    799.48677186075167      );
  id5 -> SetBinError( xbin,    21.244076154983222      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    653.46076213942661      );
  id5 -> SetBinError( xbin,    21.584676858919590      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    626.42155314209003      );
  id5 -> SetBinError( xbin,    14.983735966039216      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    534.33154129835646      );
  id5 -> SetBinError( xbin,    12.420129520832448      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    487.48696795310917      );
  id5 -> SetBinError( xbin,    11.814376226364423      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    459.27417823325771      );
  id5 -> SetBinError( xbin,    13.014963168828222      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    397.77818761548559      );
  id5 -> SetBinError( xbin,    12.195374459732248      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    368.13182492497901      );
  id5 -> SetBinError( xbin,    13.440813692984269      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    341.15328753392305      );
  id5 -> SetBinError( xbin,    13.101690966349391      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    289.66154842731794      );
  id5 -> SetBinError( xbin,    9.7352703436929886      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2226.0954186893214      );
  id6 -> SetBinError( xbin,    41.137924088982196      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    7042.5651189079817      );
  id6 -> SetBinError( xbin,    72.715517660631434      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13676.838854500440      );
  id6 -> SetBinError( xbin,    100.32217230343551      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    23648.778288281159      );
  id6 -> SetBinError( xbin,    128.31626781839270      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    38446.478746706969      );
  id6 -> SetBinError( xbin,    156.56324299430344      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    62223.604354912721      );
  id6 -> SetBinError( xbin,    190.40251821158185      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    107164.25316972908      );
  id6 -> SetBinError( xbin,    254.29050079567750      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    174337.35315911719      );
  id6 -> SetBinError( xbin,    353.07047312991585      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    76450.161909785922      );
  id6 -> SetBinError( xbin,    281.88442892362929      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    29566.238408725174      );
  id6 -> SetBinError( xbin,    211.51525160551287      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    12082.007062253593      );
  id6 -> SetBinError( xbin,    150.74028650537261      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4831.3214456907945      );
  id6 -> SetBinError( xbin,    107.62125970365311      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    10079.905247233441      );
  id7 -> SetBinError( xbin,    116.15868878670783      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    13954.993010105254      );
  id7 -> SetBinError( xbin,    138.08692803586652      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    18027.133193008427      );
  id7 -> SetBinError( xbin,    154.58139847711152      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    22732.789711040285      );
  id7 -> SetBinError( xbin,    175.36432156337506      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    27764.601975421825      );
  id7 -> SetBinError( xbin,    195.93211690801070      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33398.153140434028      );
  id7 -> SetBinError( xbin,    217.09745780061851      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    38901.833294882133      );
  id7 -> SetBinError( xbin,    240.26568669239967      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    43651.318368180029      );
  id7 -> SetBinError( xbin,    258.28058740491241      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    48147.616928961492      );
  id7 -> SetBinError( xbin,    273.18724839913318      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    52275.674106734761      );
  id7 -> SetBinError( xbin,    289.59679872645609      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    55450.210276106598      );
  id7 -> SetBinError( xbin,    304.61074018456804      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    58091.282842508510      );
  id7 -> SetBinError( xbin,    313.25858216745360      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    59574.340380212561      );
  id7 -> SetBinError( xbin,    317.24077027285222      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    60323.665396965320      );
  id7 -> SetBinError( xbin,    323.12855721679847      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    60178.863586146617      );
  id7 -> SetBinError( xbin,    326.39914588736929      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    59320.833474838793      );
  id7 -> SetBinError( xbin,    324.74767929982215      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    57506.327822613821      );
  id7 -> SetBinError( xbin,    318.72808190912701      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    54274.948990016062      );
  id7 -> SetBinError( xbin,    309.63085044175256      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    51538.682656617253      );
  id7 -> SetBinError( xbin,    303.09885837423514      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    47411.721299503617      );
  id7 -> SetBinError( xbin,    284.79510754600761      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    43785.806445886614      );
  id7 -> SetBinError( xbin,    272.86482083647121      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    38858.759842823478      );
  id7 -> SetBinError( xbin,    254.34389942675645      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    33901.635134337608      );
  id7 -> SetBinError( xbin,    233.71463814497992      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    29105.841658043140      );
  id7 -> SetBinError( xbin,    215.63785049714303      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    24628.306483626140      );
  id7 -> SetBinError( xbin,    195.61947050479472      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    20473.334042201663      );
  id7 -> SetBinError( xbin,    179.38965508745542      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    16295.733885579382      );
  id7 -> SetBinError( xbin,    159.04598880305898      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    12605.444211168520      );
  id7 -> SetBinError( xbin,    139.44600000330468      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9399.3629457840852      );
  id7 -> SetBinError( xbin,    125.98871172868462      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    6838.3678091679676      );
  id7 -> SetBinError( xbin,    102.95344246737324      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5890.3279226964842      );
  id8 -> SetBinError( xbin,    33.881028518138685      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10632.688065579827      );
  id8 -> SetBinError( xbin,    44.928681609371672      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9228.1803837158022      );
  id8 -> SetBinError( xbin,    40.964332190593694      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    8154.1786665567270      );
  id8 -> SetBinError( xbin,    38.511706541489893      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7194.1465339504957      );
  id8 -> SetBinError( xbin,    36.077837676179421      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6379.0421465221407      );
  id8 -> SetBinError( xbin,    33.459990816272459      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5637.7995003906035      );
  id8 -> SetBinError( xbin,    31.167006637296179      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5024.3775205906786      );
  id8 -> SetBinError( xbin,    28.977950312337818      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4438.4861674578287      );
  id8 -> SetBinError( xbin,    27.170392218137295      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4046.3264047250509      );
  id8 -> SetBinError( xbin,    25.769554269523869      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3677.8207702066838      );
  id8 -> SetBinError( xbin,    24.546826608381640      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3265.9003406594106      );
  id8 -> SetBinError( xbin,    22.602217898453137      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2955.7316095042711      );
  id8 -> SetBinError( xbin,    21.319708656471690      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2659.2964791446070      );
  id8 -> SetBinError( xbin,    20.146960124401708      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2420.8402659019353      );
  id8 -> SetBinError( xbin,    19.220256847447356      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2223.4202573477296      );
  id8 -> SetBinError( xbin,    18.131785785823890      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2035.3518816604837      );
  id8 -> SetBinError( xbin,    17.543288976880856      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1842.3702905242194      );
  id8 -> SetBinError( xbin,    16.127966090150803      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1709.6113205075244      );
  id8 -> SetBinError( xbin,    15.399130972906207      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1552.2978557717197      );
  id8 -> SetBinError( xbin,    15.038701014528725      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1452.4026468150269      );
  id8 -> SetBinError( xbin,    14.468721967244546      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1315.1128765272879      );
  id8 -> SetBinError( xbin,    13.437542590813550      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1218.4079348336952      );
  id8 -> SetBinError( xbin,    12.646564795624641      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1130.0036238855726      );
  id8 -> SetBinError( xbin,    12.537522910859414      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1016.0801613505624      );
  id8 -> SetBinError( xbin,    11.483751972463521      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    945.26300344983906      );
  id8 -> SetBinError( xbin,    11.342451909495974      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    877.65160891656456      );
  id8 -> SetBinError( xbin,    10.779698979410448      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    798.85440444617723      );
  id8 -> SetBinError( xbin,    10.009746018445874      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
