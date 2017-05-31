// Cross-section is:       648318.8994907269 +/-           97.4763827455)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -25444.65234   -3.92%
//        GQB    |      -14229.34728   -2.19%
//        QG     |      -25095.14754   -3.87%
//        QBG    |      -14163.85653   -2.18%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      359064.17918   55.38%
//        QBQ    |      370087.71232   57.08%

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
//Zprod_MSTW                      [runstring]  
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
//MSTW2008nlo68cl.LHgr            [LHAPDF group]  
//                   0            [LHAPDF set]  

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


  {
  mcfmhisto = new TFile("Z_only_tota_MSTW200_91__91__Zprod_MSTW.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "y3", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("y3");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dy3 [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -5.9000000000000004      );
  id1 -> SetBinContent( xbin,    420.42991625851477      );
  id1 -> SetBinError( xbin,    347.89487114214842      );
   int xbin = id1->FindBin(  -5.7000000000000002      );
  id1 -> SetBinContent( xbin,    296.67847330979333      );
  id1 -> SetBinError( xbin,    443.77239168952821      );
   int xbin = id1->FindBin(  -5.5000000000000000      );
  id1 -> SetBinContent( xbin,    1748.3388021284766      );
  id1 -> SetBinError( xbin,    458.80239567899463      );
   int xbin = id1->FindBin(  -5.2999999999999998      );
  id1 -> SetBinContent( xbin,    1988.1169311457279      );
  id1 -> SetBinError( xbin,    240.04648960712348      );
   int xbin = id1->FindBin(  -5.0999999999999996      );
  id1 -> SetBinContent( xbin,    2818.0248764651328      );
  id1 -> SetBinError( xbin,    349.32796601588194      );
   int xbin = id1->FindBin(  -4.9000000000000004      );
  id1 -> SetBinContent( xbin,    3636.5385148120681      );
  id1 -> SetBinError( xbin,    1013.5575584019525      );
   int xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    6936.8529216377419      );
  id1 -> SetBinError( xbin,    1021.5438702617378      );
   int xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,    8867.6191686119037      );
  id1 -> SetBinError( xbin,    430.43792455924870      );
   int xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    11474.135853276908      );
  id1 -> SetBinError( xbin,    459.84792408370214      );
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    15241.621860742345      );
  id1 -> SetBinError( xbin,    657.70186679518929      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    21506.014411389075      );
  id1 -> SetBinError( xbin,    746.37459681098244      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    27477.707447003784      );
  id1 -> SetBinError( xbin,    677.76257638407935      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    34069.846158552667      );
  id1 -> SetBinError( xbin,    780.02099398824669      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    41846.378941486917      );
  id1 -> SetBinError( xbin,    882.09782831603161      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    48137.201697172000      );
  id1 -> SetBinError( xbin,    756.77929954095168      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    57273.491966928894      );
  id1 -> SetBinError( xbin,    822.34217418278740      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    63371.848814703262      );
  id1 -> SetBinError( xbin,    849.09378587957326      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    72441.510472912065      );
  id1 -> SetBinError( xbin,    723.11840855142498      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    80256.981521175825      );
  id1 -> SetBinError( xbin,    868.44782470942653      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    84350.206724237825      );
  id1 -> SetBinError( xbin,    927.35904127706033      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    90160.809933275566      );
  id1 -> SetBinError( xbin,    822.69536120048406      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    96199.271519588336      );
  id1 -> SetBinError( xbin,    764.90193783351629      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    99335.179609345301      );
  id1 -> SetBinError( xbin,    898.41958236665130      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    104865.02318284749      );
  id1 -> SetBinError( xbin,    905.95290759280545      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    105956.72492161528      );
  id1 -> SetBinError( xbin,    884.27204893219152      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    110509.33632745592      );
  id1 -> SetBinError( xbin,    1033.4881769182828      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    109871.64147517399      );
  id1 -> SetBinError( xbin,    1002.2480853276661      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    110728.26947585848      );
  id1 -> SetBinError( xbin,    816.06246687525390      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    111491.13531277867      );
  id1 -> SetBinError( xbin,    774.57787564360160      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    111984.38974180688      );
  id1 -> SetBinError( xbin,    807.61826150456557      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    111165.90823189435      );
  id1 -> SetBinError( xbin,    799.33191649028186      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    113291.01179514593      );
  id1 -> SetBinError( xbin,    775.27604162329453      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    110465.87172955308      );
  id1 -> SetBinError( xbin,    737.09929208700419      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    108022.35071808720      );
  id1 -> SetBinError( xbin,    804.66088599791840      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    108869.27378935879      );
  id1 -> SetBinError( xbin,    817.89522292791457      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    105184.96390632217      );
  id1 -> SetBinError( xbin,    804.97735208600000      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    102271.82184340701      );
  id1 -> SetBinError( xbin,    871.96995815364176      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    98197.604387490821      );
  id1 -> SetBinError( xbin,    868.52562887335603      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    95240.828411685579      );
  id1 -> SetBinError( xbin,    791.39157851527762      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    89054.122124850066      );
  id1 -> SetBinError( xbin,    802.35132941016570      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    83018.623425418889      );
  id1 -> SetBinError( xbin,    947.47319449894906      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    76839.613938011185      );
  id1 -> SetBinError( xbin,    865.71530679641626      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    69804.953970149087      );
  id1 -> SetBinError( xbin,    777.22262705480057      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    62483.163546574884      );
  id1 -> SetBinError( xbin,    873.25883325693735      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    56114.761055400995      );
  id1 -> SetBinError( xbin,    1043.1557033569832      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    46294.647291726564      );
  id1 -> SetBinError( xbin,    925.40379873510994      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    38790.858757844362      );
  id1 -> SetBinError( xbin,    627.80544491841761      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    32325.344798479189      );
  id1 -> SetBinError( xbin,    635.07498249770867      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    25643.343088619717      );
  id1 -> SetBinError( xbin,    519.83535473809161      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    19284.781262771547      );
  id1 -> SetBinError( xbin,    464.11887758483346      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    14990.070970139572      );
  id1 -> SetBinError( xbin,    453.23209412284990      );
   int xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,    10983.841943799771      );
  id1 -> SetBinError( xbin,    537.78637233299889      );
   int xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    8448.4736401287209      );
  id1 -> SetBinError( xbin,    487.52966649976838      );
   int xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    5327.6177187828935      );
  id1 -> SetBinError( xbin,    264.15629018433117      );
   int xbin = id1->FindBin(   4.9000000000000004      );
  id1 -> SetBinContent( xbin,    4716.1938298913774      );
  id1 -> SetBinError( xbin,    502.92810144993842      );
   int xbin = id1->FindBin(   5.1000000000000014      );
  id1 -> SetBinContent( xbin,    2036.2245082202001      );
  id1 -> SetBinError( xbin,    509.87080841193813      );
   int xbin = id1->FindBin(   5.3000000000000007      );
  id1 -> SetBinContent( xbin,    2149.7312812146174      );
  id1 -> SetBinError( xbin,    247.27997386817424      );
   int xbin = id1->FindBin(   5.5000000000000000      );
  id1 -> SetBinContent( xbin,    1304.7684602160252      );
  id1 -> SetBinError( xbin,    186.28490580113947      );
   int xbin = id1->FindBin(   5.7000000000000011      );
  id1 -> SetBinContent( xbin,    780.12000378688720      );
  id1 -> SetBinError( xbin,    114.28303516844402      );
   int xbin = id1->FindBin(   5.9000000000000004      );
  id1 -> SetBinContent( xbin,    400.12156040455801      );
  id1 -> SetBinError( xbin,    429.80173478864106      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "y4", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("y4");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dy4 [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    668.14813022670353      );
  id2 -> SetBinError( xbin,    219.75904321318305      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    856.61082481929304      );
  id2 -> SetBinError( xbin,    174.80937891992502      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    808.58333734727694      );
  id2 -> SetBinError( xbin,    143.12845911115886      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    1862.6563095617626      );
  id2 -> SetBinError( xbin,    173.83204483460221      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    2382.1479923227707      );
  id2 -> SetBinError( xbin,    284.65373600267799      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    3065.7374788036323      );
  id2 -> SetBinError( xbin,    312.90060288436388      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    4685.9469481185206      );
  id2 -> SetBinError( xbin,    306.43413292831360      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    7323.1380379508382      );
  id2 -> SetBinError( xbin,    345.39742330508489      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    9143.9631071837084      );
  id2 -> SetBinError( xbin,    364.44143776655380      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    13433.885029891913      );
  id2 -> SetBinError( xbin,    387.94002805547541      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    17132.447465963731      );
  id2 -> SetBinError( xbin,    421.07129966236920      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    22247.996908966285      );
  id2 -> SetBinError( xbin,    471.80159208538703      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    28400.317720559025      );
  id2 -> SetBinError( xbin,    646.07708539727355      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    36030.209522294565      );
  id2 -> SetBinError( xbin,    660.55171278310320      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    43968.651033873728      );
  id2 -> SetBinError( xbin,    666.07488228401644      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    50417.013994429130      );
  id2 -> SetBinError( xbin,    723.08900074195412      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    59830.193438383663      );
  id2 -> SetBinError( xbin,    824.57725414618290      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    68748.476151493422      );
  id2 -> SetBinError( xbin,    960.61151492069837      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    77455.323926133467      );
  id2 -> SetBinError( xbin,    835.81253715001003      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    85168.739882680893      );
  id2 -> SetBinError( xbin,    681.75737391080020      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    93474.406865975863      );
  id2 -> SetBinError( xbin,    1330.9284484777415      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    96968.533345590113      );
  id2 -> SetBinError( xbin,    1387.0787774526741      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    104396.74230545800      );
  id2 -> SetBinError( xbin,    1356.8818752842230      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    107454.72340751084      );
  id2 -> SetBinError( xbin,    1332.8814328577696      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    112441.63959821557      );
  id2 -> SetBinError( xbin,    885.34567974557774      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    115550.07551351162      );
  id2 -> SetBinError( xbin,    913.06627004393499      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    115566.25185958587      );
  id2 -> SetBinError( xbin,    903.43303951829262      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    116574.58905953703      );
  id2 -> SetBinError( xbin,    1038.5262278628884      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    117795.10815930570      );
  id2 -> SetBinError( xbin,    1383.2209381968580      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    119642.82523657214      );
  id2 -> SetBinError( xbin,    1285.7228819115996      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    117684.83429258619      );
  id2 -> SetBinError( xbin,    979.13438691800332      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    120071.11722717143      );
  id2 -> SetBinError( xbin,    964.42053121822164      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    116851.73611645641      );
  id2 -> SetBinError( xbin,    870.01255666480154      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    112722.77757908507      );
  id2 -> SetBinError( xbin,    1216.2145969006303      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    113907.64134671779      );
  id2 -> SetBinError( xbin,    1191.4149356323744      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    110579.97876153904      );
  id2 -> SetBinError( xbin,    802.64576762582908      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    106227.40183510195      );
  id2 -> SetBinError( xbin,    1122.0679662926279      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    102255.87798640864      );
  id2 -> SetBinError( xbin,    1104.9538656548041      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    96460.638389249827      );
  id2 -> SetBinError( xbin,    871.68888986053094      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    89669.576889931224      );
  id2 -> SetBinError( xbin,    932.30085041491759      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    84086.990913473855      );
  id2 -> SetBinError( xbin,    950.63756269133364      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    75340.720579273751      );
  id2 -> SetBinError( xbin,    883.44408879409650      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    66548.023478487448      );
  id2 -> SetBinError( xbin,    788.31655172802164      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    58862.921514863549      );
  id2 -> SetBinError( xbin,    950.33234941705496      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    49523.979051296410      );
  id2 -> SetBinError( xbin,    843.05806737265630      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    41663.594845290339      );
  id2 -> SetBinError( xbin,    974.76655191913585      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    34030.656254326568      );
  id2 -> SetBinError( xbin,    939.29340762498987      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    27841.398581867754      );
  id2 -> SetBinError( xbin,    509.98296725243392      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    22927.036606231733      );
  id2 -> SetBinError( xbin,    1230.4211178251423      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    16222.379881589546      );
  id2 -> SetBinError( xbin,    1220.1160516396146      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    12869.804763802555      );
  id2 -> SetBinError( xbin,    558.14933987272241      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    9280.2830348750849      );
  id2 -> SetBinError( xbin,    500.53608211734434      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    6686.0775708649344      );
  id2 -> SetBinError( xbin,    376.64084090893812      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    4421.7533978499268      );
  id2 -> SetBinError( xbin,    328.56039999692513      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    3466.9138063426017      );
  id2 -> SetBinError( xbin,    229.08720327712487      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    2481.7251479558777      );
  id2 -> SetBinError( xbin,    253.66606842504254      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    1585.8425869122709      );
  id2 -> SetBinError( xbin,    234.99175222041404      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    756.79987727681441      );
  id2 -> SetBinError( xbin,    177.57492659381106      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    787.48590228881426      );
  id2 -> SetBinError( xbin,    139.79666828746622      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    225.90761963706598      );
  id2 -> SetBinError( xbin,    147.07037903638286      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y34", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y34");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy34 [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,   -4.4139741082977183E-005 );
  id3 -> SetBinError( xbin,    3.6067017700689674E-005 );
   int xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,   0.95703079444920369      );
  id3 -> SetBinError( xbin,   0.42491814871677008      );
   int xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    23.553346483089946      );
  id3 -> SetBinError( xbin,    7.0617202091456264      );
   int xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    264.53129524143657      );
  id3 -> SetBinError( xbin,    22.589679192838911      );
   int xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    2718.7095297891833      );
  id3 -> SetBinError( xbin,    88.925498862060877      );
   int xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    9862.7527262331569      );
  id3 -> SetBinError( xbin,    217.50161184224882      );
   int xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    23038.319318560334      );
  id3 -> SetBinError( xbin,    302.65652104297135      );
   int xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    39503.923233370981      );
  id3 -> SetBinError( xbin,    369.68732496437394      );
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    55219.601972500612      );
  id3 -> SetBinError( xbin,    431.96116359879119      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    70676.916064464356      );
  id3 -> SetBinError( xbin,    477.37124412798062      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    84785.905633860224      );
  id3 -> SetBinError( xbin,    521.05979358208651      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    93518.524782369961      );
  id3 -> SetBinError( xbin,    540.35393005152912      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    101584.21994502030      );
  id3 -> SetBinError( xbin,    543.61218083541121      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    105342.11277097330      );
  id3 -> SetBinError( xbin,    564.04893574480604      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    111430.60530706856      );
  id3 -> SetBinError( xbin,    578.63129829159539      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    114079.14206349722      );
  id3 -> SetBinError( xbin,    568.19023769259661      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    115248.80851510289      );
  id3 -> SetBinError( xbin,    602.27439535528958      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    116335.60288331319      );
  id3 -> SetBinError( xbin,    670.03551889647781      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    118120.97400184773      );
  id3 -> SetBinError( xbin,    652.17667721884789      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    118787.86761365086      );
  id3 -> SetBinError( xbin,    595.02996989018789      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    119007.41161088302      );
  id3 -> SetBinError( xbin,    589.11799415298003      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    119274.46851134436      );
  id3 -> SetBinError( xbin,    577.52709070418496      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    117541.81760410051      );
  id3 -> SetBinError( xbin,    593.59476332831991      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    119629.62090081596      );
  id3 -> SetBinError( xbin,    604.75847360201726      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    119051.86959281858      );
  id3 -> SetBinError( xbin,    616.90162546585248      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    117544.17792252710      );
  id3 -> SetBinError( xbin,    611.91449666006008      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    117475.39889631078      );
  id3 -> SetBinError( xbin,    570.46931055028949      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    117797.45185480692      );
  id3 -> SetBinError( xbin,    564.60080388823872      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    115358.91450265888      );
  id3 -> SetBinError( xbin,    567.83506882289691      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    113688.49389493535      );
  id3 -> SetBinError( xbin,    575.01446238194808      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    110873.37484255790      );
  id3 -> SetBinError( xbin,    569.98916596614038      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    109942.18624292570      );
  id3 -> SetBinError( xbin,    553.82640642408887      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    104191.48954460991      );
  id3 -> SetBinError( xbin,    540.98060298886196      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    98003.622727417533      );
  id3 -> SetBinError( xbin,    533.85968523617237      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    90923.196864630227      );
  id3 -> SetBinError( xbin,    526.94142184730379      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    80453.014832931134      );
  id3 -> SetBinError( xbin,    517.96943121506592      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    67040.023106592416      );
  id3 -> SetBinError( xbin,    522.18320002516725      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    53057.833884720458      );
  id3 -> SetBinError( xbin,    473.07576364367054      );
   int xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    36990.323766398942      );
  id3 -> SetBinError( xbin,    365.16503690296179      );
   int xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    21562.699091670111      );
  id3 -> SetBinError( xbin,    295.68341054601933      );
   int xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    8932.6298384574093      );
  id3 -> SetBinError( xbin,    203.84006496298363      );
   int xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    2348.3557462112381      );
  id3 -> SetBinError( xbin,    84.576220613866127      );
   int xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    322.10501306750569      );
  id3 -> SetBinError( xbin,    34.530133280906767      );
   int xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    23.125587396249927      );
  id3 -> SetBinError( xbin,    11.637009373988565      );
   int xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,   0.36233748266067417      );
  id3 -> SetBinError( xbin,   0.24958409696579895      );
   int xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    2.5849631734665965E-005 );
  id3 -> SetBinError( xbin,    2.5849630334713037E-005 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "pt3", 40,    0.00000,   80.00000);

  id4 -> GetXaxis() -> SetTitle("pt3");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/dpt3 [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(   1.0000000000000000      );
  id4 -> SetBinContent( xbin,    426.72845337201647      );
  id4 -> SetBinError( xbin,    50.087431237115574      );
   int xbin = id4->FindBin(   3.0000000000000000      );
  id4 -> SetBinContent( xbin,    1395.6270885471158      );
  id4 -> SetBinError( xbin,    69.212902614826376      );
   int xbin = id4->FindBin(   5.0000000000000000      );
  id4 -> SetBinContent( xbin,    2204.0792179970317      );
  id4 -> SetBinError( xbin,    68.850853654308295      );
   int xbin = id4->FindBin(   7.0000000000000000      );
  id4 -> SetBinContent( xbin,    3498.4207346705498      );
  id4 -> SetBinError( xbin,    120.74084393477938      );
   int xbin = id4->FindBin(   9.0000000000000000      );
  id4 -> SetBinContent( xbin,    4596.6146205460900      );
  id4 -> SetBinError( xbin,    507.17264553467379      );
   int xbin = id4->FindBin(   11.000000000000000      );
  id4 -> SetBinContent( xbin,    4667.4202310957025      );
  id4 -> SetBinError( xbin,    511.06585492613942      );
   int xbin = id4->FindBin(   13.000000000000000      );
  id4 -> SetBinContent( xbin,    6139.3678268680560      );
  id4 -> SetBinError( xbin,    151.95672891967274      );
   int xbin = id4->FindBin(   15.000000000000000      );
  id4 -> SetBinContent( xbin,    7087.5331557853906      );
  id4 -> SetBinError( xbin,    136.73593437595071      );
   int xbin = id4->FindBin(   17.000000000000000      );
  id4 -> SetBinContent( xbin,    7615.1848014755133      );
  id4 -> SetBinError( xbin,    161.59054975908219      );
   int xbin = id4->FindBin(   19.000000000000000      );
  id4 -> SetBinContent( xbin,    9272.2604639485744      );
  id4 -> SetBinError( xbin,    171.41936158546221      );
   int xbin = id4->FindBin(   21.000000000000000      );
  id4 -> SetBinContent( xbin,    10388.351773503144      );
  id4 -> SetBinError( xbin,    161.64296692239594      );
   int xbin = id4->FindBin(   23.000000000000000      );
  id4 -> SetBinContent( xbin,    10771.351409427500      );
  id4 -> SetBinError( xbin,    176.43345530984013      );
   int xbin = id4->FindBin(   25.000000000000000      );
  id4 -> SetBinContent( xbin,    11196.232198300786      );
  id4 -> SetBinError( xbin,    682.92310335509433      );
   int xbin = id4->FindBin(   27.000000000000000      );
  id4 -> SetBinContent( xbin,    14025.234033591660      );
  id4 -> SetBinError( xbin,    704.55993523760685      );
   int xbin = id4->FindBin(   29.000000000000000      );
  id4 -> SetBinContent( xbin,    14935.941700770232      );
  id4 -> SetBinError( xbin,    299.61312840286342      );
   int xbin = id4->FindBin(   31.000000000000000      );
  id4 -> SetBinContent( xbin,    15600.087103503800      );
  id4 -> SetBinError( xbin,    377.26529074158623      );
   int xbin = id4->FindBin(   33.000000000000000      );
  id4 -> SetBinContent( xbin,    17162.444534491889      );
  id4 -> SetBinError( xbin,    358.86686791483919      );
   int xbin = id4->FindBin(   35.000000000000000      );
  id4 -> SetBinContent( xbin,    17849.839070869722      );
  id4 -> SetBinError( xbin,    300.36463249676189      );
   int xbin = id4->FindBin(   37.000000000000000      );
  id4 -> SetBinContent( xbin,    20639.347510925698      );
  id4 -> SetBinError( xbin,    310.06496680050469      );
   int xbin = id4->FindBin(   39.000000000000000      );
  id4 -> SetBinContent( xbin,    22248.296647127616      );
  id4 -> SetBinError( xbin,    384.10018211348086      );
   int xbin = id4->FindBin(   41.000000000000000      );
  id4 -> SetBinContent( xbin,    23644.983340599567      );
  id4 -> SetBinError( xbin,    391.50796743814607      );
   int xbin = id4->FindBin(   43.000000000000000      );
  id4 -> SetBinContent( xbin,    27863.777520042717      );
  id4 -> SetBinError( xbin,    357.72538940799035      );
   int xbin = id4->FindBin(   45.000000000000000      );
  id4 -> SetBinContent( xbin,    22619.073362661031      );
  id4 -> SetBinError( xbin,    481.32752196196418      );
   int xbin = id4->FindBin(   47.000000000000000      );
  id4 -> SetBinContent( xbin,    18745.900206190006      );
  id4 -> SetBinError( xbin,    380.15355224367443      );
   int xbin = id4->FindBin(   49.000000000000000      );
  id4 -> SetBinContent( xbin,    8823.3793170963472      );
  id4 -> SetBinError( xbin,    87.899762297642852      );
   int xbin = id4->FindBin(   51.000000000000000      );
  id4 -> SetBinContent( xbin,    4949.6353779455358      );
  id4 -> SetBinError( xbin,    39.285622403770489      );
   int xbin = id4->FindBin(   53.000000000000000      );
  id4 -> SetBinContent( xbin,    3318.7320932807884      );
  id4 -> SetBinError( xbin,    29.169610254042098      );
   int xbin = id4->FindBin(   55.000000000000000      );
  id4 -> SetBinContent( xbin,    2325.7824249999730      );
  id4 -> SetBinError( xbin,    25.351880849912050      );
   int xbin = id4->FindBin(   57.000000000000000      );
  id4 -> SetBinContent( xbin,    1759.5433547430657      );
  id4 -> SetBinError( xbin,    22.440725186123508      );
   int xbin = id4->FindBin(   59.000000000000000      );
  id4 -> SetBinContent( xbin,    1313.2379590901025      );
  id4 -> SetBinError( xbin,    15.763424281703124      );
   int xbin = id4->FindBin(   61.000000000000000      );
  id4 -> SetBinContent( xbin,    1028.6462140683775      );
  id4 -> SetBinError( xbin,    6.3220754346941304      );
   int xbin = id4->FindBin(   63.000000000000000      );
  id4 -> SetBinContent( xbin,    810.59685377291532      );
  id4 -> SetBinError( xbin,    4.5788493181347141      );
   int xbin = id4->FindBin(   65.000000000000000      );
  id4 -> SetBinContent( xbin,    668.66558701062183      );
  id4 -> SetBinError( xbin,    3.8870354052319955      );
   int xbin = id4->FindBin(   67.000000000000000      );
  id4 -> SetBinContent( xbin,    555.41745566575446      );
  id4 -> SetBinError( xbin,    3.5002737669364343      );
   int xbin = id4->FindBin(   69.000000000000000      );
  id4 -> SetBinContent( xbin,    470.55793083721585      );
  id4 -> SetBinError( xbin,    3.2325275424568689      );
   int xbin = id4->FindBin(   71.000000000000000      );
  id4 -> SetBinContent( xbin,    394.05261101217775      );
  id4 -> SetBinError( xbin,    2.7746050356058536      );
   int xbin = id4->FindBin(   73.000000000000000      );
  id4 -> SetBinContent( xbin,    345.06389801546891      );
  id4 -> SetBinError( xbin,    2.6021646486625980      );
   int xbin = id4->FindBin(   75.000000000000000      );
  id4 -> SetBinContent( xbin,    300.45251178904562      );
  id4 -> SetBinError( xbin,    2.4250269341375539      );
   int xbin = id4->FindBin(   77.000000000000000      );
  id4 -> SetBinContent( xbin,    259.38334890149974      );
  id4 -> SetBinError( xbin,    2.2364113401510548      );
   int xbin = id4->FindBin(   79.000000000000000      );
  id4 -> SetBinContent( xbin,    226.13299255488693      );
  id4 -> SetBinError( xbin,    2.0193941254237067      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt4", 40,    0.00000,   80.00000);

  id5 -> GetXaxis() -> SetTitle("pt4");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt4 [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   1.0000000000000000      );
  id5 -> SetBinContent( xbin,    525.10680977741856      );
  id5 -> SetBinError( xbin,    48.111086255845841      );
   int xbin = id5->FindBin(   3.0000000000000000      );
  id5 -> SetBinContent( xbin,    1313.4740053848304      );
  id5 -> SetBinError( xbin,    60.953691430644319      );
   int xbin = id5->FindBin(   5.0000000000000000      );
  id5 -> SetBinContent( xbin,    2339.8340629081617      );
  id5 -> SetBinError( xbin,    69.387352689819295      );
   int xbin = id5->FindBin(   7.0000000000000000      );
  id5 -> SetBinContent( xbin,    3172.2000637013784      );
  id5 -> SetBinError( xbin,    86.664983515962632      );
   int xbin = id5->FindBin(   9.0000000000000000      );
  id5 -> SetBinContent( xbin,    4351.9176521003774      );
  id5 -> SetBinError( xbin,    104.01768498969651      );
   int xbin = id5->FindBin(   11.000000000000000      );
  id5 -> SetBinContent( xbin,    4976.4307218191270      );
  id5 -> SetBinError( xbin,    142.26205886865080      );
   int xbin = id5->FindBin(   13.000000000000000      );
  id5 -> SetBinContent( xbin,    5832.9043369005685      );
  id5 -> SetBinError( xbin,    246.06927271192311      );
   int xbin = id5->FindBin(   15.000000000000000      );
  id5 -> SetBinContent( xbin,    6361.2086535746894      );
  id5 -> SetBinError( xbin,    1008.1380817654444      );
   int xbin = id5->FindBin(   17.000000000000000      );
  id5 -> SetBinContent( xbin,    9105.1910348143283      );
  id5 -> SetBinError( xbin,    990.65033128038954      );
   int xbin = id5->FindBin(   19.000000000000000      );
  id5 -> SetBinContent( xbin,    9167.8205345907554      );
  id5 -> SetBinError( xbin,    308.07092473003547      );
   int xbin = id5->FindBin(   21.000000000000000      );
  id5 -> SetBinContent( xbin,    9935.7581811176697      );
  id5 -> SetBinError( xbin,    322.61183749199199      );
   int xbin = id5->FindBin(   23.000000000000000      );
  id5 -> SetBinContent( xbin,    11224.797275357087      );
  id5 -> SetBinError( xbin,    260.81291942142263      );
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    12029.721378438357      );
  id5 -> SetBinError( xbin,    276.61947677476542      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    13296.835821860604      );
  id5 -> SetBinError( xbin,    239.46076398021978      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    14753.809136407241      );
  id5 -> SetBinError( xbin,    257.05065159733982      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    15285.396343789189      );
  id5 -> SetBinError( xbin,    265.69732209783592      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    18025.815681896122      );
  id5 -> SetBinError( xbin,    381.92685854351708      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    17747.242991003557      );
  id5 -> SetBinError( xbin,    485.17317103931896      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    20073.598340509212      );
  id5 -> SetBinError( xbin,    410.18043197892092      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    25774.882778079354      );
  id5 -> SetBinError( xbin,    2878.9933882831529      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    20419.469862733087      );
  id5 -> SetBinError( xbin,    2901.7193972753425      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    28012.794540561015      );
  id5 -> SetBinError( xbin,    487.47407172041432      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    22911.110369700604      );
  id5 -> SetBinError( xbin,    346.16621590932454      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    18480.211846551356      );
  id5 -> SetBinError( xbin,    253.99058004259231      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8766.0651509254913      );
  id5 -> SetBinError( xbin,    72.175007508097508      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    4939.1050925518812      );
  id5 -> SetBinError( xbin,    52.947347880641424      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    3273.6841907882999      );
  id5 -> SetBinError( xbin,    39.065030957604300      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    2327.7408969734975      );
  id5 -> SetBinError( xbin,    21.883841661585151      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    1687.7961255384100      );
  id5 -> SetBinError( xbin,    18.909477052598660      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    1297.4133925904573      );
  id5 -> SetBinError( xbin,    14.700971870680663      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    990.69639731292523      );
  id5 -> SetBinError( xbin,    5.5649404327437937      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    791.75233891713083      );
  id5 -> SetBinError( xbin,    4.3530123014956166      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    648.66630729905000      );
  id5 -> SetBinError( xbin,    3.7788671430887533      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    538.54998662725620      );
  id5 -> SetBinError( xbin,    3.2904526297774113      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    450.45802109052403      );
  id5 -> SetBinError( xbin,    2.9265052814137906      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    383.48360068887291      );
  id5 -> SetBinError( xbin,    2.6263403114924881      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    326.71710384283864      );
  id5 -> SetBinError( xbin,    2.3595562488616930      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    282.66093148748973      );
  id5 -> SetBinError( xbin,    2.1651611562359196      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    246.25037080185089      );
  id5 -> SetBinError( xbin,    2.0019125333194068      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    210.25679647956099      );
  id5 -> SetBinError( xbin,    1.7672491620965698      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "pt34", 25,    0.00000,   50.00000);

  id6 -> GetXaxis() -> SetTitle("pt34");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dpt34 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,   -21434.402752619051      );
  id6 -> SetBinError( xbin,    389.45377290535509      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    120593.74314783358      );
  id6 -> SetBinError( xbin,    241.86831451599141      );
   int xbin = id6->FindBin(   5.0000000000000000      );
  id6 -> SetBinContent( xbin,    57614.600238920495      );
  id6 -> SetBinError( xbin,    108.86217240423325      );
   int xbin = id6->FindBin(   7.0000000000000000      );
  id6 -> SetBinContent( xbin,    35166.622184070671      );
  id6 -> SetBinError( xbin,    66.186422619788473      );
   int xbin = id6->FindBin(   9.0000000000000000      );
  id6 -> SetBinContent( xbin,    24116.540988289624      );
  id6 -> SetBinError( xbin,    46.912815870147384      );
   int xbin = id6->FindBin(   11.000000000000000      );
  id6 -> SetBinContent( xbin,    17658.445770281014      );
  id6 -> SetBinError( xbin,    35.940490680085695      );
   int xbin = id6->FindBin(   13.000000000000000      );
  id6 -> SetBinContent( xbin,    13511.055158332469      );
  id6 -> SetBinError( xbin,    28.957425925307884      );
   int xbin = id6->FindBin(   15.000000000000000      );
  id6 -> SetBinContent( xbin,    10635.173128121867      );
  id6 -> SetBinError( xbin,    23.909680326742542      );
   int xbin = id6->FindBin(   17.000000000000000      );
  id6 -> SetBinContent( xbin,    8570.8351475875734      );
  id6 -> SetBinError( xbin,    20.119558198718913      );
   int xbin = id6->FindBin(   19.000000000000000      );
  id6 -> SetBinContent( xbin,    7076.3377922612681      );
  id6 -> SetBinError( xbin,    17.386578913306835      );
   int xbin = id6->FindBin(   21.000000000000000      );
  id6 -> SetBinContent( xbin,    5929.3027128083877      );
  id6 -> SetBinError( xbin,    15.340986525314824      );
   int xbin = id6->FindBin(   23.000000000000000      );
  id6 -> SetBinContent( xbin,    4995.4038933062347      );
  id6 -> SetBinError( xbin,    13.460503356188189      );
   int xbin = id6->FindBin(   25.000000000000000      );
  id6 -> SetBinContent( xbin,    4275.3691812857032      );
  id6 -> SetBinError( xbin,    12.048250334662395      );
   int xbin = id6->FindBin(   27.000000000000000      );
  id6 -> SetBinContent( xbin,    3679.5248181010083      );
  id6 -> SetBinError( xbin,    10.754038986943740      );
   int xbin = id6->FindBin(   29.000000000000000      );
  id6 -> SetBinContent( xbin,    3205.3565508997744      );
  id6 -> SetBinError( xbin,    9.7898170437431915      );
   int xbin = id6->FindBin(   31.000000000000000      );
  id6 -> SetBinContent( xbin,    2809.1472538107973      );
  id6 -> SetBinError( xbin,    8.9838442691227556      );
   int xbin = id6->FindBin(   33.000000000000000      );
  id6 -> SetBinContent( xbin,    2460.3367785482533      );
  id6 -> SetBinError( xbin,    8.1130814006725345      );
   int xbin = id6->FindBin(   35.000000000000000      );
  id6 -> SetBinContent( xbin,    2163.6215790367783      );
  id6 -> SetBinError( xbin,    7.3888173353738091      );
   int xbin = id6->FindBin(   37.000000000000000      );
  id6 -> SetBinContent( xbin,    1928.8535910048861      );
  id6 -> SetBinError( xbin,    6.8396159039508273      );
   int xbin = id6->FindBin(   39.000000000000000      );
  id6 -> SetBinContent( xbin,    1722.1500832348320      );
  id6 -> SetBinError( xbin,    6.3349112346445091      );
   int xbin = id6->FindBin(   41.000000000000000      );
  id6 -> SetBinContent( xbin,    1529.7796256076047      );
  id6 -> SetBinError( xbin,    5.7766838055890002      );
   int xbin = id6->FindBin(   43.000000000000000      );
  id6 -> SetBinContent( xbin,    1369.9535714175631      );
  id6 -> SetBinError( xbin,    5.3832709839426869      );
   int xbin = id6->FindBin(   45.000000000000000      );
  id6 -> SetBinContent( xbin,    1235.2230071790652      );
  id6 -> SetBinError( xbin,    5.1288292787739698      );
   int xbin = id6->FindBin(   47.000000000000000      );
  id6 -> SetBinContent( xbin,    1109.5336512516740      );
  id6 -> SetBinError( xbin,    4.6763856827042574      );
   int xbin = id6->FindBin(   49.000000000000000      );
  id6 -> SetBinContent( xbin,    1000.8799400406566      );
  id6 -> SetBinError( xbin,    4.4118051732130263      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "m34", 80,   70.00000,  110.00000);

  id7 -> GetXaxis() -> SetTitle("m34");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dm34 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(   70.250000000000000      );
  id7 -> SetBinContent( xbin,    1258.3209633569404      );
  id7 -> SetBinError( xbin,    38.625841897277944      );
   int xbin = id7->FindBin(   70.750000000000000      );
  id7 -> SetBinContent( xbin,    1312.9433314838407      );
  id7 -> SetBinError( xbin,    38.727252483324861      );
   int xbin = id7->FindBin(   71.250000000000000      );
  id7 -> SetBinContent( xbin,    1260.8207983997602      );
  id7 -> SetBinError( xbin,    36.301354901089731      );
   int xbin = id7->FindBin(   71.750000000000000      );
  id7 -> SetBinContent( xbin,    1374.8294847103223      );
  id7 -> SetBinError( xbin,    38.853509877441972      );
   int xbin = id7->FindBin(   72.250000000000000      );
  id7 -> SetBinContent( xbin,    1309.3867886530904      );
  id7 -> SetBinError( xbin,    36.123547397749405      );
   int xbin = id7->FindBin(   72.750000000000000      );
  id7 -> SetBinContent( xbin,    1396.8109620406315      );
  id7 -> SetBinError( xbin,    37.881025059678947      );
   int xbin = id7->FindBin(   73.250000000000000      );
  id7 -> SetBinContent( xbin,    1398.5233594442634      );
  id7 -> SetBinError( xbin,    36.204017225906085      );
   int xbin = id7->FindBin(   73.750000000000000      );
  id7 -> SetBinContent( xbin,    1489.3734892990406      );
  id7 -> SetBinError( xbin,    36.516699292644525      );
   int xbin = id7->FindBin(   74.250000000000000      );
  id7 -> SetBinContent( xbin,    1452.4932854734984      );
  id7 -> SetBinError( xbin,    35.832496438861796      );
   int xbin = id7->FindBin(   74.750000000000000      );
  id7 -> SetBinContent( xbin,    1538.2463499037585      );
  id7 -> SetBinError( xbin,    37.516872636143184      );
   int xbin = id7->FindBin(   75.250000000000000      );
  id7 -> SetBinContent( xbin,    1555.4032773136726      );
  id7 -> SetBinError( xbin,    37.883613001185289      );
   int xbin = id7->FindBin(   75.750000000000000      );
  id7 -> SetBinContent( xbin,    1574.1851253611733      );
  id7 -> SetBinError( xbin,    37.916004910967530      );
   int xbin = id7->FindBin(   76.250000000000000      );
  id7 -> SetBinContent( xbin,    1783.3772818669918      );
  id7 -> SetBinError( xbin,    40.046915291388693      );
   int xbin = id7->FindBin(   76.750000000000000      );
  id7 -> SetBinContent( xbin,    1761.9320937129794      );
  id7 -> SetBinError( xbin,    38.679428730209558      );
   int xbin = id7->FindBin(   77.250000000000000      );
  id7 -> SetBinContent( xbin,    1877.0360387071971      );
  id7 -> SetBinError( xbin,    39.855186232256855      );
   int xbin = id7->FindBin(   77.750000000000000      );
  id7 -> SetBinContent( xbin,    2028.0859493978883      );
  id7 -> SetBinError( xbin,    40.671127656755530      );
   int xbin = id7->FindBin(   78.250000000000000      );
  id7 -> SetBinContent( xbin,    2053.0015921515469      );
  id7 -> SetBinError( xbin,    43.303151083304044      );
   int xbin = id7->FindBin(   78.750000000000000      );
  id7 -> SetBinContent( xbin,    2182.1571991224050      );
  id7 -> SetBinError( xbin,    45.497855291127848      );
   int xbin = id7->FindBin(   79.250000000000000      );
  id7 -> SetBinContent( xbin,    2431.3926543180919      );
  id7 -> SetBinError( xbin,    47.487921664748427      );
   int xbin = id7->FindBin(   79.750000000000000      );
  id7 -> SetBinContent( xbin,    2527.1162687485521      );
  id7 -> SetBinError( xbin,    48.054968134309206      );
   int xbin = id7->FindBin(   80.250000000000000      );
  id7 -> SetBinContent( xbin,    2758.6087670940624      );
  id7 -> SetBinError( xbin,    49.589783988504458      );
   int xbin = id7->FindBin(   80.750000000000000      );
  id7 -> SetBinContent( xbin,    2873.8795061411311      );
  id7 -> SetBinError( xbin,    50.376843331955151      );
   int xbin = id7->FindBin(   81.250000000000000      );
  id7 -> SetBinContent( xbin,    3064.6049342543452      );
  id7 -> SetBinError( xbin,    52.670723663119716      );
   int xbin = id7->FindBin(   81.750000000000000      );
  id7 -> SetBinContent( xbin,    3389.3648189962364      );
  id7 -> SetBinError( xbin,    55.270273964837578      );
   int xbin = id7->FindBin(   82.250000000000000      );
  id7 -> SetBinContent( xbin,    3737.4437344662801      );
  id7 -> SetBinError( xbin,    57.330389264235862      );
   int xbin = id7->FindBin(   82.750000000000000      );
  id7 -> SetBinContent( xbin,    4007.9286149552181      );
  id7 -> SetBinError( xbin,    59.083061453326948      );
   int xbin = id7->FindBin(   83.250000000000000      );
  id7 -> SetBinContent( xbin,    4561.1041462230751      );
  id7 -> SetBinError( xbin,    63.441039929771897      );
   int xbin = id7->FindBin(   83.750000000000000      );
  id7 -> SetBinContent( xbin,    5206.4082731007120      );
  id7 -> SetBinError( xbin,    67.454212872274411      );
   int xbin = id7->FindBin(   84.250000000000000      );
  id7 -> SetBinContent( xbin,    5710.2712479027905      );
  id7 -> SetBinError( xbin,    71.168967923304280      );
   int xbin = id7->FindBin(   84.750000000000000      );
  id7 -> SetBinContent( xbin,    6780.2007123484354      );
  id7 -> SetBinError( xbin,    78.065955998206078      );
   int xbin = id7->FindBin(   85.250000000000000      );
  id7 -> SetBinContent( xbin,    7598.4376642398393      );
  id7 -> SetBinError( xbin,    81.742227478631960      );
   int xbin = id7->FindBin(   85.750000000000000      );
  id7 -> SetBinContent( xbin,    8972.2778985845835      );
  id7 -> SetBinError( xbin,    88.749996233880651      );
   int xbin = id7->FindBin(   86.250000000000000      );
  id7 -> SetBinContent( xbin,    10680.856773860956      );
  id7 -> SetBinError( xbin,    98.601081407506385      );
   int xbin = id7->FindBin(   86.750000000000000      );
  id7 -> SetBinContent( xbin,    12739.565679855308      );
  id7 -> SetBinError( xbin,    105.12529089800036      );
   int xbin = id7->FindBin(   87.250000000000000      );
  id7 -> SetBinContent( xbin,    16056.736005967434      );
  id7 -> SetBinError( xbin,    120.21691629005232      );
   int xbin = id7->FindBin(   87.750000000000000      );
  id7 -> SetBinContent( xbin,    20092.149062720113      );
  id7 -> SetBinError( xbin,    133.15476722608153      );
   int xbin = id7->FindBin(   88.250000000000000      );
  id7 -> SetBinContent( xbin,    26095.239353917059      );
  id7 -> SetBinError( xbin,    151.88029971889361      );
   int xbin = id7->FindBin(   88.750000000000000      );
  id7 -> SetBinContent( xbin,    35187.208407180304      );
  id7 -> SetBinError( xbin,    176.77508150564182      );
   int xbin = id7->FindBin(   89.250000000000000      );
  id7 -> SetBinContent( xbin,    49539.451223626005      );
  id7 -> SetBinError( xbin,    209.40301674999210      );
   int xbin = id7->FindBin(   89.750000000000000      );
  id7 -> SetBinContent( xbin,    72265.172160526505      );
  id7 -> SetBinError( xbin,    252.92356700421365      );
   int xbin = id7->FindBin(   90.250000000000000      );
  id7 -> SetBinContent( xbin,    106413.47840971488      );
  id7 -> SetBinError( xbin,    305.92042043686882      );
   int xbin = id7->FindBin(   90.750000000000000      );
  id7 -> SetBinContent( xbin,    146097.67623748712      );
  id7 -> SetBinError( xbin,    357.94722011793419      );
   int xbin = id7->FindBin(   91.250000000000000      );
  id7 -> SetBinContent( xbin,    162750.85407610104      );
  id7 -> SetBinError( xbin,    377.72545553458855      );
   int xbin = id7->FindBin(   91.750000000000000      );
  id7 -> SetBinContent( xbin,    136424.00560854524      );
  id7 -> SetBinError( xbin,    346.77983165718985      );
   int xbin = id7->FindBin(   92.250000000000000      );
  id7 -> SetBinContent( xbin,    95968.387061159403      );
  id7 -> SetBinError( xbin,    291.67339944450822      );
   int xbin = id7->FindBin(   92.750000000000000      );
  id7 -> SetBinContent( xbin,    64511.663923327375      );
  id7 -> SetBinError( xbin,    239.71375350228692      );
   int xbin = id7->FindBin(   93.250000000000000      );
  id7 -> SetBinContent( xbin,    44217.301235232655      );
  id7 -> SetBinError( xbin,    198.50428533911440      );
   int xbin = id7->FindBin(   93.750000000000000      );
  id7 -> SetBinContent( xbin,    31186.369883995580      );
  id7 -> SetBinError( xbin,    167.20114202615116      );
   int xbin = id7->FindBin(   94.250000000000000      );
  id7 -> SetBinContent( xbin,    23185.694084369185      );
  id7 -> SetBinError( xbin,    144.61378222930844      );
   int xbin = id7->FindBin(   94.750000000000000      );
  id7 -> SetBinContent( xbin,    17668.369685785165      );
  id7 -> SetBinError( xbin,    126.13714157469283      );
   int xbin = id7->FindBin(   95.250000000000000      );
  id7 -> SetBinContent( xbin,    13823.777960551441      );
  id7 -> SetBinError( xbin,    111.92818291293842      );
   int xbin = id7->FindBin(   95.750000000000000      );
  id7 -> SetBinContent( xbin,    11116.449727855219      );
  id7 -> SetBinError( xbin,    100.03445193884059      );
   int xbin = id7->FindBin(   96.250000000000000      );
  id7 -> SetBinContent( xbin,    9233.7345403851814      );
  id7 -> SetBinError( xbin,    91.008428800316523      );
   int xbin = id7->FindBin(   96.750000000000000      );
  id7 -> SetBinContent( xbin,    7694.3418897447518      );
  id7 -> SetBinError( xbin,    85.041392630662514      );
   int xbin = id7->FindBin(   97.250000000000000      );
  id7 -> SetBinContent( xbin,    6508.6140180418624      );
  id7 -> SetBinError( xbin,    77.159605710282008      );
   int xbin = id7->FindBin(   97.750000000000000      );
  id7 -> SetBinContent( xbin,    5535.4096602213212      );
  id7 -> SetBinError( xbin,    70.097283563882314      );
   int xbin = id7->FindBin(   98.250000000000000      );
  id7 -> SetBinContent( xbin,    4753.3851324929046      );
  id7 -> SetBinError( xbin,    65.225991044777118      );
   int xbin = id7->FindBin(   98.750000000000000      );
  id7 -> SetBinContent( xbin,    4121.9228730651394      );
  id7 -> SetBinError( xbin,    62.490233674976878      );
   int xbin = id7->FindBin(   99.250000000000000      );
  id7 -> SetBinContent( xbin,    3728.0297579965745      );
  id7 -> SetBinError( xbin,    59.848582744282410      );
   int xbin = id7->FindBin(   99.750000000000000      );
  id7 -> SetBinContent( xbin,    3235.7570114784107      );
  id7 -> SetBinError( xbin,    55.294177175231738      );
   int xbin = id7->FindBin(   100.25000000000000      );
  id7 -> SetBinContent( xbin,    3030.0004792738046      );
  id7 -> SetBinError( xbin,    52.959022961987181      );
   int xbin = id7->FindBin(   100.75000000000000      );
  id7 -> SetBinContent( xbin,    2638.4472925886562      );
  id7 -> SetBinError( xbin,    48.741618104701466      );
   int xbin = id7->FindBin(   101.25000000000000      );
  id7 -> SetBinContent( xbin,    2344.3605133023020      );
  id7 -> SetBinError( xbin,    45.722081354800181      );
   int xbin = id7->FindBin(   101.75000000000000      );
  id7 -> SetBinContent( xbin,    2220.8183459477273      );
  id7 -> SetBinError( xbin,    44.603897290734992      );
   int xbin = id7->FindBin(   102.25000000000000      );
  id7 -> SetBinContent( xbin,    1995.2675646627358      );
  id7 -> SetBinError( xbin,    42.514325307549385      );
   int xbin = id7->FindBin(   102.75000000000000      );
  id7 -> SetBinContent( xbin,    1767.6190650930116      );
  id7 -> SetBinError( xbin,    39.727728520781582      );
   int xbin = id7->FindBin(   103.25000000000000      );
  id7 -> SetBinContent( xbin,    1671.7214602085246      );
  id7 -> SetBinError( xbin,    39.554249974318360      );
   int xbin = id7->FindBin(   103.75000000000000      );
  id7 -> SetBinContent( xbin,    1523.8730085164093      );
  id7 -> SetBinError( xbin,    37.638436431053442      );
   int xbin = id7->FindBin(   104.25000000000000      );
  id7 -> SetBinContent( xbin,    1454.9739972969296      );
  id7 -> SetBinError( xbin,    37.583655592665423      );
   int xbin = id7->FindBin(   104.75000000000000      );
  id7 -> SetBinContent( xbin,    1291.1511839372506      );
  id7 -> SetBinError( xbin,    34.659637460747199      );
   int xbin = id7->FindBin(   105.25000000000000      );
  id7 -> SetBinContent( xbin,    1222.2147271374181      );
  id7 -> SetBinError( xbin,    34.504455237403221      );
   int xbin = id7->FindBin(   105.75000000000000      );
  id7 -> SetBinContent( xbin,    1168.6413885452503      );
  id7 -> SetBinError( xbin,    33.320900411673136      );
   int xbin = id7->FindBin(   106.25000000000000      );
  id7 -> SetBinContent( xbin,    1081.9650715507498      );
  id7 -> SetBinError( xbin,    32.132851773233398      );
   int xbin = id7->FindBin(   106.75000000000000      );
  id7 -> SetBinContent( xbin,    973.89423446971887      );
  id7 -> SetBinError( xbin,    30.520781269653749      );
   int xbin = id7->FindBin(   107.25000000000000      );
  id7 -> SetBinContent( xbin,    959.12255689592496      );
  id7 -> SetBinError( xbin,    30.522958665838395      );
   int xbin = id7->FindBin(   107.75000000000000      );
  id7 -> SetBinContent( xbin,    937.52668557727577      );
  id7 -> SetBinError( xbin,    30.054353976873944      );
   int xbin = id7->FindBin(   108.25000000000000      );
  id7 -> SetBinContent( xbin,    839.74992823735920      );
  id7 -> SetBinError( xbin,    27.782894344457933      );
   int xbin = id7->FindBin(   108.75000000000000      );
  id7 -> SetBinContent( xbin,    792.60375033943183      );
  id7 -> SetBinError( xbin,    27.807156890135083      );
   int xbin = id7->FindBin(   109.25000000000000      );
  id7 -> SetBinContent( xbin,    702.79903908652977      );
  id7 -> SetBinError( xbin,    25.156390096556056      );
   int xbin = id7->FindBin(   109.75000000000000      );
  id7 -> SetBinContent( xbin,    708.16585326949883      );
  id7 -> SetBinError( xbin,    25.787537202773944      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "DeltaR35", 50,    0.00000,    5.00000);

  id8 -> GetXaxis() -> SetTitle("DeltaR35");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaR35 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   5.0000000000000003E-002 );
  id8 -> SetBinContent( xbin,    587.75087773322082      );
  id8 -> SetBinError( xbin,    13.869088545235691      );
   int xbin = id8->FindBin(  0.15000000000000002      );
  id8 -> SetBinContent( xbin,    1823.1606742406443      );
  id8 -> SetBinError( xbin,    24.233443472004240      );
   int xbin = id8->FindBin(  0.25000000000000000      );
  id8 -> SetBinContent( xbin,    3029.9880980946518      );
  id8 -> SetBinError( xbin,    31.827369557213846      );
   int xbin = id8->FindBin(  0.35000000000000003      );
  id8 -> SetBinContent( xbin,    4130.4261504936267      );
  id8 -> SetBinError( xbin,    36.505116468171565      );
   int xbin = id8->FindBin(  0.45000000000000001      );
  id8 -> SetBinContent( xbin,    5369.3368971925902      );
  id8 -> SetBinError( xbin,    42.386414015013386      );
   int xbin = id8->FindBin(  0.55000000000000004      );
  id8 -> SetBinContent( xbin,    6500.0933207365542      );
  id8 -> SetBinError( xbin,    46.378590318582994      );
   int xbin = id8->FindBin(  0.65000000000000002      );
  id8 -> SetBinContent( xbin,    7558.0078162566560      );
  id8 -> SetBinError( xbin,    50.595881235119023      );
   int xbin = id8->FindBin(  0.75000000000000000      );
  id8 -> SetBinContent( xbin,    8746.9077491380103      );
  id8 -> SetBinError( xbin,    54.871579313636275      );
   int xbin = id8->FindBin(  0.85000000000000009      );
  id8 -> SetBinContent( xbin,    10050.174227596173      );
  id8 -> SetBinError( xbin,    59.590106201070384      );
   int xbin = id8->FindBin(  0.95000000000000007      );
  id8 -> SetBinContent( xbin,    11196.100990150597      );
  id8 -> SetBinError( xbin,    62.793256876519877      );
   int xbin = id8->FindBin(   1.0500000000000000      );
  id8 -> SetBinContent( xbin,    12242.707311967741      );
  id8 -> SetBinError( xbin,    66.333349310162959      );
   int xbin = id8->FindBin(   1.1500000000000001      );
  id8 -> SetBinContent( xbin,    13371.297018168230      );
  id8 -> SetBinError( xbin,    69.816849317374775      );
   int xbin = id8->FindBin(   1.2500000000000000      );
  id8 -> SetBinContent( xbin,    14722.281888905474      );
  id8 -> SetBinError( xbin,    74.098557935956549      );
   int xbin = id8->FindBin(   1.3500000000000001      );
  id8 -> SetBinContent( xbin,    15621.301191024713      );
  id8 -> SetBinError( xbin,    75.592668249126760      );
   int xbin = id8->FindBin(   1.4500000000000002      );
  id8 -> SetBinContent( xbin,    16809.507090053758      );
  id8 -> SetBinError( xbin,    79.648778101362851      );
   int xbin = id8->FindBin(   1.5500000000000000      );
  id8 -> SetBinContent( xbin,    18058.729594867131      );
  id8 -> SetBinError( xbin,    83.269833094525652      );
   int xbin = id8->FindBin(   1.6500000000000001      );
  id8 -> SetBinContent( xbin,    19403.399123766809      );
  id8 -> SetBinError( xbin,    85.938969935789132      );
   int xbin = id8->FindBin(   1.7500000000000000      );
  id8 -> SetBinContent( xbin,    20730.012157855843      );
  id8 -> SetBinError( xbin,    89.644960027093276      );
   int xbin = id8->FindBin(   1.8500000000000001      );
  id8 -> SetBinContent( xbin,    21959.254962359937      );
  id8 -> SetBinError( xbin,    92.072093682067418      );
   int xbin = id8->FindBin(   1.9500000000000002      );
  id8 -> SetBinContent( xbin,    23547.311446972890      );
  id8 -> SetBinError( xbin,    96.404219917844358      );
   int xbin = id8->FindBin(   2.0500000000000003      );
  id8 -> SetBinContent( xbin,    25122.451122139981      );
  id8 -> SetBinError( xbin,    99.309763663130084      );
   int xbin = id8->FindBin(   2.1499999999999999      );
  id8 -> SetBinContent( xbin,    27015.218601611654      );
  id8 -> SetBinError( xbin,    103.51620188228401      );
   int xbin = id8->FindBin(   2.2500000000000000      );
  id8 -> SetBinContent( xbin,    29085.886567841251      );
  id8 -> SetBinError( xbin,    106.94682314978098      );
   int xbin = id8->FindBin(   2.3500000000000001      );
  id8 -> SetBinContent( xbin,    31053.574272643760      );
  id8 -> SetBinError( xbin,    109.48371450044425      );
   int xbin = id8->FindBin(   2.4500000000000002      );
  id8 -> SetBinContent( xbin,    33602.104865150337      );
  id8 -> SetBinError( xbin,    115.07482683984186      );
   int xbin = id8->FindBin(   2.5500000000000003      );
  id8 -> SetBinContent( xbin,    36525.138641961377      );
  id8 -> SetBinError( xbin,    118.63551018541413      );
   int xbin = id8->FindBin(   2.6500000000000004      );
  id8 -> SetBinContent( xbin,    39773.855282462515      );
  id8 -> SetBinError( xbin,    124.04810323528534      );
   int xbin = id8->FindBin(   2.7500000000000000      );
  id8 -> SetBinContent( xbin,    43413.307507774625      );
  id8 -> SetBinError( xbin,    129.63386312148850      );
   int xbin = id8->FindBin(   2.8500000000000001      );
  id8 -> SetBinContent( xbin,    47038.450035995891      );
  id8 -> SetBinError( xbin,    135.49337249069694      );
   int xbin = id8->FindBin(   2.9500000000000002      );
  id8 -> SetBinContent( xbin,    50944.389181493498      );
  id8 -> SetBinError( xbin,    139.87574136892496      );
   int xbin = id8->FindBin(   3.0500000000000003      );
  id8 -> SetBinContent( xbin,    54617.476400033956      );
  id8 -> SetBinError( xbin,    145.11530732007662      );
   int xbin = id8->FindBin(   3.1500000000000004      );
  id8 -> SetBinContent( xbin,    49764.224226686958      );
  id8 -> SetBinError( xbin,    143.79949378206246      );
   int xbin = id8->FindBin(   3.2500000000000000      );
  id8 -> SetBinContent( xbin,    33387.339896030717      );
  id8 -> SetBinError( xbin,    133.82992971569689      );
   int xbin = id8->FindBin(   3.3500000000000001      );
  id8 -> SetBinContent( xbin,    25850.810750398410      );
  id8 -> SetBinError( xbin,    129.78164082677756      );
   int xbin = id8->FindBin(   3.4500000000000002      );
  id8 -> SetBinContent( xbin,    21040.741656493021      );
  id8 -> SetBinError( xbin,    126.08171092472040      );
   int xbin = id8->FindBin(   3.5500000000000003      );
  id8 -> SetBinContent( xbin,    16940.005095099554      );
  id8 -> SetBinError( xbin,    121.36194468497261      );
   int xbin = id8->FindBin(   3.6500000000000004      );
  id8 -> SetBinContent( xbin,    14007.258012475164      );
  id8 -> SetBinError( xbin,    117.63151198128743      );
   int xbin = id8->FindBin(   3.7500000000000000      );
  id8 -> SetBinContent( xbin,    11611.249134367647      );
  id8 -> SetBinError( xbin,    113.11992617621920      );
   int xbin = id8->FindBin(   3.8500000000000001      );
  id8 -> SetBinContent( xbin,    9749.3290122854542      );
  id8 -> SetBinError( xbin,    110.15071913672280      );
   int xbin = id8->FindBin(   3.9500000000000002      );
  id8 -> SetBinContent( xbin,    8220.1727113416655      );
  id8 -> SetBinError( xbin,    105.72573565982593      );
   int xbin = id8->FindBin(   4.0499999999999998      );
  id8 -> SetBinContent( xbin,    6815.0731880047451      );
  id8 -> SetBinError( xbin,    100.41635575541513      );
   int xbin = id8->FindBin(   4.1500000000000004      );
  id8 -> SetBinContent( xbin,    5882.4740543244079      );
  id8 -> SetBinError( xbin,    97.709095479549475      );
   int xbin = id8->FindBin(   4.2500000000000000      );
  id8 -> SetBinContent( xbin,    4847.4106841260000      );
  id8 -> SetBinError( xbin,    92.455356422812812      );
   int xbin = id8->FindBin(   4.3500000000000005      );
  id8 -> SetBinContent( xbin,    3946.6585894992322      );
  id8 -> SetBinError( xbin,    84.904554306929839      );
   int xbin = id8->FindBin(   4.4500000000000002      );
  id8 -> SetBinContent( xbin,    3418.2080569444825      );
  id8 -> SetBinError( xbin,    84.414678278783057      );
   int xbin = id8->FindBin(   4.5499999999999998      );
  id8 -> SetBinContent( xbin,    2900.3681019031269      );
  id8 -> SetBinError( xbin,    81.821130710560496      );
   int xbin = id8->FindBin(   4.6500000000000004      );
  id8 -> SetBinContent( xbin,    2403.2241897661788      );
  id8 -> SetBinError( xbin,    75.296644486497286      );
   int xbin = id8->FindBin(   4.7500000000000000      );
  id8 -> SetBinContent( xbin,    1862.7344439796086      );
  id8 -> SetBinError( xbin,    65.718900493784830      );
   int xbin = id8->FindBin(   4.8500000000000005      );
  id8 -> SetBinContent( xbin,    1745.5786355078465      );
  id8 -> SetBinError( xbin,    67.877080597583770      );
   int xbin = id8->FindBin(   4.9500000000000002      );
  id8 -> SetBinContent( xbin,    1374.9924554910076      );
  id8 -> SetBinError( xbin,    60.881161925300930      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id9", "y5", 12,   -3.20000,    3.20000);

  id9 -> GetXaxis() -> SetTitle("y5");
  id9 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id9 -> GetYaxis() -> SetTitleOffset(1.2);
  id9 -> SetStats(false);
   int xbin = id9->FindBin(  -2.4500000000000002      );
  id9 -> SetBinContent( xbin,    4171.6991791053542      );
  id9 -> SetBinError( xbin,    21.083854010156958      );
   int xbin = id9->FindBin(  -1.9500000000000002      );
  id9 -> SetBinContent( xbin,    13598.866203411888      );
  id9 -> SetBinError( xbin,    36.873650705746101      );
   int xbin = id9->FindBin(  -1.4500000000000002      );
  id9 -> SetBinContent( xbin,    17762.179211957271      );
  id9 -> SetBinError( xbin,    43.061323816868097      );
   int xbin = id9->FindBin( -0.95000000000000018      );
  id9 -> SetBinContent( xbin,    21132.043851891503      );
  id9 -> SetBinError( xbin,    46.905553649310839      );
   int xbin = id9->FindBin( -0.45000000000000018      );
  id9 -> SetBinContent( xbin,    23071.918218093269      );
  id9 -> SetBinError( xbin,    49.790619849289726      );
   int xbin = id9->FindBin(   4.9999999999999822E-002 );
  id9 -> SetBinContent( xbin,    23697.643923384661      );
  id9 -> SetBinError( xbin,    50.890146702886234      );
   int xbin = id9->FindBin(  0.54999999999999982      );
  id9 -> SetBinContent( xbin,    22591.456715432854      );
  id9 -> SetBinError( xbin,    49.297111827346782      );
   int xbin = id9->FindBin(   1.0499999999999998      );
  id9 -> SetBinContent( xbin,    20255.958815737544      );
  id9 -> SetBinError( xbin,    46.245498365359076      );
   int xbin = id9->FindBin(   1.5499999999999998      );
  id9 -> SetBinContent( xbin,    16651.984570849992      );
  id9 -> SetBinError( xbin,    41.785131171378488      );
   int xbin = id9->FindBin(   2.0499999999999998      );
  id9 -> SetBinContent( xbin,    12323.988156986215      );
  id9 -> SetBinError( xbin,    35.523665389374628      );
   int xbin = id9->FindBin(   2.5499999999999998      );
  id9 -> SetBinContent( xbin,    1916.8825489290768      );
  id9 -> SetBinError( xbin,    14.088049201894083      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id10", "pt5", 50,    0.00000,  100.00000);

  id10 -> GetXaxis() -> SetTitle("pt5");
  id10 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id10 -> GetYaxis() -> SetTitleOffset(1.2);
  id10 -> SetStats(false);
   int xbin = id10->FindBin(   21.000000000000000      );
  id10 -> SetBinContent( xbin,    4913.2695004794841      );
  id10 -> SetBinError( xbin,    13.933537744430472      );
   int xbin = id10->FindBin(   23.000000000000000      );
  id10 -> SetBinContent( xbin,    4175.7285129703896      );
  id10 -> SetBinError( xbin,    12.346008669320904      );
   int xbin = id10->FindBin(   25.000000000000000      );
  id10 -> SetBinContent( xbin,    3604.0965458100291      );
  id10 -> SetBinError( xbin,    11.083189871757321      );
   int xbin = id10->FindBin(   27.000000000000000      );
  id10 -> SetBinContent( xbin,    3128.1164410632150      );
  id10 -> SetBinError( xbin,    9.9495334275788174      );
   int xbin = id10->FindBin(   29.000000000000000      );
  id10 -> SetBinContent( xbin,    2746.3806923880866      );
  id10 -> SetBinError( xbin,    9.1126045706189363      );
   int xbin = id10->FindBin(   31.000000000000000      );
  id10 -> SetBinContent( xbin,    2422.2352106777303      );
  id10 -> SetBinError( xbin,    8.3944947795871343      );
   int xbin = id10->FindBin(   33.000000000000000      );
  id10 -> SetBinContent( xbin,    2131.5648674725248      );
  id10 -> SetBinError( xbin,    7.5788235577307388      );
   int xbin = id10->FindBin(   35.000000000000000      );
  id10 -> SetBinContent( xbin,    1884.3502241745693      );
  id10 -> SetBinError( xbin,    6.9053235119942569      );
   int xbin = id10->FindBin(   37.000000000000000      );
  id10 -> SetBinContent( xbin,    1687.1945789353977      );
  id10 -> SetBinError( xbin,    6.4394732354987561      );
   int xbin = id10->FindBin(   39.000000000000000      );
  id10 -> SetBinContent( xbin,    1516.3160334200268      );
  id10 -> SetBinError( xbin,    5.9955687281907197      );
   int xbin = id10->FindBin(   41.000000000000000      );
  id10 -> SetBinContent( xbin,    1354.7208434317126      );
  id10 -> SetBinError( xbin,    5.4722504064335391      );
   int xbin = id10->FindBin(   43.000000000000000      );
  id10 -> SetBinContent( xbin,    1220.3940968405227      );
  id10 -> SetBinError( xbin,    5.1303038276600104      );
   int xbin = id10->FindBin(   45.000000000000000      );
  id10 -> SetBinContent( xbin,    1102.4012094629650      );
  id10 -> SetBinError( xbin,    4.8725224788709518      );
   int xbin = id10->FindBin(   47.000000000000000      );
  id10 -> SetBinContent( xbin,    996.59343121936456      );
  id10 -> SetBinError( xbin,    4.4579045381563809      );
   int xbin = id10->FindBin(   49.000000000000000      );
  id10 -> SetBinContent( xbin,    902.23905207558789      );
  id10 -> SetBinError( xbin,    4.2246304422228063      );
   int xbin = id10->FindBin(   51.000000000000000      );
  id10 -> SetBinContent( xbin,    822.26934866129579      );
  id10 -> SetBinError( xbin,    3.9686323057244808      );
   int xbin = id10->FindBin(   53.000000000000000      );
  id10 -> SetBinContent( xbin,    738.39347230815997      );
  id10 -> SetBinError( xbin,    3.6780249782714192      );
   int xbin = id10->FindBin(   55.000000000000000      );
  id10 -> SetBinContent( xbin,    680.81777484146960      );
  id10 -> SetBinError( xbin,    3.5211342013331213      );
   int xbin = id10->FindBin(   57.000000000000000      );
  id10 -> SetBinContent( xbin,    622.87414189766730      );
  id10 -> SetBinError( xbin,    3.3141834169106197      );
   int xbin = id10->FindBin(   59.000000000000000      );
  id10 -> SetBinContent( xbin,    567.62117457814429      );
  id10 -> SetBinError( xbin,    3.1201383654843839      );
   int xbin = id10->FindBin(   61.000000000000000      );
  id10 -> SetBinContent( xbin,    514.33725841388730      );
  id10 -> SetBinError( xbin,    2.9395145524298179      );
   int xbin = id10->FindBin(   63.000000000000000      );
  id10 -> SetBinContent( xbin,    475.86618131083316      );
  id10 -> SetBinError( xbin,    2.8378345335320176      );
   int xbin = id10->FindBin(   65.000000000000000      );
  id10 -> SetBinContent( xbin,    435.33280928673315      );
  id10 -> SetBinError( xbin,    2.6406376930307922      );
   int xbin = id10->FindBin(   67.000000000000000      );
  id10 -> SetBinContent( xbin,    402.15521966917345      );
  id10 -> SetBinError( xbin,    2.4934451211524840      );
   int xbin = id10->FindBin(   69.000000000000000      );
  id10 -> SetBinContent( xbin,    366.96631143331138      );
  id10 -> SetBinError( xbin,    2.3817922921709802      );
   int xbin = id10->FindBin(   71.000000000000000      );
  id10 -> SetBinContent( xbin,    335.60201064853425      );
  id10 -> SetBinError( xbin,    2.2880274734548740      );
   int xbin = id10->FindBin(   73.000000000000000      );
  id10 -> SetBinContent( xbin,    314.12632182133598      );
  id10 -> SetBinError( xbin,    2.1887618441408598      );
   int xbin = id10->FindBin(   75.000000000000000      );
  id10 -> SetBinContent( xbin,    286.55550814073894      );
  id10 -> SetBinError( xbin,    1.9954939741047666      );
   int xbin = id10->FindBin(   77.000000000000000      );
  id10 -> SetBinContent( xbin,    264.54779009290911      );
  id10 -> SetBinError( xbin,    1.9337931132714723      );
   int xbin = id10->FindBin(   79.000000000000000      );
  id10 -> SetBinContent( xbin,    248.31488222605071      );
  id10 -> SetBinError( xbin,    1.8889308344615994      );
   int xbin = id10->FindBin(   81.000000000000000      );
  id10 -> SetBinContent( xbin,    226.15383607752347      );
  id10 -> SetBinError( xbin,    1.7478077327671657      );
   int xbin = id10->FindBin(   83.000000000000000      );
  id10 -> SetBinContent( xbin,    211.05232791851941      );
  id10 -> SetBinError( xbin,    1.6692152239781006      );
   int xbin = id10->FindBin(   85.000000000000000      );
  id10 -> SetBinContent( xbin,    193.21560675084766      );
  id10 -> SetBinError( xbin,    1.5980373701561068      );
   int xbin = id10->FindBin(   87.000000000000000      );
  id10 -> SetBinContent( xbin,    179.19643976052683      );
  id10 -> SetBinError( xbin,    1.5039330829303592      );
   int xbin = id10->FindBin(   89.000000000000000      );
  id10 -> SetBinContent( xbin,    164.78455788563315      );
  id10 -> SetBinError( xbin,    1.5253834474141135      );
   int xbin = id10->FindBin(   91.000000000000000      );
  id10 -> SetBinContent( xbin,    155.73199728972779      );
  id10 -> SetBinError( xbin,    1.4346897333569320      );
   int xbin = id10->FindBin(   93.000000000000000      );
  id10 -> SetBinContent( xbin,    144.09396859401826      );
  id10 -> SetBinError( xbin,    1.3777933775091165      );
   int xbin = id10->FindBin(   95.000000000000000      );
  id10 -> SetBinContent( xbin,    133.78850062539729      );
  id10 -> SetBinError( xbin,    1.2794837167447826      );
   int xbin = id10->FindBin(   97.000000000000000      );
  id10 -> SetBinContent( xbin,    125.20571972982128      );
  id10 -> SetBinError( xbin,    1.2173001360603550      );
   int xbin = id10->FindBin(   99.000000000000000      );
  id10 -> SetBinContent( xbin,    114.30235878484858      );
  id10 -> SetBinError( xbin,    1.1594801751569239      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id11", "m34 forward lepton", 32,   40.00000,  200.00000);

  id11 -> GetXaxis() -> SetTitle("m34 forward lepton");
  id11 -> GetYaxis() -> SetTitle(" d#sigma/dm34 forward lepton [fb]");

  id11 -> GetYaxis() -> SetTitleOffset(1.2);
  id11 -> SetStats(false);
   int xbin = id11->FindBin(   62.500000000000000      );
  id11 -> SetBinContent( xbin,    498.28994593943867      );
  id11 -> SetBinError( xbin,    6.1251131519375965      );
   int xbin = id11->FindBin(   67.500000000000000      );
  id11 -> SetBinContent( xbin,    478.21278641186200      );
  id11 -> SetBinError( xbin,    5.2191017433267826      );
   int xbin = id11->FindBin(   72.500000000000000      );
  id11 -> SetBinContent( xbin,    538.15620346293440      );
  id11 -> SetBinError( xbin,    6.2231147066478396      );
   int xbin = id11->FindBin(   77.500000000000000      );
  id11 -> SetBinContent( xbin,    822.88939740904289      );
  id11 -> SetBinError( xbin,    7.7795477741427730      );
   int xbin = id11->FindBin(   82.500000000000000      );
  id11 -> SetBinContent( xbin,    1930.5370792681952      );
  id11 -> SetBinError( xbin,    12.468149158247263      );
   int xbin = id11->FindBin(   87.500000000000000      );
  id11 -> SetBinContent( xbin,    13105.068832556821      );
  id11 -> SetBinError( xbin,    34.228436689938142      );
   int xbin = id11->FindBin(   92.500000000000000      );
  id11 -> SetBinContent( xbin,    43953.693833330501      );
  id11 -> SetBinError( xbin,    63.688440876650787      );
   int xbin = id11->FindBin(   97.500000000000000      );
  id11 -> SetBinContent( xbin,    3951.0792122770276      );
  id11 -> SetBinError( xbin,    20.174317059563212      );
   int xbin = id11->FindBin(   102.50000000000000      );
  id11 -> SetBinContent( xbin,    1177.2856175183956      );
  id11 -> SetBinError( xbin,    11.148820882925818      );
   int xbin = id11->FindBin(   107.50000000000000      );
  id11 -> SetBinContent( xbin,    566.97433363618541      );
  id11 -> SetBinError( xbin,    7.9647384480266359      );
   int xbin = id11->FindBin(   112.50000000000000      );
  id11 -> SetBinContent( xbin,    337.86037163630789      );
  id11 -> SetBinError( xbin,    6.1693544044001118      );
   int xbin = id11->FindBin(   117.50000000000000      );
  id11 -> SetBinContent( xbin,    217.55131403096243      );
  id11 -> SetBinError( xbin,    5.0145852245827092      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id12", "m34 backward lepton", 32,   40.00000,  200.00000);

  id12 -> GetXaxis() -> SetTitle("m34 backward lepton");
  id12 -> GetYaxis() -> SetTitle(" d#sigma/dm34 backward lepton [fb]");

  id12 -> GetYaxis() -> SetTitleOffset(1.2);
  id12 -> SetStats(false);
   int xbin = id12->FindBin(   62.500000000000000      );
  id12 -> SetBinContent( xbin,    797.33899531833333      );
  id12 -> SetBinError( xbin,    10.179809848299536      );
   int xbin = id12->FindBin(   67.500000000000000      );
  id12 -> SetBinContent( xbin,    752.19928549346582      );
  id12 -> SetBinError( xbin,    8.5903157044453966      );
   int xbin = id12->FindBin(   72.500000000000000      );
  id12 -> SetBinContent( xbin,    841.01867781355838      );
  id12 -> SetBinError( xbin,    10.028333935921022      );
   int xbin = id12->FindBin(   77.500000000000000      );
  id12 -> SetBinContent( xbin,    1154.4793506610029      );
  id12 -> SetBinError( xbin,    11.002370446443731      );
   int xbin = id12->FindBin(   82.500000000000000      );
  id12 -> SetBinContent( xbin,    2278.4443962800465      );
  id12 -> SetBinError( xbin,    14.864984979469504      );
   int xbin = id12->FindBin(   87.500000000000000      );
  id12 -> SetBinContent( xbin,    12817.640590491113      );
  id12 -> SetBinError( xbin,    33.406813005920533      );
   int xbin = id12->FindBin(   92.500000000000000      );
  id12 -> SetBinContent( xbin,    38888.686187235500      );
  id12 -> SetBinError( xbin,    56.037254744937655      );
   int xbin = id12->FindBin(   97.500000000000000      );
  id12 -> SetBinContent( xbin,    3024.0630449062760      );
  id12 -> SetBinError( xbin,    15.345337197186959      );
   int xbin = id12->FindBin(   102.50000000000000      );
  id12 -> SetBinContent( xbin,    816.53767356433093      );
  id12 -> SetBinError( xbin,    7.6653313296781471      );
   int xbin = id12->FindBin(   107.50000000000000      );
  id12 -> SetBinContent( xbin,    371.69398987472272      );
  id12 -> SetBinError( xbin,    5.1294291848424578      );
   int xbin = id12->FindBin(   112.50000000000000      );
  id12 -> SetBinContent( xbin,    208.21117742818720      );
  id12 -> SetBinError( xbin,    3.7909920719875942      );
   int xbin = id12->FindBin(   117.50000000000000      );
  id12 -> SetBinContent( xbin,    135.16757281473286      );
  id12 -> SetBinError( xbin,    3.0542420337479035      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id13", "lepton FB asymmetry", 32,   40.00000,  200.00000);

  id13 -> GetXaxis() -> SetTitle("lepton FB asymmetry");
  id13 -> GetYaxis() -> SetTitle(" d#sigma/dlepton FB asymmetry [fb]");

  id13 -> GetYaxis() -> SetTitleOffset(1.2);
  id13 -> SetStats(false);
   int xbin = id13->FindBin(   62.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.3081380776241656E-002 );
  id13 -> SetBinError( xbin,    8.0362550299622793E-006 );
   int xbin = id13->FindBin(   67.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.2267864997238526E-002 );
  id13 -> SetBinError( xbin,    7.7530128645846791E-006 );
   int xbin = id13->FindBin(   72.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.1959686074786267E-002 );
  id13 -> SetBinError( xbin,    7.6457140664887460E-006 );
   int xbin = id13->FindBin(   77.500000000000000      );
  id13 -> SetBinContent( xbin,   -1.6769252248757294E-002 );
  id13 -> SetBinError( xbin,    5.8385583184649229E-006 );
   int xbin = id13->FindBin(   82.500000000000000      );
  id13 -> SetBinContent( xbin,   -8.2658315089527545E-003 );
  id13 -> SetBinError( xbin,    2.8779183829858582E-006 );
   int xbin = id13->FindBin(   87.500000000000000      );
  id13 -> SetBinContent( xbin,    1.1087893528990262E-003 );
  id13 -> SetBinError( xbin,    3.8604770229237213E-007 );
   int xbin = id13->FindBin(   92.500000000000000      );
  id13 -> SetBinContent( xbin,    6.1140296104070686E-003 );
  id13 -> SetBinError( xbin,    2.1287245198323269E-006 );
   int xbin = id13->FindBin(   97.500000000000000      );
  id13 -> SetBinContent( xbin,    1.3290283311656765E-002 );
  id13 -> SetBinError( xbin,    4.6272840931103230E-006 );
   int xbin = id13->FindBin(   102.50000000000000      );
  id13 -> SetBinContent( xbin,    1.8093275646216569E-002 );
  id13 -> SetBinError( xbin,    6.2995441576904551E-006 );
   int xbin = id13->FindBin(   107.50000000000000      );
  id13 -> SetBinContent( xbin,    2.0803977173859900E-002 );
  id13 -> SetBinError( xbin,    7.2433303634391577E-006 );
   int xbin = id13->FindBin(   112.50000000000000      );
  id13 -> SetBinContent( xbin,    2.3742162438279341E-002 );
  id13 -> SetBinError( xbin,    8.2663196871305853E-006 );
   int xbin = id13->FindBin(   117.50000000000000      );
  id13 -> SetBinContent( xbin,    2.3356770586620210E-002 );
  id13 -> SetBinError( xbin,    8.1321376277283982E-006 );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
