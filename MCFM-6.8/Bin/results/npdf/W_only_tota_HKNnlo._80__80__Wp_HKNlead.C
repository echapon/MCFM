// Cross-section is:      2344632.3943924611 +/-          943.1341786353)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -81318.85717   -3.47%
//        GQB    |      -41886.81896   -1.79%
//        QG     |      -90719.52173   -3.87%
//        QBG    |      -44921.63836   -1.92%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1331583.64412   56.79%
//        QBQ    |     1278252.09740   54.52%

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
//Wp_HKNlead                      [runstring]  
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
//             HKNnlo.            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//HKNnlo.LHpdf                    [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//HKNnlo.LHpdf                    [LHAPDF group 2]  
//                  18            [LHAPDF set 2]  

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
  mcfmhisto = new TFile("W_only_tota_HKNnlo._80__80__Wp_HKNlead.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    1.4634705815308721E-002 );
  id1 -> SetBinError( xbin,   0.56170942962304793      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    621.79194200755478      );
  id1 -> SetBinError( xbin,    81.070852026699143      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    6242.9450894485353      );
  id1 -> SetBinError( xbin,    410.09122360845839      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    26640.551783818282      );
  id1 -> SetBinError( xbin,    1011.1689602268281      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    68023.907852158503      );
  id1 -> SetBinError( xbin,    1399.6086493661228      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    127497.30807810054      );
  id1 -> SetBinError( xbin,    1604.6165842977832      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    193868.81400616630      );
  id1 -> SetBinError( xbin,    1882.1618651019323      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    258116.87905141219      );
  id1 -> SetBinError( xbin,    2058.0033016437046      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    310085.17085443222      );
  id1 -> SetBinError( xbin,    2159.5584469980727      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    349103.50967468525      );
  id1 -> SetBinError( xbin,    2293.3965827634224      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    384731.15693753160      );
  id1 -> SetBinError( xbin,    2341.2985259136285      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    407822.61053802620      );
  id1 -> SetBinError( xbin,    2300.3563533710521      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    417009.71527584299      );
  id1 -> SetBinError( xbin,    2268.7442896358898      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    415654.72412154730      );
  id1 -> SetBinError( xbin,    2256.0524610908110      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    414176.44297299563      );
  id1 -> SetBinError( xbin,    2268.3654930976591      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    408580.18437784561      );
  id1 -> SetBinError( xbin,    2215.3893188023053      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    409838.78509226925      );
  id1 -> SetBinError( xbin,    2164.7195049584702      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    404593.62060456828      );
  id1 -> SetBinError( xbin,    2146.0039467815445      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    400453.65970370657      );
  id1 -> SetBinError( xbin,    2243.5092979847659      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    394503.28283334739      );
  id1 -> SetBinError( xbin,    2238.5986150668650      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    384324.06248490466      );
  id1 -> SetBinError( xbin,    2097.7340631080328      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    392246.78966943617      );
  id1 -> SetBinError( xbin,    2099.6921350672983      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    390335.43431773968      );
  id1 -> SetBinError( xbin,    2084.3764637643717      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    390919.47407070990      );
  id1 -> SetBinError( xbin,    2109.5390067926160      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    392062.87648559822      );
  id1 -> SetBinError( xbin,    2122.3161735834183      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    391662.94196183543      );
  id1 -> SetBinError( xbin,    2139.8197982576276      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    399601.56456611416      );
  id1 -> SetBinError( xbin,    2138.4137217926241      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    404973.74554752052      );
  id1 -> SetBinError( xbin,    2211.8092465499103      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    404724.17613834067      );
  id1 -> SetBinError( xbin,    2227.8298008087722      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    405696.30249708658      );
  id1 -> SetBinError( xbin,    2289.3287159073429      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    405136.69950914179      );
  id1 -> SetBinError( xbin,    2307.1713091364954      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    397607.18472074426      );
  id1 -> SetBinError( xbin,    2297.8750281601219      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    372426.32169808471      );
  id1 -> SetBinError( xbin,    2279.6954631609115      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    340759.37347023119      );
  id1 -> SetBinError( xbin,    2246.2563446630193      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    299062.01704572240      );
  id1 -> SetBinError( xbin,    2204.0333402782635      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    238251.93963257383      );
  id1 -> SetBinError( xbin,    2048.9701647859729      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    170393.97863556747      );
  id1 -> SetBinError( xbin,    1822.0231546530429      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    97143.648217017078      );
  id1 -> SetBinError( xbin,    1592.7822207481529      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    39591.911036341422      );
  id1 -> SetBinError( xbin,    1122.2821289366209      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    8456.6290478645715      );
  id1 -> SetBinError( xbin,    562.83117267367243      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    811.00324443049033      );
  id1 -> SetBinError( xbin,    147.62989534603301      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.1001114382427863      );
  id1 -> SetBinError( xbin,   0.74288679940791913      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    844708.98462654208      );
  id2 -> SetBinError( xbin,    7666.8107012622859      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    819865.84911810840      );
  id2 -> SetBinError( xbin,    7649.6883142296620      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    770390.78953870386      );
  id2 -> SetBinError( xbin,    6926.2592025943604      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    718022.67456942052      );
  id2 -> SetBinError( xbin,    5873.6737855495621      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    691862.38308238052      );
  id2 -> SetBinError( xbin,    5532.8396381014945      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    657832.18817569467      );
  id2 -> SetBinError( xbin,    5209.0167701442306      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    616905.67065094539      );
  id2 -> SetBinError( xbin,    4906.4433683446778      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    574628.56589318125      );
  id2 -> SetBinError( xbin,    3788.3936081891470      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    543412.44976105995      );
  id2 -> SetBinError( xbin,    3768.8439570264050      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    506090.61316369084      );
  id2 -> SetBinError( xbin,    3926.2039760975204      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    479526.72257100802      );
  id2 -> SetBinError( xbin,    4361.6340549902434      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    440453.04093867145      );
  id2 -> SetBinError( xbin,    3693.0340954608109      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    397309.34469760058      );
  id2 -> SetBinError( xbin,    2433.2413105961168      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    365723.05884139537      );
  id2 -> SetBinError( xbin,    2451.6418361518863      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    332876.88114150200      );
  id2 -> SetBinError( xbin,    2031.6614556946895      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    304787.69621205673      );
  id2 -> SetBinError( xbin,    2268.6093049819738      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    274923.62758610316      );
  id2 -> SetBinError( xbin,    1941.3552759030929      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    244095.49580315832      );
  id2 -> SetBinError( xbin,    1626.6646288438242      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    216657.18228019096      );
  id2 -> SetBinError( xbin,    1437.5238874717811      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    195433.48517440201      );
  id2 -> SetBinError( xbin,    1392.0195201109996      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    169397.32079735829      );
  id2 -> SetBinError( xbin,    1176.9915227823808      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    151495.85815272236      );
  id2 -> SetBinError( xbin,    1687.6410815623881      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    132457.86113575016      );
  id2 -> SetBinError( xbin,    2589.2634528230228      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    114766.34849066584      );
  id2 -> SetBinError( xbin,    963.91363129840988      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    101575.64546364761      );
  id2 -> SetBinError( xbin,    979.81204269924979      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    90359.794315065868      );
  id2 -> SetBinError( xbin,    1147.1818620478837      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    81220.663993905007      );
  id2 -> SetBinError( xbin,    758.35635374673802      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    74297.241726495165      );
  id2 -> SetBinError( xbin,    674.90822022058660      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    69074.946740163999      );
  id2 -> SetBinError( xbin,    672.27444632131323      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    65503.548324256568      );
  id2 -> SetBinError( xbin,    642.38998396108980      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    67709.499084891853      );
  id2 -> SetBinError( xbin,    852.39061286434458      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    70362.830157984208      );
  id2 -> SetBinError( xbin,    695.38192404401457      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    74445.655493701866      );
  id2 -> SetBinError( xbin,    756.45613947719721      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    81565.471928072075      );
  id2 -> SetBinError( xbin,    726.58402344693786      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    92352.697588827781      );
  id2 -> SetBinError( xbin,    1527.8681961402701      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    101100.80774870994      );
  id2 -> SetBinError( xbin,    1213.8742725216607      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    117085.08721275433      );
  id2 -> SetBinError( xbin,    1270.4688283259684      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    131991.40350515847      );
  id2 -> SetBinError( xbin,    990.93132905229129      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    151047.55492271355      );
  id2 -> SetBinError( xbin,    1195.7319432804102      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    171516.53777512809      );
  id2 -> SetBinError( xbin,    1437.3847210546267      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    199034.67773406790      );
  id2 -> SetBinError( xbin,    2782.7573561848599      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    217819.96437831852      );
  id2 -> SetBinError( xbin,    1477.2298551876490      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    243123.30284668948      );
  id2 -> SetBinError( xbin,    1634.1516277223513      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    274700.56983899086      );
  id2 -> SetBinError( xbin,    1883.7104742395875      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    307793.57585343573      );
  id2 -> SetBinError( xbin,    2401.5209067110886      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    337440.37760029372      );
  id2 -> SetBinError( xbin,    2244.6718848729024      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    374999.71150471276      );
  id2 -> SetBinError( xbin,    2897.6515825347792      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    405361.20802645490      );
  id2 -> SetBinError( xbin,    2996.2238025172983      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    443883.51180118998      );
  id2 -> SetBinError( xbin,    4688.1287329023680      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    478445.39471197606      );
  id2 -> SetBinError( xbin,    4387.1716502522822      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    519692.75723814353      );
  id2 -> SetBinError( xbin,    4000.3045562362381      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    550737.92187717068      );
  id2 -> SetBinError( xbin,    3919.8453606655935      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    591692.48955188214      );
  id2 -> SetBinError( xbin,    5490.8373994725307      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    630260.36595767504      );
  id2 -> SetBinError( xbin,    4500.4678991765359      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    660094.31627506088      );
  id2 -> SetBinError( xbin,    5256.7177417541579      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    703737.79651160713      );
  id2 -> SetBinError( xbin,    4958.0216670727796      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    745386.40803921025      );
  id2 -> SetBinError( xbin,    7195.6582530203896      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    782732.91691236396      );
  id2 -> SetBinError( xbin,    6933.9712039130773      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    815566.71948722785      );
  id2 -> SetBinError( xbin,    7730.0508908723086      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    864861.45511116984      );
  id2 -> SetBinError( xbin,    7491.0876269860319      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    166341.32373557883      );
  id3 -> SetBinError( xbin,    1539.2693998948926      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    225470.78684507022      );
  id3 -> SetBinError( xbin,    1834.4896426830946      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    288814.95238885138      );
  id3 -> SetBinError( xbin,    2108.5017603126407      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    334108.43721375638      );
  id3 -> SetBinError( xbin,    2809.9637952456142      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    373944.18072502024      );
  id3 -> SetBinError( xbin,    2993.6893585690887      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    409104.32619395718      );
  id3 -> SetBinError( xbin,    2669.2267165591761      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    431963.40990698955      );
  id3 -> SetBinError( xbin,    2670.4872247937324      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    450194.18820370990      );
  id3 -> SetBinError( xbin,    2645.2875456990951      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    450530.34025051736      );
  id3 -> SetBinError( xbin,    2696.0085280827248      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    449487.83884576749      );
  id3 -> SetBinError( xbin,    2803.7131496520301      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    453232.68081584567      );
  id3 -> SetBinError( xbin,    2743.7486224072582      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    444096.75877554342      );
  id3 -> SetBinError( xbin,    3236.7313856931091      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    440400.72750487563      );
  id3 -> SetBinError( xbin,    3219.2155724207173      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    431616.93842073233      );
  id3 -> SetBinError( xbin,    2596.4041656510954      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    430950.88794160879      );
  id3 -> SetBinError( xbin,    2632.3316157557892      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    434333.84333588905      );
  id3 -> SetBinError( xbin,    2639.8721099524396      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    432091.66474357434      );
  id3 -> SetBinError( xbin,    2544.9721866387627      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    430964.58250659681      );
  id3 -> SetBinError( xbin,    2525.0279529221721      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    440521.43819777586      );
  id3 -> SetBinError( xbin,    2881.9869498868211      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    440821.63095784973      );
  id3 -> SetBinError( xbin,    2899.5177697335362      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    444792.90849786106      );
  id3 -> SetBinError( xbin,    2619.9671180714504      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    447144.81991120998      );
  id3 -> SetBinError( xbin,    2597.7244706424663      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    447583.15970815328      );
  id3 -> SetBinError( xbin,    2594.7996413415749      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    444700.68085040385      );
  id3 -> SetBinError( xbin,    2688.8988097958495      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    427738.40864629840      );
  id3 -> SetBinError( xbin,    2624.2398682869261      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    403640.26644290681      );
  id3 -> SetBinError( xbin,    2502.5785594884787      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    368678.44929253357      );
  id3 -> SetBinError( xbin,    2431.9481390559336      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    319248.40234408807      );
  id3 -> SetBinError( xbin,    2251.2364868529735      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    263168.72231413901      );
  id3 -> SetBinError( xbin,    2008.7036485163037      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    198067.49401597143      );
  id3 -> SetBinError( xbin,    1705.8371839885017      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    49154.460406933940      );
  id4 -> SetBinError( xbin,    1684.3605257583749      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    162267.30407153827      );
  id4 -> SetBinError( xbin,    2247.8448517015781      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    192908.26776868632      );
  id4 -> SetBinError( xbin,    2525.0615903416760      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    215277.61498449394      );
  id4 -> SetBinError( xbin,    3074.5793919549410      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    254873.33054443370      );
  id4 -> SetBinError( xbin,    3312.6696461817473      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    284788.39059308259      );
  id4 -> SetBinError( xbin,    3712.5868463494057      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    312725.71845326404      );
  id4 -> SetBinError( xbin,    3912.4833142922876      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    328905.64458088495      );
  id4 -> SetBinError( xbin,    3603.6575920553541      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    351386.46894713340      );
  id4 -> SetBinError( xbin,    3729.5888158282096      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    372770.55411006167      );
  id4 -> SetBinError( xbin,    3804.7069550722135      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    387595.06998942886      );
  id4 -> SetBinError( xbin,    4061.5584907740695      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    410683.01274181844      );
  id4 -> SetBinError( xbin,    4180.1012925056521      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    424229.13567279419      );
  id4 -> SetBinError( xbin,    4228.6358434367294      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    429689.75012405118      );
  id4 -> SetBinError( xbin,    4305.1272453020219      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    440407.78141740488      );
  id4 -> SetBinError( xbin,    4192.8399444011611      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    453079.93999611144      );
  id4 -> SetBinError( xbin,    4434.2123389654807      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    448285.56298400118      );
  id4 -> SetBinError( xbin,    4472.2765865630454      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    445329.12315004301      );
  id4 -> SetBinError( xbin,    4187.3203985387036      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    451422.28303118976      );
  id4 -> SetBinError( xbin,    4149.2174748745601      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    453425.63286959456      );
  id4 -> SetBinError( xbin,    4187.3020389142766      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    454146.37583881919      );
  id4 -> SetBinError( xbin,    4155.8321787187379      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    447146.92298407148      );
  id4 -> SetBinError( xbin,    4327.8217521919969      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    446088.52076147636      );
  id4 -> SetBinError( xbin,    4261.8729200253265      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    448818.22473269864      );
  id4 -> SetBinError( xbin,    5808.0232574987158      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    439319.64620496688      );
  id4 -> SetBinError( xbin,    6700.9803268566211      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    447896.55596939661      );
  id4 -> SetBinError( xbin,    5469.7977890617367      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    432704.83141636569      );
  id4 -> SetBinError( xbin,    4302.1200637066404      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    434338.56985377235      );
  id4 -> SetBinError( xbin,    4047.2404818932901      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    433785.51655451034      );
  id4 -> SetBinError( xbin,    4072.0697017709949      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    427464.20056386315      );
  id4 -> SetBinError( xbin,    4070.6839952957730      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    433806.62832139974      );
  id4 -> SetBinError( xbin,    4029.2842470924174      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    429396.30336176121      );
  id4 -> SetBinError( xbin,    3907.0422632102122      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    436138.32484999229      );
  id4 -> SetBinError( xbin,    4043.0806241837913      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    434157.46617313562      );
  id4 -> SetBinError( xbin,    4240.4016050453756      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    427494.07933615567      );
  id4 -> SetBinError( xbin,    4303.7421517934526      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    435130.48583922937      );
  id4 -> SetBinError( xbin,    4162.5058964223617      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    436479.48730727797      );
  id4 -> SetBinError( xbin,    4043.9040488577116      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    455668.77244379628      );
  id4 -> SetBinError( xbin,    15696.587075824749      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    423934.99017164897      );
  id4 -> SetBinError( xbin,    15718.337329919832      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    434878.18865032442      );
  id4 -> SetBinError( xbin,    4158.9057669469648      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    445121.44718221901      );
  id4 -> SetBinError( xbin,    4170.7129578540016      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    444551.41923705110      );
  id4 -> SetBinError( xbin,    4352.8855413900401      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    450451.87580418820      );
  id4 -> SetBinError( xbin,    4319.3602432465814      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    439476.80922376097      );
  id4 -> SetBinError( xbin,    5785.7241837702650      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    448581.35321045876      );
  id4 -> SetBinError( xbin,    5794.0663510106469      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    452220.55912937061      );
  id4 -> SetBinError( xbin,    4667.7999027722944      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    447759.25082000979      );
  id4 -> SetBinError( xbin,    4916.8551664390925      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    442354.14528411650      );
  id4 -> SetBinError( xbin,    4558.6446124853137      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    439804.99947133265      );
  id4 -> SetBinError( xbin,    4301.8197093893959      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    434715.56477897271      );
  id4 -> SetBinError( xbin,    4350.4851224498025      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    412465.20583049022      );
  id4 -> SetBinError( xbin,    4504.9938468691680      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    406453.62320978753      );
  id4 -> SetBinError( xbin,    4350.9357927619440      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    392571.41968535172      );
  id4 -> SetBinError( xbin,    4047.3687961197784      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    369867.78132784797      );
  id4 -> SetBinError( xbin,    4224.1054612996313      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    350934.68909384403      );
  id4 -> SetBinError( xbin,    4164.3471235868847      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    326108.08795420529      );
  id4 -> SetBinError( xbin,    3744.8304979023878      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    292028.35665318376      );
  id4 -> SetBinError( xbin,    3468.1985195306247      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    267716.87209149840      );
  id4 -> SetBinError( xbin,    3396.1632229348916      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    237956.78355052127      );
  id4 -> SetBinError( xbin,    3167.6738592351044      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    200803.16098266051      );
  id4 -> SetBinError( xbin,    2772.0175470611130      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    117565.95677384853      );
  id4 -> SetBinError( xbin,    2068.3626256331777      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    42043.391034978464      );
  id5 -> SetBinError( xbin,    445.88948350824950      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    89950.826350112708      );
  id5 -> SetBinError( xbin,    581.72272031778903      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    99612.641494419193      );
  id5 -> SetBinError( xbin,    671.25059952488334      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    107274.59135230871      );
  id5 -> SetBinError( xbin,    851.38481420979315      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    118657.12641312795      );
  id5 -> SetBinError( xbin,    937.00999704258425      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    132835.54117253024      );
  id5 -> SetBinError( xbin,    867.45805573897269      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    150928.92668700573      );
  id5 -> SetBinError( xbin,    859.05008293721642      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    143975.81164808822      );
  id5 -> SetBinError( xbin,    1484.6303095719149      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    114717.56243466045      );
  id5 -> SetBinError( xbin,    1340.8778344461332      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    56165.114525067445      );
  id5 -> SetBinError( xbin,    261.40121909232460      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    29861.664413213526      );
  id5 -> SetBinError( xbin,    155.00825151115112      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    18793.458121028605      );
  id5 -> SetBinError( xbin,    113.51326635756394      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13200.095044764306      );
  id5 -> SetBinError( xbin,    91.929955534624611      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9731.9360460610751      );
  id5 -> SetBinError( xbin,    71.495712881729972      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7388.3333291792851      );
  id5 -> SetBinError( xbin,    59.233425162670123      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5657.2207393136414      );
  id5 -> SetBinError( xbin,    51.345874510973715      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4541.2618349147515      );
  id5 -> SetBinError( xbin,    51.016829284476692      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3819.2472906163416      );
  id5 -> SetBinError( xbin,    46.392210201327877      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3082.7084678797987      );
  id5 -> SetBinError( xbin,    33.668540725689212      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2531.6211452113025      );
  id5 -> SetBinError( xbin,    32.834432465393562      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2141.6289956645578      );
  id5 -> SetBinError( xbin,    31.221299107804210      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1810.8454289895762      );
  id5 -> SetBinError( xbin,    26.096267120298403      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1550.9972762004993      );
  id5 -> SetBinError( xbin,    23.674037098865540      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1355.7390036331101      );
  id5 -> SetBinError( xbin,    24.809570725167482      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1114.7591368375997      );
  id5 -> SetBinError( xbin,    23.558246754227497      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    985.45350016020768      );
  id5 -> SetBinError( xbin,    18.380630307725770      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    882.96686019800279      );
  id5 -> SetBinError( xbin,    20.541995012371771      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    780.85197202430891      );
  id5 -> SetBinError( xbin,    18.872888463451261      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    679.80276926058707      );
  id5 -> SetBinError( xbin,    14.340831676122866      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    586.23173445967075      );
  id5 -> SetBinError( xbin,    14.965325957393500      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    524.14163308788545      );
  id5 -> SetBinError( xbin,    16.677363344297031      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    502.48697408829406      );
  id5 -> SetBinError( xbin,    17.886302183494752      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    396.46733546759833      );
  id5 -> SetBinError( xbin,    22.700557085267985      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    357.13787462544383      );
  id5 -> SetBinError( xbin,    20.504621284517487      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    322.69357464067843      );
  id5 -> SetBinError( xbin,    9.8972536554423503      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    286.78026582146748      );
  id5 -> SetBinError( xbin,    9.5288102998173461      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    264.82131119087910      );
  id5 -> SetBinError( xbin,    14.062417213326308      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    248.92757453498666      );
  id5 -> SetBinError( xbin,    15.389971151588616      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2824.7818715190228      );
  id6 -> SetBinError( xbin,    53.075036573209118      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9201.7594716790572      );
  id6 -> SetBinError( xbin,    98.268733643032903      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    18534.325407162840      );
  id6 -> SetBinError( xbin,    144.40951654950925      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33275.257155302090      );
  id6 -> SetBinError( xbin,    194.03659902089385      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    54428.324570948782      );
  id6 -> SetBinError( xbin,    239.16403231404237      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    84147.816690463864      );
  id6 -> SetBinError( xbin,    280.77294522757455      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    129251.90851529423      );
  id6 -> SetBinError( xbin,    338.37237778166462      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    182274.34497066296      );
  id6 -> SetBinError( xbin,    407.44365764511736      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    71362.990419764013      );
  id6 -> SetBinError( xbin,    288.22244989127478      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24482.790520296709      );
  id6 -> SetBinError( xbin,    191.66525632628736      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    9597.3042666228212      );
  id6 -> SetBinError( xbin,    130.73076808972868      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3587.6771456014321      );
  id6 -> SetBinError( xbin,    86.162216016464910      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    12841.238974586497      );
  id7 -> SetBinError( xbin,    151.04097551457272      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    16854.090171138385      );
  id7 -> SetBinError( xbin,    169.82776334483123      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    21196.692767089316      );
  id7 -> SetBinError( xbin,    193.50240908693576      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    25723.965160401134      );
  id7 -> SetBinError( xbin,    214.88685643236280      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    30520.375921214036      );
  id7 -> SetBinError( xbin,    235.79007197936224      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    35429.558085620600      );
  id7 -> SetBinError( xbin,    263.01406451909565      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    40495.632118413145      );
  id7 -> SetBinError( xbin,    281.60583366600690      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    43567.117451959959      );
  id7 -> SetBinError( xbin,    292.12876205311733      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    47954.031255471178      );
  id7 -> SetBinError( xbin,    314.77631680072989      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    51041.032059771038      );
  id7 -> SetBinError( xbin,    329.23984111140373      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    54154.754912189499      );
  id7 -> SetBinError( xbin,    341.14704124015174      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    56319.991072284000      );
  id7 -> SetBinError( xbin,    351.95468351169427      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    57735.669899870285      );
  id7 -> SetBinError( xbin,    357.86952177586147      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    59589.691565488611      );
  id7 -> SetBinError( xbin,    365.74104527123137      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59573.034621619168      );
  id7 -> SetBinError( xbin,    366.37133604620556      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    60057.945729427011      );
  id7 -> SetBinError( xbin,    368.96118399422170      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    59308.524559384132      );
  id7 -> SetBinError( xbin,    365.48813952912110      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    59042.706530060765      );
  id7 -> SetBinError( xbin,    362.93420366261427      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    57747.948826905042      );
  id7 -> SetBinError( xbin,    357.28326031261940      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    55095.087921215258      );
  id7 -> SetBinError( xbin,    345.03792542190587      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    52231.297521451444      );
  id7 -> SetBinError( xbin,    331.37473216092991      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    48905.989055820988      );
  id7 -> SetBinError( xbin,    316.77392871491497      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    45513.035392276244      );
  id7 -> SetBinError( xbin,    297.40543333418157      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    41918.493808868196      );
  id7 -> SetBinError( xbin,    283.87115660186294      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    37817.427330032122      );
  id7 -> SetBinError( xbin,    262.93502989310457      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    32881.895864039230      );
  id7 -> SetBinError( xbin,    241.56886020086003      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    28231.379507774080      );
  id7 -> SetBinError( xbin,    219.38149608248364      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    23512.458177848439      );
  id7 -> SetBinError( xbin,    197.69610766778365      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    19315.872467734171      );
  id7 -> SetBinError( xbin,    179.41526773872829      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    15040.607823341481      );
  id7 -> SetBinError( xbin,    155.87850256160976      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    6896.8932095625778      );
  id8 -> SetBinError( xbin,    42.850871566143830      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12348.875260381406      );
  id8 -> SetBinError( xbin,    56.335071074392630      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    10769.469154425045      );
  id8 -> SetBinError( xbin,    51.540526193272527      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9416.3654954203812      );
  id8 -> SetBinError( xbin,    47.196356878373287      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8296.6908070451937      );
  id8 -> SetBinError( xbin,    43.643765928148689      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7333.6770816157996      );
  id8 -> SetBinError( xbin,    40.851147499731169      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6447.0593805032595      );
  id8 -> SetBinError( xbin,    37.637331463513249      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5689.0136451920771      );
  id8 -> SetBinError( xbin,    34.762675064300261      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5019.8222387639616      );
  id8 -> SetBinError( xbin,    31.949317307438964      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4486.3978913984747      );
  id8 -> SetBinError( xbin,    29.867531768028336      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4049.1688396883983      );
  id8 -> SetBinError( xbin,    28.243635144026676      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3587.7746495844754      );
  id8 -> SetBinError( xbin,    25.901413021860719      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3233.6758450627408      );
  id8 -> SetBinError( xbin,    24.244162523347466      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2905.5881407473753      );
  id8 -> SetBinError( xbin,    22.800438766449393      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2695.7517140291311      );
  id8 -> SetBinError( xbin,    21.622991666967710      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2371.9105064453970      );
  id8 -> SetBinError( xbin,    20.086206396135484      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2221.1599636738329      );
  id8 -> SetBinError( xbin,    19.741209775292873      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2007.8415239617307      );
  id8 -> SetBinError( xbin,    18.279907319249880      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1813.7814289171340      );
  id8 -> SetBinError( xbin,    17.330456201945520      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1702.7214146003744      );
  id8 -> SetBinError( xbin,    16.327828738894450      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1543.7842917577473      );
  id8 -> SetBinError( xbin,    15.447143329312476      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1414.4218702237922      );
  id8 -> SetBinError( xbin,    14.752425294948942      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1298.5118673531140      );
  id8 -> SetBinError( xbin,    13.871868815071172      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1188.6268694936223      );
  id8 -> SetBinError( xbin,    13.106788497833936      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1094.3387340074876      );
  id8 -> SetBinError( xbin,    12.387669187473030      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    1018.2099795563565      );
  id8 -> SetBinError( xbin,    11.919757834818741      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    924.56198401570327      );
  id8 -> SetBinError( xbin,    11.229322026852669      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    853.02307603434519      );
  id8 -> SetBinError( xbin,    10.810968964285967      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
