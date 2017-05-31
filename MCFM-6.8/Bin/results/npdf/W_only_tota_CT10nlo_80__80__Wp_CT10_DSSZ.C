// Cross-section is:      2365996.5000974233 +/-          977.8605932200)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -81121.11189   -3.43%
//        GQB    |      -43783.94334   -1.85%
//        QG     |      -98142.92432   -4.15%
//        QBG    |      -47363.54615   -2.00%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1379767.69557   58.32%
//        QBQ    |     1262763.26181   53.37%

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
  id1 -> SetBinContent( xbin,    3.4045723867466418      );
  id1 -> SetBinError( xbin,    1.7098671378138957      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    590.57300833655393      );
  id1 -> SetBinError( xbin,    82.043238018474653      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    5877.3935253691679      );
  id1 -> SetBinError( xbin,    534.89312719239103      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    25118.812932623183      );
  id1 -> SetBinError( xbin,    949.63211280138239      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    61386.953890791563      );
  id1 -> SetBinError( xbin,    1334.7680271150864      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    115440.32136785291      );
  id1 -> SetBinError( xbin,    1538.1292431345171      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    174584.63798745509      );
  id1 -> SetBinError( xbin,    1838.1957073569838      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    234644.15127229781      );
  id1 -> SetBinError( xbin,    1982.5080027733804      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    281990.96147915884      );
  id1 -> SetBinError( xbin,    2736.3917806403178      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    318283.51362037699      );
  id1 -> SetBinError( xbin,    2813.1730733003583      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    355763.31811157864      );
  id1 -> SetBinError( xbin,    2248.4127741397310      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    379177.22257035243      );
  id1 -> SetBinError( xbin,    2298.6054378489221      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    396568.73537102691      );
  id1 -> SetBinError( xbin,    2328.2831753167607      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    401908.50803112256      );
  id1 -> SetBinError( xbin,    2329.0681332254740      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    406333.22793030617      );
  id1 -> SetBinError( xbin,    2291.3399982955016      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    412359.35393884010      );
  id1 -> SetBinError( xbin,    2249.3947337963173      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    410347.92641602701      );
  id1 -> SetBinError( xbin,    2253.2358025725152      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    415088.58806176035      );
  id1 -> SetBinError( xbin,    2256.0713787227714      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    414477.57752396725      );
  id1 -> SetBinError( xbin,    2443.2230682442914      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    415179.55472342146      );
  id1 -> SetBinError( xbin,    2419.3637078762708      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    413608.28496533894      );
  id1 -> SetBinError( xbin,    2208.2714074626733      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    411241.25012696383      );
  id1 -> SetBinError( xbin,    2202.7273979956603      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    415950.19353945740      );
  id1 -> SetBinError( xbin,    2244.4779033384962      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    414879.57930571807      );
  id1 -> SetBinError( xbin,    2257.9948816356473      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    420416.89264646312      );
  id1 -> SetBinError( xbin,    2218.9975597617672      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    414548.42864619847      );
  id1 -> SetBinError( xbin,    2232.4999692501970      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    423165.80341822258      );
  id1 -> SetBinError( xbin,    2280.3727863903305      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    422615.46702630632      );
  id1 -> SetBinError( xbin,    2260.3389381966917      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    421396.15641095210      );
  id1 -> SetBinError( xbin,    2300.2125345461409      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    422115.86101694353      );
  id1 -> SetBinError( xbin,    2348.6811715374874      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    417327.93882723968      );
  id1 -> SetBinError( xbin,    2450.9686712943089      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    407685.88737927668      );
  id1 -> SetBinError( xbin,    2317.6421930611400      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    383563.55604917312      );
  id1 -> SetBinError( xbin,    2347.4208706368331      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    348548.23876510933      );
  id1 -> SetBinError( xbin,    2308.3264427187428      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    307722.08174488583      );
  id1 -> SetBinError( xbin,    2227.5216385023414      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    243031.59144950844      );
  id1 -> SetBinError( xbin,    2065.7624049829847      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    171765.38701237348      );
  id1 -> SetBinError( xbin,    2032.6550544828167      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    98135.158722450433      );
  id1 -> SetBinError( xbin,    1641.3003610321778      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    37980.354449064755      );
  id1 -> SetBinError( xbin,    1147.5459083958738      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    8447.7553480618844      );
  id1 -> SetBinError( xbin,    548.07653101559458      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    682.48362585780319      );
  id1 -> SetBinError( xbin,    116.25211176522733      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.9370484481471051      );
  id1 -> SetBinError( xbin,    1.1275695263296168      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    861855.44542744616      );
  id2 -> SetBinError( xbin,    9691.3448187482009      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    821623.54111597466      );
  id2 -> SetBinError( xbin,    7495.0711958855336      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    791571.63131958991      );
  id2 -> SetBinError( xbin,    7572.2138370959146      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    752224.62680138694      );
  id2 -> SetBinError( xbin,    9191.5864368686380      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    715259.48554923257      );
  id2 -> SetBinError( xbin,    7064.4544020770873      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    676405.27618137375      );
  id2 -> SetBinError( xbin,    6401.0213873865086      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    624047.27777217259      );
  id2 -> SetBinError( xbin,    4624.5259999824102      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    583068.92255930824      );
  id2 -> SetBinError( xbin,    4230.2618778275491      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    566528.02387007687      );
  id2 -> SetBinError( xbin,    5592.6889653848702      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    517276.10995835857      );
  id2 -> SetBinError( xbin,    3466.1240707514253      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    489998.53807148366      );
  id2 -> SetBinError( xbin,    4003.5617831968902      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    444140.66776902083      );
  id2 -> SetBinError( xbin,    3018.1478369249362      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    406861.32336361415      );
  id2 -> SetBinError( xbin,    2933.0916512153717      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    377278.60322467936      );
  id2 -> SetBinError( xbin,    3013.2353132685930      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    343962.73238137946      );
  id2 -> SetBinError( xbin,    2295.6601986973105      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    313297.22764325573      );
  id2 -> SetBinError( xbin,    2281.4394023763539      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    286174.19563249988      );
  id2 -> SetBinError( xbin,    2776.9707643984698      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    251133.76254462136      );
  id2 -> SetBinError( xbin,    1863.8858816773479      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    223492.33433536408      );
  id2 -> SetBinError( xbin,    1622.0237518118395      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    199148.24904532524      );
  id2 -> SetBinError( xbin,    1389.5150904633745      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    179372.14999793889      );
  id2 -> SetBinError( xbin,    2826.6761358525250      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    154244.48586129921      );
  id2 -> SetBinError( xbin,    1401.5593599599906      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    135704.02712221307      );
  id2 -> SetBinError( xbin,    1071.5051516314397      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    117747.78812867755      );
  id2 -> SetBinError( xbin,    968.99197036477869      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    104744.64595119508      );
  id2 -> SetBinError( xbin,    922.43248510340163      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    93535.539429743585      );
  id2 -> SetBinError( xbin,    1237.6281220744263      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    84888.598891456320      );
  id2 -> SetBinError( xbin,    1004.2293786445231      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    75942.240048916254      );
  id2 -> SetBinError( xbin,    764.42180531316842      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    72500.518527071705      );
  id2 -> SetBinError( xbin,    746.12125534059317      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    70741.037758978069      );
  id2 -> SetBinError( xbin,    889.86093198577737      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    69910.988786804708      );
  id2 -> SetBinError( xbin,    742.37579181684941      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    75946.457516919691      );
  id2 -> SetBinError( xbin,    1251.0986938290107      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    76849.041924503908      );
  id2 -> SetBinError( xbin,    737.15314400646287      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    85333.538356089790      );
  id2 -> SetBinError( xbin,    850.07874996925318      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    94730.421920363617      );
  id2 -> SetBinError( xbin,    909.19583297457200      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    107161.40309689334      );
  id2 -> SetBinError( xbin,    938.84057502076814      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    121677.70340878906      );
  id2 -> SetBinError( xbin,    1010.1316183424468      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    138949.01607056314      );
  id2 -> SetBinError( xbin,    1316.0914632363165      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    163701.33300383523      );
  id2 -> SetBinError( xbin,    1929.2286966069737      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    180335.21587358476      );
  id2 -> SetBinError( xbin,    1305.4990256455933      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    209777.48644622241      );
  id2 -> SetBinError( xbin,    2825.6857815408998      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    235476.30457643629      );
  id2 -> SetBinError( xbin,    1693.1052840823961      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    266719.64428937348      );
  id2 -> SetBinError( xbin,    3130.7068826181089      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    295470.35182589351      );
  id2 -> SetBinError( xbin,    1806.9238260317727      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    329741.66964058182      );
  id2 -> SetBinError( xbin,    2635.8026065014260      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    362500.27277104696      );
  id2 -> SetBinError( xbin,    2422.7324652880502      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    402970.63133241492      );
  id2 -> SetBinError( xbin,    2992.0921571597632      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    437577.77880983922      );
  id2 -> SetBinError( xbin,    2960.1640385750416      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    479932.77420079778      );
  id2 -> SetBinError( xbin,    3493.5873561281287      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    515685.97240866278      );
  id2 -> SetBinError( xbin,    4059.2638231734477      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    555944.72834827588      );
  id2 -> SetBinError( xbin,    4087.4405150526645      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    601091.21206085652      );
  id2 -> SetBinError( xbin,    4828.3657789482959      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    641008.06724359794      );
  id2 -> SetBinError( xbin,    5137.9516491642680      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    675263.66932717955      );
  id2 -> SetBinError( xbin,    5076.5822430749231      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    723532.27090302040      );
  id2 -> SetBinError( xbin,    12321.912045408555      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    765960.14129400137      );
  id2 -> SetBinError( xbin,    6296.4600762144464      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    809880.21291704872      );
  id2 -> SetBinError( xbin,    6372.9593838077699      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    849024.39575362939      );
  id2 -> SetBinError( xbin,    7194.3019058591935      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    886940.69101711980      );
  id2 -> SetBinError( xbin,    8481.3518230710088      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    930110.51199224091      );
  id2 -> SetBinError( xbin,    9008.6815932818063      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    148783.90387626083      );
  id3 -> SetBinError( xbin,    1462.7245191693557      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    201923.76865860683      );
  id3 -> SetBinError( xbin,    1761.4708473991013      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    258049.79109396070      );
  id3 -> SetBinError( xbin,    2043.6878362629573      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    307106.96838150412      );
  id3 -> SetBinError( xbin,    2316.9757624255390      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    345961.83385539183      );
  id3 -> SetBinError( xbin,    2525.8090938823111      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    383957.65394291893      );
  id3 -> SetBinError( xbin,    2643.8482208784662      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    411119.52609118872      );
  id3 -> SetBinError( xbin,    2818.3234550266056      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    429419.37197934132      );
  id3 -> SetBinError( xbin,    2851.3694415498935      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    442185.56760847190      );
  id3 -> SetBinError( xbin,    2684.2469039359958      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    448614.50548432750      );
  id3 -> SetBinError( xbin,    2772.4069510193272      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    457365.16253702494      );
  id3 -> SetBinError( xbin,    2713.8503064677593      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    451529.32698138460      );
  id3 -> SetBinError( xbin,    2790.2591487851164      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    455678.72089213051      );
  id3 -> SetBinError( xbin,    2804.8314105299887      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    452778.85139923880      );
  id3 -> SetBinError( xbin,    2717.1395955277553      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    454861.26658184204      );
  id3 -> SetBinError( xbin,    2677.1897194861217      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    455584.28587081155      );
  id3 -> SetBinError( xbin,    2671.8859761563358      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    461724.61812897283      );
  id3 -> SetBinError( xbin,    2683.3452416220625      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    456746.20076764771      );
  id3 -> SetBinError( xbin,    2674.2217787501336      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    464324.21371017094      );
  id3 -> SetBinError( xbin,    2740.7307876534287      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    467991.92965923244      );
  id3 -> SetBinError( xbin,    2994.9501405248207      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    465113.47413186927      );
  id3 -> SetBinError( xbin,    2831.0236835588557      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    470570.74903053325      );
  id3 -> SetBinError( xbin,    2720.9106431870359      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    468090.96761349816      );
  id3 -> SetBinError( xbin,    2822.7817400620502      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    459707.90331808350      );
  id3 -> SetBinError( xbin,    2872.2150163410170      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    436404.40337982663      );
  id3 -> SetBinError( xbin,    2805.4935715962065      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    418076.21182773967      );
  id3 -> SetBinError( xbin,    2740.2546298741818      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    370557.90859522979      );
  id3 -> SetBinError( xbin,    2673.6254534946056      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    325600.44926878455      );
  id3 -> SetBinError( xbin,    2554.3128589916423      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    264652.88588778209      );
  id3 -> SetBinError( xbin,    2108.1093474951485      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    195472.60330526772      );
  id3 -> SetBinError( xbin,    1758.4712719817312      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    46731.507551106799      );
  id4 -> SetBinError( xbin,    1654.1795120403990      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    142335.72019279198      );
  id4 -> SetBinError( xbin,    2185.9725738326624      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    170239.97681052322      );
  id4 -> SetBinError( xbin,    2471.8220502893355      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    195333.28432724340      );
  id4 -> SetBinError( xbin,    2710.9477508241616      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    226443.66968126452      );
  id4 -> SetBinError( xbin,    2913.6975238889981      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    254648.64495739876      );
  id4 -> SetBinError( xbin,    3102.0144992300525      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    284653.97437376436      );
  id4 -> SetBinError( xbin,    3266.6049632234026      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    302204.49640141882      );
  id4 -> SetBinError( xbin,    3568.4724158293220      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    327103.58856586064      );
  id4 -> SetBinError( xbin,    3839.1597970320186      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    342938.67713042512      );
  id4 -> SetBinError( xbin,    3872.7732098846936      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    361783.11401048140      );
  id4 -> SetBinError( xbin,    3881.3983092734770      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    379343.43336530944      );
  id4 -> SetBinError( xbin,    3968.7419631085713      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    398651.79941241740      );
  id4 -> SetBinError( xbin,    4663.2255743099959      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    401582.16987633030      );
  id4 -> SetBinError( xbin,    4675.1715139490434      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    421058.56705713272      );
  id4 -> SetBinError( xbin,    4470.2115906690260      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    430080.53294006526      );
  id4 -> SetBinError( xbin,    4388.4725515591135      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    443790.54880209849      );
  id4 -> SetBinError( xbin,    4260.3367521558775      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    443000.04862265405      );
  id4 -> SetBinError( xbin,    4442.4296430157619      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    440976.10002400907      );
  id4 -> SetBinError( xbin,    4645.7859233121953      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    446504.77663325332      );
  id4 -> SetBinError( xbin,    4560.4216655144655      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    455243.84803142177      );
  id4 -> SetBinError( xbin,    4450.2761619077028      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    456114.05518230138      );
  id4 -> SetBinError( xbin,    4344.8962232793165      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    450482.68776025809      );
  id4 -> SetBinError( xbin,    4221.3052097600512      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    457272.40122434613      );
  id4 -> SetBinError( xbin,    4275.2555395397985      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    456927.18652090890      );
  id4 -> SetBinError( xbin,    4308.7414189254450      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    452968.65773541806      );
  id4 -> SetBinError( xbin,    4385.8734811677932      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    456664.82189780520      );
  id4 -> SetBinError( xbin,    4598.1697747801654      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    455145.35444176424      );
  id4 -> SetBinError( xbin,    4536.6104291622951      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    452339.69140553469      );
  id4 -> SetBinError( xbin,    4316.7810575804306      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    455316.59479234408      );
  id4 -> SetBinError( xbin,    4463.2334585919089      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    448735.00751964090      );
  id4 -> SetBinError( xbin,    4386.9095641653512      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    453640.37769536697      );
  id4 -> SetBinError( xbin,    4378.7004939911258      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    454476.82780675776      );
  id4 -> SetBinError( xbin,    4253.3749572725019      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    462816.96923873876      );
  id4 -> SetBinError( xbin,    4453.5656333854640      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    464611.15410672093      );
  id4 -> SetBinError( xbin,    4476.5483638284313      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    453015.51827040233      );
  id4 -> SetBinError( xbin,    4333.7715801526301      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    463074.88916450564      );
  id4 -> SetBinError( xbin,    4323.3581233151535      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    465810.08413084951      );
  id4 -> SetBinError( xbin,    4761.9134182554635      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    465908.90376763820      );
  id4 -> SetBinError( xbin,    4833.6961174135949      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    463103.54525756766      );
  id4 -> SetBinError( xbin,    4634.3764171268185      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    466191.82228825131      );
  id4 -> SetBinError( xbin,    4526.0186046896206      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    471754.11216940521      );
  id4 -> SetBinError( xbin,    4570.4745167705696      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    465750.13758194569      );
  id4 -> SetBinError( xbin,    4414.0538006712140      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    468837.76895545120      );
  id4 -> SetBinError( xbin,    4650.6842257853841      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    469050.12290101196      );
  id4 -> SetBinError( xbin,    4733.4230794133819      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    461049.27328832378      );
  id4 -> SetBinError( xbin,    4628.0930537440472      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    470471.03539688868      );
  id4 -> SetBinError( xbin,    4617.1477251858851      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    460984.96016050712      );
  id4 -> SetBinError( xbin,    4685.5935160875561      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    455029.94658880658      );
  id4 -> SetBinError( xbin,    4724.7341217318681      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    443507.17394662817      );
  id4 -> SetBinError( xbin,    4427.5193660864470      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    427672.21053644997      );
  id4 -> SetBinError( xbin,    4289.0168515016767      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    415949.20258579863      );
  id4 -> SetBinError( xbin,    4804.9107667406888      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    400994.75734194170      );
  id4 -> SetBinError( xbin,    4846.8605531886697      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    377166.45302689221      );
  id4 -> SetBinError( xbin,    4318.5450666140341      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    359533.30725175689      );
  id4 -> SetBinError( xbin,    3765.5691897887036      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    325103.42027594522      );
  id4 -> SetBinError( xbin,    3652.5682855671707      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    41504.317397981729      );
  id5 -> SetBinError( xbin,    455.08072058050425      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    91231.373042434381      );
  id5 -> SetBinError( xbin,    593.90315781316531      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    100579.14718492632      );
  id5 -> SetBinError( xbin,    707.42470951283360      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    108561.09579468494      );
  id5 -> SetBinError( xbin,    781.31974304137771      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    119848.05930542604      );
  id5 -> SetBinError( xbin,    826.89184963057698      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    134456.79471852601      );
  id5 -> SetBinError( xbin,    1257.2807385148012      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    153081.87818949349      );
  id5 -> SetBinError( xbin,    1282.2512286487934      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    143560.42172215725      );
  id5 -> SetBinError( xbin,    1191.4259505620048      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    116707.01656587634      );
  id5 -> SetBinError( xbin,    998.53518437043533      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    57269.641118243686      );
  id5 -> SetBinError( xbin,    281.03801735946041      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    30359.017343875297      );
  id5 -> SetBinError( xbin,    159.41214746118018      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19066.164993090202      );
  id5 -> SetBinError( xbin,    118.05556386819158      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13160.977501381445      );
  id5 -> SetBinError( xbin,    92.803246109610200      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9714.4532062381495      );
  id5 -> SetBinError( xbin,    75.533696810426875      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7415.8046423132473      );
  id5 -> SetBinError( xbin,    66.855171574159797      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5742.6747189787693      );
  id5 -> SetBinError( xbin,    60.694111631201324      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4581.6395292815068      );
  id5 -> SetBinError( xbin,    50.059109875822628      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3697.9127605801305      );
  id5 -> SetBinError( xbin,    44.073828823629022      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2988.7648123856761      );
  id5 -> SetBinError( xbin,    38.382601809477798      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2555.8582310859679      );
  id5 -> SetBinError( xbin,    30.587008928535319      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2039.7635387157538      );
  id5 -> SetBinError( xbin,    52.489566832956903      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1787.6389595079427      );
  id5 -> SetBinError( xbin,    55.097704650862909      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1569.1302029369704      );
  id5 -> SetBinError( xbin,    32.677427539917531      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1264.5978321087423      );
  id5 -> SetBinError( xbin,    23.381831750594220      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1072.1848166384968      );
  id5 -> SetBinError( xbin,    24.687682641760706      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    991.78231989896892      );
  id5 -> SetBinError( xbin,    23.768669534360107      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    845.77406190945339      );
  id5 -> SetBinError( xbin,    19.874155812978671      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    739.08482570050182      );
  id5 -> SetBinError( xbin,    21.129689563822698      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    640.27621883567519      );
  id5 -> SetBinError( xbin,    19.384131729899202      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    602.81455126742071      );
  id5 -> SetBinError( xbin,    14.693667022376880      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    491.06454311807352      );
  id5 -> SetBinError( xbin,    20.386931946635862      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    358.09876388535270      );
  id5 -> SetBinError( xbin,    80.918581542968042      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    496.14502119454238      );
  id5 -> SetBinError( xbin,    79.473320187763179      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    341.40879501711214      );
  id5 -> SetBinError( xbin,    11.618740136157463      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    306.82837084875780      );
  id5 -> SetBinError( xbin,    10.577193754431621      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    290.91165859237861      );
  id5 -> SetBinError( xbin,    13.372157876048311      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    267.94559125395932      );
  id5 -> SetBinError( xbin,    12.595287981952271      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    229.41865509681676      );
  id5 -> SetBinError( xbin,    8.6586030217570311      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2827.3201262217881      );
  id6 -> SetBinError( xbin,    55.688491059562210      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9380.1397643821383      );
  id6 -> SetBinError( xbin,    104.43599571117704      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    18883.581452695711      );
  id6 -> SetBinError( xbin,    152.72337903562203      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33018.907996035829      );
  id6 -> SetBinError( xbin,    201.80547873548485      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    54330.646631374948      );
  id6 -> SetBinError( xbin,    252.37541322727074      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    84462.853196963202      );
  id6 -> SetBinError( xbin,    296.76559000046149      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    129164.38194531512      );
  id6 -> SetBinError( xbin,    357.44803824324026      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    180501.64998292393      );
  id6 -> SetBinError( xbin,    427.37741577326068      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    70070.075573578521      );
  id6 -> SetBinError( xbin,    299.85560032258883      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24028.217065858582      );
  id6 -> SetBinError( xbin,    199.36625650155409      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    8831.1083019594989      );
  id6 -> SetBinError( xbin,    130.41469481909004      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3387.4903948460578      );
  id6 -> SetBinError( xbin,    85.392149818505573      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11817.243149739552      );
  id7 -> SetBinError( xbin,    147.16030500708877      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15746.414712834652      );
  id7 -> SetBinError( xbin,    170.92323208820892      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19821.657826563656      );
  id7 -> SetBinError( xbin,    195.29877229702493      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24136.513572622251      );
  id7 -> SetBinError( xbin,    220.06987171754838      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28582.646795648147      );
  id7 -> SetBinError( xbin,    241.50951622149708      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33352.419172954920      );
  id7 -> SetBinError( xbin,    264.81341713534351      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37539.704118102178      );
  id7 -> SetBinError( xbin,    286.49107065477290      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    41535.831355746923      );
  id7 -> SetBinError( xbin,    305.73672954981595      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45921.423493757815      );
  id7 -> SetBinError( xbin,    324.21145972730835      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    49389.877047683127      );
  id7 -> SetBinError( xbin,    340.16278471705840      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52399.804131192337      );
  id7 -> SetBinError( xbin,    352.63944339026375      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    54371.640167858539      );
  id7 -> SetBinError( xbin,    363.33614705995177      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    56962.582226142287      );
  id7 -> SetBinError( xbin,    380.10516937184514      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    58937.040718506149      );
  id7 -> SetBinError( xbin,    384.98152664053498      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59716.023787917176      );
  id7 -> SetBinError( xbin,    387.89535873935972      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    59733.521966154876      );
  id7 -> SetBinError( xbin,    386.99232611054208      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    59638.852860896666      );
  id7 -> SetBinError( xbin,    383.74152541285207      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    59517.456871766262      );
  id7 -> SetBinError( xbin,    383.85487892200138      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    58353.142786302291      );
  id7 -> SetBinError( xbin,    378.88236950461635      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    56461.580104432651      );
  id7 -> SetBinError( xbin,    365.66527865981874      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    53269.145709423981      );
  id7 -> SetBinError( xbin,    350.83305546155162      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    50556.730401453686      );
  id7 -> SetBinError( xbin,    334.04534706344151      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    47199.284364271312      );
  id7 -> SetBinError( xbin,    318.17611926900179      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    42775.153898077202      );
  id7 -> SetBinError( xbin,    294.29129056799604      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    38982.447240024710      );
  id7 -> SetBinError( xbin,    278.24572058442311      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    34431.543485657137      );
  id7 -> SetBinError( xbin,    257.23253481623135      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    29583.056246350563      );
  id7 -> SetBinError( xbin,    235.39804105383453      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    24583.012147026231      );
  id7 -> SetBinError( xbin,    211.37458339750177      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    19987.825358219219      );
  id7 -> SetBinError( xbin,    193.34486193262197      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    15851.486012048430      );
  id7 -> SetBinError( xbin,    169.37858156720779      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    6911.0016411220558      );
  id8 -> SetBinError( xbin,    44.969341732554142      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12508.610756016475      );
  id8 -> SetBinError( xbin,    59.510952983807080      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    10825.568159761517      );
  id8 -> SetBinError( xbin,    53.972281136127812      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9452.7106713558096      );
  id8 -> SetBinError( xbin,    49.783050852865401      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8352.9970521591113      );
  id8 -> SetBinError( xbin,    46.102482284596661      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7347.8423799114425      );
  id8 -> SetBinError( xbin,    42.675696064857156      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6452.6527619483677      );
  id8 -> SetBinError( xbin,    39.304251903289227      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5746.7492796334845      );
  id8 -> SetBinError( xbin,    36.699003361005516      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5065.3513161412284      );
  id8 -> SetBinError( xbin,    33.963002205960947      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4470.9154807994710      );
  id8 -> SetBinError( xbin,    31.357631469791258      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3967.3478490640964      );
  id8 -> SetBinError( xbin,    29.021661373169742      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3551.2550321174513      );
  id8 -> SetBinError( xbin,    26.924971014317887      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3176.7465552878220      );
  id8 -> SetBinError( xbin,    24.912457562353499      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2887.3172225456683      );
  id8 -> SetBinError( xbin,    23.616380235378266      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2602.0534573518485      );
  id8 -> SetBinError( xbin,    22.007680543010927      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2391.7523701332298      );
  id8 -> SetBinError( xbin,    21.492350451894765      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2143.7204988679623      );
  id8 -> SetBinError( xbin,    20.185501157893754      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1992.3390809924294      );
  id8 -> SetBinError( xbin,    19.091866780683407      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1800.8774740891620      );
  id8 -> SetBinError( xbin,    18.027839548864900      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1658.9136561452310      );
  id8 -> SetBinError( xbin,    17.269490471522261      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1491.1800133742629      );
  id8 -> SetBinError( xbin,    16.331726074690248      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1396.6245951850060      );
  id8 -> SetBinError( xbin,    15.420767584217014      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1250.9864196194412      );
  id8 -> SetBinError( xbin,    14.528655902528469      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1172.3351815783092      );
  id8 -> SetBinError( xbin,    13.841138806695209      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1049.0420570353983      );
  id8 -> SetBinError( xbin,    12.760266158832424      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    999.37399671985918      );
  id8 -> SetBinError( xbin,    12.436193410016717      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    919.41154431122004      );
  id8 -> SetBinError( xbin,    12.303955907453332      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    836.72869893614507      );
  id8 -> SetBinError( xbin,    11.303363295340572      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
