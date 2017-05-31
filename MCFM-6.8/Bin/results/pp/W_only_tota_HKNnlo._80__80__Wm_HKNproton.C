// Cross-section is:      1885780.6905682553 +/-          804.3371379478)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -49856.58434   -2.64%
//        GQB    |      -44788.21938   -2.38%
//        QG     |      -48504.29839   -2.57%
//        QBG    |      -42982.65359   -2.28%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      962172.89732   51.02%
//        QBQ    |     1117998.96944   59.29%

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
//Wm_HKNproton                    [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_HKNnlo._80__80__Wm_HKNproton.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -1.6028714179444473E-002 );
  id1 -> SetBinError( xbin,    1.1171691823651322E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    14.917171564292335      );
  id1 -> SetBinError( xbin,    2.9102967260730113      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    326.96510982480356      );
  id1 -> SetBinError( xbin,    43.628876987006180      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2490.9590548685537      );
  id1 -> SetBinError( xbin,    151.65305785785216      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    9580.6471825903755      );
  id1 -> SetBinError( xbin,    456.98991804553810      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    31182.774037665073      );
  id1 -> SetBinError( xbin,    735.73419787615148      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    72307.132223520050      );
  id1 -> SetBinError( xbin,    1135.3801350588860      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    136385.33926522758      );
  id1 -> SetBinError( xbin,    1357.4730498294487      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    206883.41630761721      );
  id1 -> SetBinError( xbin,    1609.0025801512461      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    290825.80458874599      );
  id1 -> SetBinError( xbin,    1776.2510003516732      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    350655.95547868643      );
  id1 -> SetBinError( xbin,    1900.9333554581078      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    395007.43741879152      );
  id1 -> SetBinError( xbin,    1976.1513346859460      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    408457.57979904354      );
  id1 -> SetBinError( xbin,    1943.2474433353304      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    406460.16085228737      );
  id1 -> SetBinError( xbin,    1931.6694867933834      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    409497.96327501658      );
  id1 -> SetBinError( xbin,    1920.7410016592487      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    404183.23592106404      );
  id1 -> SetBinError( xbin,    1935.9236213329787      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    406546.07527915947      );
  id1 -> SetBinError( xbin,    1942.5526225461897      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    401028.56153409532      );
  id1 -> SetBinError( xbin,    1865.5865295659028      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    399497.80402892188      );
  id1 -> SetBinError( xbin,    1866.2056254476627      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    388741.09621259791      );
  id1 -> SetBinError( xbin,    1851.1795533989764      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    393778.63207740855      );
  id1 -> SetBinError( xbin,    1839.6219361081614      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    384610.15685798967      );
  id1 -> SetBinError( xbin,    1855.9323284119334      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    382078.25938636920      );
  id1 -> SetBinError( xbin,    1908.1624800028690      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    380213.04401542887      );
  id1 -> SetBinError( xbin,    1964.8113199615918      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    375192.54020745307      );
  id1 -> SetBinError( xbin,    1911.4648532509470      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    366343.86150157661      );
  id1 -> SetBinError( xbin,    1842.8600213838668      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    360691.33198467171      );
  id1 -> SetBinError( xbin,    1813.0075145321600      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    352569.04326610360      );
  id1 -> SetBinError( xbin,    1798.8502936193045      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    340303.22004914359      );
  id1 -> SetBinError( xbin,    1772.2551086797057      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    324462.82826597529      );
  id1 -> SetBinError( xbin,    1814.3912074065624      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    303922.12526620686      );
  id1 -> SetBinError( xbin,    1766.0815412634042      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    257534.92822148596      );
  id1 -> SetBinError( xbin,    1631.4736227430842      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    197713.76128426811      );
  id1 -> SetBinError( xbin,    1483.6986970146684      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    138958.08689014465      );
  id1 -> SetBinError( xbin,    1324.4795477070277      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    83884.777418839774      );
  id1 -> SetBinError( xbin,    1084.8976778981801      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    43024.622254459005      );
  id1 -> SetBinError( xbin,    842.26217660553186      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    17012.529912324186      );
  id1 -> SetBinError( xbin,    553.65299754911518      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    5401.7718259004523      );
  id1 -> SetBinError( xbin,    256.73995410498981      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1087.2447761376186      );
  id1 -> SetBinError( xbin,    78.364917956989231      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    115.35550465640607      );
  id1 -> SetBinError( xbin,    12.064072494656445      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    4.5145479091708722      );
  id1 -> SetBinError( xbin,   0.73252365884364834      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   -4.2959693430281412E-004 );
  id1 -> SetBinError( xbin,    1.0407216433453699E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    778788.25938991876      );
  id2 -> SetBinError( xbin,    7117.8552812276448      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    737840.61825588113      );
  id2 -> SetBinError( xbin,    7114.3420734274105      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    708396.38417366601      );
  id2 -> SetBinError( xbin,    5910.9394100398604      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    678780.86682529887      );
  id2 -> SetBinError( xbin,    5554.2295665151651      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    644289.65285223199      );
  id2 -> SetBinError( xbin,    4890.9571543330558      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    605271.98839523445      );
  id2 -> SetBinError( xbin,    5318.4349187569314      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    584330.29951388075      );
  id2 -> SetBinError( xbin,    4841.0419705261493      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    546180.55100684089      );
  id2 -> SetBinError( xbin,    3593.2842753147693      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    509760.88584714785      );
  id2 -> SetBinError( xbin,    3608.4195025746071      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    481594.70901702833      );
  id2 -> SetBinError( xbin,    3180.1003728959245      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    452835.99709206168      );
  id2 -> SetBinError( xbin,    3010.2784792435323      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    419035.38822667819      );
  id2 -> SetBinError( xbin,    2712.4867151448902      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    387552.80021168076      );
  id2 -> SetBinError( xbin,    2358.2165443498470      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    360196.95549898193      );
  id2 -> SetBinError( xbin,    2294.0850792413930      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    332835.77907956939      );
  id2 -> SetBinError( xbin,    2896.6135081584839      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    298364.88834453246      );
  id2 -> SetBinError( xbin,    1743.4787115833608      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    271125.43412613287      );
  id2 -> SetBinError( xbin,    1646.3096158759740      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    243247.73598423644      );
  id2 -> SetBinError( xbin,    1495.3490404160927      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    215720.95833291893      );
  id2 -> SetBinError( xbin,    1297.3421534180907      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    192782.66942130559      );
  id2 -> SetBinError( xbin,    1321.2010647120824      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    169938.43639486443      );
  id2 -> SetBinError( xbin,    1040.3147474701418      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    146645.04671737793      );
  id2 -> SetBinError( xbin,    973.24794893368596      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    128530.83542548162      );
  id2 -> SetBinError( xbin,    819.82065143818522      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    115342.99322984077      );
  id2 -> SetBinError( xbin,    1146.1965963393191      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    99828.501170610078      );
  id2 -> SetBinError( xbin,    851.51058123529231      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    87317.444519630357      );
  id2 -> SetBinError( xbin,    674.22186091587037      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    77801.136205151313      );
  id2 -> SetBinError( xbin,    634.62989280364525      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    73075.608186703626      );
  id2 -> SetBinError( xbin,    670.71998900562767      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    66873.605837994270      );
  id2 -> SetBinError( xbin,    546.62945065210988      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    64337.071181200015      );
  id2 -> SetBinError( xbin,    580.04977425232551      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    64621.957881973118      );
  id2 -> SetBinError( xbin,    579.20393350904965      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    66167.416867427863      );
  id2 -> SetBinError( xbin,    633.69366569725048      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    71251.653954745430      );
  id2 -> SetBinError( xbin,    643.88512646367894      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    78250.576836083070      );
  id2 -> SetBinError( xbin,    892.72691359661451      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    85382.619246350601      );
  id2 -> SetBinError( xbin,    714.84596265288030      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    94903.062139465590      );
  id2 -> SetBinError( xbin,    749.02604258395695      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    109848.62644144532      );
  id2 -> SetBinError( xbin,    913.89547997280033      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    123014.18026371136      );
  id2 -> SetBinError( xbin,    909.99233280842759      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    138333.77123736436      );
  id2 -> SetBinError( xbin,    976.05423196815354      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    158300.80733707713      );
  id2 -> SetBinError( xbin,    1129.4700035241397      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    178686.15652062860      );
  id2 -> SetBinError( xbin,    1198.2572161034714      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    197067.75862702727      );
  id2 -> SetBinError( xbin,    1353.7737916360204      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    223290.22166472237      );
  id2 -> SetBinError( xbin,    1654.3149308175762      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    243054.36526135087      );
  id2 -> SetBinError( xbin,    1491.0034796969826      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    270378.49914805486      );
  id2 -> SetBinError( xbin,    2440.4593436002401      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    297995.52765020711      );
  id2 -> SetBinError( xbin,    2447.7787601728869      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    316102.89514914737      );
  id2 -> SetBinError( xbin,    1917.0680330817966      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    349572.69690978201      );
  id2 -> SetBinError( xbin,    2908.4951859919865      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    373772.12956181582      );
  id2 -> SetBinError( xbin,    2394.6209892056886      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    406043.90187989676      );
  id2 -> SetBinError( xbin,    3473.9410208812064      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    428736.62628360320      );
  id2 -> SetBinError( xbin,    3122.8849011429488      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    457812.37730774574      );
  id2 -> SetBinError( xbin,    3803.9527288133759      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    483840.50301752612      );
  id2 -> SetBinError( xbin,    4324.1045213325633      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    508513.57958837406      );
  id2 -> SetBinError( xbin,    3931.1613414620133      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    541139.59759656177      );
  id2 -> SetBinError( xbin,    4466.7034807195651      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    567826.66190654959      );
  id2 -> SetBinError( xbin,    5123.5824505894980      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    590904.26087778097      );
  id2 -> SetBinError( xbin,    5274.5428154337205      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    623966.40940350899      );
  id2 -> SetBinError( xbin,    5847.8813271870486      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    639339.95519237570      );
  id2 -> SetBinError( xbin,    5993.0733280184595      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    674274.76285227761      );
  id2 -> SetBinError( xbin,    8302.4540850567337      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    284161.30802448012      );
  id3 -> SetBinError( xbin,    2395.2774210168991      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    310691.21093683422      );
  id3 -> SetBinError( xbin,    2518.7063874442592      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    324668.60501107504      );
  id3 -> SetBinError( xbin,    2337.3722467011503      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    335503.32321991422      );
  id3 -> SetBinError( xbin,    1994.8909295476694      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    345362.72145656066      );
  id3 -> SetBinError( xbin,    3177.4104595809426      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    347164.88681348111      );
  id3 -> SetBinError( xbin,    3130.6247112390201      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    348932.97861791612      );
  id3 -> SetBinError( xbin,    1824.1814971423892      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    356315.46152966656      );
  id3 -> SetBinError( xbin,    1825.1101781346104      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    354257.13595793163      );
  id3 -> SetBinError( xbin,    1799.2984003669435      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    354083.34215850057      );
  id3 -> SetBinError( xbin,    1770.7710504167467      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    356408.37249632331      );
  id3 -> SetBinError( xbin,    1765.5194611527502      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    351011.82784353936      );
  id3 -> SetBinError( xbin,    1743.1136612665114      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    348677.46821358352      );
  id3 -> SetBinError( xbin,    1755.8169373742737      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    351947.44559818646      );
  id3 -> SetBinError( xbin,    1749.9463965662694      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    347312.88534076023      );
  id3 -> SetBinError( xbin,    1929.0133667200282      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    344188.49565122847      );
  id3 -> SetBinError( xbin,    1953.9957557298928      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    339686.97231713525      );
  id3 -> SetBinError( xbin,    1766.4579024337465      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    336559.18003752868      );
  id3 -> SetBinError( xbin,    1734.2129684026954      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    330537.62069264520      );
  id3 -> SetBinError( xbin,    1820.9669657744832      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    327891.89654479921      );
  id3 -> SetBinError( xbin,    1956.2116949751876      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    313546.39922608394      );
  id3 -> SetBinError( xbin,    1910.5746524227045      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    311864.34536769392      );
  id3 -> SetBinError( xbin,    1833.8922301565860      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    299673.13350944401      );
  id3 -> SetBinError( xbin,    1745.7071634008580      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    289038.85233248206      );
  id3 -> SetBinError( xbin,    1722.3045160637100      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    281808.79656310932      );
  id3 -> SetBinError( xbin,    1768.4401514575738      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    265696.81933681568      );
  id3 -> SetBinError( xbin,    1830.4801270538267      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    250797.77044424112      );
  id3 -> SetBinError( xbin,    1956.4964604388067      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    233165.06474372037      );
  id3 -> SetBinError( xbin,    2018.0877724829693      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    203467.77175477732      );
  id3 -> SetBinError( xbin,    1931.5592172025597      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    184554.35205696092      );
  id3 -> SetBinError( xbin,    1973.0266521693486      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    96405.227115130387      );
  id4 -> SetBinError( xbin,    3694.5272613461802      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    278083.10806715541      );
  id4 -> SetBinError( xbin,    4438.6455614892911      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    303610.85562012083      );
  id4 -> SetBinError( xbin,    3546.3372197019662      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    308268.11994443234      );
  id4 -> SetBinError( xbin,    3616.5137925346753      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    313329.05999589054      );
  id4 -> SetBinError( xbin,    3585.8835179598673      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    322551.28262538050      );
  id4 -> SetBinError( xbin,    3360.3187362177505      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    337587.06041323225      );
  id4 -> SetBinError( xbin,    4369.7170845534674      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    327411.43152110267      );
  id4 -> SetBinError( xbin,    4249.4374670017933      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    340761.43956183398      );
  id4 -> SetBinError( xbin,    3102.0633526270535      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    346533.61689116526      );
  id4 -> SetBinError( xbin,    3197.4851252404496      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    343891.75267620955      );
  id4 -> SetBinError( xbin,    3168.7851493247617      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    347077.87963084393      );
  id4 -> SetBinError( xbin,    3044.6699396439481      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    348235.59397513326      );
  id4 -> SetBinError( xbin,    2903.9103036569281      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    351479.73165427923      );
  id4 -> SetBinError( xbin,    2937.4355979345332      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    350469.66898005013      );
  id4 -> SetBinError( xbin,    2987.0571488011101      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    357136.30983885663      );
  id4 -> SetBinError( xbin,    2918.0727275299450      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    355934.21126633696      );
  id4 -> SetBinError( xbin,    2872.8423582772853      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    350423.20322888682      );
  id4 -> SetBinError( xbin,    3171.4622651945078      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    357696.62199918844      );
  id4 -> SetBinError( xbin,    3143.4606376127790      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    358851.52464737598      );
  id4 -> SetBinError( xbin,    2858.5892555737209      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    351863.35029413254      );
  id4 -> SetBinError( xbin,    2918.4776629817466      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    356476.96363990265      );
  id4 -> SetBinError( xbin,    2895.9482623340032      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    355906.20118128386      );
  id4 -> SetBinError( xbin,    2993.6984956004067      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    352611.89437919058      );
  id4 -> SetBinError( xbin,    3024.9974674168516      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    349117.65694662271      );
  id4 -> SetBinError( xbin,    2891.9621979801823      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    345649.05254378158      );
  id4 -> SetBinError( xbin,    2806.9904002830081      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    353963.36067213927      );
  id4 -> SetBinError( xbin,    2778.8895615814345      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    352567.86519276211      );
  id4 -> SetBinError( xbin,    2819.7733505138976      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    344283.97321172827      );
  id4 -> SetBinError( xbin,    2690.9619852792089      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    346409.23778064456      );
  id4 -> SetBinError( xbin,    2714.0112651615059      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    350679.45269957703      );
  id4 -> SetBinError( xbin,    2811.8869617736154      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    346228.05110166199      );
  id4 -> SetBinError( xbin,    2755.7205862706405      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    335949.34129239508      );
  id4 -> SetBinError( xbin,    2697.3037659548354      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    340775.79155895719      );
  id4 -> SetBinError( xbin,    2803.3632974487768      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    341890.27684918954      );
  id4 -> SetBinError( xbin,    2806.9753555164812      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    335489.07557318290      );
  id4 -> SetBinError( xbin,    2725.2066820809987      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    335690.25936931360      );
  id4 -> SetBinError( xbin,    2730.3888239677135      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    328047.28822876367      );
  id4 -> SetBinError( xbin,    2740.6063981182433      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    331441.53287176439      );
  id4 -> SetBinError( xbin,    2735.7188288838734      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    327598.84308438271      );
  id4 -> SetBinError( xbin,    3178.5961121238088      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    326764.44645403937      );
  id4 -> SetBinError( xbin,    3219.3963356167437      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    309601.46331720281      );
  id4 -> SetBinError( xbin,    2791.4699627928317      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    314162.18006750511      );
  id4 -> SetBinError( xbin,    3053.7129712500973      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    309993.94805683923      );
  id4 -> SetBinError( xbin,    2997.1161125320709      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    312783.50483713759      );
  id4 -> SetBinError( xbin,    3690.5522256172317      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    298354.98813553801      );
  id4 -> SetBinError( xbin,    3674.5555431048251      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    295575.07628199545      );
  id4 -> SetBinError( xbin,    2948.2665704024298      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    291476.07966036478      );
  id4 -> SetBinError( xbin,    2967.2576387145418      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    282773.82235076081      );
  id4 -> SetBinError( xbin,    2761.5821609229956      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    282860.22148351476      );
  id4 -> SetBinError( xbin,    3175.5657750437126      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    271637.65215075290      );
  id4 -> SetBinError( xbin,    3290.7211080763932      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    270469.27944715717      );
  id4 -> SetBinError( xbin,    2878.5182127266430      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    258758.60729765726      );
  id4 -> SetBinError( xbin,    2796.5104393956144      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    253647.04926790041      );
  id4 -> SetBinError( xbin,    2800.7576830483481      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    242345.89047971374      );
  id4 -> SetBinError( xbin,    3070.3543785506904      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    235321.89943328174      );
  id4 -> SetBinError( xbin,    3095.1209527998672      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    222133.70762981160      );
  id4 -> SetBinError( xbin,    3127.1601914382472      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    209810.75244962468      );
  id4 -> SetBinError( xbin,    3204.6704827151616      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    191410.67818095768      );
  id4 -> SetBinError( xbin,    2979.6626019014748      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    187042.50439227605      );
  id4 -> SetBinError( xbin,    3270.2304276271389      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    112651.96809690558      );
  id4 -> SetBinError( xbin,    3002.1705544414790      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    27899.049290909050      );
  id5 -> SetBinError( xbin,    336.03658937060163      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    61249.387156248209      );
  id5 -> SetBinError( xbin,    439.12934987636669      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    69764.481609485651      );
  id5 -> SetBinError( xbin,    458.64395075331657      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    79478.537414113671      );
  id5 -> SetBinError( xbin,    502.60815153299689      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    89881.742612663496      );
  id5 -> SetBinError( xbin,    630.31347842780974      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    105194.61811565855      );
  id5 -> SetBinError( xbin,    686.63292265271741      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    124440.70226721022      );
  id5 -> SetBinError( xbin,    749.81748912263708      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    126104.25573391528      );
  id5 -> SetBinError( xbin,    863.56321211302577      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    99663.837642912564      );
  id5 -> SetBinError( xbin,    637.14549968400115      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    48308.314969554718      );
  id5 -> SetBinError( xbin,    221.91020125896733      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    26448.187459887798      );
  id5 -> SetBinError( xbin,    131.52111574038037      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    16778.542634853919      );
  id5 -> SetBinError( xbin,    98.086828998336628      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    11942.118581862016      );
  id5 -> SetBinError( xbin,    78.773539861099692      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    8867.2641432414839      );
  id5 -> SetBinError( xbin,    176.35579387246815      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7078.1200813028472      );
  id5 -> SetBinError( xbin,    174.21015600358288      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5594.2556133023181      );
  id5 -> SetBinError( xbin,    46.367231232423755      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4522.9924485603597      );
  id5 -> SetBinError( xbin,    39.721302605598154      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3706.8574884561781      );
  id5 -> SetBinError( xbin,    40.297481062181859      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3135.3473152562083      );
  id5 -> SetBinError( xbin,    38.189220481258296      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2707.9218760591248      );
  id5 -> SetBinError( xbin,    32.972053468582160      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2288.2960083293119      );
  id5 -> SetBinError( xbin,    32.502068513069311      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1945.4613434950934      );
  id5 -> SetBinError( xbin,    27.430463926284105      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1708.9569494694695      );
  id5 -> SetBinError( xbin,    24.373807276980340      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1431.4953669859613      );
  id5 -> SetBinError( xbin,    27.765528131170093      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1299.2074178895571      );
  id5 -> SetBinError( xbin,    25.194757123610078      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1129.6115367704233      );
  id5 -> SetBinError( xbin,    18.791971474068543      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    978.20841028426753      );
  id5 -> SetBinError( xbin,    16.826631446774499      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    874.98978052555094      );
  id5 -> SetBinError( xbin,    18.049505232803835      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    765.93137196702855      );
  id5 -> SetBinError( xbin,    16.949398580382791      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    693.36698889638956      );
  id5 -> SetBinError( xbin,    16.941114973769373      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    605.41320763792635      );
  id5 -> SetBinError( xbin,    17.798940803428916      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    541.79046936843827      );
  id5 -> SetBinError( xbin,    13.896378243985144      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    501.17806198048396      );
  id5 -> SetBinError( xbin,    14.257082516109852      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    447.57198986420849      );
  id5 -> SetBinError( xbin,    13.082396059914544      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    414.99955360182048      );
  id5 -> SetBinError( xbin,    10.102112393943754      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    357.00264567781983      );
  id5 -> SetBinError( xbin,    10.469441494530296      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    353.08266248970267      );
  id5 -> SetBinError( xbin,    12.901136246753460      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    287.29987423883875      );
  id5 -> SetBinError( xbin,    11.571964485222798      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2152.4325773051546      );
  id6 -> SetBinError( xbin,    39.311808119236254      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    6859.1358058049491      );
  id6 -> SetBinError( xbin,    70.415895216706474      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13339.852181586808      );
  id6 -> SetBinError( xbin,    97.999196167907272      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    23020.583661902874      );
  id6 -> SetBinError( xbin,    123.87489755890853      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    37509.533866546837      );
  id6 -> SetBinError( xbin,    151.74452700405050      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    61153.907979261261      );
  id6 -> SetBinError( xbin,    185.56204385715444      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    105117.71423864877      );
  id6 -> SetBinError( xbin,    246.85512548612292      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    171641.32595891715      );
  id6 -> SetBinError( xbin,    343.68017001867810      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    74973.474293090636      );
  id6 -> SetBinError( xbin,    274.06324388549262      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    28943.412059158902      );
  id6 -> SetBinError( xbin,    203.42602344404403      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    12046.030468327795      );
  id6 -> SetBinError( xbin,    148.62892184308348      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4738.5069753761518      );
  id6 -> SetBinError( xbin,    103.12750493364824      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11202.199114811043      );
  id7 -> SetBinError( xbin,    123.34147409478916      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    14602.813794663611      );
  id7 -> SetBinError( xbin,    138.19128240661530      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19100.539140815523      );
  id7 -> SetBinError( xbin,    158.80331866655337      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23530.920026354674      );
  id7 -> SetBinError( xbin,    176.39486939271973      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28223.059825315897      );
  id7 -> SetBinError( xbin,    196.96443647715049      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33135.446403863571      );
  id7 -> SetBinError( xbin,    211.93774410386172      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    38014.930543837720      );
  id7 -> SetBinError( xbin,    233.11783057952445      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    42376.301294659919      );
  id7 -> SetBinError( xbin,    248.04907556034269      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45889.692996643760      );
  id7 -> SetBinError( xbin,    263.04642475416568      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    49559.278844076383      );
  id7 -> SetBinError( xbin,    275.15232258801939      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52611.798229624437      );
  id7 -> SetBinError( xbin,    290.45532425773251      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    54780.800465590961      );
  id7 -> SetBinError( xbin,    300.29164632120279      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    56258.877095444281      );
  id7 -> SetBinError( xbin,    306.07983131395980      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    56650.237187151135      );
  id7 -> SetBinError( xbin,    310.22930229125154      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    56583.530627690285      );
  id7 -> SetBinError( xbin,    310.63688636932329      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    56522.257171254285      );
  id7 -> SetBinError( xbin,    315.75595761038585      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    55269.882659944968      );
  id7 -> SetBinError( xbin,    309.11879729948572      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    52865.569231405614      );
  id7 -> SetBinError( xbin,    300.59162337415694      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    50271.099791350462      );
  id7 -> SetBinError( xbin,    293.01621172775754      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    47129.340398450309      );
  id7 -> SetBinError( xbin,    279.75754206890809      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    43067.701101913917      );
  id7 -> SetBinError( xbin,    263.35085882830316      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    39381.923630235979      );
  id7 -> SetBinError( xbin,    248.27860010140341      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    35159.709079888307      );
  id7 -> SetBinError( xbin,    237.37232018846316      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    30521.023054331483      );
  id7 -> SetBinError( xbin,    214.71537388832684      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    25747.139766424672      );
  id7 -> SetBinError( xbin,    194.20904873616590      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    21506.376826324187      );
  id7 -> SetBinError( xbin,    178.47334312385146      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17371.709125408797      );
  id7 -> SetBinError( xbin,    154.58704916155435      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    13490.208352937989      );
  id7 -> SetBinError( xbin,    135.49513704632395      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    10054.349966307491      );
  id7 -> SetBinError( xbin,    116.76202751189655      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7206.3374989482172      );
  id7 -> SetBinError( xbin,    99.127931676057045      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5718.0942048159986      );
  id8 -> SetBinError( xbin,    32.606122756484318      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10333.407144029734      );
  id8 -> SetBinError( xbin,    43.359760578062094      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9051.3609510104270      );
  id8 -> SetBinError( xbin,    40.260665156341211      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    7949.7444749701453      );
  id8 -> SetBinError( xbin,    37.280744477818011      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    6965.6459107288219      );
  id8 -> SetBinError( xbin,    35.029079484571739      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6221.1328533493215      );
  id8 -> SetBinError( xbin,    32.450778714803938      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5530.7245138671260      );
  id8 -> SetBinError( xbin,    30.143007168940574      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    4882.0059739671797      );
  id8 -> SetBinError( xbin,    28.011893354749397      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4413.1907552809053      );
  id8 -> SetBinError( xbin,    26.562466103654920      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    3954.8183958626610      );
  id8 -> SetBinError( xbin,    25.033181718189333      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3559.0781442813227      );
  id8 -> SetBinError( xbin,    23.407727308785415      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3233.9053748808856      );
  id8 -> SetBinError( xbin,    22.163604335853901      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2870.0408466830540      );
  id8 -> SetBinError( xbin,    20.728523674453367      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2628.3104261993299      );
  id8 -> SetBinError( xbin,    19.398422651507545      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2398.7257734120535      );
  id8 -> SetBinError( xbin,    18.454883960249937      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2214.8319469394351      );
  id8 -> SetBinError( xbin,    17.992469076725204      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1995.4673509573524      );
  id8 -> SetBinError( xbin,    16.972029980752033      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1811.6367240765940      );
  id8 -> SetBinError( xbin,    15.708156284415987      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1676.1802474596684      );
  id8 -> SetBinError( xbin,    15.181738384949730      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1537.5126948363759      );
  id8 -> SetBinError( xbin,    14.639698925579173      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1416.8417517345956      );
  id8 -> SetBinError( xbin,    13.961168668513970      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1285.0391940976065      );
  id8 -> SetBinError( xbin,    12.947135755741831      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1206.4507807422572      );
  id8 -> SetBinError( xbin,    12.879357419051175      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1104.3220790771727      );
  id8 -> SetBinError( xbin,    11.947078892623674      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1013.5841084475355      );
  id8 -> SetBinError( xbin,    11.391567573495221      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    941.55735106406428      );
  id8 -> SetBinError( xbin,    10.912323074190169      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    868.03974041032131      );
  id8 -> SetBinError( xbin,    10.384431140909349      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    805.37068402223474      );
  id8 -> SetBinError( xbin,    9.8983080985973295      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
