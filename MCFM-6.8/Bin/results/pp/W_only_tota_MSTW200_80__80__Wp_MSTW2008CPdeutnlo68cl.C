// Cross-section is:      2488021.2963111373 +/-         1058.2170970077)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -83206.82156   -3.34%
//        GQB    |      -46695.29087   -1.88%
//        QG     |     -100778.65392   -4.05%
//        QBG    |      -47976.76317   -1.93%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1492804.54025   60.00%
//        QBQ    |     1279255.45393   51.42%

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
//Wp_MSTW2008CPdeutnlo            [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_MSTW200_80__80__Wp_MSTW2008CPdeutnlo68cl.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -9.8765884729607706E-002 );
  id1 -> SetBinError( xbin,   0.37322028077735775      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    489.03056917565328      );
  id1 -> SetBinError( xbin,    73.495347453854706      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4709.9802333732132      );
  id1 -> SetBinError( xbin,    373.16507827472697      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    25137.516069934107      );
  id1 -> SetBinError( xbin,    1031.8461221879397      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    62724.834313597174      );
  id1 -> SetBinError( xbin,    1479.3225527679870      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    119805.18399914232      );
  id1 -> SetBinError( xbin,    1646.8209801784367      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    175155.15893273870      );
  id1 -> SetBinError( xbin,    1926.8164152256022      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    234635.48552950300      );
  id1 -> SetBinError( xbin,    2347.9291598439963      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    278813.23077622493      );
  id1 -> SetBinError( xbin,    2169.7664706166361      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    313109.24784874608      );
  id1 -> SetBinError( xbin,    2269.3348688031761      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    348842.89577059314      );
  id1 -> SetBinError( xbin,    2341.3328728059887      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    369935.88154505478      );
  id1 -> SetBinError( xbin,    2367.4515599017127      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    388650.21084319201      );
  id1 -> SetBinError( xbin,    2369.7515118223650      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    401328.59021862911      );
  id1 -> SetBinError( xbin,    2338.7821689930465      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    405095.11632403982      );
  id1 -> SetBinError( xbin,    2362.4571638786238      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    410471.37766366825      );
  id1 -> SetBinError( xbin,    2393.9314806332186      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    416101.17966797028      );
  id1 -> SetBinError( xbin,    2369.2722370533074      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    422124.38643069874      );
  id1 -> SetBinError( xbin,    2322.0664751121149      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    427066.74158838531      );
  id1 -> SetBinError( xbin,    2336.0394244727941      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    428855.89522458054      );
  id1 -> SetBinError( xbin,    2363.0295561632715      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    439351.42250798777      );
  id1 -> SetBinError( xbin,    2385.6628600858835      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    431643.52041437646      );
  id1 -> SetBinError( xbin,    2357.7876865950179      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    437514.94961543469      );
  id1 -> SetBinError( xbin,    2349.0277438043204      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    445060.12923715834      );
  id1 -> SetBinError( xbin,    2387.5119278671978      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    447504.69827707647      );
  id1 -> SetBinError( xbin,    2395.4075674600222      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    451945.66094850434      );
  id1 -> SetBinError( xbin,    2433.5043303258581      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    455326.36708686169      );
  id1 -> SetBinError( xbin,    2534.0844675226285      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    468235.53124694090      );
  id1 -> SetBinError( xbin,    2563.3622215838791      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    468711.40528389416      );
  id1 -> SetBinError( xbin,    2569.7386882005735      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    465002.11819115106      );
  id1 -> SetBinError( xbin,    2546.0420578983362      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    464844.32062189496      );
  id1 -> SetBinError( xbin,    2549.3045670532965      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    454385.67799224047      );
  id1 -> SetBinError( xbin,    3159.3435587754711      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    426870.67084399518      );
  id1 -> SetBinError( xbin,    2533.5969707077170      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    392016.91574092669      );
  id1 -> SetBinError( xbin,    2523.5036915066012      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    338533.75497525209      );
  id1 -> SetBinError( xbin,    2464.5015599883750      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    269383.37482571433      );
  id1 -> SetBinError( xbin,    2291.6502477182430      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    191271.98823772056      );
  id1 -> SetBinError( xbin,    2001.3550116024212      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    107978.24385822238      );
  id1 -> SetBinError( xbin,    1732.3024273822114      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    42559.946940609138      );
  id1 -> SetBinError( xbin,    1255.6088914790475      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    9849.9275549955655      );
  id1 -> SetBinError( xbin,    587.24173288613440      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    804.48413517727931      );
  id1 -> SetBinError( xbin,    114.85594832062637      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.5198758586003169      );
  id1 -> SetBinError( xbin,    1.0467357830799069      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    873936.48344485578      );
  id2 -> SetBinError( xbin,    9597.9668896243002      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    840957.11972152465      );
  id2 -> SetBinError( xbin,    16818.939111157917      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    807187.74674409139      );
  id2 -> SetBinError( xbin,    9022.0294176164116      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    773431.28260663222      );
  id2 -> SetBinError( xbin,    7756.3695381680318      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    721855.64530669013      );
  id2 -> SetBinError( xbin,    6554.8642851098975      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    694499.91977214580      );
  id2 -> SetBinError( xbin,    6754.4717300876246      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    640274.50109711883      );
  id2 -> SetBinError( xbin,    5874.5947252505357      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    595642.68275320623      );
  id2 -> SetBinError( xbin,    4504.3515936340782      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    574095.58583749412      );
  id2 -> SetBinError( xbin,    4426.2550523917826      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    528527.43371393613      );
  id2 -> SetBinError( xbin,    4419.9031748923062      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    501315.56744130136      );
  id2 -> SetBinError( xbin,    4337.5164704270728      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    464138.31241473858      );
  id2 -> SetBinError( xbin,    3968.7009567097543      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    430168.07723435241      );
  id2 -> SetBinError( xbin,    8946.4987924782163      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    386821.37672836735      );
  id2 -> SetBinError( xbin,    2955.2214072505035      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    355347.57970985270      );
  id2 -> SetBinError( xbin,    3822.1528793273405      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    327481.02093669144      );
  id2 -> SetBinError( xbin,    3601.0946019985895      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    290114.02025498333      );
  id2 -> SetBinError( xbin,    2412.6781033262719      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    260131.53102209012      );
  id2 -> SetBinError( xbin,    1972.0016595340580      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    232181.42147296519      );
  id2 -> SetBinError( xbin,    2073.2720889463581      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    204908.33876925221      );
  id2 -> SetBinError( xbin,    1750.4786072311852      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    181994.35400822095      );
  id2 -> SetBinError( xbin,    1479.3749524623181      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    159354.51068776206      );
  id2 -> SetBinError( xbin,    1336.8218728687411      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    141939.35273930922      );
  id2 -> SetBinError( xbin,    1322.5461412791083      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    125287.52901228951      );
  id2 -> SetBinError( xbin,    1242.4350320298606      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    108319.22204002248      );
  id2 -> SetBinError( xbin,    1062.7186947807770      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    97019.030368307023      );
  id2 -> SetBinError( xbin,    976.30787675929253      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    88995.227370087756      );
  id2 -> SetBinError( xbin,    931.75404541061039      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    80576.301260494933      );
  id2 -> SetBinError( xbin,    914.88317458702090      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    76457.576248782614      );
  id2 -> SetBinError( xbin,    1016.4268755021011      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    75621.837872141346      );
  id2 -> SetBinError( xbin,    907.41264468942529      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    74063.704987568213      );
  id2 -> SetBinError( xbin,    825.67114212176932      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    75785.199004863025      );
  id2 -> SetBinError( xbin,    850.83561293013827      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    81356.723984028242      );
  id2 -> SetBinError( xbin,    1090.9389602068190      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    91336.192094790793      );
  id2 -> SetBinError( xbin,    1159.5530720115580      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    99997.639555614602      );
  id2 -> SetBinError( xbin,    1109.7244120277974      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    111837.71992420928      );
  id2 -> SetBinError( xbin,    1062.0158043474878      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    131461.75127328571      );
  id2 -> SetBinError( xbin,    1341.5375248452422      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    148064.14101332994      );
  id2 -> SetBinError( xbin,    1319.7826136718966      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    166688.67541060454      );
  id2 -> SetBinError( xbin,    1358.4766416761483      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    187883.15286315960      );
  id2 -> SetBinError( xbin,    1460.2355888317111      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    220011.35140537514      );
  id2 -> SetBinError( xbin,    1985.3991165650584      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    248491.34468721424      );
  id2 -> SetBinError( xbin,    2047.0642667042771      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    280697.78697860189      );
  id2 -> SetBinError( xbin,    2308.6967376090747      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    310619.53440847929      );
  id2 -> SetBinError( xbin,    2098.4595063642632      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    350270.98101307789      );
  id2 -> SetBinError( xbin,    2795.6963308710820      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    394396.52017405111      );
  id2 -> SetBinError( xbin,    3524.9199939046584      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    423151.04746711702      );
  id2 -> SetBinError( xbin,    3008.4572129157236      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    469830.80398815079      );
  id2 -> SetBinError( xbin,    3329.0553896802285      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    505929.93054250046      );
  id2 -> SetBinError( xbin,    3337.9420889829798      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    554536.92889447184      );
  id2 -> SetBinError( xbin,    6083.7426368117040      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    596093.30023981340      );
  id2 -> SetBinError( xbin,    4137.7576026174365      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    638746.31759500201      );
  id2 -> SetBinError( xbin,    5318.5672984045987      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    695223.67392871354      );
  id2 -> SetBinError( xbin,    5437.9103806358971      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    742800.78852446179      );
  id2 -> SetBinError( xbin,    8018.9132106751649      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    780573.05898909084      );
  id2 -> SetBinError( xbin,    6414.9996396781698      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    820192.79204912402      );
  id2 -> SetBinError( xbin,    6841.3704608184098      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    855919.87882354751      );
  id2 -> SetBinError( xbin,    7142.7225298668800      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    915547.27099611470      );
  id2 -> SetBinError( xbin,    7694.0013007011248      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    949919.63859296672      );
  id2 -> SetBinError( xbin,    7959.7993116500720      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1029726.7702600282      );
  id2 -> SetBinError( xbin,    12416.334948945898      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    153349.48498114877      );
  id3 -> SetBinError( xbin,    1772.0398941122269      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    206914.83988965105      );
  id3 -> SetBinError( xbin,    1914.3003421373405      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    266195.71749764006      );
  id3 -> SetBinError( xbin,    2128.7898474897188      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    313081.06374240236      );
  id3 -> SetBinError( xbin,    2366.1885206861953      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    348574.03309539863      );
  id3 -> SetBinError( xbin,    2549.9029803524727      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    380568.26882496692      );
  id3 -> SetBinError( xbin,    2639.5287733394389      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    412139.11735827499      );
  id3 -> SetBinError( xbin,    2767.4226755045102      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    426334.23007733945      );
  id3 -> SetBinError( xbin,    2753.7285955565681      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    443011.27047578100      );
  id3 -> SetBinError( xbin,    2939.6211059642919      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    446448.39064904436      );
  id3 -> SetBinError( xbin,    2893.1722043549712      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    455118.85688953794      );
  id3 -> SetBinError( xbin,    2836.5478520208944      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    460408.75378300075      );
  id3 -> SetBinError( xbin,    2896.6911821211261      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    459439.63034577278      );
  id3 -> SetBinError( xbin,    2883.0723243567463      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    472143.39812208537      );
  id3 -> SetBinError( xbin,    2864.9450806743816      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    469989.84605936607      );
  id3 -> SetBinError( xbin,    3574.0586198449178      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    469855.91393500438      );
  id3 -> SetBinError( xbin,    3542.7860083872561      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    481913.77382393827      );
  id3 -> SetBinError( xbin,    2903.5610920488684      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    485705.84800426220      );
  id3 -> SetBinError( xbin,    2940.9953571897236      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    495943.38253973518      );
  id3 -> SetBinError( xbin,    3079.4998657546794      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    502987.91938388231      );
  id3 -> SetBinError( xbin,    3163.3519380654702      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    506612.99910559948      );
  id3 -> SetBinError( xbin,    3216.9192088166928      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    510966.77265873499      );
  id3 -> SetBinError( xbin,    2974.0454042119763      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    513350.07129078836      );
  id3 -> SetBinError( xbin,    3806.6309796044902      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    505929.19929426792      );
  id3 -> SetBinError( xbin,    3755.6597359457542      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    488756.95677647350      );
  id3 -> SetBinError( xbin,    3089.6068912470828      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    461785.00784269610      );
  id3 -> SetBinError( xbin,    3020.0705324688697      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    418703.69603918953      );
  id3 -> SetBinError( xbin,    2778.2429906175862      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    364143.74372469453      );
  id3 -> SetBinError( xbin,    2572.4245539617091      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    298243.44173955033      );
  id3 -> SetBinError( xbin,    2327.4197262946013      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    223232.84524510906      );
  id3 -> SetBinError( xbin,    2470.5605161706130      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    47571.031413676683      );
  id4 -> SetBinError( xbin,    2156.0478286978910      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    146514.64979323477      );
  id4 -> SetBinError( xbin,    2240.2223136143002      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    178267.07352240954      );
  id4 -> SetBinError( xbin,    2549.8845459315835      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    199095.31222021356      );
  id4 -> SetBinError( xbin,    2921.7401458503609      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    233269.77650249732      );
  id4 -> SetBinError( xbin,    3252.8651584171594      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    260609.93131650789      );
  id4 -> SetBinError( xbin,    3448.0030692851765      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    294338.60208193801      );
  id4 -> SetBinError( xbin,    3598.1760374261466      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    305668.95800313115      );
  id4 -> SetBinError( xbin,    3636.3035541423610      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    331753.38120642211      );
  id4 -> SetBinError( xbin,    3760.6117635122860      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    341875.67706932104      );
  id4 -> SetBinError( xbin,    3912.2544892499941      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    368545.00490658678      );
  id4 -> SetBinError( xbin,    4774.6681657179206      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    376415.72563540429      );
  id4 -> SetBinError( xbin,    5042.3741796918002      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    398988.21382302349      );
  id4 -> SetBinError( xbin,    4541.2702627401895      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    404882.02093227819      );
  id4 -> SetBinError( xbin,    4573.0154624961488      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    419154.60500000732      );
  id4 -> SetBinError( xbin,    4766.9152278309884      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    427641.75321210030      );
  id4 -> SetBinError( xbin,    4736.2064735331287      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    431044.25875117164      );
  id4 -> SetBinError( xbin,    4949.8088746968187      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    448479.42451937555      );
  id4 -> SetBinError( xbin,    5883.8785674736109      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    437968.94430610095      );
  id4 -> SetBinError( xbin,    5179.9946084628627      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    451730.96822336206      );
  id4 -> SetBinError( xbin,    4483.2507286974778      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    445243.39393722726      );
  id4 -> SetBinError( xbin,    4564.1768218097795      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    455839.98294431809      );
  id4 -> SetBinError( xbin,    4548.6246792480542      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    460491.77035644557      );
  id4 -> SetBinError( xbin,    4525.4011156420938      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    458328.15413603320      );
  id4 -> SetBinError( xbin,    4667.2283156207850      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    463503.88752441201      );
  id4 -> SetBinError( xbin,    4642.0618017380912      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    462866.35026875709      );
  id4 -> SetBinError( xbin,    4590.4274714167450      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    454845.70441745967      );
  id4 -> SetBinError( xbin,    4472.7044773187054      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    468622.00035627320      );
  id4 -> SetBinError( xbin,    4566.7607091999807      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    469307.61269941623      );
  id4 -> SetBinError( xbin,    4674.9982249962877      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    469867.74219223729      );
  id4 -> SetBinError( xbin,    4806.0108877900975      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    473884.53984454880      );
  id4 -> SetBinError( xbin,    4768.5152469528393      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    472531.12656720105      );
  id4 -> SetBinError( xbin,    4578.9626560095221      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    475475.70677207870      );
  id4 -> SetBinError( xbin,    4536.9220045732509      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    473931.39206056623      );
  id4 -> SetBinError( xbin,    4637.8516802948479      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    491074.02270680334      );
  id4 -> SetBinError( xbin,    4749.1072103047354      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    485199.39906414581      );
  id4 -> SetBinError( xbin,    4736.0734924148092      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    490831.73169393744      );
  id4 -> SetBinError( xbin,    4751.9371100590452      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    495150.00657632243      );
  id4 -> SetBinError( xbin,    4709.1892687331328      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    500042.86422115332      );
  id4 -> SetBinError( xbin,    4993.0445967934820      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    498046.17630801484      );
  id4 -> SetBinError( xbin,    5231.7533951093947      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    505979.45229159389      );
  id4 -> SetBinError( xbin,    5573.0373877663951      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    507062.68148216489      );
  id4 -> SetBinError( xbin,    5072.3077194703264      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    505458.75086781330      );
  id4 -> SetBinError( xbin,    5215.3824998016235      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    518618.48584150645      );
  id4 -> SetBinError( xbin,    5494.5983403349210      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    507003.97295672860      );
  id4 -> SetBinError( xbin,    5418.7045381241132      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    511314.66023566714      );
  id4 -> SetBinError( xbin,    5215.5311599841625      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    511727.15632646496      );
  id4 -> SetBinError( xbin,    5121.7966795525099      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    503899.15044779342      );
  id4 -> SetBinError( xbin,    4952.2693203346835      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    509358.51964080083      );
  id4 -> SetBinError( xbin,    4948.5565582631225      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    492043.46270092402      );
  id4 -> SetBinError( xbin,    4993.7050583128730      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    479074.66096501326      );
  id4 -> SetBinError( xbin,    4831.7243733010664      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    462128.35831274494      );
  id4 -> SetBinError( xbin,    4790.8608820803638      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    452159.32025034493      );
  id4 -> SetBinError( xbin,    4695.0469814450507      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    424504.52788006136      );
  id4 -> SetBinError( xbin,    4664.6792026503263      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    395277.37458757585      );
  id4 -> SetBinError( xbin,    4455.8287045037441      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    364586.83849666634      );
  id4 -> SetBinError( xbin,    4122.4633499878109      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    43597.789950308885      );
  id5 -> SetBinError( xbin,    491.64788001913502      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    95907.722647669594      );
  id5 -> SetBinError( xbin,    643.85241839151047      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    105314.58212993499      );
  id5 -> SetBinError( xbin,    921.05820996453940      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    114174.99820973031      );
  id5 -> SetBinError( xbin,    960.91098034203310      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    126870.46254382888      );
  id5 -> SetBinError( xbin,    885.54619379371002      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    141887.75327898122      );
  id5 -> SetBinError( xbin,    931.03971497680573      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    159385.77825813548      );
  id5 -> SetBinError( xbin,    1109.4657888214861      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    155528.99534307994      );
  id5 -> SetBinError( xbin,    1284.3992026139776      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    120640.42680371027      );
  id5 -> SetBinError( xbin,    1005.7743054947308      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    59518.622906794066      );
  id5 -> SetBinError( xbin,    491.53280757338308      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    31973.741966196896      );
  id5 -> SetBinError( xbin,    181.91159216236343      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19820.174378160667      );
  id5 -> SetBinError( xbin,    138.93349075686285      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13908.334656309145      );
  id5 -> SetBinError( xbin,    160.54590059484715      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    10013.314840563762      );
  id5 -> SetBinError( xbin,    149.49572592044419      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7624.6500852339177      );
  id5 -> SetBinError( xbin,    71.134115422616674      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5987.8227859939798      );
  id5 -> SetBinError( xbin,    82.694338132139578      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4726.8803303059858      );
  id5 -> SetBinError( xbin,    77.250866083081007      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3860.9620037814998      );
  id5 -> SetBinError( xbin,    46.103501266373918      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3169.2585026923816      );
  id5 -> SetBinError( xbin,    38.110847467795722      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2579.6732921415332      );
  id5 -> SetBinError( xbin,    37.839751143642914      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2205.2903126718829      );
  id5 -> SetBinError( xbin,    35.912977430354402      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1832.4282734549779      );
  id5 -> SetBinError( xbin,    33.190613541281905      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1573.2708094314407      );
  id5 -> SetBinError( xbin,    30.781286410943189      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1357.3860834741445      );
  id5 -> SetBinError( xbin,    26.844152600513667      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1158.4305158948173      );
  id5 -> SetBinError( xbin,    28.416969257018067      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1046.0724292450984      );
  id5 -> SetBinError( xbin,    26.274577722508258      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    894.38111580618738      );
  id5 -> SetBinError( xbin,    19.828107760368372      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    749.07572073393544      );
  id5 -> SetBinError( xbin,    21.039520661013285      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    651.58678937045966      );
  id5 -> SetBinError( xbin,    20.249157099188132      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    601.67944012165742      );
  id5 -> SetBinError( xbin,    18.667306707906938      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    512.47312039765688      );
  id5 -> SetBinError( xbin,    17.676960340381999      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    452.06270267451629      );
  id5 -> SetBinError( xbin,    14.159792347862940      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    427.97449531578604      );
  id5 -> SetBinError( xbin,    14.060101432185851      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    402.48326468256272      );
  id5 -> SetBinError( xbin,    18.713591336633094      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    316.31076572469084      );
  id5 -> SetBinError( xbin,    19.605015145486835      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    291.19168632681954      );
  id5 -> SetBinError( xbin,    15.227946337955649      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    286.65174586339054      );
  id5 -> SetBinError( xbin,    13.568816889289781      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    222.14080610543272      );
  id5 -> SetBinError( xbin,    12.372070487552454      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2985.7330172573384      );
  id6 -> SetBinError( xbin,    60.786552557428621      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9644.9826649375882      );
  id6 -> SetBinError( xbin,    113.23590594632417      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19581.678241547179      );
  id6 -> SetBinError( xbin,    169.20473837114764      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    34525.301447308848      );
  id6 -> SetBinError( xbin,    227.11732100873920      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    56219.819941179740      );
  id6 -> SetBinError( xbin,    279.55198022890988      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    87533.640262878325      );
  id6 -> SetBinError( xbin,    332.33809578715329      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    133585.42904549671      );
  id6 -> SetBinError( xbin,    396.24930121375309      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    187047.53318114177      );
  id6 -> SetBinError( xbin,    478.96906649657745      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    73180.044035127023      );
  id6 -> SetBinError( xbin,    342.29897183942211      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24986.534249069351      );
  id6 -> SetBinError( xbin,    224.33779923028251      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    9381.0048045890999      );
  id6 -> SetBinError( xbin,    148.45966613709720      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3521.4261432042986      );
  id6 -> SetBinError( xbin,    99.479516426415202      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11895.216593464505      );
  id7 -> SetBinError( xbin,    162.13718107913809      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15795.751381653005      );
  id7 -> SetBinError( xbin,    186.69168696887101      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19327.368453078405      );
  id7 -> SetBinError( xbin,    207.97807827437518      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24608.679978055734      );
  id7 -> SetBinError( xbin,    244.07288000171334      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    29160.494983407669      );
  id7 -> SetBinError( xbin,    266.97577126405702      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33754.632367944563      );
  id7 -> SetBinError( xbin,    289.96677520527703      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37957.063080004060      );
  id7 -> SetBinError( xbin,    313.26441855526161      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    42496.991487320796      );
  id7 -> SetBinError( xbin,    341.34232823155509      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45965.886583512416      );
  id7 -> SetBinError( xbin,    360.70945458112482      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    50065.449771692831      );
  id7 -> SetBinError( xbin,    376.53514096635615      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    53612.152622338959      );
  id7 -> SetBinError( xbin,    400.06322949749341      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    56330.677026823025      );
  id7 -> SetBinError( xbin,    414.40791688874964      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58117.490818108054      );
  id7 -> SetBinError( xbin,    421.18107446547248      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    60700.269590637581      );
  id7 -> SetBinError( xbin,    430.68306759228608      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    61914.618013479914      );
  id7 -> SetBinError( xbin,    436.50623231588406      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    62667.115794346180      );
  id7 -> SetBinError( xbin,    441.56176449432866      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    61900.783720713254      );
  id7 -> SetBinError( xbin,    434.77088850924684      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    62084.594827112232      );
  id7 -> SetBinError( xbin,    431.78584725912276      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    60471.516215600939      );
  id7 -> SetBinError( xbin,    416.75616746557904      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    59431.682327886476      );
  id7 -> SetBinError( xbin,    410.15586673379801      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    57266.433259413825      );
  id7 -> SetBinError( xbin,    398.56726718540591      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    52936.371838334322      );
  id7 -> SetBinError( xbin,    373.56986972238593      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    49876.288290869990      );
  id7 -> SetBinError( xbin,    356.30541735306798      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    45832.078452008565      );
  id7 -> SetBinError( xbin,    342.72343646566361      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    41255.229340295620      );
  id7 -> SetBinError( xbin,    314.89748608609170      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    36591.572687698696      );
  id7 -> SetBinError( xbin,    286.13060142435546      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    31347.881752909641      );
  id7 -> SetBinError( xbin,    259.78889813430112      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    26328.057371087431      );
  id7 -> SetBinError( xbin,    238.71291709109221      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    21446.234027793205      );
  id7 -> SetBinError( xbin,    212.61100736551759      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    16729.928656765213      );
  id7 -> SetBinError( xbin,    189.19436938472816      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7278.3157446098703      );
  id8 -> SetBinError( xbin,    50.587752548222284      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12965.320660965332      );
  id8 -> SetBinError( xbin,    64.925624765971449      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    11227.864562008939      );
  id8 -> SetBinError( xbin,    59.460796224876333      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9741.7736476812624      );
  id8 -> SetBinError( xbin,    55.000367995311215      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8592.6821112100170      );
  id8 -> SetBinError( xbin,    51.491459345840433      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7619.4940315965359      );
  id8 -> SetBinError( xbin,    48.086578696828660      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6791.1876022146162      );
  id8 -> SetBinError( xbin,    44.726845888194852      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5943.0930395597825      );
  id8 -> SetBinError( xbin,    40.860709410262750      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5196.1028839872861      );
  id8 -> SetBinError( xbin,    37.866802767277491      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4665.7841181625527      );
  id8 -> SetBinError( xbin,    35.758815833604515      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4169.1671913022301      );
  id8 -> SetBinError( xbin,    33.039388432071995      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3727.0522232754647      );
  id8 -> SetBinError( xbin,    30.550918005838209      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3277.8409971143155      );
  id8 -> SetBinError( xbin,    27.838265238936977      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2978.6758064103960      );
  id8 -> SetBinError( xbin,    26.341459109147628      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2773.1160404401653      );
  id8 -> SetBinError( xbin,    25.797814035244603      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2440.0514528628260      );
  id8 -> SetBinError( xbin,    24.012829429432291      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2243.3586784116660      );
  id8 -> SetBinError( xbin,    22.684699529060264      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2049.0769521067446      );
  id8 -> SetBinError( xbin,    21.659615755565593      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1869.0643321230900      );
  id8 -> SetBinError( xbin,    20.623702142168401      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1721.3286876050579      );
  id8 -> SetBinError( xbin,    19.595105863819352      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1555.3893292843211      );
  id8 -> SetBinError( xbin,    18.728336422378153      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1429.3273701693588      );
  id8 -> SetBinError( xbin,    17.570168397768832      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1291.8486937099922      );
  id8 -> SetBinError( xbin,    16.074898702004042      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1204.5421359302661      );
  id8 -> SetBinError( xbin,    15.828638751287629      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1062.5717922472945      );
  id8 -> SetBinError( xbin,    14.838235745863125      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    1032.5570694545167      );
  id8 -> SetBinError( xbin,    14.568599680850440      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    939.58179850248916      );
  id8 -> SetBinError( xbin,    13.716712399043972      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    866.23008458810023      );
  id8 -> SetBinError( xbin,    13.264085013113489      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
