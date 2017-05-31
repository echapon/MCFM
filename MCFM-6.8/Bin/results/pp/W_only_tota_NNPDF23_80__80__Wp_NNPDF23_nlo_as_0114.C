// Cross-section is:      2411333.9789951541 +/-          963.3995294796)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -79691.59589   -3.30%
//        GQB    |      -43595.22455   -1.81%
//        QG     |      -95924.77623   -3.98%
//        QBG    |      -45202.68495   -1.87%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1442560.38349   59.82%
//        QBQ    |     1238785.71339   51.37%

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
//Wp_NNPDF23_nlo_as_01            [runstring]  
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
//             NNPDF23            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//NNPDF23_nlo_as_0114.            [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//NNPDF23_nlo_as_0114.            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_NNPDF23_80__80__Wp_NNPDF23_nlo_as_0114.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.44514947776644570      );
  id1 -> SetBinError( xbin,   0.29319926671937274      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    506.17877727281967      );
  id1 -> SetBinError( xbin,    78.755122713483487      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    5435.0294468481552      );
  id1 -> SetBinError( xbin,    408.04717223498574      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    25628.452445953124      );
  id1 -> SetBinError( xbin,    988.89795003346353      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    65127.785360372742      );
  id1 -> SetBinError( xbin,    1468.2597851713417      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    117703.83989975504      );
  id1 -> SetBinError( xbin,    1548.7048788434752      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    173005.04397115647      );
  id1 -> SetBinError( xbin,    1810.6438908664375      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    229677.53596417970      );
  id1 -> SetBinError( xbin,    1994.5505492085858      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    272592.66831513663      );
  id1 -> SetBinError( xbin,    2068.3033979086995      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    305789.04413490469      );
  id1 -> SetBinError( xbin,    2139.3111536566148      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    337349.09806222259      );
  id1 -> SetBinError( xbin,    2163.1176018758820      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    359907.89827502426      );
  id1 -> SetBinError( xbin,    2182.6986941299151      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    372378.96529383567      );
  id1 -> SetBinError( xbin,    2202.1648645056789      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    384371.21826828737      );
  id1 -> SetBinError( xbin,    2243.1302435634570      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    390791.56273814128      );
  id1 -> SetBinError( xbin,    2219.2778759603134      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    398673.50376575463      );
  id1 -> SetBinError( xbin,    2721.4991950425956      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    401291.72902075248      );
  id1 -> SetBinError( xbin,    2743.6527338941169      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    407934.81172611384      );
  id1 -> SetBinError( xbin,    2215.8981708002952      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    416190.65378723823      );
  id1 -> SetBinError( xbin,    2251.2107396869828      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    416090.46904321975      );
  id1 -> SetBinError( xbin,    2210.8916877956917      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    423819.37244850205      );
  id1 -> SetBinError( xbin,    2234.0815025008856      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    416666.91635527625      );
  id1 -> SetBinError( xbin,    2227.1380127078464      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    422334.25379593158      );
  id1 -> SetBinError( xbin,    2218.7260256825853      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    430603.98428666894      );
  id1 -> SetBinError( xbin,    2389.3718385874122      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    430258.90116677294      );
  id1 -> SetBinError( xbin,    2564.5633038734163      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    434941.41286345804      );
  id1 -> SetBinError( xbin,    2468.2936403399190      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    437092.86117157491      );
  id1 -> SetBinError( xbin,    2344.2215491997617      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    445443.22844678967      );
  id1 -> SetBinError( xbin,    2333.4416222720074      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    445506.98334882292      );
  id1 -> SetBinError( xbin,    2341.2208273131469      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    449719.89976828633      );
  id1 -> SetBinError( xbin,    2367.9808936188451      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    444358.30680522940      );
  id1 -> SetBinError( xbin,    2421.6387829139949      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    444523.16777494404      );
  id1 -> SetBinError( xbin,    2447.8062263935194      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    411734.20931600803      );
  id1 -> SetBinError( xbin,    2466.2995583022021      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    384786.56097407429      );
  id1 -> SetBinError( xbin,    2421.7864082722267      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    334120.81975962571      );
  id1 -> SetBinError( xbin,    2359.7952844719748      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    266323.27286150696      );
  id1 -> SetBinError( xbin,    2196.4849375518097      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    190337.90357555842      );
  id1 -> SetBinError( xbin,    1964.5838254237894      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    110313.32122888486      );
  id1 -> SetBinError( xbin,    1649.0319490993054      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    43043.709842056334      );
  id1 -> SetBinError( xbin,    1197.3244839371007      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    9626.8696690923389      );
  id1 -> SetBinError( xbin,    572.91265496802862      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    873.83705788890347      );
  id1 -> SetBinError( xbin,    137.14081656865307      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.7185831311902433      );
  id1 -> SetBinError( xbin,   0.97869042874057499      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    824375.69452225149      );
  id2 -> SetBinError( xbin,    7455.8744035889194      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    791683.43787179189      );
  id2 -> SetBinError( xbin,    10639.767813976667      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    747844.33244440611      );
  id2 -> SetBinError( xbin,    6778.6407665642428      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    719595.59300302179      );
  id2 -> SetBinError( xbin,    6071.4442929282759      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    664454.12545884063      );
  id2 -> SetBinError( xbin,    5149.9865259753888      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    641027.30268474261      );
  id2 -> SetBinError( xbin,    5358.6643168817927      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    609557.60294512263      );
  id2 -> SetBinError( xbin,    4480.7312745071686      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    570375.97039607016      );
  id2 -> SetBinError( xbin,    4194.6548914338164      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    537934.01747965661      );
  id2 -> SetBinError( xbin,    3783.6213073638169      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    501180.16675563523      );
  id2 -> SetBinError( xbin,    3502.2644602479204      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    467519.36927479407      );
  id2 -> SetBinError( xbin,    3439.8922136993965      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    430365.97674372728      );
  id2 -> SetBinError( xbin,    3170.8383207922097      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    395431.11523925647      );
  id2 -> SetBinError( xbin,    2752.9629461323889      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    366768.13444976968      );
  id2 -> SetBinError( xbin,    2900.0016281167150      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    333671.40360759932      );
  id2 -> SetBinError( xbin,    2376.5607786188602      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    301804.63785615325      );
  id2 -> SetBinError( xbin,    2672.3733649710020      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    274679.61696191825      );
  id2 -> SetBinError( xbin,    2245.4158876546990      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    243435.25587392753      );
  id2 -> SetBinError( xbin,    1615.9750544006174      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    217921.04604202311      );
  id2 -> SetBinError( xbin,    1612.7499819917589      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    196409.70289367076      );
  id2 -> SetBinError( xbin,    1399.5502649819955      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    173616.75347861613      );
  id2 -> SetBinError( xbin,    1402.5876696144524      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    156451.92428818627      );
  id2 -> SetBinError( xbin,    1871.3968834249824      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    132606.11117319699      );
  id2 -> SetBinError( xbin,    1003.6159218771880      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    116236.21092974731      );
  id2 -> SetBinError( xbin,    984.00225305437095      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    104382.20983025189      );
  id2 -> SetBinError( xbin,    932.41957440449028      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    91587.831433466810      );
  id2 -> SetBinError( xbin,    881.02191034120665      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    83550.826502524258      );
  id2 -> SetBinError( xbin,    842.72563170382682      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    76005.797034840434      );
  id2 -> SetBinError( xbin,    794.75696052514729      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    70601.766748756854      );
  id2 -> SetBinError( xbin,    689.78656463772950      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    69957.162274510061      );
  id2 -> SetBinError( xbin,    736.86358888253733      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    68835.956775290921      );
  id2 -> SetBinError( xbin,    666.99540778576727      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    72596.791038410040      );
  id2 -> SetBinError( xbin,    703.13220380997711      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    77799.800673663965      );
  id2 -> SetBinError( xbin,    926.59712955896987      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    84643.533472277282      );
  id2 -> SetBinError( xbin,    769.80313367222993      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    94547.015892047086      );
  id2 -> SetBinError( xbin,    858.04373401029250      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    108402.12833587549      );
  id2 -> SetBinError( xbin,    1029.1693395118618      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    120919.21176091685      );
  id2 -> SetBinError( xbin,    975.18835413223508      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    139622.06894220391      );
  id2 -> SetBinError( xbin,    1079.7841913232435      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    159821.67972044516      );
  id2 -> SetBinError( xbin,    1222.1513249810141      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    183542.50986498967      );
  id2 -> SetBinError( xbin,    1310.6330372877719      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    208029.96607294114      );
  id2 -> SetBinError( xbin,    1466.0412666748721      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    235076.76214387047      );
  id2 -> SetBinError( xbin,    1577.7947587177368      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    266484.38271569024      );
  id2 -> SetBinError( xbin,    2103.0577935229089      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    298117.11016798747      );
  id2 -> SetBinError( xbin,    1931.7384545608559      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    327490.83280632028      );
  id2 -> SetBinError( xbin,    2109.5084484280728      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    364061.80749769945      );
  id2 -> SetBinError( xbin,    2222.5171561093316      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    405023.14850292366      );
  id2 -> SetBinError( xbin,    2865.1210848638757      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    437103.75649323175      );
  id2 -> SetBinError( xbin,    2924.7736351457365      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    489823.93023073673      );
  id2 -> SetBinError( xbin,    5225.7137803328224      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    523307.48742408550      );
  id2 -> SetBinError( xbin,    3584.7794897958929      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    560136.27481443377      );
  id2 -> SetBinError( xbin,    3864.1207725848631      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    605526.29125856783      );
  id2 -> SetBinError( xbin,    6514.4457101331327      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    647015.96749767428      );
  id2 -> SetBinError( xbin,    5022.3333251305921      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    685247.96905815660      );
  id2 -> SetBinError( xbin,    5068.3313328542736      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    732130.25486374646      );
  id2 -> SetBinError( xbin,    5792.6592140930479      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    774072.05555409205      );
  id2 -> SetBinError( xbin,    6035.5826982279059      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    808137.89609622443      );
  id2 -> SetBinError( xbin,    6232.4346619183270      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    856491.73820198199      );
  id2 -> SetBinError( xbin,    7042.8127912311465      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    903716.36422434810      );
  id2 -> SetBinError( xbin,    7029.2972806637445      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    938394.92435633438      );
  id2 -> SetBinError( xbin,    7719.7432711802630      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    146799.06824918941      );
  id3 -> SetBinError( xbin,    1467.9210962055970      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    201338.17792742138      );
  id3 -> SetBinError( xbin,    1773.0462431010096      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    256135.40462493966      );
  id3 -> SetBinError( xbin,    2020.2024841042671      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    302482.64761648676      );
  id3 -> SetBinError( xbin,    2760.8866948790665      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    331400.20148316555      );
  id3 -> SetBinError( xbin,    2845.1501199969630      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    366039.97413762833      );
  id3 -> SetBinError( xbin,    2541.1578460296873      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    396156.24548241543      );
  id3 -> SetBinError( xbin,    2658.1146381785002      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    413601.71818858746      );
  id3 -> SetBinError( xbin,    2549.4226585479591      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    423085.17972058058      );
  id3 -> SetBinError( xbin,    2612.7401194459085      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    435929.13486277289      );
  id3 -> SetBinError( xbin,    2652.8287144643227      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    442924.39764335437      );
  id3 -> SetBinError( xbin,    2658.9869861571365      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    448368.34285264648      );
  id3 -> SetBinError( xbin,    2637.8794326047337      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    451982.48828871857      );
  id3 -> SetBinError( xbin,    2629.4848898656528      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    460076.29359539627      );
  id3 -> SetBinError( xbin,    2668.6138357865743      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    459158.07881531969      );
  id3 -> SetBinError( xbin,    2994.0625427875366      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    461366.82520989992      );
  id3 -> SetBinError( xbin,    3012.2449721426988      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    469261.32427984173      );
  id3 -> SetBinError( xbin,    2660.9940834225654      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    475984.17447910749      );
  id3 -> SetBinError( xbin,    2682.9849886247180      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    483860.97085501015      );
  id3 -> SetBinError( xbin,    2779.8923297584947      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    483263.62514504459      );
  id3 -> SetBinError( xbin,    2838.3561500872511      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    496165.60219419200      );
  id3 -> SetBinError( xbin,    2870.1834423272494      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    493038.48064602300      );
  id3 -> SetBinError( xbin,    2871.9006717619236      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    494063.67831697402      );
  id3 -> SetBinError( xbin,    2940.3284512091300      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    487855.17103377479      );
  id3 -> SetBinError( xbin,    3032.7384039769622      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    474308.52200356789      );
  id3 -> SetBinError( xbin,    2888.9289614656850      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    442427.39778504719      );
  id3 -> SetBinError( xbin,    2651.5723746398198      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    405059.11498867656      );
  id3 -> SetBinError( xbin,    2555.6190543437228      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    353057.52717441972      );
  id3 -> SetBinError( xbin,    2423.0949820821988      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    286252.24840821692      );
  id3 -> SetBinError( xbin,    2158.8362831849754      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    215435.42853733746      );
  id3 -> SetBinError( xbin,    1802.6042941126559      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    45202.648769543994      );
  id4 -> SetBinError( xbin,    1560.4823002810858      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    142744.53816350488      );
  id4 -> SetBinError( xbin,    2103.0990424307347      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    171316.62090957124      );
  id4 -> SetBinError( xbin,    2382.6548210434389      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    192430.32083827094      );
  id4 -> SetBinError( xbin,    2611.2573753161032      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    229510.87359889571      );
  id4 -> SetBinError( xbin,    3193.7778771760836      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    247592.85243697354      );
  id4 -> SetBinError( xbin,    3368.9455307944754      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    280685.79414787557      );
  id4 -> SetBinError( xbin,    3176.7735110889066      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    293558.97690571210      );
  id4 -> SetBinError( xbin,    3888.6043711940479      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    314354.63175456220      );
  id4 -> SetBinError( xbin,    4253.7304317576200      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    341660.87022986810      );
  id4 -> SetBinError( xbin,    4195.7932642804008      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    340342.06916277070      );
  id4 -> SetBinError( xbin,    4163.8138629808655      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    364673.23945514334      );
  id4 -> SetBinError( xbin,    3957.5433068046091      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    379696.53269542370      );
  id4 -> SetBinError( xbin,    4146.3078093188533      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    393470.53691205045      );
  id4 -> SetBinError( xbin,    4087.6996269905212      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    404637.71251503890      );
  id4 -> SetBinError( xbin,    3996.8667317465697      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    412997.74085937277      );
  id4 -> SetBinError( xbin,    4011.9202424966429      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    417831.29342290090      );
  id4 -> SetBinError( xbin,    4137.7938549016471      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    431012.83669855085      );
  id4 -> SetBinError( xbin,    4262.5993118911247      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    424972.59770182963      );
  id4 -> SetBinError( xbin,    4262.0551946605419      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    428153.65486568538      );
  id4 -> SetBinError( xbin,    4319.8376009107751      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    435889.99065070768      );
  id4 -> SetBinError( xbin,    4369.2386280668261      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    441978.94184711878      );
  id4 -> SetBinError( xbin,    4570.5165929717896      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    454163.94658718677      );
  id4 -> SetBinError( xbin,    4526.5671621829570      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    449509.04589879280      );
  id4 -> SetBinError( xbin,    4481.6852860578538      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    449165.22206646740      );
  id4 -> SetBinError( xbin,    4462.4189254127450      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    452387.72946496011      );
  id4 -> SetBinError( xbin,    4260.4436675878333      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    447166.32334123686      );
  id4 -> SetBinError( xbin,    4226.8901938932513      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    462944.96160802245      );
  id4 -> SetBinError( xbin,    4231.9548925208901      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    460751.39331980405      );
  id4 -> SetBinError( xbin,    4570.2327014574648      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    458291.77814612794      );
  id4 -> SetBinError( xbin,    4703.3714240354957      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    462355.54611148621      );
  id4 -> SetBinError( xbin,    4270.6072344976355      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    457142.22613720701      );
  id4 -> SetBinError( xbin,    4402.8910716102328      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    470246.12677484634      );
  id4 -> SetBinError( xbin,    4488.7694056893342      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    465816.18089132319      );
  id4 -> SetBinError( xbin,    4254.2070815021170      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    481734.26583552855      );
  id4 -> SetBinError( xbin,    4379.0189576519533      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    471365.96880752046      );
  id4 -> SetBinError( xbin,    4406.4694686827115      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    476496.01937265880      );
  id4 -> SetBinError( xbin,    4371.3170905185616      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    480089.65949489502      );
  id4 -> SetBinError( xbin,    4300.8979903654035      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    484465.46304828342      );
  id4 -> SetBinError( xbin,    4434.1927279437487      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    488278.13637743704      );
  id4 -> SetBinError( xbin,    4547.1072524735637      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    486876.79006936797      );
  id4 -> SetBinError( xbin,    4509.7299215122475      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    487725.07649987342      );
  id4 -> SetBinError( xbin,    4719.9907426245836      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    497411.93048601109      );
  id4 -> SetBinError( xbin,    4612.1476374588210      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    498557.89379582752      );
  id4 -> SetBinError( xbin,    4682.5399192633131      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    490362.36279936705      );
  id4 -> SetBinError( xbin,    4685.4457780679122      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    498533.08396865363      );
  id4 -> SetBinError( xbin,    4451.7442704858549      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    485421.89394742961      );
  id4 -> SetBinError( xbin,    4485.6469956820974      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    496401.72710771050      );
  id4 -> SetBinError( xbin,    4493.9916270528347      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    481315.88249941869      );
  id4 -> SetBinError( xbin,    4462.4804495180242      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    471804.27381051745      );
  id4 -> SetBinError( xbin,    5366.3276226754824      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    469219.02909559733      );
  id4 -> SetBinError( xbin,    5289.6801201635408      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    441264.99634147133      );
  id4 -> SetBinError( xbin,    4295.5184331784885      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    432586.66597346286      );
  id4 -> SetBinError( xbin,    4555.7074934584998      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    407263.33625170263      );
  id4 -> SetBinError( xbin,    4332.5906375104314      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    388199.46449729276      );
  id4 -> SetBinError( xbin,    3955.9543453161955      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    356791.74233740801      );
  id4 -> SetBinError( xbin,    3881.3403177271589      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    43035.519409243076      );
  id5 -> SetBinError( xbin,    413.06693603767042      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    92537.398184420133      );
  id5 -> SetBinError( xbin,    553.88226895438413      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    103091.91594239460      );
  id5 -> SetBinError( xbin,    643.06008857756296      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    111287.77813494849      );
  id5 -> SetBinError( xbin,    730.35060041086092      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    122655.65527842185      );
  id5 -> SetBinError( xbin,    791.57274666299372      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    137718.31869942191      );
  id5 -> SetBinError( xbin,    817.70461172941236      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    155517.11688620225      );
  id5 -> SetBinError( xbin,    933.45307469597708      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    150269.78872758694      );
  id5 -> SetBinError( xbin,    1171.0952471956614      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    116776.57086198349      );
  id5 -> SetBinError( xbin,    918.68861940904389      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    57361.963664708310      );
  id5 -> SetBinError( xbin,    269.15680728364833      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    30173.943513247621      );
  id5 -> SetBinError( xbin,    159.73601451403258      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    18927.046947704661      );
  id5 -> SetBinError( xbin,    115.13354624371992      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13181.231698905229      );
  id5 -> SetBinError( xbin,    91.046662303267553      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9634.0478901070110      );
  id5 -> SetBinError( xbin,    69.883821475061950      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7042.1062059587366      );
  id5 -> SetBinError( xbin,    158.97283398237886      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5926.5882774623606      );
  id5 -> SetBinError( xbin,    155.81278362790033      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4540.9937404571110      );
  id5 -> SetBinError( xbin,    54.210928282753358      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3741.3582269004055      );
  id5 -> SetBinError( xbin,    52.587848397503862      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2971.0736006144812      );
  id5 -> SetBinError( xbin,    37.547278498468827      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2553.7898403260060      );
  id5 -> SetBinError( xbin,    34.294965326484920      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2068.4787230783963      );
  id5 -> SetBinError( xbin,    31.755941121751288      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1727.0450134178309      );
  id5 -> SetBinError( xbin,    29.341495884626912      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1522.1195068727131      );
  id5 -> SetBinError( xbin,    30.172054688059998      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1292.8543544113977      );
  id5 -> SetBinError( xbin,    25.998333535948262      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1095.5724562853500      );
  id5 -> SetBinError( xbin,    23.574792822104982      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    966.38997259394603      );
  id5 -> SetBinError( xbin,    21.643744402190062      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    853.37879338906623      );
  id5 -> SetBinError( xbin,    23.628090174951303      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    712.14019955323772      );
  id5 -> SetBinError( xbin,    22.313319448983552      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    629.96761987804894      );
  id5 -> SetBinError( xbin,    15.886103852679595      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    586.41685250620856      );
  id5 -> SetBinError( xbin,    14.712278181997055      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    494.83483712751399      );
  id5 -> SetBinError( xbin,    11.747310635034184      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    433.42234111125663      );
  id5 -> SetBinError( xbin,    12.218579527727618      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    389.00386091547307      );
  id5 -> SetBinError( xbin,    10.229743811776784      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    357.68246949996353      );
  id5 -> SetBinError( xbin,    9.5963301520850841      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    304.75762059230976      );
  id5 -> SetBinError( xbin,    11.356450665605035      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    265.00256677529859      );
  id5 -> SetBinError( xbin,    14.430702870684057      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    280.90787329478582      );
  id5 -> SetBinError( xbin,    13.554933835081719      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    223.58247175542863      );
  id5 -> SetBinError( xbin,    8.4383109791738011      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2883.5139452286380      );
  id6 -> SetBinError( xbin,    53.302926076731872      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9185.3313615176430      );
  id6 -> SetBinError( xbin,    98.203133426398864      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    18631.282866850845      );
  id6 -> SetBinError( xbin,    144.92443470784150      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33108.026039640907      );
  id6 -> SetBinError( xbin,    194.06740579815778      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    54124.654416829791      );
  id6 -> SetBinError( xbin,    239.93049769654345      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    83715.298055916675      );
  id6 -> SetBinError( xbin,    281.78620493057934      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    128140.68612323103      );
  id6 -> SetBinError( xbin,    338.59896514524542      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    178633.91325183809      );
  id6 -> SetBinError( xbin,    405.48171061094172      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    69656.854888292699      );
  id6 -> SetBinError( xbin,    286.22231326770321      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    23533.626564912127      );
  id6 -> SetBinError( xbin,    186.67856162788081      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    8904.0968160622542      );
  id6 -> SetBinError( xbin,    126.63779680452133      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3335.1196891397312      );
  id6 -> SetBinError( xbin,    84.280492120310782      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11480.468319439446      );
  id7 -> SetBinError( xbin,    138.83107546146812      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    14961.386596119090      );
  id7 -> SetBinError( xbin,    161.89201277215329      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    18884.482981060504      );
  id7 -> SetBinError( xbin,    180.08684281421915      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23148.874241514382      );
  id7 -> SetBinError( xbin,    204.91637084370268      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    27907.188514519035      );
  id7 -> SetBinError( xbin,    228.43790370927522      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    32089.555714052014      );
  id7 -> SetBinError( xbin,    247.28254317067109      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    36365.696285746752      );
  id7 -> SetBinError( xbin,    267.63751917552594      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    40273.730702620924      );
  id7 -> SetBinError( xbin,    284.09033861956823      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    44517.363436217041      );
  id7 -> SetBinError( xbin,    306.61596240454747      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    48329.313047525269      );
  id7 -> SetBinError( xbin,    322.30823005547683      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    51105.275151435897      );
  id7 -> SetBinError( xbin,    336.23391301439523      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    53976.762573231470      );
  id7 -> SetBinError( xbin,    347.53484694010655      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    55604.503109940088      );
  id7 -> SetBinError( xbin,    356.32241563344928      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    58175.741654943049      );
  id7 -> SetBinError( xbin,    366.29436676596845      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59643.886628877583      );
  id7 -> SetBinError( xbin,    372.39065912729995      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    59129.065376031147      );
  id7 -> SetBinError( xbin,    367.06870388413870      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    59460.316401454380      );
  id7 -> SetBinError( xbin,    366.59693667901837      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    59506.638639953897      );
  id7 -> SetBinError( xbin,    364.35002717916728      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    58109.356173421489      );
  id7 -> SetBinError( xbin,    357.44740512873796      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    56706.121705662415      );
  id7 -> SetBinError( xbin,    348.43815285676931      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    53823.832356018844      );
  id7 -> SetBinError( xbin,    334.19169056469985      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    50467.512751758906      );
  id7 -> SetBinError( xbin,    319.79608898922180      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    48137.293145656964      );
  id7 -> SetBinError( xbin,    309.81009507179471      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    43672.658322344352      );
  id7 -> SetBinError( xbin,    286.59519269429751      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    39115.008405711742      );
  id7 -> SetBinError( xbin,    265.25491122641552      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    34771.452734347135      );
  id7 -> SetBinError( xbin,    246.98012653830818      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    30072.664518776131      );
  id7 -> SetBinError( xbin,    226.69863945128546      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    24914.346679406866      );
  id7 -> SetBinError( xbin,    202.75521252964296      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    20445.337060310980      );
  id7 -> SetBinError( xbin,    186.02596424837935      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    16227.958790315823      );
  id7 -> SetBinError( xbin,    168.23513059014064      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    6889.2481377596796      );
  id8 -> SetBinError( xbin,    42.516589353213078      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12291.290518000958      );
  id8 -> SetBinError( xbin,    56.147039895392183      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    10789.060603120432      );
  id8 -> SetBinError( xbin,    51.798988063829363      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9390.7310028590346      );
  id8 -> SetBinError( xbin,    47.677576516935083      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8291.0517336485555      );
  id8 -> SetBinError( xbin,    43.811784446636651      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7239.8209304111097      );
  id8 -> SetBinError( xbin,    40.428697959265648      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6417.6687371375001      );
  id8 -> SetBinError( xbin,    37.643169154437352      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5612.8578136259966      );
  id8 -> SetBinError( xbin,    34.444318390570970      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5023.3246519891300      );
  id8 -> SetBinError( xbin,    32.103075097638282      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4480.7287352053218      );
  id8 -> SetBinError( xbin,    30.343854455577240      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3939.2198285986315      );
  id8 -> SetBinError( xbin,    27.566590094956290      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3509.3337651581955      );
  id8 -> SetBinError( xbin,    25.724457218162613      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3175.6658004868782      );
  id8 -> SetBinError( xbin,    24.220683709817962      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2878.5212055842439      );
  id8 -> SetBinError( xbin,    22.860345957993818      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2610.7955852083760      );
  id8 -> SetBinError( xbin,    21.446393044438015      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2387.2799517173175      );
  id8 -> SetBinError( xbin,    20.209581589687872      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2149.8816745399868      );
  id8 -> SetBinError( xbin,    18.983582059138609      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1926.3525560473818      );
  id8 -> SetBinError( xbin,    17.824027597257999      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1797.1232405517146      );
  id8 -> SetBinError( xbin,    16.994265886447650      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1615.6218069000952      );
  id8 -> SetBinError( xbin,    15.851341436563198      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1498.4092220932055      );
  id8 -> SetBinError( xbin,    15.291259227292699      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1346.8954761587129      );
  id8 -> SetBinError( xbin,    14.419073782452177      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1261.3511989101526      );
  id8 -> SetBinError( xbin,    13.744149604793284      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1168.1108662729064      );
  id8 -> SetBinError( xbin,    13.111919658427182      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1067.7774724654300      );
  id8 -> SetBinError( xbin,    12.453955903465676      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    970.45244788508307      );
  id8 -> SetBinError( xbin,    11.603996853458820      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    901.08480221904665      );
  id8 -> SetBinError( xbin,    11.373664767979484      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    828.38553262307687      );
  id8 -> SetBinError( xbin,    10.834585124356350      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
