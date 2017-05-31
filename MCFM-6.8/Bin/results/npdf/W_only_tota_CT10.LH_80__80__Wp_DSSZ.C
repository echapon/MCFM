// Cross-section is:      2360428.5987297515 +/-          972.6526594723)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -80822.96175   -3.42%
//        GQB    |      -43722.74559   -1.85%
//        QG     |      -97842.98695   -4.15%
//        QBG    |      -47326.53985   -2.00%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1376472.05672   58.31%
//        QBQ    |     1259547.25325   53.36%

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
//Wp_DSSZ                         [runstring]  
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
//             CT10.LH            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//CT10.LHpdf                      [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//CT10.LHpdf                      [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wp_DSSZ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    1.6625355339499273      );
  id1 -> SetBinError( xbin,   0.90217234905326671      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    578.23456924770755      );
  id1 -> SetBinError( xbin,    80.080575755264391      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    5354.2242582809713      );
  id1 -> SetBinError( xbin,    406.31408028631125      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    24965.817741257120      );
  id1 -> SetBinError( xbin,    943.89929703935093      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    62110.556873636488      );
  id1 -> SetBinError( xbin,    1354.7518691494058      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    116968.32488641418      );
  id1 -> SetBinError( xbin,    1546.2898768937573      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    174056.38563583852      );
  id1 -> SetBinError( xbin,    1833.8220704411888      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    234007.58446346014      );
  id1 -> SetBinError( xbin,    1987.6590851662415      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    278850.91325358034      );
  id1 -> SetBinError( xbin,    2108.3408649725789      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    321302.90459550091      );
  id1 -> SetBinError( xbin,    2194.7279637396136      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    353561.84283206705      );
  id1 -> SetBinError( xbin,    2276.3057577787358      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    378846.03538618179      );
  id1 -> SetBinError( xbin,    2247.5663998156101      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    391480.99668014981      );
  id1 -> SetBinError( xbin,    2242.7292852653563      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    403266.43075472134      );
  id1 -> SetBinError( xbin,    2253.2107818151435      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    406323.90960786032      );
  id1 -> SetBinError( xbin,    2241.6994500317346      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    410370.04387976252      );
  id1 -> SetBinError( xbin,    2214.9985639268421      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    408678.58920507540      );
  id1 -> SetBinError( xbin,    2413.0268557227387      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    414201.97036454751      );
  id1 -> SetBinError( xbin,    2226.8577947499157      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    413206.18376378354      );
  id1 -> SetBinError( xbin,    2213.1070710404351      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    416545.57589800266      );
  id1 -> SetBinError( xbin,    2186.8425349967997      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    409955.41260956693      );
  id1 -> SetBinError( xbin,    2273.9032963365607      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    407629.49994260556      );
  id1 -> SetBinError( xbin,    2273.0960260501365      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    415436.53904171154      );
  id1 -> SetBinError( xbin,    2259.1062729332343      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    413512.60124546586      );
  id1 -> SetBinError( xbin,    2240.6821513839109      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    417318.69067014678      );
  id1 -> SetBinError( xbin,    2225.9982247411472      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    415071.55718256161      );
  id1 -> SetBinError( xbin,    2245.5670952208625      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    420530.88835114683      );
  id1 -> SetBinError( xbin,    2250.0409642278269      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    422430.82702474250      );
  id1 -> SetBinError( xbin,    2294.1896947720093      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    421449.16131122952      );
  id1 -> SetBinError( xbin,    2291.2661871825098      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    420644.01311711111      );
  id1 -> SetBinError( xbin,    2318.6412451674291      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    418842.01141991769      );
  id1 -> SetBinError( xbin,    2326.2525444662451      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    407660.52006161265      );
  id1 -> SetBinError( xbin,    2371.7675510735567      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    379843.46988834580      );
  id1 -> SetBinError( xbin,    2375.2309160004497      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    349935.43567260914      );
  id1 -> SetBinError( xbin,    2307.3020403153173      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    304619.55103517597      );
  id1 -> SetBinError( xbin,    2908.1248693048401      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    242803.52225599971      );
  id1 -> SetBinError( xbin,    2158.5439450936624      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    173830.67660061730      );
  id1 -> SetBinError( xbin,    2087.6866313886399      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    96725.989467895008      );
  id1 -> SetBinError( xbin,    1826.7502527312602      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    38338.058606919265      );
  id1 -> SetBinError( xbin,    1129.8140938652064      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    8352.8201314175276      );
  id1 -> SetBinError( xbin,    535.92472043726525      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    794.22238743442369      );
  id1 -> SetBinError( xbin,    107.56211795178632      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.1760039614550333      );
  id1 -> SetBinError( xbin,    1.1715709318681109      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    862963.61151208356      );
  id2 -> SetBinError( xbin,    8698.7951413818719      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    805396.80280596553      );
  id2 -> SetBinError( xbin,    6835.2200423982786      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    782186.57811328617      );
  id2 -> SetBinError( xbin,    7063.5490903402970      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    737551.17956116016      );
  id2 -> SetBinError( xbin,    6166.1260709965454      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    714844.14878412522      );
  id2 -> SetBinError( xbin,    5684.2937341560464      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    671353.45917313360      );
  id2 -> SetBinError( xbin,    5519.8125653971911      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    633687.86765358737      );
  id2 -> SetBinError( xbin,    5974.6048477400846      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    593034.74873623764      );
  id2 -> SetBinError( xbin,    4550.6818026347528      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    555152.20184821298      );
  id2 -> SetBinError( xbin,    4371.1176269778762      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    520229.83065375092      );
  id2 -> SetBinError( xbin,    3794.1832273515811      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    481997.23347088532      );
  id2 -> SetBinError( xbin,    3623.8504135363605      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    451467.47911629343      );
  id2 -> SetBinError( xbin,    4867.9342893241255      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    410382.14410724584      );
  id2 -> SetBinError( xbin,    2816.3985937881193      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    375538.52260289481      );
  id2 -> SetBinError( xbin,    2714.7721534778543      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    343800.18098128552      );
  id2 -> SetBinError( xbin,    3165.5672963907109      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    308769.70517675881      );
  id2 -> SetBinError( xbin,    2081.5442205404474      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    278879.95801300043      );
  id2 -> SetBinError( xbin,    1927.5878547461921      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    250069.70205695290      );
  id2 -> SetBinError( xbin,    1800.9410327348673      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    225539.62068368765      );
  id2 -> SetBinError( xbin,    1595.6553885592252      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    199561.32578453663      );
  id2 -> SetBinError( xbin,    1563.3697424053137      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    176658.62633307066      );
  id2 -> SetBinError( xbin,    1337.5389469692736      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    155419.11515395041      );
  id2 -> SetBinError( xbin,    1261.3879299726900      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    136839.43951362147      );
  id2 -> SetBinError( xbin,    1071.4000810173407      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    117791.15583939891      );
  id2 -> SetBinError( xbin,    933.18898359093953      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    105238.71113649393      );
  id2 -> SetBinError( xbin,    940.68840872969577      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    93634.440041754322      );
  id2 -> SetBinError( xbin,    1058.4664440400206      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    83199.702520949722      );
  id2 -> SetBinError( xbin,    837.83052454548772      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    75343.254218319838      );
  id2 -> SetBinError( xbin,    737.24673443739925      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    73757.809563778850      );
  id2 -> SetBinError( xbin,    883.28871971595231      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    70367.815547508639      );
  id2 -> SetBinError( xbin,    697.95235171064894      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    69022.530697916824      );
  id2 -> SetBinError( xbin,    688.86151935333010      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    74391.791223172753      );
  id2 -> SetBinError( xbin,    1101.6096627485092      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    77013.475908074004      );
  id2 -> SetBinError( xbin,    743.39966886021875      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    86424.651090752770      );
  id2 -> SetBinError( xbin,    981.02548064454618      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    94654.506816562120      );
  id2 -> SetBinError( xbin,    858.76274252394262      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    107398.46841363616      );
  id2 -> SetBinError( xbin,    905.70624525743881      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    119755.06736185850      );
  id2 -> SetBinError( xbin,    952.05373622394370      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    141184.98971096842      );
  id2 -> SetBinError( xbin,    1261.8598688631232      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    159536.61030672945      );
  id2 -> SetBinError( xbin,    1426.6160550446300      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    183138.89867799057      );
  id2 -> SetBinError( xbin,    2023.9997367994461      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    206451.58847914345      );
  id2 -> SetBinError( xbin,    1661.3686883723931      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    235909.60002160366      );
  id2 -> SetBinError( xbin,    1692.8851888403062      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    266412.84700038965      );
  id2 -> SetBinError( xbin,    1934.0024458396172      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    293807.71029750217      );
  id2 -> SetBinError( xbin,    2030.2426255250896      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    326734.82519232313      );
  id2 -> SetBinError( xbin,    2168.7253587538398      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    362014.23114001582      );
  id2 -> SetBinError( xbin,    2596.1264750496543      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    398549.14597594837      );
  id2 -> SetBinError( xbin,    2643.4801118842706      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    436387.97260420065      );
  id2 -> SetBinError( xbin,    2890.7709648148343      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    474197.25228376233      );
  id2 -> SetBinError( xbin,    3015.2648556305471      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    513720.91740735166      );
  id2 -> SetBinError( xbin,    3295.7294847368389      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    555975.95508503576      );
  id2 -> SetBinError( xbin,    4559.3947320328434      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    597627.24910449376      );
  id2 -> SetBinError( xbin,    5277.8970312206602      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    642324.01499104314      );
  id2 -> SetBinError( xbin,    4981.2102044261692      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    678068.07507569727      );
  id2 -> SetBinError( xbin,    5353.0421072316622      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    728355.72980925639      );
  id2 -> SetBinError( xbin,    6196.2398710171847      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    770068.43327111378      );
  id2 -> SetBinError( xbin,    6537.3343310937580      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    808241.80791836604      );
  id2 -> SetBinError( xbin,    6810.7737678710682      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    849067.76663705509      );
  id2 -> SetBinError( xbin,    7018.0897086465611      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    896905.70935517969      );
  id2 -> SetBinError( xbin,    8901.2248202032242      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    939123.85845249821      );
  id2 -> SetBinError( xbin,    9154.4501116097472      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    148667.20907885299      );
  id3 -> SetBinError( xbin,    1492.2209409109173      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    201165.37960677923      );
  id3 -> SetBinError( xbin,    1860.8900154373569      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    258427.84603663228      );
  id3 -> SetBinError( xbin,    2166.6366750171674      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    305155.79290617496      );
  id3 -> SetBinError( xbin,    2311.6571765157387      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    345872.66444096132      );
  id3 -> SetBinError( xbin,    2449.3127608608293      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    382079.54033334740      );
  id3 -> SetBinError( xbin,    2530.2778623374420      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    409986.54734971025      );
  id3 -> SetBinError( xbin,    2628.8212419503875      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    432364.33527230518      );
  id3 -> SetBinError( xbin,    3310.1805108241233      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    439430.00972803443      );
  id3 -> SetBinError( xbin,    3310.3920615085303      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    448104.23908345861      );
  id3 -> SetBinError( xbin,    2774.3457316190584      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    451147.70484863129      );
  id3 -> SetBinError( xbin,    2702.7030536408120      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    453423.73660991929      );
  id3 -> SetBinError( xbin,    2872.8244995602508      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    453881.09888369805      );
  id3 -> SetBinError( xbin,    2660.8838647329089      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    453762.14371459925      );
  id3 -> SetBinError( xbin,    2666.7500373584890      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    450684.12686127686      );
  id3 -> SetBinError( xbin,    2724.5984089100721      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    451650.41332648520      );
  id3 -> SetBinError( xbin,    2710.0550964736599      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    461358.63282427762      );
  id3 -> SetBinError( xbin,    2639.6097339968201      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    457092.23945375747      );
  id3 -> SetBinError( xbin,    2629.1495176805824      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    464150.81730203913      );
  id3 -> SetBinError( xbin,    2895.3218866575494      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    463650.75238836766      );
  id3 -> SetBinError( xbin,    3010.8323255073956      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    466197.29359719902      );
  id3 -> SetBinError( xbin,    2807.6244216307787      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    469175.23790408135      );
  id3 -> SetBinError( xbin,    2833.0218796174090      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    464019.50560791744      );
  id3 -> SetBinError( xbin,    2957.7633226420967      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    456422.42687583249      );
  id3 -> SetBinError( xbin,    3362.9238549701258      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    440538.01117305795      );
  id3 -> SetBinError( xbin,    2730.0315047411623      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    413922.20707472466      );
  id3 -> SetBinError( xbin,    2640.7124545406691      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    374115.50507422630      );
  id3 -> SetBinError( xbin,    2444.0878617752742      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    323928.49637826701      );
  id3 -> SetBinError( xbin,    2238.2662999530739      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    265136.06147373072      );
  id3 -> SetBinError( xbin,    2092.0416551186941      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    194894.85600470772      );
  id3 -> SetBinError( xbin,    1811.8646416818776      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    48219.225324539213      );
  id4 -> SetBinError( xbin,    1648.9622320602393      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    138709.01187511871      );
  id4 -> SetBinError( xbin,    2197.9672030141451      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    169691.15278960284      );
  id4 -> SetBinError( xbin,    2493.0734746463286      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    198863.70206235070      );
  id4 -> SetBinError( xbin,    2810.3000746452485      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    225171.96120685316      );
  id4 -> SetBinError( xbin,    2973.7088747719154      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    252896.94777437788      );
  id4 -> SetBinError( xbin,    3120.8744907843520      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    285892.29709954635      );
  id4 -> SetBinError( xbin,    3365.2075813915967      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    305654.38747554313      );
  id4 -> SetBinError( xbin,    4082.5541627855814      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    322655.70286735456      );
  id4 -> SetBinError( xbin,    4121.0744079381557      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    339551.13172357972      );
  id4 -> SetBinError( xbin,    3698.1987335215044      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    361808.58926885971      );
  id4 -> SetBinError( xbin,    3888.6669044628484      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    378037.28733473126      );
  id4 -> SetBinError( xbin,    4009.3503367757958      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    401399.04121561081      );
  id4 -> SetBinError( xbin,    4087.5483408016689      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    404578.82047592284      );
  id4 -> SetBinError( xbin,    4137.1939025371121      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    418583.41278467467      );
  id4 -> SetBinError( xbin,    4224.2620022965020      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    427125.26277595194      );
  id4 -> SetBinError( xbin,    4371.6451280050915      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    442372.58429983148      );
  id4 -> SetBinError( xbin,    4542.5689234750425      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    437122.05372387992      );
  id4 -> SetBinError( xbin,    4437.5959505545679      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    442814.40350256639      );
  id4 -> SetBinError( xbin,    4349.4342704506043      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    446518.91652356600      );
  id4 -> SetBinError( xbin,    4849.9404315610473      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    452736.68707486690      );
  id4 -> SetBinError( xbin,    4861.0366674438501      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    450042.79127674596      );
  id4 -> SetBinError( xbin,    4321.6088158442744      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    456548.39302531519      );
  id4 -> SetBinError( xbin,    4446.4860910881907      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    451495.09809645911      );
  id4 -> SetBinError( xbin,    4555.5907287580903      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    451690.06878562301      );
  id4 -> SetBinError( xbin,    4825.8598788071904      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    451151.60187802662      );
  id4 -> SetBinError( xbin,    4405.3867755237416      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    458799.01355574833      );
  id4 -> SetBinError( xbin,    4441.4875909284883      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    449215.81711151556      );
  id4 -> SetBinError( xbin,    4154.6798890862174      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    454011.54627964500      );
  id4 -> SetBinError( xbin,    4121.3310330818540      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    449888.04229452688      );
  id4 -> SetBinError( xbin,    4763.9984521395963      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    451135.19110303791      );
  id4 -> SetBinError( xbin,    4861.0248021398802      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    457390.29882500367      );
  id4 -> SetBinError( xbin,    4235.9709070616236      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    452141.46522720018      );
  id4 -> SetBinError( xbin,    4346.3095130915253      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    458838.87890511239      );
  id4 -> SetBinError( xbin,    4575.3077709470799      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    462008.08812784543      );
  id4 -> SetBinError( xbin,    4542.7174678657948      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    452779.52440005122      );
  id4 -> SetBinError( xbin,    4532.6892652386832      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    458318.94853898895      );
  id4 -> SetBinError( xbin,    4808.0574448107009      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    468559.82967078977      );
  id4 -> SetBinError( xbin,    4912.5827999750118      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    462274.27212860784      );
  id4 -> SetBinError( xbin,    4614.0543038333381      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    461413.12446878431      );
  id4 -> SetBinError( xbin,    4394.9125804126270      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    468607.93988240906      );
  id4 -> SetBinError( xbin,    4731.9907717227134      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    470426.86903026327      );
  id4 -> SetBinError( xbin,    4722.6820923877640      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    464281.12420072744      );
  id4 -> SetBinError( xbin,    4416.0533155183130      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    471923.71769849316      );
  id4 -> SetBinError( xbin,    4746.0082965969123      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    464022.31769053650      );
  id4 -> SetBinError( xbin,    5021.3773698818404      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    464910.84500150918      );
  id4 -> SetBinError( xbin,    5111.4867739084229      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    463795.91733804124      );
  id4 -> SetBinError( xbin,    4818.8119077440761      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    454046.71910976060      );
  id4 -> SetBinError( xbin,    5864.7903667697701      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    453982.85441002040      );
  id4 -> SetBinError( xbin,    4628.8944849123745      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    442992.26439297164      );
  id4 -> SetBinError( xbin,    4270.3845490497743      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    427445.89115705894      );
  id4 -> SetBinError( xbin,    4212.6144941160946      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    418745.58698219259      );
  id4 -> SetBinError( xbin,    4364.6105596234383      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    399763.73291086248      );
  id4 -> SetBinError( xbin,    4338.5428024705698      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    379073.47457402723      );
  id4 -> SetBinError( xbin,    4073.0720963005588      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    351674.81461493432      );
  id4 -> SetBinError( xbin,    4332.3571124168084      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    330676.58243890229      );
  id4 -> SetBinError( xbin,    4372.4981071352195      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    41618.165449649110      );
  id5 -> SetBinError( xbin,    465.79372830100544      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    89986.819627339486      );
  id5 -> SetBinError( xbin,    568.17649642438585      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    100720.11418593125      );
  id5 -> SetBinError( xbin,    746.31590435176395      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    109101.76392717895      );
  id5 -> SetBinError( xbin,    822.43497817434627      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    120154.37872396471      );
  id5 -> SetBinError( xbin,    873.56054540721436      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    133757.60088682297      );
  id5 -> SetBinError( xbin,    950.51690754806441      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    151952.09192649703      );
  id5 -> SetBinError( xbin,    946.86669692916200      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    144275.41592324642      );
  id5 -> SetBinError( xbin,    1357.9139888393172      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    115130.37543036182      );
  id5 -> SetBinError( xbin,    1188.9194735552321      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    57521.698869922911      );
  id5 -> SetBinError( xbin,    290.53070119053018      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    29894.245234873782      );
  id5 -> SetBinError( xbin,    224.54807947477286      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19198.024728015651      );
  id5 -> SetBinError( xbin,    190.61988567074758      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13288.515017470741      );
  id5 -> SetBinError( xbin,    101.32319994818907      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9658.3546426455523      );
  id5 -> SetBinError( xbin,    88.197964777769158      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7422.2060564436879      );
  id5 -> SetBinError( xbin,    63.502957633292105      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5619.0578939407860      );
  id5 -> SetBinError( xbin,    56.502476195608622      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4519.9650155803065      );
  id5 -> SetBinError( xbin,    48.061835846309563      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3745.2670434169231      );
  id5 -> SetBinError( xbin,    42.945510404434280      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3053.4593614099381      );
  id5 -> SetBinError( xbin,    38.963078618068408      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2515.3752619633815      );
  id5 -> SetBinError( xbin,    33.192278330140574      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2136.3827251307853      );
  id5 -> SetBinError( xbin,    34.769586661663332      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1705.3510805926683      );
  id5 -> SetBinError( xbin,    37.231134783508665      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1531.6133817056591      );
  id5 -> SetBinError( xbin,    34.061903424142784      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1322.4418300052439      );
  id5 -> SetBinError( xbin,    27.929356676830555      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1042.3066365036414      );
  id5 -> SetBinError( xbin,    22.902178516340033      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    989.76138826754232      );
  id5 -> SetBinError( xbin,    20.768462234465382      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    853.35902249700450      );
  id5 -> SetBinError( xbin,    19.163892946779470      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    758.94220303298994      );
  id5 -> SetBinError( xbin,    17.342941044383796      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    599.39872519434846      );
  id5 -> SetBinError( xbin,    16.533686216290324      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    611.31214513333714      );
  id5 -> SetBinError( xbin,    16.230338323062721      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    490.41505535684610      );
  id5 -> SetBinError( xbin,    13.336319734313006      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    438.44747259059000      );
  id5 -> SetBinError( xbin,    12.665380925236780      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    399.37877780069971      );
  id5 -> SetBinError( xbin,    12.009368671563928      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    323.12971715620063      );
  id5 -> SetBinError( xbin,    28.564099220772743      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    352.09901281796471      );
  id5 -> SetBinError( xbin,    31.534184903417628      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    256.82409708102858      );
  id5 -> SetBinError( xbin,    18.485480178258982      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    269.28946126099868      );
  id5 -> SetBinError( xbin,    13.062583251988647      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    240.67171488078822      );
  id5 -> SetBinError( xbin,    11.184665003418550      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2886.0580276250912      );
  id6 -> SetBinError( xbin,    54.564077338643912      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9318.0672863203017      );
  id6 -> SetBinError( xbin,    103.27056626878171      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    18841.744581884301      );
  id6 -> SetBinError( xbin,    148.31537317545849      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33311.032570404575      );
  id6 -> SetBinError( xbin,    198.97088886428432      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    54428.023335462029      );
  id6 -> SetBinError( xbin,    244.44355410328822      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    84069.529582964067      );
  id6 -> SetBinError( xbin,    287.66814565525920      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    129212.58291742760      );
  id6 -> SetBinError( xbin,    346.87587135493897      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    180211.71513167801      );
  id6 -> SetBinError( xbin,    414.19421398325795      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    70486.816942944424      );
  id6 -> SetBinError( xbin,    293.11137204610446      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    23405.297447607794      );
  id6 -> SetBinError( xbin,    189.25369728652518      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    8983.2996976491704      );
  id6 -> SetBinError( xbin,    128.52786559895162      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3353.3650235773271      );
  id6 -> SetBinError( xbin,    81.584184390900106      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11654.319848935291      );
  id7 -> SetBinError( xbin,    144.29460003738981      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15461.535884905054      );
  id7 -> SetBinError( xbin,    166.20081342411945      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19381.523102552776      );
  id7 -> SetBinError( xbin,    189.25628919953039      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23687.949888660049      );
  id7 -> SetBinError( xbin,    210.18478609366340      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28953.534045429460      );
  id7 -> SetBinError( xbin,    236.45792552325091      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33485.189154410036      );
  id7 -> SetBinError( xbin,    257.81830258302125      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37217.503336205649      );
  id7 -> SetBinError( xbin,    270.87242540536243      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    41568.977218535874      );
  id7 -> SetBinError( xbin,    294.72088402985162      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45462.585908920555      );
  id7 -> SetBinError( xbin,    310.12327307739179      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    49025.281539645897      );
  id7 -> SetBinError( xbin,    328.72421303486607      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52869.288546311276      );
  id7 -> SetBinError( xbin,    348.30271706299686      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    55127.228219398603      );
  id7 -> SetBinError( xbin,    357.72921054852634      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    56928.124170975672      );
  id7 -> SetBinError( xbin,    363.37601093308933      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    58608.947639985272      );
  id7 -> SetBinError( xbin,    372.24875104366248      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59370.486430352859      );
  id7 -> SetBinError( xbin,    371.15768676352417      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    59997.410828054140      );
  id7 -> SetBinError( xbin,    375.30354661317438      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    59208.966136371069      );
  id7 -> SetBinError( xbin,    373.11008935979794      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    59308.493297903777      );
  id7 -> SetBinError( xbin,    371.49642476835754      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    58243.353523002312      );
  id7 -> SetBinError( xbin,    366.19234746381858      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    56240.487183316902      );
  id7 -> SetBinError( xbin,    354.75630790663183      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    53376.703416290169      );
  id7 -> SetBinError( xbin,    343.48149253372446      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    50558.783914281878      );
  id7 -> SetBinError( xbin,    327.21024397576485      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    47673.085633137991      );
  id7 -> SetBinError( xbin,    311.29798694227685      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    43252.415348480507      );
  id7 -> SetBinError( xbin,    294.14318791580052      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    39129.950276449461      );
  id7 -> SetBinError( xbin,    273.28927894343320      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    34412.758551086379      );
  id7 -> SetBinError( xbin,    252.56730659704607      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    29548.810502730077      );
  id7 -> SetBinError( xbin,    232.26449295060905      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    24469.399848269793      );
  id7 -> SetBinError( xbin,    208.04385632885493      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    20385.509668219620      );
  id7 -> SetBinError( xbin,    194.47505333582023      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    15823.228017103640      );
  id7 -> SetBinError( xbin,    165.64264516003266      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    6901.1865606183674      );
  id8 -> SetBinError( xbin,    43.363080723219340      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12459.582119285025      );
  id8 -> SetBinError( xbin,    57.727775325608924      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    10885.644236936623      );
  id8 -> SetBinError( xbin,    53.088236980110977      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9466.5049270129966      );
  id8 -> SetBinError( xbin,    48.309387656735083      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8325.4914125613996      );
  id8 -> SetBinError( xbin,    44.876632722569575      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7341.6471301969086      );
  id8 -> SetBinError( xbin,    41.544466071683111      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6440.9562542601407      );
  id8 -> SetBinError( xbin,    38.108186245618484      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5670.6311891390296      );
  id8 -> SetBinError( xbin,    35.723950518300100      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5046.0965989306605      );
  id8 -> SetBinError( xbin,    32.878486806412241      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4439.3848916489978      );
  id8 -> SetBinError( xbin,    30.335310923266615      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3989.9734549042769      );
  id8 -> SetBinError( xbin,    28.147597405314098      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3605.3646471762377      );
  id8 -> SetBinError( xbin,    26.654826005444868      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3175.3764819645176      );
  id8 -> SetBinError( xbin,    24.511464831674090      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2876.8829980541004      );
  id8 -> SetBinError( xbin,    23.281282963041541      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2606.6474869369995      );
  id8 -> SetBinError( xbin,    21.748773365494582      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2404.8576738689098      );
  id8 -> SetBinError( xbin,    20.838023723455329      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2149.0062390604721      );
  id8 -> SetBinError( xbin,    19.430146618418519      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1961.9948624291274      );
  id8 -> SetBinError( xbin,    18.228106987865090      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1798.6927004875042      );
  id8 -> SetBinError( xbin,    17.280759920801664      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1635.5455756259785      );
  id8 -> SetBinError( xbin,    16.346788694209089      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1494.8558409074844      );
  id8 -> SetBinError( xbin,    15.525184239252935      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1376.7480974051286      );
  id8 -> SetBinError( xbin,    14.649114554075071      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1271.6532706396758      );
  id8 -> SetBinError( xbin,    14.111061138919499      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1174.6800628868680      );
  id8 -> SetBinError( xbin,    13.237714686772096      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1055.1752155309289      );
  id8 -> SetBinError( xbin,    12.444260032739127      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    991.13084154511546      );
  id8 -> SetBinError( xbin,    12.061690526609935      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    895.18112296385812      );
  id8 -> SetBinError( xbin,    11.150189950820071      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    839.78987490085501      );
  id8 -> SetBinError( xbin,    11.136967718519083      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
