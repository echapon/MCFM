// Cross-section is:      2570419.6210263064 +/-         1021.9469688849)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -83077.04554   -3.23%
//        GQB    |      -45391.37754   -1.77%
//        QG     |     -102498.22456   -3.99%
//        QBG    |      -45818.62734   -1.78%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1556560.03164   60.56%
//        QBQ    |     1295816.97043   50.41%

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
//Wp_HERAPDF15NLO_EIG             [runstring]  
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
//             HERAPDF            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//HERAPDF15NLO_EIG.LHp            [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//HERAPDF15NLO_EIG.LHp            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_HERAPDF_80__80__Wp_HERAPDF15NLO_EIG.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.66134374262816742      );
  id1 -> SetBinError( xbin,   0.38096117670343516      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    495.96327095505268      );
  id1 -> SetBinError( xbin,    79.510848632090443      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4827.3875095381618      );
  id1 -> SetBinError( xbin,    385.90577707435165      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    26022.222203720452      );
  id1 -> SetBinError( xbin,    1031.5267053739151      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    62420.394025213121      );
  id1 -> SetBinError( xbin,    1443.2616591022031      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    119896.76941515795      );
  id1 -> SetBinError( xbin,    1631.9713444546633      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    176810.66664812723      );
  id1 -> SetBinError( xbin,    1917.5282936979072      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    232146.04936367768      );
  id1 -> SetBinError( xbin,    2088.0921039945124      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    283092.77757622406      );
  id1 -> SetBinError( xbin,    2207.6291117322262      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    323215.40686270222      );
  id1 -> SetBinError( xbin,    2287.3647883869012      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    354772.28087587538      );
  id1 -> SetBinError( xbin,    2317.5273433435336      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    382471.15266326512      );
  id1 -> SetBinError( xbin,    2303.1051122850149      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    398985.56439789821      );
  id1 -> SetBinError( xbin,    2379.9796487229646      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    410805.59469978896      );
  id1 -> SetBinError( xbin,    2409.0800910084026      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    412408.44973385695      );
  id1 -> SetBinError( xbin,    2375.8461358516201      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    425841.42830728972      );
  id1 -> SetBinError( xbin,    2417.1549750573472      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    427638.83307687921      );
  id1 -> SetBinError( xbin,    2408.9533985852822      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    435091.31693806959      );
  id1 -> SetBinError( xbin,    2358.1035155694472      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    441159.68936248956      );
  id1 -> SetBinError( xbin,    2383.2306605837748      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    442583.20516671578      );
  id1 -> SetBinError( xbin,    2384.6824052580937      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    451770.57427595212      );
  id1 -> SetBinError( xbin,    2398.8869201609018      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    443913.40465509589      );
  id1 -> SetBinError( xbin,    2376.7573245664425      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    453661.71598903532      );
  id1 -> SetBinError( xbin,    2421.5248406223650      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    461998.42607434699      );
  id1 -> SetBinError( xbin,    2390.8719952839574      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    464956.86500770779      );
  id1 -> SetBinError( xbin,    2405.6761225753385      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    469858.45366249059      );
  id1 -> SetBinError( xbin,    2433.3269058565766      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    470972.95390023862      );
  id1 -> SetBinError( xbin,    2520.2139856945141      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    481949.32161956909      );
  id1 -> SetBinError( xbin,    2497.1993763914270      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    479217.94974986184      );
  id1 -> SetBinError( xbin,    2542.2264621727513      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    482880.77657504776      );
  id1 -> SetBinError( xbin,    2566.0887302365609      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    480658.13473971916      );
  id1 -> SetBinError( xbin,    2580.3997333547368      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    473396.41403227043      );
  id1 -> SetBinError( xbin,    2586.5852778528124      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    443935.20856169466      );
  id1 -> SetBinError( xbin,    2796.4527426637414      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    410748.06831687549      );
  id1 -> SetBinError( xbin,    2761.7877421858379      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    358069.10950830125      );
  id1 -> SetBinError( xbin,    2481.4119681295992      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    286517.30132545804      );
  id1 -> SetBinError( xbin,    2306.8434805737538      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    203857.98808578984      );
  id1 -> SetBinError( xbin,    2081.2150235921777      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    117077.10341035876      );
  id1 -> SetBinError( xbin,    1763.0691298809268      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    46417.902408212518      );
  id1 -> SetBinError( xbin,    1288.8452674077234      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    8888.2131149998495      );
  id1 -> SetBinError( xbin,    582.79340732656578      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    605.61422215850621      );
  id1 -> SetBinError( xbin,    96.585412538700183      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   0.72620177422450771      );
  id1 -> SetBinError( xbin,   0.45389533550416838      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    893487.32374241017      );
  id2 -> SetBinError( xbin,    9694.8295894629846      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    839340.53583590640      );
  id2 -> SetBinError( xbin,    9221.0227867193080      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    793796.43644254247      );
  id2 -> SetBinError( xbin,    6827.2506446737034      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    770809.25633125356      );
  id2 -> SetBinError( xbin,    7373.8469758374849      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    737688.41394872405      );
  id2 -> SetBinError( xbin,    11233.247479518763      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    704720.17194343125      );
  id2 -> SetBinError( xbin,    7137.6177709429112      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    655618.62886675610      );
  id2 -> SetBinError( xbin,    5737.2616445347630      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    614657.19513010152      );
  id2 -> SetBinError( xbin,    4543.9890975217650      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    575469.01666022092      );
  id2 -> SetBinError( xbin,    4987.3308535268698      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    535750.94496159535      );
  id2 -> SetBinError( xbin,    4228.9711601227118      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    498089.20958780230      );
  id2 -> SetBinError( xbin,    3697.8842378680861      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    463023.90725834446      );
  id2 -> SetBinError( xbin,    3420.5511500295647      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    422644.88889854657      );
  id2 -> SetBinError( xbin,    3407.3927445689592      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    388503.64543163683      );
  id2 -> SetBinError( xbin,    2682.4833978400220      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    353072.72331832652      );
  id2 -> SetBinError( xbin,    2557.7887340369211      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    319630.14897770062      );
  id2 -> SetBinError( xbin,    2283.9627345991271      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    289394.15191504685      );
  id2 -> SetBinError( xbin,    2047.2214041952977      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    260906.57925705463      );
  id2 -> SetBinError( xbin,    2003.3134470064501      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    229915.06080982342      );
  id2 -> SetBinError( xbin,    2101.4623478619710      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    206278.88842441820      );
  id2 -> SetBinError( xbin,    1470.0816787081912      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    182586.85716217221      );
  id2 -> SetBinError( xbin,    1747.9378644388273      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    163167.85633594554      );
  id2 -> SetBinError( xbin,    1445.4103072548889      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    142974.96549639475      );
  id2 -> SetBinError( xbin,    1175.0715036922415      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    124834.29438589967      );
  id2 -> SetBinError( xbin,    1119.9919525687990      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    108979.14420983545      );
  id2 -> SetBinError( xbin,    939.18547440157545      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    95230.219772217359      );
  id2 -> SetBinError( xbin,    846.10837461770257      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    88693.550448450260      );
  id2 -> SetBinError( xbin,    1601.2991879372207      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    80430.769410718378      );
  id2 -> SetBinError( xbin,    819.27720940094207      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    75724.902139469850      );
  id2 -> SetBinError( xbin,    1165.1974336442768      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    74397.577532451251      );
  id2 -> SetBinError( xbin,    1095.4440624733691      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    72668.001485370740      );
  id2 -> SetBinError( xbin,    788.65866064181648      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    75472.681128905155      );
  id2 -> SetBinError( xbin,    691.60881638622470      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    81621.149847780558      );
  id2 -> SetBinError( xbin,    807.95715081612968      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    89231.083990846295      );
  id2 -> SetBinError( xbin,    823.28120956202383      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    99787.893276374321      );
  id2 -> SetBinError( xbin,    856.72850646533379      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    111809.43347229758      );
  id2 -> SetBinError( xbin,    931.70225137660930      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    128880.49433376483      );
  id2 -> SetBinError( xbin,    1105.2452074512537      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    150258.51203740362      );
  id2 -> SetBinError( xbin,    1245.1181796949934      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    171904.51663044072      );
  id2 -> SetBinError( xbin,    1379.3886695904228      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    192123.44186119945      );
  id2 -> SetBinError( xbin,    1357.4463428805436      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    222309.52587650265      );
  id2 -> SetBinError( xbin,    1711.3799655619921      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    250755.08268165743      );
  id2 -> SetBinError( xbin,    1730.3947781566173      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    282705.63504180883      );
  id2 -> SetBinError( xbin,    1898.0576750821365      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    323609.10369698924      );
  id2 -> SetBinError( xbin,    2245.6717697191493      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    356001.47089837986      );
  id2 -> SetBinError( xbin,    3017.3927268653138      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    393152.01472828793      );
  id2 -> SetBinError( xbin,    3439.6627680869801      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    431504.90564747201      );
  id2 -> SetBinError( xbin,    2656.3972625250640      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    479604.24320559000      );
  id2 -> SetBinError( xbin,    3505.4264213502665      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    518172.12867685838      );
  id2 -> SetBinError( xbin,    3656.9073027066743      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    559495.44899540918      );
  id2 -> SetBinError( xbin,    3500.0724109355097      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    611863.58213109395      );
  id2 -> SetBinError( xbin,    3901.2619865814268      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    650723.21094701882      );
  id2 -> SetBinError( xbin,    4624.2020324763434      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    697314.55569985276      );
  id2 -> SetBinError( xbin,    4939.0204277239091      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    748087.97155849577      );
  id2 -> SetBinError( xbin,    6124.7056866395033      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    789773.80345929042      );
  id2 -> SetBinError( xbin,    6863.9871620768645      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    841115.72771951638      );
  id2 -> SetBinError( xbin,    6340.6006387545312      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    884162.52699534118      );
  id2 -> SetBinError( xbin,    6826.3493460224763      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    937675.55282137543      );
  id2 -> SetBinError( xbin,    7505.5377404661040      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    990857.10499901406      );
  id2 -> SetBinError( xbin,    8319.3066795048981      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1025727.5251172383      );
  id2 -> SetBinError( xbin,    8302.1945738458198      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    160728.65155476786      );
  id3 -> SetBinError( xbin,    1536.9204443460135      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    213192.30636912721      );
  id3 -> SetBinError( xbin,    1888.4630168310291      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    264993.56299720047      );
  id3 -> SetBinError( xbin,    2190.6037420646253      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    317383.89059157600      );
  id3 -> SetBinError( xbin,    2302.0253728696580      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    348815.51886540471      );
  id3 -> SetBinError( xbin,    2496.1296530122636      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    383370.16234262876      );
  id3 -> SetBinError( xbin,    2624.8404269151151      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    411870.55148372654      );
  id3 -> SetBinError( xbin,    2712.0130030092423      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    434885.55565159733      );
  id3 -> SetBinError( xbin,    2845.4868487771296      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    451207.06605215924      );
  id3 -> SetBinError( xbin,    2845.1894274591709      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    461481.79850586364      );
  id3 -> SetBinError( xbin,    2833.4618550565924      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    469211.39500579680      );
  id3 -> SetBinError( xbin,    2831.5925878513171      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    477374.74623047339      );
  id3 -> SetBinError( xbin,    2851.9348980410550      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    484816.22800119431      );
  id3 -> SetBinError( xbin,    2776.5151014195185      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    489924.50802658801      );
  id3 -> SetBinError( xbin,    2936.0733224890314      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    492216.96257808211      );
  id3 -> SetBinError( xbin,    2976.4109287499878      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    498025.23928533430      );
  id3 -> SetBinError( xbin,    2910.9891701822121      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    507067.92968939862      );
  id3 -> SetBinError( xbin,    2986.6597429719004      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    512248.23198656458      );
  id3 -> SetBinError( xbin,    3031.2958275483015      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    519251.47092857084      );
  id3 -> SetBinError( xbin,    2974.6609817219992      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    519110.11197031103      );
  id3 -> SetBinError( xbin,    3080.0424849454375      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    527874.90496293677      );
  id3 -> SetBinError( xbin,    3106.9544783346887      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    526874.03579063376      );
  id3 -> SetBinError( xbin,    2999.4226997622523      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    524226.32809251017      );
  id3 -> SetBinError( xbin,    3010.1347648373217      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    516876.55039653229      );
  id3 -> SetBinError( xbin,    3055.5843899906149      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    503598.01290726895      );
  id3 -> SetBinError( xbin,    3009.3292474311525      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    467521.36541915976      );
  id3 -> SetBinError( xbin,    2913.0582758044270      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    433719.03475624800      );
  id3 -> SetBinError( xbin,    2704.8274724607786      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    380286.75315032201      );
  id3 -> SetBinError( xbin,    2567.4038251323400      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    314987.95902353799      );
  id3 -> SetBinError( xbin,    2315.8998559716615      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    238897.20626248798      );
  id3 -> SetBinError( xbin,    1953.3681403559983      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    49104.955791930486      );
  id4 -> SetBinError( xbin,    1614.6225266976908      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    157434.21213264347      );
  id4 -> SetBinError( xbin,    2888.1941275183794      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    181130.42074640034      );
  id4 -> SetBinError( xbin,    3121.8391145262963      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    207253.27486064343      );
  id4 -> SetBinError( xbin,    2895.5435577974708      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    239557.98145587754      );
  id4 -> SetBinError( xbin,    3571.7994507469029      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    264208.28130418039      );
  id4 -> SetBinError( xbin,    3688.7647264496363      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    294405.24893405114      );
  id4 -> SetBinError( xbin,    3714.5408905599238      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    304591.53321311250      );
  id4 -> SetBinError( xbin,    4076.9851144669610      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    332589.99603623524      );
  id4 -> SetBinError( xbin,    3926.7778951322830      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    342961.60300223378      );
  id4 -> SetBinError( xbin,    3736.0988562242810      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    366400.83692251658      );
  id4 -> SetBinError( xbin,    3857.9001238794904      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    378579.28189282049      );
  id4 -> SetBinError( xbin,    3995.8034409957031      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    394017.45432623697      );
  id4 -> SetBinError( xbin,    4988.1631952392809      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    417048.86010389589      );
  id4 -> SetBinError( xbin,    5234.3306744656202      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    419142.15762687457      );
  id4 -> SetBinError( xbin,    4496.8673524569658      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    438074.24669126462      );
  id4 -> SetBinError( xbin,    4300.0232017385460      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    435861.08502211014      );
  id4 -> SetBinError( xbin,    4469.0266242883090      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    456978.39143430901      );
  id4 -> SetBinError( xbin,    4449.7244748296198      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    452031.52352069796      );
  id4 -> SetBinError( xbin,    4331.2163687702014      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    459018.87869307911      );
  id4 -> SetBinError( xbin,    4465.4111087572310      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    466410.59880933765      );
  id4 -> SetBinError( xbin,    4705.3874880471139      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    468817.29123130278      );
  id4 -> SetBinError( xbin,    4574.0324754065450      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    471449.81456884055      );
  id4 -> SetBinError( xbin,    4632.0818886123916      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    477160.13681551564      );
  id4 -> SetBinError( xbin,    4666.5565501223246      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    484293.28126604762      );
  id4 -> SetBinError( xbin,    4522.7682046758582      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    485144.08662564598      );
  id4 -> SetBinError( xbin,    4665.5450531079132      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    481815.95554162696      );
  id4 -> SetBinError( xbin,    4664.2844925791114      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    491070.26569181401      );
  id4 -> SetBinError( xbin,    4585.7927171060473      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    494659.52065165772      );
  id4 -> SetBinError( xbin,    4533.9841176927193      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    489496.47527899221      );
  id4 -> SetBinError( xbin,    4509.6497729256944      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    495475.80402540194      );
  id4 -> SetBinError( xbin,    5177.0121350956588      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    496916.79481707729      );
  id4 -> SetBinError( xbin,    4996.7596232963469      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    499802.42147431825      );
  id4 -> SetBinError( xbin,    4662.3890402488632      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    509649.38958784455      );
  id4 -> SetBinError( xbin,    4797.8026690247889      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    508174.44061915262      );
  id4 -> SetBinError( xbin,    4739.9223340639410      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    514450.89853342157      );
  id4 -> SetBinError( xbin,    4659.7050777628328      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    509781.17925712420      );
  id4 -> SetBinError( xbin,    5065.4502063051605      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    512096.83061365440      );
  id4 -> SetBinError( xbin,    5233.5583454737098      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    523692.07998634217      );
  id4 -> SetBinError( xbin,    4839.0944683738226      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    525385.45197161485      );
  id4 -> SetBinError( xbin,    4702.3899091539470      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    521978.03661379893      );
  id4 -> SetBinError( xbin,    4720.2157731250418      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    528661.03506127221      );
  id4 -> SetBinError( xbin,    4990.9749282947523      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    528162.71383608400      );
  id4 -> SetBinError( xbin,    4947.1084391151198      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    527178.92103660374      );
  id4 -> SetBinError( xbin,    5823.3596634291889      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    526848.80827326188      );
  id4 -> SetBinError( xbin,    5989.0907463338017      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    522558.81851518678      );
  id4 -> SetBinError( xbin,    5158.9366083431833      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    525383.28800739953      );
  id4 -> SetBinError( xbin,    5024.7886870038628      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    519858.50395345327      );
  id4 -> SetBinError( xbin,    5000.7135204053393      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    510908.45445798687      );
  id4 -> SetBinError( xbin,    5012.0349751324484      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    510916.37885473931      );
  id4 -> SetBinError( xbin,    4848.6066824321779      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    482238.59935976047      );
  id4 -> SetBinError( xbin,    4555.6662833895480      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    467794.08622729289      );
  id4 -> SetBinError( xbin,    4468.8435764057504      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    461992.62285436719      );
  id4 -> SetBinError( xbin,    4426.3452230097100      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    440932.98116017983      );
  id4 -> SetBinError( xbin,    4701.6882324226963      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    407746.63742341916      );
  id4 -> SetBinError( xbin,    4903.4385208992035      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    384212.97328302637      );
  id4 -> SetBinError( xbin,    5083.2199362238143      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    46023.446852498855      );
  id5 -> SetBinError( xbin,    508.68154846405196      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    96908.648495910806      );
  id5 -> SetBinError( xbin,    885.92683897004895      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    109014.85706007814      );
  id5 -> SetBinError( xbin,    949.74699976517024      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    118762.70809624396      );
  id5 -> SetBinError( xbin,    1074.2730648032948      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    131360.44756052614      );
  id5 -> SetBinError( xbin,    1096.5436074032455      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    146839.93699728450      );
  id5 -> SetBinError( xbin,    907.29154663784425      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    165098.68983473495      );
  id5 -> SetBinError( xbin,    1003.8873933563092      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    161412.18354121898      );
  id5 -> SetBinError( xbin,    1294.9527771821479      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    125603.25204881428      );
  id5 -> SetBinError( xbin,    1060.7593646480318      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    61480.170685050769      );
  id5 -> SetBinError( xbin,    300.45594250510004      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    31985.588126413310      );
  id5 -> SetBinError( xbin,    191.73038801740029      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    20290.308298710243      );
  id5 -> SetBinError( xbin,    134.49393085424461      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13947.601969207257      );
  id5 -> SetBinError( xbin,    111.22132691697735      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    10147.086260148113      );
  id5 -> SetBinError( xbin,    82.445762548603753      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7861.2837408160703      );
  id5 -> SetBinError( xbin,    69.829935343562781      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5972.9351331748694      );
  id5 -> SetBinError( xbin,    62.332451168076282      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4834.0541831196306      );
  id5 -> SetBinError( xbin,    51.412452514411527      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3891.1566217931208      );
  id5 -> SetBinError( xbin,    45.931100058397021      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3228.8412103102150      );
  id5 -> SetBinError( xbin,    39.398275946979901      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2674.4011551941167      );
  id5 -> SetBinError( xbin,    34.885384860429888      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2174.4877279461343      );
  id5 -> SetBinError( xbin,    32.725180184006675      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1853.2398598034674      );
  id5 -> SetBinError( xbin,    33.775484191125699      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1598.3938218109679      );
  id5 -> SetBinError( xbin,    38.418111465510044      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1383.1415826124357      );
  id5 -> SetBinError( xbin,    34.290680118851512      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1185.7629122021979      );
  id5 -> SetBinError( xbin,    21.670469257327341      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1056.6309428632128      );
  id5 -> SetBinError( xbin,    26.950331780611226      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    875.41768266595955      );
  id5 -> SetBinError( xbin,    33.495922344895277      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    769.47729385307059      );
  id5 -> SetBinError( xbin,    27.319224172617485      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    682.65083049450925      );
  id5 -> SetBinError( xbin,    19.157023881752011      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    628.92897149875341      );
  id5 -> SetBinError( xbin,    17.461216449218931      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    500.07036040857338      );
  id5 -> SetBinError( xbin,    15.409719279580129      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    455.87150181294555      );
  id5 -> SetBinError( xbin,    15.899036248652903      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    436.78153894984081      );
  id5 -> SetBinError( xbin,    13.633884130102839      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    377.23972392123608      );
  id5 -> SetBinError( xbin,    13.130647596057456      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    318.35973473282900      );
  id5 -> SetBinError( xbin,    14.620495503521896      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    308.77843515267017      );
  id5 -> SetBinError( xbin,    13.201687294261820      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    287.31424405563325      );
  id5 -> SetBinError( xbin,    14.380106491309617      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    238.68961414923189      );
  id5 -> SetBinError( xbin,    13.624158755718508      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2976.4614631137465      );
  id6 -> SetBinError( xbin,    55.841044395241873      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9690.2494712002062      );
  id6 -> SetBinError( xbin,    103.43222754825626      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19685.991348766132      );
  id6 -> SetBinError( xbin,    152.09173249499275      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    34648.009398923052      );
  id6 -> SetBinError( xbin,    201.96481526176447      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    56613.875014656864      );
  id6 -> SetBinError( xbin,    250.92100462621261      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    87780.535116487896      );
  id6 -> SetBinError( xbin,    295.33384424142440      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    134773.91626358367      );
  id6 -> SetBinError( xbin,    356.21822468348017      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    188747.36429994681      );
  id6 -> SetBinError( xbin,    426.96729826887082      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    73132.753590924287      );
  id6 -> SetBinError( xbin,    301.57635090927192      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    25098.556444441023      );
  id6 -> SetBinError( xbin,    199.59043761602382      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    9108.8948613366883      );
  id6 -> SetBinError( xbin,    130.37158859822796      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3487.0752326549391      );
  id6 -> SetBinError( xbin,    86.110504534363542      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11945.514381895897      );
  id7 -> SetBinError( xbin,    146.87550812847010      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15639.229179061513      );
  id7 -> SetBinError( xbin,    171.38374485581619      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19299.815006262510      );
  id7 -> SetBinError( xbin,    189.28559019461184      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24176.143246325762      );
  id7 -> SetBinError( xbin,    215.55059663860871      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    29190.272062202333      );
  id7 -> SetBinError( xbin,    241.90895000177682      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33111.699430538538      );
  id7 -> SetBinError( xbin,    258.31846751017611      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37695.437169258024      );
  id7 -> SetBinError( xbin,    282.20145923320001      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    41604.115597502598      );
  id7 -> SetBinError( xbin,    298.94277471404757      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    46197.459839797288      );
  id7 -> SetBinError( xbin,    321.49552215901053      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    50166.923566362144      );
  id7 -> SetBinError( xbin,    339.20051011519439      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    53425.715943510040      );
  id7 -> SetBinError( xbin,    354.50248381072458      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    56431.244828677598      );
  id7 -> SetBinError( xbin,    366.15554371213295      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58157.291513885313      );
  id7 -> SetBinError( xbin,    371.76941051574283      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    60471.456447191551      );
  id7 -> SetBinError( xbin,    383.09829842854833      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    62501.343738890268      );
  id7 -> SetBinError( xbin,    389.65306359768260      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    62764.100026786444      );
  id7 -> SetBinError( xbin,    388.32542139510582      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    62424.684504177378      );
  id7 -> SetBinError( xbin,    384.38466092593882      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    62104.403915488852      );
  id7 -> SetBinError( xbin,    381.27134671731449      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    61000.299382735306      );
  id7 -> SetBinError( xbin,    373.05251929566714      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    60174.202425854586      );
  id7 -> SetBinError( xbin,    366.92151071115251      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    57884.953783421523      );
  id7 -> SetBinError( xbin,    356.42568280159253      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    53673.247424451489      );
  id7 -> SetBinError( xbin,    334.24741759031338      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    50848.119071954738      );
  id7 -> SetBinError( xbin,    321.82735800090035      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    46348.126553227739      );
  id7 -> SetBinError( xbin,    301.37319511052146      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    41707.974022008049      );
  id7 -> SetBinError( xbin,    279.00269350349305      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    37336.161429714288      );
  id7 -> SetBinError( xbin,    260.72460734345390      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    32353.526622676909      );
  id7 -> SetBinError( xbin,    238.65811281962002      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    26830.395835409217      );
  id7 -> SetBinError( xbin,    215.79694440391469      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    21996.669072324159      );
  id7 -> SetBinError( xbin,    196.15058833197199      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    17618.188224684487      );
  id7 -> SetBinError( xbin,    172.78729657981378      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7310.9231606277017      );
  id8 -> SetBinError( xbin,    44.683979932730487      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12999.187530303498      );
  id8 -> SetBinError( xbin,    58.978467442433470      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    11368.844792120655      );
  id8 -> SetBinError( xbin,    54.306926917901144      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9899.2890175198409      );
  id8 -> SetBinError( xbin,    49.932545246340517      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8733.0089297974246      );
  id8 -> SetBinError( xbin,    46.257456761394288      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7630.1822952546254      );
  id8 -> SetBinError( xbin,    42.649869221912546      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6766.6694737691887      );
  id8 -> SetBinError( xbin,    39.603876079322575      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5959.7530431246232      );
  id8 -> SetBinError( xbin,    36.328873737920375      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5224.3281053419596      );
  id8 -> SetBinError( xbin,    33.638121691446784      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4712.2582442241182      );
  id8 -> SetBinError( xbin,    31.698566355131049      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4168.6689167443174      );
  id8 -> SetBinError( xbin,    29.138876329936618      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3712.6562667200919      );
  id8 -> SetBinError( xbin,    27.118410883757893      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3286.9924138854412      );
  id8 -> SetBinError( xbin,    25.506962809447980      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    3014.7149658884273      );
  id8 -> SetBinError( xbin,    23.942283552974466      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2774.2416398677110      );
  id8 -> SetBinError( xbin,    22.842201410759344      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2469.9677077343799      );
  id8 -> SetBinError( xbin,    21.189239425363585      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2249.5732802223174      );
  id8 -> SetBinError( xbin,    20.055792900332285      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2014.7949805568276      );
  id8 -> SetBinError( xbin,    18.676553854005633      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1879.6387964588318      );
  id8 -> SetBinError( xbin,    17.914184732694597      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1704.6898595723662      );
  id8 -> SetBinError( xbin,    16.812260478840976      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1574.0998345808234      );
  id8 -> SetBinError( xbin,    16.048756963342303      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1406.0225379512810      );
  id8 -> SetBinError( xbin,    14.909139631732730      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1308.3998681630060      );
  id8 -> SetBinError( xbin,    14.452599654148058      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1235.8477073725401      );
  id8 -> SetBinError( xbin,    13.884499640535349      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1123.0880475288998      );
  id8 -> SetBinError( xbin,    13.165173946390249      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    1012.6166672058819      );
  id8 -> SetBinError( xbin,    12.414081048629589      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    939.14492278725584      );
  id8 -> SetBinError( xbin,    11.857297732508020      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    890.50247023494103      );
  id8 -> SetBinError( xbin,    11.631529931169146      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
