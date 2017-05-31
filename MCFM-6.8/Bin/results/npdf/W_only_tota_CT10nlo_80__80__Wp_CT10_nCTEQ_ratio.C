// Cross-section is:      2321711.4454837348 +/-          963.7663416255)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -83122.58077   -3.58%
//        GQB    |      -44456.36020   -1.91%
//        QG     |      -93523.00315   -4.03%
//        QBG    |      -48602.33441   -2.09%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1307910.84805   56.33%
//        QBQ    |     1290295.86425   55.58%

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
//Wp_CT10_DSSZ                    [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wp_CT10_DSSZ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.47486131625591849      );
  id1 -> SetBinError( xbin,    1.7084691291902891      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    514.85749820988588      );
  id1 -> SetBinError( xbin,    76.834881761089079      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    5264.3251699471330      );
  id1 -> SetBinError( xbin,    353.66382003268376      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    24400.301761855953      );
  id1 -> SetBinError( xbin,    928.76489610092210      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    59109.457295697510      );
  id1 -> SetBinError( xbin,    1373.6014021474523      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    118046.49671186898      );
  id1 -> SetBinError( xbin,    1577.8331824341963      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    179139.09674288789      );
  id1 -> SetBinError( xbin,    1821.5606393504281      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    243035.58116489439      );
  id1 -> SetBinError( xbin,    2019.3100705915988      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    290058.11002433312      );
  id1 -> SetBinError( xbin,    2194.0924644191609      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    332853.98714993917      );
  id1 -> SetBinError( xbin,    2308.8060576001212      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    365450.29978932510      );
  id1 -> SetBinError( xbin,    2324.5669378176931      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    393101.78851423331      );
  id1 -> SetBinError( xbin,    2315.8906724047847      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    412067.98843222420      );
  id1 -> SetBinError( xbin,    2311.5773337532328      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    422682.91836886876      );
  id1 -> SetBinError( xbin,    2310.4567290831301      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    430122.58529279812      );
  id1 -> SetBinError( xbin,    2296.6998942266350      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    437778.49421705533      );
  id1 -> SetBinError( xbin,    2441.0622670848434      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    447144.62143270136      );
  id1 -> SetBinError( xbin,    2460.7196407656393      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    449711.40596549411      );
  id1 -> SetBinError( xbin,    2293.4870626365105      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    446619.56325833622      );
  id1 -> SetBinError( xbin,    2306.3801935115416      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    439183.84080440225      );
  id1 -> SetBinError( xbin,    2368.8499306084450      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    432881.57674316748      );
  id1 -> SetBinError( xbin,    2573.8563648576333      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    429933.31383482734      );
  id1 -> SetBinError( xbin,    2505.6060454347044      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    418611.09166781249      );
  id1 -> SetBinError( xbin,    2252.7792660399991      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    412846.39448705222      );
  id1 -> SetBinError( xbin,    2190.1858214822328      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    404147.78912314458      );
  id1 -> SetBinError( xbin,    2219.7166119397193      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    400224.14740421163      );
  id1 -> SetBinError( xbin,    2233.6167791190878      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    395383.23287288134      );
  id1 -> SetBinError( xbin,    2217.0636793001099      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    387563.27435104654      );
  id1 -> SetBinError( xbin,    2193.2753905424524      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    383388.01087457355      );
  id1 -> SetBinError( xbin,    2196.3046980505160      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    375268.49326104048      );
  id1 -> SetBinError( xbin,    2226.3459436928106      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    373536.82366494578      );
  id1 -> SetBinError( xbin,    2208.8025307980756      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    349896.16937965411      );
  id1 -> SetBinError( xbin,    2207.7572062911345      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    330679.21317537461      );
  id1 -> SetBinError( xbin,    2359.4003987075480      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    299952.57311555045      );
  id1 -> SetBinError( xbin,    2133.7073863546238      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    256460.83023983042      );
  id1 -> SetBinError( xbin,    2079.0322121776171      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    201967.84819499392      );
  id1 -> SetBinError( xbin,    1939.0921964810957      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    141951.16802761247      );
  id1 -> SetBinError( xbin,    1699.9240717536377      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    81252.825729790318      );
  id1 -> SetBinError( xbin,    1484.1210714533843      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    30076.330518624920      );
  id1 -> SetBinError( xbin,    1011.1802844107433      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    7226.1482727163720      );
  id1 -> SetBinError( xbin,    508.54345293938678      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    499.03498503172796      );
  id1 -> SetBinError( xbin,    115.03583963251511      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   -5.4586297087304517E-002 );
  id1 -> SetBinError( xbin,   0.90405870479770467      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    913489.28109219542      );
  id2 -> SetBinError( xbin,    9012.7450151862104      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    890933.31582459237      );
  id2 -> SetBinError( xbin,    8663.6367594465228      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    834635.75946331397      );
  id2 -> SetBinError( xbin,    10715.460659252181      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    803921.54647879326      );
  id2 -> SetBinError( xbin,    7740.2691541071736      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    750636.14243520494      );
  id2 -> SetBinError( xbin,    7159.1700575119721      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    702750.73079161439      );
  id2 -> SetBinError( xbin,    6050.3502286387447      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    680539.03667587694      );
  id2 -> SetBinError( xbin,    6889.1743089955871      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    632101.98657467403      );
  id2 -> SetBinError( xbin,    4759.3782383813113      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    587028.79582530342      );
  id2 -> SetBinError( xbin,    4431.1373256296838      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    553732.52878385386      );
  id2 -> SetBinError( xbin,    4894.7978481663249      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    511100.03717171261      );
  id2 -> SetBinError( xbin,    3694.6574864723584      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    472183.46543225547      );
  id2 -> SetBinError( xbin,    3856.4697526662185      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    440294.68722239742      );
  id2 -> SetBinError( xbin,    3370.6292987961997      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    396709.60402626131      );
  id2 -> SetBinError( xbin,    2723.7666667561252      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    368807.30133782467      );
  id2 -> SetBinError( xbin,    2724.6759348461869      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    333301.40948531928      );
  id2 -> SetBinError( xbin,    2424.9841852329096      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    298581.31512477988      );
  id2 -> SetBinError( xbin,    2223.4211749081323      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    269747.87541421730      );
  id2 -> SetBinError( xbin,    2442.9226431193588      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    238997.66391063519      );
  id2 -> SetBinError( xbin,    2798.7878381027954      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    213355.99122869002      );
  id2 -> SetBinError( xbin,    1750.6943506991663      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    188930.35817180245      );
  id2 -> SetBinError( xbin,    1473.0611273423381      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    167421.50786415389      );
  id2 -> SetBinError( xbin,    1429.5164591035959      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    148742.51219128372      );
  id2 -> SetBinError( xbin,    1499.8580551879052      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    128494.07957999862      );
  id2 -> SetBinError( xbin,    1207.8548419250219      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    113161.89478921267      );
  id2 -> SetBinError( xbin,    1037.9929339769392      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    100319.98810616518      );
  id2 -> SetBinError( xbin,    1247.7222991576493      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    90631.114468282904      );
  id2 -> SetBinError( xbin,    904.87228832718733      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    83737.242780292290      );
  id2 -> SetBinError( xbin,    908.80503558228702      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    78487.498993470159      );
  id2 -> SetBinError( xbin,    868.09345544843143      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    75283.789880897762      );
  id2 -> SetBinError( xbin,    817.47026669847844      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    76605.460018635684      );
  id2 -> SetBinError( xbin,    1363.6069765500549      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    77294.908558867799      );
  id2 -> SetBinError( xbin,    800.15972584908604      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    82767.245709460010      );
  id2 -> SetBinError( xbin,    889.88932294056849      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    91487.286025943060      );
  id2 -> SetBinError( xbin,    921.77237774818934      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    100646.93610022256      );
  id2 -> SetBinError( xbin,    931.88721062605237      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    111982.35674036002      );
  id2 -> SetBinError( xbin,    963.96570456924189      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    130503.52650407013      );
  id2 -> SetBinError( xbin,    1993.3694802703556      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    148968.24430283016      );
  id2 -> SetBinError( xbin,    1517.8028608230354      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    165187.56401300852      );
  id2 -> SetBinError( xbin,    1315.4034837457821      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    189201.56529422573      );
  id2 -> SetBinError( xbin,    1488.6734769880593      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    215242.27136659512      );
  id2 -> SetBinError( xbin,    1949.5016536862847      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    243144.27330131165      );
  id2 -> SetBinError( xbin,    2401.0009664577515      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    266728.35304722743      );
  id2 -> SetBinError( xbin,    2137.7569007023317      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    296170.98880945193      );
  id2 -> SetBinError( xbin,    2032.3243646757178      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    329764.58935363125      );
  id2 -> SetBinError( xbin,    2506.6385254797588      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    365979.57764768862      );
  id2 -> SetBinError( xbin,    2768.1088239884011      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    400997.58080628474      );
  id2 -> SetBinError( xbin,    2881.2646309821152      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    437087.15888039407      );
  id2 -> SetBinError( xbin,    4532.3435436023847      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    472870.34635606821      );
  id2 -> SetBinError( xbin,    4654.8883776245802      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    504356.50903963926      );
  id2 -> SetBinError( xbin,    3678.9569315600165      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    537951.93550059898      );
  id2 -> SetBinError( xbin,    3943.5847578049688      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    583771.60987426469      );
  id2 -> SetBinError( xbin,    5046.2745660779383      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    616209.28619971091      );
  id2 -> SetBinError( xbin,    5153.2009357796978      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    661421.24770878255      );
  id2 -> SetBinError( xbin,    5342.5327758076601      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    711425.84105033998      );
  id2 -> SetBinError( xbin,    7635.8751382829705      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    740154.14940274355      );
  id2 -> SetBinError( xbin,    6474.9933539392405      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    782179.34660419542      );
  id2 -> SetBinError( xbin,    7066.6355136210532      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    807065.15795825853      );
  id2 -> SetBinError( xbin,    8407.8504709921872      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    858653.58005740086      );
  id2 -> SetBinError( xbin,    9116.0200048593470      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    888729.35620114626      );
  id2 -> SetBinError( xbin,    9045.5001032614346      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    150717.74347955806      );
  id3 -> SetBinError( xbin,    1422.3603960156961      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    204441.48167951967      );
  id3 -> SetBinError( xbin,    1732.3312716382725      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    266038.63374086807      );
  id3 -> SetBinError( xbin,    2057.4752283406388      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    315292.63199508336      );
  id3 -> SetBinError( xbin,    2295.1289667033216      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    360029.77970009245      );
  id3 -> SetBinError( xbin,    2506.7554219572517      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    403279.47139579337      );
  id3 -> SetBinError( xbin,    2623.0795651944973      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    429755.16879599611      );
  id3 -> SetBinError( xbin,    2670.0600413887378      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    456627.86816158437      );
  id3 -> SetBinError( xbin,    2849.9830768995603      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    464700.65384720307      );
  id3 -> SetBinError( xbin,    2912.5629119577247      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    476439.24892562767      );
  id3 -> SetBinError( xbin,    2872.7018293253955      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    478296.08779252734      );
  id3 -> SetBinError( xbin,    2805.2606657020820      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    482453.53869194258      );
  id3 -> SetBinError( xbin,    2790.4263664369510      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    479095.21797025105      );
  id3 -> SetBinError( xbin,    2793.2913282005047      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    474576.50367420813      );
  id3 -> SetBinError( xbin,    2736.9914880613037      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    471400.06603965577      );
  id3 -> SetBinError( xbin,    2800.6071447822842      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    467979.29441908508      );
  id3 -> SetBinError( xbin,    2791.2049781729065      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    458362.78145009524      );
  id3 -> SetBinError( xbin,    2707.2681307224793      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    454467.25257482746      );
  id3 -> SetBinError( xbin,    2798.1159478087384      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    445684.83946467855      );
  id3 -> SetBinError( xbin,    2801.4820076156057      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    441417.43129334348      );
  id3 -> SetBinError( xbin,    2651.6592256538256      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    440768.22950969567      );
  id3 -> SetBinError( xbin,    3169.6656020914165      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    425797.89088787645      );
  id3 -> SetBinError( xbin,    3180.4969856707376      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    423573.57740891579      );
  id3 -> SetBinError( xbin,    2646.9535997300773      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    407600.01589511364      );
  id3 -> SetBinError( xbin,    2780.8402325427282      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    385836.80621163733      );
  id3 -> SetBinError( xbin,    2981.9584254115985      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    359164.80062732525      );
  id3 -> SetBinError( xbin,    2610.8988027036185      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    325492.43626071024      );
  id3 -> SetBinError( xbin,    2302.8167026779283      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    274996.49723339564      );
  id3 -> SetBinError( xbin,    2091.1452793010772      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    221112.05587324520      );
  id3 -> SetBinError( xbin,    1894.6194192187054      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    164634.42479411990      );
  id3 -> SetBinError( xbin,    1576.4144195540034      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    49076.822987454165      );
  id4 -> SetBinError( xbin,    1510.1958944577368      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    142490.33868786073      );
  id4 -> SetBinError( xbin,    2344.3519841029097      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    171116.84203910100      );
  id4 -> SetBinError( xbin,    2620.0387768666196      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    196937.72558506159      );
  id4 -> SetBinError( xbin,    2858.0487553541661      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    233769.35696155374      );
  id4 -> SetBinError( xbin,    3376.0202230796308      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    254652.68314936582      );
  id4 -> SetBinError( xbin,    4780.9008204060328      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    298032.19594419631      );
  id4 -> SetBinError( xbin,    5056.7355578022562      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    310226.92714464804      );
  id4 -> SetBinError( xbin,    3981.2870680532060      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    337067.44056611927      );
  id4 -> SetBinError( xbin,    3783.3186656934790      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    361483.12234310480      );
  id4 -> SetBinError( xbin,    4604.0617432559702      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    373436.89687929186      );
  id4 -> SetBinError( xbin,    4794.9816257277625      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    403329.78978089010      );
  id4 -> SetBinError( xbin,    4231.0428312128051      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    409274.42799097684      );
  id4 -> SetBinError( xbin,    4251.5870922595277      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    431764.15471651743      );
  id4 -> SetBinError( xbin,    4432.0699267182681      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    445907.38102415606      );
  id4 -> SetBinError( xbin,    4474.7530195836880      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    453982.59913040337      );
  id4 -> SetBinError( xbin,    4635.2985440709963      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    459794.93077989947      );
  id4 -> SetBinError( xbin,    4683.7215595765856      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    463649.02767690574      );
  id4 -> SetBinError( xbin,    4570.7353184602143      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    478115.78513492359      );
  id4 -> SetBinError( xbin,    4755.0621979423795      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    470581.90928571881      );
  id4 -> SetBinError( xbin,    5232.6986835328344      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    479555.97844395135      );
  id4 -> SetBinError( xbin,    5090.6765342038516      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    476785.85822151601      );
  id4 -> SetBinError( xbin,    4565.7950365010565      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    483857.06135014282      );
  id4 -> SetBinError( xbin,    4531.5798830741751      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    477855.92732776451      );
  id4 -> SetBinError( xbin,    6393.9634304119108      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    490754.96533959621      );
  id4 -> SetBinError( xbin,    6570.5675621749560      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    474115.79837059398      );
  id4 -> SetBinError( xbin,    4838.8519647029470      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    476216.93000878341      );
  id4 -> SetBinError( xbin,    4753.5901754659453      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    469700.16211456445      );
  id4 -> SetBinError( xbin,    4638.0281157417476      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    474146.19535430783      );
  id4 -> SetBinError( xbin,    4701.2163546434367      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    473306.12358640967      );
  id4 -> SetBinError( xbin,    4801.9809462680923      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    471994.63236597134      );
  id4 -> SetBinError( xbin,    4530.0335005719153      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    468598.72100885335      );
  id4 -> SetBinError( xbin,    4547.4189601094449      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    458631.37891162367      );
  id4 -> SetBinError( xbin,    4345.8350542869866      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    456809.22287069692      );
  id4 -> SetBinError( xbin,    4433.4002465516569      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    468830.62244288274      );
  id4 -> SetBinError( xbin,    9056.1440538751613      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    445123.41219568264      );
  id4 -> SetBinError( xbin,    8974.0963138914285      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    454255.00672676583      );
  id4 -> SetBinError( xbin,    4311.1945052391748      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    439501.63128558081      );
  id4 -> SetBinError( xbin,    4461.0643693904804      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    446629.97420578013      );
  id4 -> SetBinError( xbin,    4448.6215785390405      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    445907.42317384225      );
  id4 -> SetBinError( xbin,    4217.6738991657166      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    439384.47234576021      );
  id4 -> SetBinError( xbin,    4316.5147004071168      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    437945.17848565971      );
  id4 -> SetBinError( xbin,    4349.4638290645998      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    435330.36494071665      );
  id4 -> SetBinError( xbin,    5078.3129342774291      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    433055.60651002155      );
  id4 -> SetBinError( xbin,    5211.0247542849111      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    416412.67820380698      );
  id4 -> SetBinError( xbin,    4447.1483333372908      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    438630.26480056898      );
  id4 -> SetBinError( xbin,    4408.1289934168253      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    406931.22616475477      );
  id4 -> SetBinError( xbin,    5149.7127166295977      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    415109.25896660704      );
  id4 -> SetBinError( xbin,    5586.9290888886153      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    399977.04538365849      );
  id4 -> SetBinError( xbin,    5141.4620761029455      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    390013.79332960147      );
  id4 -> SetBinError( xbin,    4277.8399013538292      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    371115.78951173712      );
  id4 -> SetBinError( xbin,    4120.3983203310945      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    366871.42014071898      );
  id4 -> SetBinError( xbin,    4124.8836127615241      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    340253.55886805896      );
  id4 -> SetBinError( xbin,    4003.6968142200435      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    332322.66384799196      );
  id4 -> SetBinError( xbin,    4204.2836539526124      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    302737.66109124309      );
  id4 -> SetBinError( xbin,    4894.8217242534301      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    271809.23549398064      );
  id4 -> SetBinError( xbin,    4387.7792334954311      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    259947.41296231691      );
  id4 -> SetBinError( xbin,    3227.1843068867124      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    224999.92978919964      );
  id4 -> SetBinError( xbin,    3267.0406647609971      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    195733.32174441626      );
  id4 -> SetBinError( xbin,    3008.5203380953617      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    169254.28521508456      );
  id4 -> SetBinError( xbin,    2588.1245975656175      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    94962.308678630463      );
  id4 -> SetBinError( xbin,    2061.1418167229454      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    41526.176623513391      );
  id5 -> SetBinError( xbin,    457.06671124887168      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    89655.147323757978      );
  id5 -> SetBinError( xbin,    595.52559432541921      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    97601.185734448576      );
  id5 -> SetBinError( xbin,    727.63034229279231      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    106820.23502428770      );
  id5 -> SetBinError( xbin,    800.19299965402138      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    117340.99286998302      );
  id5 -> SetBinError( xbin,    828.46389444661338      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    131507.54545541186      );
  id5 -> SetBinError( xbin,    855.07114839936878      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    149357.01169595585      );
  id5 -> SetBinError( xbin,    922.32363007751303      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    138102.37709058332      );
  id5 -> SetBinError( xbin,    1136.6643881938892      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    113117.63242173423      );
  id5 -> SetBinError( xbin,    1100.0436351383446      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    57475.976923260212      );
  id5 -> SetBinError( xbin,    692.58173353835775      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    30560.614214273341      );
  id5 -> SetBinError( xbin,    186.06145814458415      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19256.534196258446      );
  id5 -> SetBinError( xbin,    134.56540753178189      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13657.432703121551      );
  id5 -> SetBinError( xbin,    116.68594081022138      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9804.6045689149578      );
  id5 -> SetBinError( xbin,    99.951776413375981      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7479.3411279924330      );
  id5 -> SetBinError( xbin,    68.958177722344459      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5694.3177511894546      );
  id5 -> SetBinError( xbin,    91.397191455629908      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4884.3480770143206      );
  id5 -> SetBinError( xbin,    87.836212007262375      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3739.7088084658226      );
  id5 -> SetBinError( xbin,    46.266121774021713      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3098.2956254849450      );
  id5 -> SetBinError( xbin,    60.265082116895414      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2648.4869056574303      );
  id5 -> SetBinError( xbin,    57.207681221155475      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2190.5428577846574      );
  id5 -> SetBinError( xbin,    32.370532407583831      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1781.0293134011122      );
  id5 -> SetBinError( xbin,    28.844594711093148      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1585.7083917092195      );
  id5 -> SetBinError( xbin,    29.671880487465586      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1353.1153804993073      );
  id5 -> SetBinError( xbin,    27.885879913117197      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1177.6223771930945      );
  id5 -> SetBinError( xbin,    25.799157896456066      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    995.70292725473064      );
  id5 -> SetBinError( xbin,    23.913724724982600      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    906.76242722855739      );
  id5 -> SetBinError( xbin,    20.756058897424829      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    805.04802869910691      );
  id5 -> SetBinError( xbin,    24.951954635295991      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    651.85896458354227      );
  id5 -> SetBinError( xbin,    26.058481660178884      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    632.94674845726104      );
  id5 -> SetBinError( xbin,    23.674088188411424      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    517.48033985399138      );
  id5 -> SetBinError( xbin,    19.539981276790421      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    444.52246414889618      );
  id5 -> SetBinError( xbin,    23.697189697901152      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    424.83627945348439      );
  id5 -> SetBinError( xbin,    23.637312944703663      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    382.90620742932197      );
  id5 -> SetBinError( xbin,    41.090170613941588      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    291.69398183425216      );
  id5 -> SetBinError( xbin,    40.119706321051844      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    293.21602051425128      );
  id5 -> SetBinError( xbin,    11.295270786622101      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    278.72105181682582      );
  id5 -> SetBinError( xbin,    12.043250272445329      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    232.59192881013951      );
  id5 -> SetBinError( xbin,    12.919831714058121      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2899.8647700020920      );
  id6 -> SetBinError( xbin,    59.475864764533902      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9484.4988959707625      );
  id6 -> SetBinError( xbin,    112.76692613179081      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19367.891541270379      );
  id6 -> SetBinError( xbin,    164.47478492431128      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33971.784733869070      );
  id6 -> SetBinError( xbin,    217.60516204595342      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    56031.889886917736      );
  id6 -> SetBinError( xbin,    272.08093339253867      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    86885.257704061994      );
  id6 -> SetBinError( xbin,    320.92546120577032      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    133308.01535519236      );
  id6 -> SetBinError( xbin,    389.80257755286385      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    187407.52213030099      );
  id6 -> SetBinError( xbin,    467.30036835729163      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    73077.225824788897      );
  id6 -> SetBinError( xbin,    329.84830574220501      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24914.895506894711      );
  id6 -> SetBinError( xbin,    218.01200489495216      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    9450.5710337009186      );
  id6 -> SetBinError( xbin,    146.77903121971804      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3605.7266958488999      );
  id6 -> SetBinError( xbin,    106.34242843475866      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11778.340634873861      );
  id7 -> SetBinError( xbin,    159.43688885107738      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15752.811146850792      );
  id7 -> SetBinError( xbin,    188.71463112981371      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    20107.049259000316      );
  id7 -> SetBinError( xbin,    229.26703501428753      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24443.448956688986      );
  id7 -> SetBinError( xbin,    235.33810680054330      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    29530.483623130069      );
  id7 -> SetBinError( xbin,    261.92173679082839      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    34782.348495515995      );
  id7 -> SetBinError( xbin,    290.26210782650236      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    39683.659761572242      );
  id7 -> SetBinError( xbin,    314.58993110810167      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    44237.966136984498      );
  id7 -> SetBinError( xbin,    340.20074689663221      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    48830.112658784084      );
  id7 -> SetBinError( xbin,    362.93878377164765      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    52749.364829560604      );
  id7 -> SetBinError( xbin,    379.09849379578162      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    56556.476996156154      );
  id7 -> SetBinError( xbin,    396.12708626561783      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    59267.380614431589      );
  id7 -> SetBinError( xbin,    411.84700334600672      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    61319.853258615709      );
  id7 -> SetBinError( xbin,    421.28539264078171      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    63182.164560132500      );
  id7 -> SetBinError( xbin,    421.24813999557455      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    63294.127209115170      );
  id7 -> SetBinError( xbin,    419.59346718175931      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    63460.075746686372      );
  id7 -> SetBinError( xbin,    421.96074474264077      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    62744.016333091742      );
  id7 -> SetBinError( xbin,    416.84912751145197      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    61975.644462882359      );
  id7 -> SetBinError( xbin,    417.68659318817964      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    60202.684585599054      );
  id7 -> SetBinError( xbin,    402.05742940302895      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    58060.814928615524      );
  id7 -> SetBinError( xbin,    397.49517726918867      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    54370.085090939188      );
  id7 -> SetBinError( xbin,    377.01503585568747      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    51441.398995880518      );
  id7 -> SetBinError( xbin,    367.55321125887616      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    46825.818233247053      );
  id7 -> SetBinError( xbin,    335.15055558641740      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    43143.281002108830      );
  id7 -> SetBinError( xbin,    319.97505726397111      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    37709.485048640527      );
  id7 -> SetBinError( xbin,    290.78807243299599      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    33311.063238910530      );
  id7 -> SetBinError( xbin,    273.34440147866832      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    28175.903701032887      );
  id7 -> SetBinError( xbin,    247.21111849961119      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    23456.068858831975      );
  id7 -> SetBinError( xbin,    230.00839151131169      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    19321.338037100086      );
  id7 -> SetBinError( xbin,    202.03698999722019      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    14563.451785290141      );
  id7 -> SetBinError( xbin,    172.64081823414566      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7127.6256574144736      );
  id8 -> SetBinError( xbin,    47.885097840447365      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12885.791179189870      );
  id8 -> SetBinError( xbin,    65.291801944180719      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    11081.644314130855      );
  id8 -> SetBinError( xbin,    58.535209852401323      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9759.5661420738670      );
  id8 -> SetBinError( xbin,    53.773824317625419      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8503.3569182380324      );
  id8 -> SetBinError( xbin,    49.346265603563062      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7586.9645052016322      );
  id8 -> SetBinError( xbin,    46.631535825810822      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6682.3561098229466      );
  id8 -> SetBinError( xbin,    43.345404755219569      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5883.1258071519624      );
  id8 -> SetBinError( xbin,    40.041664370525908      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5219.2032509915207      );
  id8 -> SetBinError( xbin,    36.602595967465945      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4616.0031872392719      );
  id8 -> SetBinError( xbin,    34.112979558472873      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4149.8494566894351      );
  id8 -> SetBinError( xbin,    31.930320558220473      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3723.8715342857636      );
  id8 -> SetBinError( xbin,    30.045384370322253      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3335.6337295739777      );
  id8 -> SetBinError( xbin,    27.922623296763831      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    3011.2861533570158      );
  id8 -> SetBinError( xbin,    26.933824028664642      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2722.1202138313620      );
  id8 -> SetBinError( xbin,    24.595051897958310      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2452.2597514687550      );
  id8 -> SetBinError( xbin,    23.359228646788026      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2233.4849673264848      );
  id8 -> SetBinError( xbin,    21.821733442738754      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2077.9553288547522      );
  id8 -> SetBinError( xbin,    20.912250509732065      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1861.1850647909378      );
  id8 -> SetBinError( xbin,    19.380606613792217      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1702.3277140431162      );
  id8 -> SetBinError( xbin,    18.737319701400207      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1579.8784312193222      );
  id8 -> SetBinError( xbin,    17.853104403480099      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1415.1666511070086      );
  id8 -> SetBinError( xbin,    16.549180073866790      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1312.5249233847699      );
  id8 -> SetBinError( xbin,    17.738182937046243      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1212.9589962180405      );
  id8 -> SetBinError( xbin,    15.082047466328449      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1127.0912056124805      );
  id8 -> SetBinError( xbin,    14.588419337487636      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    1012.9097514735564      );
  id8 -> SetBinError( xbin,    13.406434603286600      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    953.33772050796745      );
  id8 -> SetBinError( xbin,    12.855072774738677      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    885.58551188665797      );
  id8 -> SetBinError( xbin,    12.534814304844925      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
