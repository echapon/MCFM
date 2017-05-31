// Cross-section is:      3534165.1658204938 +/-          621.2251093216)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |     -123394.14222   -3.49%
//        GQB    |      -75271.21918   -2.13%
//        QG     |     -151396.87859   -4.28%
//        QBG    |      -82245.95954   -2.33%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     2080717.70659   58.87%
//        QBQ    |     1895744.45382   53.64%

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
//test                            [runstring]  
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
//CT10.LHgrid                     [LHAPDF group]  
//                   0            [LHAPDF set]  

 // [Jet definition and event cuts] )
//             40.0000            [m34min]  
//           5020.0000            [m34max]  
//              0.0000            [m56min]  
//           5020.0000            [m56max]  
//                   T            [inclusive]  
//                ankt            [algorithm]  
//             15.0000            [ptjetmin]  
//              0.0000            [etajetmin]  
//              5.0000            [etajetmax]  
//              0.5000            [Rcut]  
//                   F            [makecuts]  
//              0.0000            [leptpt]  
//             99.0000            [leptrap]  
//   0.000,   0.000                [leptveto]  
//              0.0000            [misspt]  
//              0.0000            [leptpt2]  
//             99.0000            [leptrap2]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__test.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.9000000000000004      );
  id1 -> SetBinContent( xbin,   -1.1744273394584645E-004 );
  id1 -> SetBinError( xbin,    1.1744272760942066E-004 );
   int xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    14.324434423366720      );
  id1 -> SetBinError( xbin,    9.6333285316527011      );
   int xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,    5.1059974128288275      );
  id1 -> SetBinError( xbin,    3.8805783933928488      );
   int xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    123.94514954867221      );
  id1 -> SetBinError( xbin,    43.354256043442149      );
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    1538.6079106943062      );
  id1 -> SetBinError( xbin,    102.10679127609326      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    6897.9043300683479      );
  id1 -> SetBinError( xbin,    353.14110664145926      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    27148.920582297789      );
  id1 -> SetBinError( xbin,    817.61368099024924      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    72676.961738291051      );
  id1 -> SetBinError( xbin,    1509.4005861001419      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    136824.37624588559      );
  id1 -> SetBinError( xbin,    2055.9253860771628      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    218290.27224991718      );
  id1 -> SetBinError( xbin,    2275.1516155910695      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    290909.04352647619      );
  id1 -> SetBinError( xbin,    2539.2831614042370      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    370643.48000467889      );
  id1 -> SetBinError( xbin,    2864.7313802652129      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    428472.29415360303      );
  id1 -> SetBinError( xbin,    3242.1105282204885      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    469380.48055612505      );
  id1 -> SetBinError( xbin,    3297.6298888108568      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    516827.53526058537      );
  id1 -> SetBinError( xbin,    3166.1692142714860      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    535041.01205810078      );
  id1 -> SetBinError( xbin,    3155.2304973036266      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    569832.86562248319      );
  id1 -> SetBinError( xbin,    3606.5473900665024      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    581938.58150146238      );
  id1 -> SetBinError( xbin,    3633.4841836484852      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    596796.93875217019      );
  id1 -> SetBinError( xbin,    3244.8133098773410      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    598279.35337229085      );
  id1 -> SetBinError( xbin,    3219.3195442664510      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    610682.13509137952      );
  id1 -> SetBinError( xbin,    3190.1719901772872      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    611068.15387598297      );
  id1 -> SetBinError( xbin,    3282.9223746444563      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    607527.41662726668      );
  id1 -> SetBinError( xbin,    3380.3017371970950      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    611368.30470653926      );
  id1 -> SetBinError( xbin,    3277.2297510461290      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    598099.17170972563      );
  id1 -> SetBinError( xbin,    3102.7922799300268      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    594422.82878988923      );
  id1 -> SetBinError( xbin,    3106.8090449038336      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    599969.35877105012      );
  id1 -> SetBinError( xbin,    3121.5452468050676      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    596494.72514715220      );
  id1 -> SetBinError( xbin,    3296.9588026097317      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    593826.23169689637      );
  id1 -> SetBinError( xbin,    3350.7234013829852      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    589690.88669089589      );
  id1 -> SetBinError( xbin,    3217.1447984325991      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    591516.90895642538      );
  id1 -> SetBinError( xbin,    3211.8727704044459      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    599570.88143365004      );
  id1 -> SetBinError( xbin,    3301.3508475156509      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    595901.50531088887      );
  id1 -> SetBinError( xbin,    3793.4539063009579      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    584134.60984541196      );
  id1 -> SetBinError( xbin,    3737.4427517764302      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    587932.80831278500      );
  id1 -> SetBinError( xbin,    3264.9241444241479      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    581108.38118843595      );
  id1 -> SetBinError( xbin,    3375.7795734166157      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    555558.02422177431      );
  id1 -> SetBinError( xbin,    3356.4075687416994      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    527991.05490228173      );
  id1 -> SetBinError( xbin,    3289.4887797316869      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    474752.85264404607      );
  id1 -> SetBinError( xbin,    3317.0028803139985      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    406971.37828228122      );
  id1 -> SetBinError( xbin,    3117.4784240246213      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    323750.75369008735      );
  id1 -> SetBinError( xbin,    2766.4596211494459      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    221673.18430590007      );
  id1 -> SetBinError( xbin,    2286.0155997931283      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    126982.99031302650      );
  id1 -> SetBinError( xbin,    1930.9840754386883      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    46680.410404163813      );
  id1 -> SetBinError( xbin,    1232.7810178413881      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    9994.9396636348392      );
  id1 -> SetBinError( xbin,    536.87182816047721      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1122.5360746405465      );
  id1 -> SetBinError( xbin,    229.67045443591829      );
   int xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,    182.68319078383706      );
  id1 -> SetBinError( xbin,    68.586526495203600      );
   int xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    75.086375178338415      );
  id1 -> SetBinError( xbin,    56.062973991509402      );
   int xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    4.2542939575897512      );
  id1 -> SetBinError( xbin,    3.1170532087896081      );
   int xbin = id1->FindBin(   4.9000000000000004      );
  id1 -> SetBinContent( xbin,   -5.3171015573739309E-005 );
  id1 -> SetBinError( xbin,    5.6881730419263091E-005 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1238621.9068892344      );
  id2 -> SetBinError( xbin,    30754.445281090393      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    1221896.4429067781      );
  id2 -> SetBinError( xbin,    35484.477429899191      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1111777.2201975959      );
  id2 -> SetBinError( xbin,    18602.887062482929      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    1089458.1892789470      );
  id2 -> SetBinError( xbin,    25117.710116272337      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    1034947.8267854669      );
  id2 -> SetBinError( xbin,    16610.926201169616      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    1057687.5030309216      );
  id2 -> SetBinError( xbin,    39518.651045957064      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    965332.47332848038      );
  id2 -> SetBinError( xbin,    27842.545938434101      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    917550.64227777650      );
  id2 -> SetBinError( xbin,    54312.683405650983      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    852749.49016900081      );
  id2 -> SetBinError( xbin,    21020.512944592672      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    771188.62347982859      );
  id2 -> SetBinError( xbin,    16027.532612103230      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    710578.43412230560      );
  id2 -> SetBinError( xbin,    9170.6124922563486      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    662295.86118362425      );
  id2 -> SetBinError( xbin,    11161.025697357152      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    619038.02942088526      );
  id2 -> SetBinError( xbin,    11222.321943623992      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    558685.50120962679      );
  id2 -> SetBinError( xbin,    8338.9744389171065      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    494694.29561025836      );
  id2 -> SetBinError( xbin,    5136.1726806675615      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    454941.99313760572      );
  id2 -> SetBinError( xbin,    7274.1586469413833      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    415327.92922552064      );
  id2 -> SetBinError( xbin,    4318.1239663770775      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    376252.90599953994      );
  id2 -> SetBinError( xbin,    10904.973416195015      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    320865.32571903057      );
  id2 -> SetBinError( xbin,    2603.9180406242385      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    297022.74314783601      );
  id2 -> SetBinError( xbin,    6838.1903156886474      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    257913.51508224840      );
  id2 -> SetBinError( xbin,    3144.7102351333274      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    229243.30392207188      );
  id2 -> SetBinError( xbin,    4993.7262257642615      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    196647.96510167135      );
  id2 -> SetBinError( xbin,    2014.6319064743020      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    171781.66978258325      );
  id2 -> SetBinError( xbin,    1894.5841999079282      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    153769.85659503523      );
  id2 -> SetBinError( xbin,    1596.5874458118496      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    132901.24822112892      );
  id2 -> SetBinError( xbin,    1682.1022958750880      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    125993.87054162758      );
  id2 -> SetBinError( xbin,    2620.0626910597880      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    110012.84564192960      );
  id2 -> SetBinError( xbin,    1149.2385012918592      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    105097.14095420852      );
  id2 -> SetBinError( xbin,    1415.2743640446006      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    99822.485898567000      );
  id2 -> SetBinError( xbin,    1228.0585810518542      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    101431.48161762314      );
  id2 -> SetBinError( xbin,    1955.9838961539533      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    109070.38974661840      );
  id2 -> SetBinError( xbin,    1646.9562857878072      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    114731.84935519754      );
  id2 -> SetBinError( xbin,    1472.9821706242628      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    124892.59342927136      );
  id2 -> SetBinError( xbin,    1845.8567514046415      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    148954.94116437604      );
  id2 -> SetBinError( xbin,    8669.0865961186209      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    153691.67817412410      );
  id2 -> SetBinError( xbin,    1407.7802565075260      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    176301.57020125524      );
  id2 -> SetBinError( xbin,    2263.9734643721572      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    201123.59500599458      );
  id2 -> SetBinError( xbin,    1798.3059455179873      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    236993.26396802510      );
  id2 -> SetBinError( xbin,    3396.7220278994050      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    262376.20391188463      );
  id2 -> SetBinError( xbin,    2326.2191826468047      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    305314.62051397923      );
  id2 -> SetBinError( xbin,    7655.4123304637114      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    344616.12401102250      );
  id2 -> SetBinError( xbin,    4353.9119762330820      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    382312.58760353242      );
  id2 -> SetBinError( xbin,    3549.0615182615406      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    430844.31642589683      );
  id2 -> SetBinError( xbin,    10989.180526266340      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    478491.74848762259      );
  id2 -> SetBinError( xbin,    9218.8315389113559      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    527145.14791970525      );
  id2 -> SetBinError( xbin,    6710.1327521187095      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    579705.06765399210      );
  id2 -> SetBinError( xbin,    8335.3357016725804      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    640785.19720422290      );
  id2 -> SetBinError( xbin,    8376.9328282354836      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    698863.94529305771      );
  id2 -> SetBinError( xbin,    11234.032213075057      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    756547.50340624969      );
  id2 -> SetBinError( xbin,    21159.860755155336      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    817657.66586499766      );
  id2 -> SetBinError( xbin,    9231.6900489935106      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    869772.47114349273      );
  id2 -> SetBinError( xbin,    12819.296818173238      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    924173.82548280619      );
  id2 -> SetBinError( xbin,    21048.057706132189      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    1012969.2726709162      );
  id2 -> SetBinError( xbin,    29468.248721388169      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    1061783.3167737951      );
  id2 -> SetBinError( xbin,    19239.238267715864      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    1114963.8174297286      );
  id2 -> SetBinError( xbin,    34217.230021248542      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    1185588.7329153807      );
  id2 -> SetBinError( xbin,    19373.954090336960      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1291282.5264363810      );
  id2 -> SetBinError( xbin,    34959.581733259569      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    1276187.8204665435      );
  id2 -> SetBinError( xbin,    25953.830203483220      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1317808.7492406359      );
  id2 -> SetBinError( xbin,    28808.187604854207      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -5.9000000000000004      );
  id3 -> SetBinContent( xbin,    998.18103350359877      );
  id3 -> SetBinError( xbin,    513.62272359004157      );
   int xbin = id3->FindBin(  -5.7000000000000002      );
  id3 -> SetBinContent( xbin,    1251.1621177879597      );
  id3 -> SetBinError( xbin,    551.53821825507043      );
   int xbin = id3->FindBin(  -5.5000000000000000      );
  id3 -> SetBinContent( xbin,    1029.6631057387078      );
  id3 -> SetBinError( xbin,    326.13725605485456      );
   int xbin = id3->FindBin(  -5.2999999999999998      );
  id3 -> SetBinContent( xbin,    2834.6014924620808      );
  id3 -> SetBinError( xbin,    553.34576139731053      );
   int xbin = id3->FindBin(  -5.0999999999999996      );
  id3 -> SetBinContent( xbin,    1793.5276980803621      );
  id3 -> SetBinError( xbin,    590.71209351269283      );
   int xbin = id3->FindBin(  -4.9000000000000004      );
  id3 -> SetBinContent( xbin,    5460.6326235230445      );
  id3 -> SetBinError( xbin,    891.53049409232074      );
   int xbin = id3->FindBin(  -4.7000000000000002      );
  id3 -> SetBinContent( xbin,    5118.0050753898322      );
  id3 -> SetBinError( xbin,    993.96193592993745      );
   int xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,    9770.8630863158542      );
  id3 -> SetBinError( xbin,    701.12131167394000      );
   int xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,    12561.981281164013      );
  id3 -> SetBinError( xbin,    947.19393459038167      );
   int xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    23433.035406464653      );
  id3 -> SetBinError( xbin,    1530.1190143933711      );
   int xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    29724.211584227043      );
  id3 -> SetBinError( xbin,    1843.3772390193105      );
   int xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    53604.850813234632      );
  id3 -> SetBinError( xbin,    2637.9303588261655      );
   int xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    68132.269378367928      );
  id3 -> SetBinError( xbin,    3091.4883115729867      );
   int xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    111047.80766892184      );
  id3 -> SetBinError( xbin,    3915.7493232078773      );
   int xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    144148.08188824289      );
  id3 -> SetBinError( xbin,    3940.0853220813901      );
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    203916.43762154045      );
  id3 -> SetBinError( xbin,    2855.7281762364059      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    259590.56662863155      );
  id3 -> SetBinError( xbin,    2930.9627427608862      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    322626.47584870615      );
  id3 -> SetBinError( xbin,    3440.3941667814679      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    379900.59901157138      );
  id3 -> SetBinError( xbin,    10195.128603116456      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    467905.16854856326      );
  id3 -> SetBinError( xbin,    10255.620226958075      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    497892.43195274513      );
  id3 -> SetBinError( xbin,    4310.7481201362134      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    554094.61312520213      );
  id3 -> SetBinError( xbin,    4829.9337197166160      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    604016.27413703501      );
  id3 -> SetBinError( xbin,    9157.7965330118986      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    619112.21352097637      );
  id3 -> SetBinError( xbin,    9190.9427727276670      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    658476.47002617456      );
  id3 -> SetBinError( xbin,    6092.8886728145117      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    667594.66052854049      );
  id3 -> SetBinError( xbin,    6640.8781452994863      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    680875.66098210460      );
  id3 -> SetBinError( xbin,    5910.2152473088572      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    703814.11027978908      );
  id3 -> SetBinError( xbin,    6887.9823065133360      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    680516.60676222772      );
  id3 -> SetBinError( xbin,    7703.7328625588725      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    697890.43191359402      );
  id3 -> SetBinError( xbin,    7067.3517262872174      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    703007.25933106663      );
  id3 -> SetBinError( xbin,    7521.6509790329574      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    711161.30217750662      );
  id3 -> SetBinError( xbin,    7893.9079140363965      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    704926.62579705240      );
  id3 -> SetBinError( xbin,    7649.1266889557355      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    683668.85099049401      );
  id3 -> SetBinError( xbin,    11305.692880605129      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    702324.40326878708      );
  id3 -> SetBinError( xbin,    10862.681238736170      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    681357.16697607702      );
  id3 -> SetBinError( xbin,    5745.8698274690832      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    662547.95757277054      );
  id3 -> SetBinError( xbin,    8860.7365554897297      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    643488.05628490541      );
  id3 -> SetBinError( xbin,    9258.0089370924998      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    624453.72977829003      );
  id3 -> SetBinError( xbin,    6274.6533219712619      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    563599.45850196830      );
  id3 -> SetBinError( xbin,    5622.9203718100989      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    518446.41473357100      );
  id3 -> SetBinError( xbin,    4685.7411262460446      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    457440.68350344052      );
  id3 -> SetBinError( xbin,    4304.9630445243665      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    396636.80701370205      );
  id3 -> SetBinError( xbin,    4122.6343572260130      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    322695.40254035615      );
  id3 -> SetBinError( xbin,    4043.0066517551572      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    257937.14209090185      );
  id3 -> SetBinError( xbin,    7980.4141802131653      );
   int xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    176962.51204679551      );
  id3 -> SetBinError( xbin,    7548.4265883023218      );
   int xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    130303.53581522140      );
  id3 -> SetBinError( xbin,    3886.1319797675260      );
   int xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    94898.924441914176      );
  id3 -> SetBinError( xbin,    3892.0920786393926      );
   int xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    58120.338041245115      );
  id3 -> SetBinError( xbin,    1746.5534577278902      );
   int xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    36852.207226866674      );
  id3 -> SetBinError( xbin,    1062.7306424846288      );
   int xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    24048.427640523405      );
  id3 -> SetBinError( xbin,    802.38988570233164      );
   int xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,    16090.371911874166      );
  id3 -> SetBinError( xbin,    779.82728081860762      );
   int xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    11074.870083963871      );
  id3 -> SetBinError( xbin,    735.63082817303075      );
   int xbin = id3->FindBin(   4.7000000000000011      );
  id3 -> SetBinContent( xbin,    6356.4501576751572      );
  id3 -> SetBinError( xbin,    700.18998486837927      );
   int xbin = id3->FindBin(   4.9000000000000004      );
  id3 -> SetBinContent( xbin,    3114.8143433067858      );
  id3 -> SetBinError( xbin,    559.33871948857848      );
   int xbin = id3->FindBin(   5.1000000000000014      );
  id3 -> SetBinContent( xbin,    3387.4374553435673      );
  id3 -> SetBinError( xbin,    968.86591655535517      );
   int xbin = id3->FindBin(   5.3000000000000007      );
  id3 -> SetBinContent( xbin,    1467.7486534935733      );
  id3 -> SetBinError( xbin,    980.63231588141434      );
   int xbin = id3->FindBin(   5.5000000000000000      );
  id3 -> SetBinContent( xbin,    1806.1120345682020      );
  id3 -> SetBinError( xbin,    286.74372918047771      );
   int xbin = id3->FindBin(   5.7000000000000011      );
  id3 -> SetBinContent( xbin,    745.64835384773016      );
  id3 -> SetBinError( xbin,    234.84391489695099      );
   int xbin = id3->FindBin(   5.9000000000000004      );
  id3 -> SetBinContent( xbin,    808.81530076981426      );
  id3 -> SetBinError( xbin,    211.49320402801212      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "pt(lep)", 50,    0.00000,  100.00000);

  id4 -> GetXaxis() -> SetTitle("pt(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(   1.0000000000000000      );
  id4 -> SetBinContent( xbin,    3426.6013686379447      );
  id4 -> SetBinError( xbin,    344.41440369974589      );
   int xbin = id4->FindBin(   3.0000000000000000      );
  id4 -> SetBinContent( xbin,    9673.3857539460696      );
  id4 -> SetBinError( xbin,    496.50758239153004      );
   int xbin = id4->FindBin(   5.0000000000000000      );
  id4 -> SetBinContent( xbin,    15564.628215242841      );
  id4 -> SetBinError( xbin,    467.35911502161434      );
   int xbin = id4->FindBin(   7.0000000000000000      );
  id4 -> SetBinContent( xbin,    23138.567346940188      );
  id4 -> SetBinError( xbin,    561.14347577399758      );
   int xbin = id4->FindBin(   9.0000000000000000      );
  id4 -> SetBinContent( xbin,    30226.820898836970      );
  id4 -> SetBinError( xbin,    959.38682134600083      );
   int xbin = id4->FindBin(   11.000000000000000      );
  id4 -> SetBinContent( xbin,    34658.471427154545      );
  id4 -> SetBinError( xbin,    1241.6907451619213      );
   int xbin = id4->FindBin(   13.000000000000000      );
  id4 -> SetBinContent( xbin,    42790.939175769949      );
  id4 -> SetBinError( xbin,    1463.6832953498815      );
   int xbin = id4->FindBin(   15.000000000000000      );
  id4 -> SetBinContent( xbin,    51153.133815645939      );
  id4 -> SetBinError( xbin,    1593.9146090872437      );
   int xbin = id4->FindBin(   17.000000000000000      );
  id4 -> SetBinContent( xbin,    57586.680823636569      );
  id4 -> SetBinError( xbin,    1361.2471121554775      );
   int xbin = id4->FindBin(   19.000000000000000      );
  id4 -> SetBinContent( xbin,    62821.511025584688      );
  id4 -> SetBinError( xbin,    1469.8080830368381      );
   int xbin = id4->FindBin(   21.000000000000000      );
  id4 -> SetBinContent( xbin,    73062.419164638966      );
  id4 -> SetBinError( xbin,    1643.7773273764267      );
   int xbin = id4->FindBin(   23.000000000000000      );
  id4 -> SetBinContent( xbin,    77053.596510514879      );
  id4 -> SetBinError( xbin,    1406.0254590859965      );
   int xbin = id4->FindBin(   25.000000000000000      );
  id4 -> SetBinContent( xbin,    88444.559594231774      );
  id4 -> SetBinError( xbin,    1794.3623819944748      );
   int xbin = id4->FindBin(   27.000000000000000      );
  id4 -> SetBinContent( xbin,    127070.38542003751      );
  id4 -> SetBinError( xbin,    32375.813267512414      );
   int xbin = id4->FindBin(   29.000000000000000      );
  id4 -> SetBinContent( xbin,    69515.034480851478      );
  id4 -> SetBinError( xbin,    32376.158190173199      );
   int xbin = id4->FindBin(   31.000000000000000      );
  id4 -> SetBinContent( xbin,    113058.18779517105      );
  id4 -> SetBinError( xbin,    3459.3602956896088      );
   int xbin = id4->FindBin(   33.000000000000000      );
  id4 -> SetBinContent( xbin,    127088.41985260794      );
  id4 -> SetBinError( xbin,    3340.9471418998978      );
   int xbin = id4->FindBin(   35.000000000000000      );
  id4 -> SetBinContent( xbin,    140140.11657687346      );
  id4 -> SetBinError( xbin,    2263.9764744933500      );
   int xbin = id4->FindBin(   37.000000000000000      );
  id4 -> SetBinContent( xbin,    161345.72974245410      );
  id4 -> SetBinError( xbin,    2256.7434389077048      );
   int xbin = id4->FindBin(   39.000000000000000      );
  id4 -> SetBinContent( xbin,    155973.85826427024      );
  id4 -> SetBinError( xbin,    1983.2877140875069      );
   int xbin = id4->FindBin(   41.000000000000000      );
  id4 -> SetBinContent( xbin,    121728.52620045777      );
  id4 -> SetBinError( xbin,    1566.1691597202303      );
   int xbin = id4->FindBin(   43.000000000000000      );
  id4 -> SetBinContent( xbin,    60302.565006670346      );
  id4 -> SetBinError( xbin,    493.08468779507569      );
   int xbin = id4->FindBin(   45.000000000000000      );
  id4 -> SetBinContent( xbin,    32452.700546375094      );
  id4 -> SetBinError( xbin,    297.44969739834983      );
   int xbin = id4->FindBin(   47.000000000000000      );
  id4 -> SetBinContent( xbin,    19851.544051356428      );
  id4 -> SetBinError( xbin,    159.71522717284995      );
   int xbin = id4->FindBin(   49.000000000000000      );
  id4 -> SetBinContent( xbin,    13709.892476020235      );
  id4 -> SetBinError( xbin,    129.96331719653497      );
   int xbin = id4->FindBin(   51.000000000000000      );
  id4 -> SetBinContent( xbin,    10135.353436723373      );
  id4 -> SetBinError( xbin,    110.18518209247321      );
   int xbin = id4->FindBin(   53.000000000000000      );
  id4 -> SetBinContent( xbin,    6448.2180264206872      );
  id4 -> SetBinError( xbin,    1074.0797149456550      );
   int xbin = id4->FindBin(   55.000000000000000      );
  id4 -> SetBinContent( xbin,    6944.2343616154512      );
  id4 -> SetBinError( xbin,    1073.0527590438026      );
   int xbin = id4->FindBin(   57.000000000000000      );
  id4 -> SetBinContent( xbin,    4687.4873588657902      );
  id4 -> SetBinError( xbin,    64.292936474671549      );
   int xbin = id4->FindBin(   59.000000000000000      );
  id4 -> SetBinContent( xbin,    3874.8490420615681      );
  id4 -> SetBinError( xbin,    58.957938286833112      );
   int xbin = id4->FindBin(   61.000000000000000      );
  id4 -> SetBinContent( xbin,    3100.4742561227345      );
  id4 -> SetBinError( xbin,    46.143569165679899      );
   int xbin = id4->FindBin(   63.000000000000000      );
  id4 -> SetBinContent( xbin,    2852.5352985802920      );
  id4 -> SetBinError( xbin,    189.47720746347363      );
   int xbin = id4->FindBin(   65.000000000000000      );
  id4 -> SetBinContent( xbin,    1889.9329569357060      );
  id4 -> SetBinError( xbin,    188.97738527002926      );
   int xbin = id4->FindBin(   67.000000000000000      );
  id4 -> SetBinContent( xbin,    1881.5327224507648      );
  id4 -> SetBinError( xbin,    38.354249435836174      );
   int xbin = id4->FindBin(   69.000000000000000      );
  id4 -> SetBinContent( xbin,    1583.8055027554731      );
  id4 -> SetBinError( xbin,    52.987465949949069      );
   int xbin = id4->FindBin(   71.000000000000000      );
  id4 -> SetBinContent( xbin,    1327.7608867861316      );
  id4 -> SetBinError( xbin,    51.742846855549999      );
   int xbin = id4->FindBin(   73.000000000000000      );
  id4 -> SetBinContent( xbin,    1135.4076415589755      );
  id4 -> SetBinError( xbin,    30.621021394305082      );
   int xbin = id4->FindBin(   75.000000000000000      );
  id4 -> SetBinContent( xbin,    1048.2624875260169      );
  id4 -> SetBinError( xbin,    51.850196354516207      );
   int xbin = id4->FindBin(   77.000000000000000      );
  id4 -> SetBinContent( xbin,    802.47202790534345      );
  id4 -> SetBinError( xbin,    53.298032464977204      );
   int xbin = id4->FindBin(   79.000000000000000      );
  id4 -> SetBinContent( xbin,    779.71904169682330      );
  id4 -> SetBinError( xbin,    28.002099736534714      );
   int xbin = id4->FindBin(   81.000000000000000      );
  id4 -> SetBinContent( xbin,    685.64308461670726      );
  id4 -> SetBinError( xbin,    25.606654302698363      );
   int xbin = id4->FindBin(   83.000000000000000      );
  id4 -> SetBinContent( xbin,    556.79346259572333      );
  id4 -> SetBinError( xbin,    42.764827738821282      );
   int xbin = id4->FindBin(   85.000000000000000      );
  id4 -> SetBinContent( xbin,    542.79742675648731      );
  id4 -> SetBinError( xbin,    39.390375829158842      );
   int xbin = id4->FindBin(   87.000000000000000      );
  id4 -> SetBinContent( xbin,    429.11578414073705      );
  id4 -> SetBinError( xbin,    34.424587876059100      );
   int xbin = id4->FindBin(   89.000000000000000      );
  id4 -> SetBinContent( xbin,    443.47952222708676      );
  id4 -> SetBinError( xbin,    29.770754170193470      );
   int xbin = id4->FindBin(   91.000000000000000      );
  id4 -> SetBinContent( xbin,    368.22314010457893      );
  id4 -> SetBinError( xbin,    16.325407027364683      );
   int xbin = id4->FindBin(   93.000000000000000      );
  id4 -> SetBinContent( xbin,    319.70942720682280      );
  id4 -> SetBinError( xbin,    9.0725764839470173      );
   int xbin = id4->FindBin(   95.000000000000000      );
  id4 -> SetBinContent( xbin,    281.18686731629475      );
  id4 -> SetBinError( xbin,    13.837167827227544      );
   int xbin = id4->FindBin(   97.000000000000000      );
  id4 -> SetBinContent( xbin,    271.95457749640536      );
  id4 -> SetBinError( xbin,    13.026496974134430      );
   int xbin = id4->FindBin(   99.000000000000000      );
  id4 -> SetBinContent( xbin,    230.61644591948962      );
  id4 -> SetBinError( xbin,    6.8746709699103290      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "DeltaRe5", 12,    0.00000,    5.00000);

  id5 -> GetXaxis() -> SetTitle("DeltaRe5");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(  0.20000000000000001      );
  id5 -> SetBinContent( xbin,    22226.139062892707      );
  id5 -> SetBinError( xbin,    126.56095744425977      );
   int xbin = id5->FindBin(  0.60000000000000009      );
  id5 -> SetBinContent( xbin,    66610.781011714731      );
  id5 -> SetBinError( xbin,    222.19633205346597      );
   int xbin = id5->FindBin(   1.0000000000000000      );
  id5 -> SetBinContent( xbin,    109522.42002822489      );
  id5 -> SetBinError( xbin,    293.32142379123934      );
   int xbin = id5->FindBin(   1.4000000000000001      );
  id5 -> SetBinContent( xbin,    152359.19744964814      );
  id5 -> SetBinError( xbin,    355.51717888027810      );
   int xbin = id5->FindBin(   1.8000000000000000      );
  id5 -> SetBinContent( xbin,    197701.31848338945      );
  id5 -> SetBinError( xbin,    411.10831842377615      );
   int xbin = id5->FindBin(   2.2000000000000002      );
  id5 -> SetBinContent( xbin,    251121.05777389600      );
  id5 -> SetBinError( xbin,    461.34752675048009      );
   int xbin = id5->FindBin(   2.6000000000000001      );
  id5 -> SetBinContent( xbin,    320170.82288009772      );
  id5 -> SetBinError( xbin,    507.62594060947623      );
   int xbin = id5->FindBin(   3.0000000000000000      );
  id5 -> SetBinContent( xbin,    389433.31569188728      );
  id5 -> SetBinError( xbin,    542.96119956178813      );
   int xbin = id5->FindBin(   3.4000000000000004      );
  id5 -> SetBinContent( xbin,    184067.17294337245      );
  id5 -> SetBinError( xbin,    450.18731721877884      );
   int xbin = id5->FindBin(   3.8000000000000003      );
  id5 -> SetBinContent( xbin,    83626.269230497768      );
  id5 -> SetBinError( xbin,    356.64661474169134      );
   int xbin = id5->FindBin(   4.2000000000000002      );
  id5 -> SetBinContent( xbin,    41633.508666879876      );
  id5 -> SetBinError( xbin,    271.45544138023098      );
   int xbin = id5->FindBin(   4.6000000000000005      );
  id5 -> SetBinContent( xbin,    21251.706604418898      );
  id5 -> SetBinError( xbin,    205.17332295064847      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "y5", 30,   -3.00000,    3.00000);

  id6 -> GetXaxis() -> SetTitle("y5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  -2.8999999999999999      );
  id6 -> SetBinContent( xbin,    39191.195230379417      );
  id6 -> SetBinError( xbin,    262.38489603744353      );
   int xbin = id6->FindBin(  -2.7000000000000002      );
  id6 -> SetBinContent( xbin,    49640.812398829010      );
  id6 -> SetBinError( xbin,    296.02459713778944      );
   int xbin = id6->FindBin(  -2.5000000000000000      );
  id6 -> SetBinContent( xbin,    60937.758557158581      );
  id6 -> SetBinError( xbin,    331.99753624109462      );
   int xbin = id6->FindBin(  -2.2999999999999998      );
  id6 -> SetBinContent( xbin,    72378.269706443578      );
  id6 -> SetBinError( xbin,    364.93234733546598      );
   int xbin = id6->FindBin(  -2.1000000000000001      );
  id6 -> SetBinContent( xbin,    83351.159394008544      );
  id6 -> SetBinError( xbin,    395.45176819639482      );
   int xbin = id6->FindBin(  -1.8999999999999999      );
  id6 -> SetBinContent( xbin,    96383.974829442101      );
  id6 -> SetBinError( xbin,    427.12660497187323      );
   int xbin = id6->FindBin(  -1.7000000000000000      );
  id6 -> SetBinContent( xbin,    106294.95940082776      );
  id6 -> SetBinError( xbin,    449.19123376521748      );
   int xbin = id6->FindBin(  -1.5000000000000000      );
  id6 -> SetBinContent( xbin,    117937.13251696034      );
  id6 -> SetBinError( xbin,    484.41713920673544      );
   int xbin = id6->FindBin(  -1.2999999999999998      );
  id6 -> SetBinContent( xbin,    128383.26445962526      );
  id6 -> SetBinError( xbin,    514.09273762005603      );
   int xbin = id6->FindBin(  -1.0999999999999999      );
  id6 -> SetBinContent( xbin,    137183.96456676073      );
  id6 -> SetBinError( xbin,    538.47876409608307      );
   int xbin = id6->FindBin( -0.89999999999999991      );
  id6 -> SetBinContent( xbin,    144957.10799227003      );
  id6 -> SetBinError( xbin,    545.79595461867609      );
   int xbin = id6->FindBin( -0.69999999999999973      );
  id6 -> SetBinContent( xbin,    151938.49289536881      );
  id6 -> SetBinError( xbin,    564.57921263169726      );
   int xbin = id6->FindBin( -0.50000000000000000      );
  id6 -> SetBinContent( xbin,    157315.10233829741      );
  id6 -> SetBinError( xbin,    572.53520748894755      );
   int xbin = id6->FindBin( -0.29999999999999982      );
  id6 -> SetBinContent( xbin,    159895.83922308980      );
  id6 -> SetBinError( xbin,    574.24491254642157      );
   int xbin = id6->FindBin(  -9.9999999999999645E-002 );
  id6 -> SetBinContent( xbin,    163130.41346926216      );
  id6 -> SetBinError( xbin,    582.68207569313415      );
   int xbin = id6->FindBin(  0.10000000000000009      );
  id6 -> SetBinContent( xbin,    163653.20144781994      );
  id6 -> SetBinError( xbin,    578.03081740132961      );
   int xbin = id6->FindBin(  0.30000000000000027      );
  id6 -> SetBinContent( xbin,    163461.82269329217      );
  id6 -> SetBinError( xbin,    575.33835152322467      );
   int xbin = id6->FindBin(  0.50000000000000000      );
  id6 -> SetBinContent( xbin,    161883.48229922733      );
  id6 -> SetBinError( xbin,    564.80652897656864      );
   int xbin = id6->FindBin(  0.70000000000000018      );
  id6 -> SetBinContent( xbin,    157427.53122286568      );
  id6 -> SetBinError( xbin,    549.01561061587711      );
   int xbin = id6->FindBin(  0.90000000000000036      );
  id6 -> SetBinContent( xbin,    152725.17919241905      );
  id6 -> SetBinError( xbin,    532.28760213193175      );
   int xbin = id6->FindBin(   1.1000000000000005      );
  id6 -> SetBinContent( xbin,    147382.95351647478      );
  id6 -> SetBinError( xbin,    513.64294771549805      );
   int xbin = id6->FindBin(   1.2999999999999998      );
  id6 -> SetBinContent( xbin,    140303.12703856191      );
  id6 -> SetBinError( xbin,    496.49451323898268      );
   int xbin = id6->FindBin(   1.5000000000000000      );
  id6 -> SetBinContent( xbin,    131689.34200923506      );
  id6 -> SetBinError( xbin,    469.73210922873267      );
   int xbin = id6->FindBin(   1.7000000000000002      );
  id6 -> SetBinContent( xbin,    121004.67106408400      );
  id6 -> SetBinError( xbin,    433.42124670635275      );
   int xbin = id6->FindBin(   1.9000000000000004      );
  id6 -> SetBinContent( xbin,    109379.61238640448      );
  id6 -> SetBinError( xbin,    411.96642662016063      );
   int xbin = id6->FindBin(   2.1000000000000005      );
  id6 -> SetBinContent( xbin,    98463.433609944492      );
  id6 -> SetBinError( xbin,    378.30241863669943      );
   int xbin = id6->FindBin(   2.3000000000000007      );
  id6 -> SetBinContent( xbin,    86644.627036961712      );
  id6 -> SetBinError( xbin,    351.52661183336181      );
   int xbin = id6->FindBin(   2.5000000000000000      );
  id6 -> SetBinContent( xbin,    74635.850020614453      );
  id6 -> SetBinError( xbin,    324.88067022136681      );
   int xbin = id6->FindBin(   2.7000000000000002      );
  id6 -> SetBinContent( xbin,    62940.943287418784      );
  id6 -> SetBinError( xbin,    304.43095285938551      );
   int xbin = id6->FindBin(   2.9000000000000004      );
  id6 -> SetBinContent( xbin,    50605.430930995266      );
  id6 -> SetBinError( xbin,    267.11335974598751      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "pt5", 40,    0.00000,   80.00000);

  id7 -> GetXaxis() -> SetTitle("pt5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(   15.000000000000000      );
  id7 -> SetBinContent( xbin,    26839.716598934781      );
  id7 -> SetBinError( xbin,    88.839813308207297      );
   int xbin = id7->FindBin(   17.000000000000000      );
  id7 -> SetBinContent( xbin,    45921.342047947612      );
  id7 -> SetBinError( xbin,    111.21446185466459      );
   int xbin = id7->FindBin(   19.000000000000000      );
  id7 -> SetBinContent( xbin,    37553.746304728578      );
  id7 -> SetBinError( xbin,    95.614718835911930      );
   int xbin = id7->FindBin(   21.000000000000000      );
  id7 -> SetBinContent( xbin,    31312.645182979311      );
  id7 -> SetBinError( xbin,    83.294662153807010      );
   int xbin = id7->FindBin(   23.000000000000000      );
  id7 -> SetBinContent( xbin,    26420.897819746275      );
  id7 -> SetBinError( xbin,    74.714195343024485      );
   int xbin = id7->FindBin(   25.000000000000000      );
  id7 -> SetBinContent( xbin,    22637.255103459975      );
  id7 -> SetBinError( xbin,    65.972327229810247      );
   int xbin = id7->FindBin(   27.000000000000000      );
  id7 -> SetBinContent( xbin,    19483.166515411591      );
  id7 -> SetBinError( xbin,    59.019155053805591      );
   int xbin = id7->FindBin(   29.000000000000000      );
  id7 -> SetBinContent( xbin,    16765.130733223330      );
  id7 -> SetBinError( xbin,    52.981560411498677      );
   int xbin = id7->FindBin(   31.000000000000000      );
  id7 -> SetBinContent( xbin,    14603.239791937200      );
  id7 -> SetBinError( xbin,    47.727745566713210      );
   int xbin = id7->FindBin(   33.000000000000000      );
  id7 -> SetBinContent( xbin,    12789.589584225834      );
  id7 -> SetBinError( xbin,    43.524986323819206      );
   int xbin = id7->FindBin(   35.000000000000000      );
  id7 -> SetBinContent( xbin,    11349.394805382139      );
  id7 -> SetBinError( xbin,    40.057663775861997      );
   int xbin = id7->FindBin(   37.000000000000000      );
  id7 -> SetBinContent( xbin,    10014.570941261671      );
  id7 -> SetBinError( xbin,    36.932972788465108      );
   int xbin = id7->FindBin(   39.000000000000000      );
  id7 -> SetBinContent( xbin,    8892.8703190739343      );
  id7 -> SetBinError( xbin,    33.840634996089300      );
   int xbin = id7->FindBin(   41.000000000000000      );
  id7 -> SetBinContent( xbin,    7967.7686201420920      );
  id7 -> SetBinError( xbin,    31.552049184190999      );
   int xbin = id7->FindBin(   43.000000000000000      );
  id7 -> SetBinContent( xbin,    7090.2219296423928      );
  id7 -> SetBinError( xbin,    28.770978740624791      );
   int xbin = id7->FindBin(   45.000000000000000      );
  id7 -> SetBinContent( xbin,    6315.1094719291896      );
  id7 -> SetBinError( xbin,    26.598608279790426      );
   int xbin = id7->FindBin(   47.000000000000000      );
  id7 -> SetBinContent( xbin,    5684.1605861956805      );
  id7 -> SetBinError( xbin,    24.887584824226959      );
   int xbin = id7->FindBin(   49.000000000000000      );
  id7 -> SetBinContent( xbin,    5099.7170806998638      );
  id7 -> SetBinError( xbin,    23.063484516660271      );
   int xbin = id7->FindBin(   51.000000000000000      );
  id7 -> SetBinContent( xbin,    4588.7736959877702      );
  id7 -> SetBinError( xbin,    21.711657723227265      );
   int xbin = id7->FindBin(   53.000000000000000      );
  id7 -> SetBinContent( xbin,    4176.1408711473905      );
  id7 -> SetBinError( xbin,    20.402966433115932      );
   int xbin = id7->FindBin(   55.000000000000000      );
  id7 -> SetBinContent( xbin,    3760.6122928225932      );
  id7 -> SetBinError( xbin,    18.991906434691629      );
   int xbin = id7->FindBin(   57.000000000000000      );
  id7 -> SetBinContent( xbin,    3393.2681040260959      );
  id7 -> SetBinError( xbin,    17.639313353482351      );
   int xbin = id7->FindBin(   59.000000000000000      );
  id7 -> SetBinContent( xbin,    3115.1426571072352      );
  id7 -> SetBinError( xbin,    17.028500447132025      );
   int xbin = id7->FindBin(   61.000000000000000      );
  id7 -> SetBinContent( xbin,    2808.5406949716526      );
  id7 -> SetBinError( xbin,    15.869530418008326      );
   int xbin = id7->FindBin(   63.000000000000000      );
  id7 -> SetBinContent( xbin,    2530.6168482382841      );
  id7 -> SetBinError( xbin,    14.602199174409114      );
   int xbin = id7->FindBin(   65.000000000000000      );
  id7 -> SetBinContent( xbin,    2336.0473753441142      );
  id7 -> SetBinError( xbin,    14.113955243994242      );
   int xbin = id7->FindBin(   67.000000000000000      );
  id7 -> SetBinContent( xbin,    2164.6360174784818      );
  id7 -> SetBinError( xbin,    13.591839678245295      );
   int xbin = id7->FindBin(   69.000000000000000      );
  id7 -> SetBinContent( xbin,    1937.3059244750029      );
  id7 -> SetBinError( xbin,    12.275412376890307      );
   int xbin = id7->FindBin(   71.000000000000000      );
  id7 -> SetBinContent( xbin,    1777.0672164758537      );
  id7 -> SetBinError( xbin,    11.972316994214768      );
   int xbin = id7->FindBin(   73.000000000000000      );
  id7 -> SetBinContent( xbin,    1638.4573155793057      );
  id7 -> SetBinError( xbin,    11.298031630756322      );
   int xbin = id7->FindBin(   75.000000000000000      );
  id7 -> SetBinContent( xbin,    1497.8677122353151      );
  id7 -> SetBinError( xbin,    10.672892032268072      );
   int xbin = id7->FindBin(   77.000000000000000      );
  id7 -> SetBinContent( xbin,    1375.6533467220463      );
  id7 -> SetBinError( xbin,    10.040182846182017      );
   int xbin = id7->FindBin(   79.000000000000000      );
  id7 -> SetBinContent( xbin,    1259.8174792582665      );
  id7 -> SetBinError( xbin,    9.3415672161957861      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
