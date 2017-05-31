// Cross-section is:      2380068.6547825388 +/-          965.9615073365)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -81948.90961   -3.44%
//        GQB    |      -44962.07629   -1.89%
//        QG     |      -98475.69557   -4.14%
//        QBG    |      -49055.63193   -2.06%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1384900.45528   58.19%
//        QBQ    |     1275721.08311   53.60%

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
//Wp_CT10_EPS09                   [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wp_CT10_EPS09.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    11.252013304881418      );
  id1 -> SetBinError( xbin,    5.3155937552219878      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    579.83019206919516      );
  id1 -> SetBinError( xbin,    78.629781141160237      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4556.9799274039869      );
  id1 -> SetBinError( xbin,    363.33136462156375      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    23126.471412247251      );
  id1 -> SetBinError( xbin,    928.71703418619086      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    56059.538511909057      );
  id1 -> SetBinError( xbin,    1303.9084391841820      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    111163.45366382683      );
  id1 -> SetBinError( xbin,    1562.0547048771014      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    170013.52093678320      );
  id1 -> SetBinError( xbin,    1803.5873454554508      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    227387.11186141928      );
  id1 -> SetBinError( xbin,    1974.6190035194909      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    278670.10767711693      );
  id1 -> SetBinError( xbin,    2106.8944957577664      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    314923.32015617582      );
  id1 -> SetBinError( xbin,    2150.0772144391240      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    352756.89394379262      );
  id1 -> SetBinError( xbin,    2250.2954044963344      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    377123.59400207089      );
  id1 -> SetBinError( xbin,    2274.6332360064712      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    399471.22654297727      );
  id1 -> SetBinError( xbin,    2363.2357481067229      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    412866.41866033559      );
  id1 -> SetBinError( xbin,    2369.5954632770054      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    420601.65678364830      );
  id1 -> SetBinError( xbin,    2419.1432162209212      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    426231.45664713718      );
  id1 -> SetBinError( xbin,    2274.5152714735427      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    432596.78787780582      );
  id1 -> SetBinError( xbin,    2253.7006827313339      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    433857.58406351379      );
  id1 -> SetBinError( xbin,    2238.2183920508651      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    431625.92959399568      );
  id1 -> SetBinError( xbin,    2230.0247362969858      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    433091.79555278207      );
  id1 -> SetBinError( xbin,    2255.4161756172630      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    424555.33220491756      );
  id1 -> SetBinError( xbin,    2222.4717244205667      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    425193.20783973095      );
  id1 -> SetBinError( xbin,    2206.7478095125598      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    424864.26782142755      );
  id1 -> SetBinError( xbin,    2250.5985846147119      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    421647.31794026913      );
  id1 -> SetBinError( xbin,    2258.7972868407019      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    421922.20117025339      );
  id1 -> SetBinError( xbin,    2245.0546022632961      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    417016.87226835010      );
  id1 -> SetBinError( xbin,    2265.3470517773553      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    422440.71594601724      );
  id1 -> SetBinError( xbin,    2228.9903635849505      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    423383.27690920368      );
  id1 -> SetBinError( xbin,    2281.0304301610527      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    418423.93010902120      );
  id1 -> SetBinError( xbin,    2286.8448127861316      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    416797.08139275241      );
  id1 -> SetBinError( xbin,    2311.5113947542095      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    415345.66780345229      );
  id1 -> SetBinError( xbin,    2324.4301854779328      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    398900.99020639405      );
  id1 -> SetBinError( xbin,    2313.8140222527577      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    374576.09870580467      );
  id1 -> SetBinError( xbin,    2359.1967443501389      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    342694.48816603736      );
  id1 -> SetBinError( xbin,    2273.0535879617673      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    299300.76140184625      );
  id1 -> SetBinError( xbin,    2219.2600503983435      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    236919.44369325429      );
  id1 -> SetBinError( xbin,    2079.0403634091585      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    167703.55224772278      );
  id1 -> SetBinError( xbin,    1836.1723445648104      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    94528.565975494785      );
  id1 -> SetBinError( xbin,    1560.8710852164049      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    38043.672817355509      );
  id1 -> SetBinError( xbin,    1105.6380733853923      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    8043.5003744798705      );
  id1 -> SetBinError( xbin,    512.40455841034884      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    750.51413590902314      );
  id1 -> SetBinError( xbin,    107.96786944885842      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.1353105444378124      );
  id1 -> SetBinError( xbin,    1.1908227182328672      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    880937.15779886907      );
  id2 -> SetBinError( xbin,    8550.3969048275940      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    857915.41049155733      );
  id2 -> SetBinError( xbin,    9873.5972415835040      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    798999.65908581438      );
  id2 -> SetBinError( xbin,    6428.8262859131919      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    768406.91943327570      );
  id2 -> SetBinError( xbin,    6626.8863232735584      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    724947.81565948972      );
  id2 -> SetBinError( xbin,    5650.6607571726345      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    695273.60535317624      );
  id2 -> SetBinError( xbin,    5595.6930876476908      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    653640.47846838285      );
  id2 -> SetBinError( xbin,    5311.7418085930740      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    612798.35756868706      );
  id2 -> SetBinError( xbin,    4861.6942909872168      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    573834.71335254505      );
  id2 -> SetBinError( xbin,    4233.4742999679092      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    536782.75265733106      );
  id2 -> SetBinError( xbin,    3687.3818044826985      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    496049.13646911952      );
  id2 -> SetBinError( xbin,    3664.7587535772850      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    456258.64689448505      );
  id2 -> SetBinError( xbin,    2908.7016081328479      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    424081.64632566128      );
  id2 -> SetBinError( xbin,    2778.0500243092933      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    388319.84995973337      );
  id2 -> SetBinError( xbin,    2608.8898357990511      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    351096.85810607555      );
  id2 -> SetBinError( xbin,    2468.0671147541752      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    323501.29461860954      );
  id2 -> SetBinError( xbin,    2328.4038783052001      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    287931.22614261479      );
  id2 -> SetBinError( xbin,    1911.9092341353196      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    260183.47295373250      );
  id2 -> SetBinError( xbin,    1787.3448847125553      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    231890.20762354429      );
  id2 -> SetBinError( xbin,    1606.7687616568035      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    206145.55161782773      );
  id2 -> SetBinError( xbin,    1449.6522180565239      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    182188.09214816097      );
  id2 -> SetBinError( xbin,    1381.4685072784548      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    161265.64526361434      );
  id2 -> SetBinError( xbin,    1367.8618447214103      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    140854.21409387211      );
  id2 -> SetBinError( xbin,    1105.6131176721105      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    123355.63878829361      );
  id2 -> SetBinError( xbin,    1063.4868740871923      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    108539.95946130683      );
  id2 -> SetBinError( xbin,    985.37785166964795      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    96563.245245076716      );
  id2 -> SetBinError( xbin,    844.88586295639755      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    86512.339331324081      );
  id2 -> SetBinError( xbin,    845.00374624707501      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    81155.279563779040      );
  id2 -> SetBinError( xbin,    872.48043815566268      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    77058.094122001654      );
  id2 -> SetBinError( xbin,    821.72419332410072      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    72448.769794419874      );
  id2 -> SetBinError( xbin,    694.22136826988356      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    73614.274049648302      );
  id2 -> SetBinError( xbin,    794.56133426723738      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    76588.435677536152      );
  id2 -> SetBinError( xbin,    773.59509294400596      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    82477.308653473636      );
  id2 -> SetBinError( xbin,    819.56771442347645      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    88629.859283378712      );
  id2 -> SetBinError( xbin,    754.60991171370529      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    98297.131589205645      );
  id2 -> SetBinError( xbin,    891.82499061561771      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    111381.42096564214      );
  id2 -> SetBinError( xbin,    945.19347526922638      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    128921.45091214927      );
  id2 -> SetBinError( xbin,    1097.5842985756824      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    145938.57324364453      );
  id2 -> SetBinError( xbin,    1149.2748351352477      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    163672.86617889942      );
  id2 -> SetBinError( xbin,    1245.8514181320329      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    186809.65514244334      );
  id2 -> SetBinError( xbin,    1381.7938935687368      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    214993.68219115521      );
  id2 -> SetBinError( xbin,    1574.0494457685909      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    241205.35150186010      );
  id2 -> SetBinError( xbin,    1667.2804678538002      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    275556.08644591336      );
  id2 -> SetBinError( xbin,    2206.5570426539634      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    304733.19377924560      );
  id2 -> SetBinError( xbin,    2072.0377194287171      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    337257.89896865020      );
  id2 -> SetBinError( xbin,    2163.5801557909444      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    373970.06307511940      );
  id2 -> SetBinError( xbin,    2386.1273274363020      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    409743.91499909991      );
  id2 -> SetBinError( xbin,    2920.9472254218026      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    451838.42486368329      );
  id2 -> SetBinError( xbin,    3211.7359149174190      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    482762.93678876426      );
  id2 -> SetBinError( xbin,    3309.4466338257589      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    529074.52140707371      );
  id2 -> SetBinError( xbin,    4168.2787021870745      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    560462.56707649934      );
  id2 -> SetBinError( xbin,    3807.4893969799587      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    603533.11130372947      );
  id2 -> SetBinError( xbin,    4360.4245219292725      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    643341.89554788999      );
  id2 -> SetBinError( xbin,    5098.9944409546069      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    674508.05097859015      );
  id2 -> SetBinError( xbin,    4632.2432057845181      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    739756.15125461726      );
  id2 -> SetBinError( xbin,    5922.9595258473801      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    769793.94300139975      );
  id2 -> SetBinError( xbin,    5472.7425757750852      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    823404.96424504556      );
  id2 -> SetBinError( xbin,    8372.7819798979817      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    858637.45484555908      );
  id2 -> SetBinError( xbin,    6846.8528876877235      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    894546.82059068780      );
  id2 -> SetBinError( xbin,    7791.2346132442663      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    942604.35128423758      );
  id2 -> SetBinError( xbin,    8576.8584140325256      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    140956.65392298307      );
  id3 -> SetBinError( xbin,    1432.6905486259343      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    195534.92457308021      );
  id3 -> SetBinError( xbin,    1775.9067213794353      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    252896.56737304220      );
  id3 -> SetBinError( xbin,    2253.4981217378790      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    304031.05028426595      );
  id3 -> SetBinError( xbin,    2509.9989370528360      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    345758.22894981457      );
  id3 -> SetBinError( xbin,    2375.8738201605938      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    382613.70342654805      );
  id3 -> SetBinError( xbin,    2479.5879918340115      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    417258.74683522660      );
  id3 -> SetBinError( xbin,    2635.1767821715698      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    434678.04727448552      );
  id3 -> SetBinError( xbin,    2702.3246770257333      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    452459.66318374436      );
  id3 -> SetBinError( xbin,    2757.8387772689480      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    461150.93685184681      );
  id3 -> SetBinError( xbin,    2809.8349057117816      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    470602.50162967428      );
  id3 -> SetBinError( xbin,    2781.5986969032447      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    473079.95221968426      );
  id3 -> SetBinError( xbin,    2830.5713091772654      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    468296.11567195016      );
  id3 -> SetBinError( xbin,    2737.2835145716995      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    468697.27145166538      );
  id3 -> SetBinError( xbin,    2717.0476437441680      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    464905.51230993011      );
  id3 -> SetBinError( xbin,    2722.7074384802227      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    465630.12161383213      );
  id3 -> SetBinError( xbin,    2644.2681801388399      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    471758.91850101290      );
  id3 -> SetBinError( xbin,    2661.7011680649002      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    465136.86913372390      );
  id3 -> SetBinError( xbin,    2765.5684862453340      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    469237.36587814364      );
  id3 -> SetBinError( xbin,    2813.1714055670645      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    468137.96243009728      );
  id3 -> SetBinError( xbin,    2821.3346657941670      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    467839.91462954669      );
  id3 -> SetBinError( xbin,    2833.9436608693813      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    465217.17524919205      );
  id3 -> SetBinError( xbin,    2782.3966047516528      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    464164.63128554076      );
  id3 -> SetBinError( xbin,    2965.2697326312532      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    453977.73786264547      );
  id3 -> SetBinError( xbin,    2874.6071496768955      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    433934.29519848526      );
  id3 -> SetBinError( xbin,    2656.1513651157520      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    408214.71978969505      );
  id3 -> SetBinError( xbin,    2625.0109106558048      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    366560.67882770812      );
  id3 -> SetBinError( xbin,    2459.0219071354745      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    318229.34543545858      );
  id3 -> SetBinError( xbin,    2317.5376414100483      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    257138.65968063392      );
  id3 -> SetBinError( xbin,    2107.2211486115311      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    191669.25298691203      );
  id3 -> SetBinError( xbin,    1724.5298925018933      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    44877.602184876945      );
  id4 -> SetBinError( xbin,    1565.9453822246742      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    135127.78961861605      );
  id4 -> SetBinError( xbin,    2096.0826609279284      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    165141.78547974894      );
  id4 -> SetBinError( xbin,    2316.4852644749753      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    187806.36771301954      );
  id4 -> SetBinError( xbin,    2712.8838447600533      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    219518.04502697536      );
  id4 -> SetBinError( xbin,    2991.1290136232246      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    249400.88576950808      );
  id4 -> SetBinError( xbin,    3103.5590556309085      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    275871.19069186220      );
  id4 -> SetBinError( xbin,    3326.1913711376155      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    305087.69562378939      );
  id4 -> SetBinError( xbin,    3524.8747293215870      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    318627.11587841541      );
  id4 -> SetBinError( xbin,    3910.5607287748135      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    341911.71062355774      );
  id4 -> SetBinError( xbin,    3809.3279091313007      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    364196.73285524262      );
  id4 -> SetBinError( xbin,    4187.1600593896464      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    375410.94961463683      );
  id4 -> SetBinError( xbin,    4351.5676254717209      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    397580.96167330141      );
  id4 -> SetBinError( xbin,    4226.9001431081870      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    415650.47907256661      );
  id4 -> SetBinError( xbin,    4191.2747416562224      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    427286.82201261347      );
  id4 -> SetBinError( xbin,    4233.6516016534761      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    430209.86764805578      );
  id4 -> SetBinError( xbin,    5498.8836711173926      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    454783.33756587683      );
  id4 -> SetBinError( xbin,    5473.8731290764999      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    453888.34893538692      );
  id4 -> SetBinError( xbin,    4273.2635435433858      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    453430.56201337336      );
  id4 -> SetBinError( xbin,    4426.3201861344669      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    460142.51968798949      );
  id4 -> SetBinError( xbin,    4650.7411789233774      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    463018.64470619312      );
  id4 -> SetBinError( xbin,    4728.6137704175972      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    467276.60352092655      );
  id4 -> SetBinError( xbin,    4617.2231482327115      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    469998.96795988979      );
  id4 -> SetBinError( xbin,    4484.3618791188519      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    471396.30182411161      );
  id4 -> SetBinError( xbin,    4320.5426572780161      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    478828.30534463387      );
  id4 -> SetBinError( xbin,    4349.3402524325902      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    467293.98000091809      );
  id4 -> SetBinError( xbin,    4318.4934515069999      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    473921.64885913901      );
  id4 -> SetBinError( xbin,    4894.1764198677311      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    463532.66988643690      );
  id4 -> SetBinError( xbin,    4763.3745184570726      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    464991.82904424577      );
  id4 -> SetBinError( xbin,    4308.7660385660702      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    463055.71994917758      );
  id4 -> SetBinError( xbin,    4418.4404005975512      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    466785.03088726394      );
  id4 -> SetBinError( xbin,    4555.1589719685644      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    471135.14530839166      );
  id4 -> SetBinError( xbin,    4543.8047836422402      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    473439.01036489336      );
  id4 -> SetBinError( xbin,    4376.9910681819001      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    461659.64878858899      );
  id4 -> SetBinError( xbin,    5111.0080849780479      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    470690.78054080135      );
  id4 -> SetBinError( xbin,    4994.0586028229191      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    465543.36639484711      );
  id4 -> SetBinError( xbin,    4258.6847074505131      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    469069.22719168704      );
  id4 -> SetBinError( xbin,    4502.2835101762230      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    468428.95421655255      );
  id4 -> SetBinError( xbin,    4486.6566901406477      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    467713.47037254350      );
  id4 -> SetBinError( xbin,    4489.5714877530590      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    473152.04444024042      );
  id4 -> SetBinError( xbin,    4695.2133522057511      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    463441.96870503988      );
  id4 -> SetBinError( xbin,    4640.9517000588457      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    469172.11019187211      );
  id4 -> SetBinError( xbin,    4452.9845772114932      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    466682.89227051963      );
  id4 -> SetBinError( xbin,    4422.7036195265291      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    468207.77955710323      );
  id4 -> SetBinError( xbin,    4506.3603936109857      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    463215.98515487550      );
  id4 -> SetBinError( xbin,    4630.8143677292592      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    461057.67831017973      );
  id4 -> SetBinError( xbin,    4607.9452260947528      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    466650.53281762323      );
  id4 -> SetBinError( xbin,    4439.5357983183530      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    450322.29041031480      );
  id4 -> SetBinError( xbin,    4358.2606656046119      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    447845.47706411057      );
  id4 -> SetBinError( xbin,    4404.2528821688584      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    438016.37501212809      );
  id4 -> SetBinError( xbin,    4446.3152198893840      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    424401.12469330733      );
  id4 -> SetBinError( xbin,    4598.0277132312731      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    387221.35409505153      );
  id4 -> SetBinError( xbin,    14917.983175871132      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    410332.34230692382      );
  id4 -> SetBinError( xbin,    14805.235288205826      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    372463.47475911555      );
  id4 -> SetBinError( xbin,    4350.0192766207883      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    347742.72940085619      );
  id4 -> SetBinError( xbin,    4578.7830739474221      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    324025.76033511246      );
  id4 -> SetBinError( xbin,    3993.7295385890466      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    42089.587188793317      );
  id5 -> SetBinError( xbin,    434.45761838376700      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    91584.429882325581      );
  id5 -> SetBinError( xbin,    585.93196919808349      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    101058.18618582706      );
  id5 -> SetBinError( xbin,    688.76761013526436      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    108395.14376199397      );
  id5 -> SetBinError( xbin,    789.90683403118885      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    122870.49533707791      );
  id5 -> SetBinError( xbin,    838.02735335421210      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    133123.24420062135      );
  id5 -> SetBinError( xbin,    851.43902872550882      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    153865.80419938252      );
  id5 -> SetBinError( xbin,    946.99136545536328      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    145860.84209524430      );
  id5 -> SetBinError( xbin,    1169.6576254360800      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    115190.32855662455      );
  id5 -> SetBinError( xbin,    1070.8613394449967      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    57935.704600020850      );
  id5 -> SetBinError( xbin,    601.89234329463591      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    30608.166751292716      );
  id5 -> SetBinError( xbin,    162.71443638510982      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19363.615267479778      );
  id5 -> SetBinError( xbin,    121.26062024497030      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13530.771686474238      );
  id5 -> SetBinError( xbin,    92.439838275785604      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9702.9860237049124      );
  id5 -> SetBinError( xbin,    73.724760107210017      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7604.3776724410218      );
  id5 -> SetBinError( xbin,    65.903803014671396      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5712.4963783983949      );
  id5 -> SetBinError( xbin,    56.200989851044653      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4666.3441357418496      );
  id5 -> SetBinError( xbin,    51.841656467502787      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3785.4686667284932      );
  id5 -> SetBinError( xbin,    45.488713227193557      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3185.7972373149537      );
  id5 -> SetBinError( xbin,    38.828131220618289      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2542.5087398565156      );
  id5 -> SetBinError( xbin,    34.994269606203780      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2153.8879817486245      );
  id5 -> SetBinError( xbin,    29.412676204686111      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1824.1221295371133      );
  id5 -> SetBinError( xbin,    25.555318451374390      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1540.6951587846984      );
  id5 -> SetBinError( xbin,    23.904092117808187      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1298.2305468814475      );
  id5 -> SetBinError( xbin,    22.705566738337783      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1120.5473488984644      );
  id5 -> SetBinError( xbin,    19.839621400191962      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    974.07019409073837      );
  id5 -> SetBinError( xbin,    20.879857334830721      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    885.39120261754124      );
  id5 -> SetBinError( xbin,    22.745699460085724      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    743.91664057435059      );
  id5 -> SetBinError( xbin,    24.490163804094440      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    714.89001947622683      );
  id5 -> SetBinError( xbin,    31.025277165626534      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    559.23183644312235      );
  id5 -> SetBinError( xbin,    33.945077329464311      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    496.98770609360366      );
  id5 -> SetBinError( xbin,    26.077398254504793      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    459.36469205807043      );
  id5 -> SetBinError( xbin,    14.987827163815622      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    405.35347570171155      );
  id5 -> SetBinError( xbin,    10.440888528185258      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    367.19918097180317      );
  id5 -> SetBinError( xbin,    12.224101444187456      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    333.37832153501887      );
  id5 -> SetBinError( xbin,    14.819136615243400      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    277.89530832848902      );
  id5 -> SetBinError( xbin,    14.559556646392616      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    278.51305881373190      );
  id5 -> SetBinError( xbin,    11.441785510371318      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    247.81681142430850      );
  id5 -> SetBinError( xbin,    13.249203085735815      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2886.0027626322540      );
  id6 -> SetBinError( xbin,    55.340013112625265      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9474.1852685591166      );
  id6 -> SetBinError( xbin,    104.42023619148266      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19252.108377886540      );
  id6 -> SetBinError( xbin,    150.99232960126986      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33903.704491399440      );
  id6 -> SetBinError( xbin,    201.14498185827424      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    55728.064546224537      );
  id6 -> SetBinError( xbin,    248.30542100409050      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    86244.246536268984      );
  id6 -> SetBinError( xbin,    292.74052221369169      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    132162.51567162410      );
  id6 -> SetBinError( xbin,    352.10993751884735      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    185043.76740089332      );
  id6 -> SetBinError( xbin,    423.70589579248997      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    72135.296996625751      );
  id6 -> SetBinError( xbin,    297.71108882857465      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24456.675196630167      );
  id6 -> SetBinError( xbin,    197.62750708806735      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    9193.1370162556250      );
  id6 -> SetBinError( xbin,    129.29726835611515      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3535.3765737625386      );
  id6 -> SetBinError( xbin,    85.870698752085474      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11288.965137889694      );
  id7 -> SetBinError( xbin,    142.38497830744680      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15055.427476516219      );
  id7 -> SetBinError( xbin,    163.46031415316295      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19213.919804231609      );
  id7 -> SetBinError( xbin,    190.04692642370395      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23605.721361418007      );
  id7 -> SetBinError( xbin,    212.25606270716548      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28374.508709232614      );
  id7 -> SetBinError( xbin,    233.03248957098387      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33131.644979949648      );
  id7 -> SetBinError( xbin,    257.79669831887560      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37919.754531941595      );
  id7 -> SetBinError( xbin,    278.17891763561050      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    41817.376936532892      );
  id7 -> SetBinError( xbin,    298.66096086121644      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    46912.109051109954      );
  id7 -> SetBinError( xbin,    321.19058710781638      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    51397.510038249668      );
  id7 -> SetBinError( xbin,    342.90216641387570      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    54092.382536536541      );
  id7 -> SetBinError( xbin,    353.97990013632295      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    56851.841065383807      );
  id7 -> SetBinError( xbin,    364.52119850098740      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    59085.943880728890      );
  id7 -> SetBinError( xbin,    374.21798122755439      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    61197.379618946128      );
  id7 -> SetBinError( xbin,    381.14917537784970      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    62365.132408414356      );
  id7 -> SetBinError( xbin,    385.28251247197881      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    62278.643189349765      );
  id7 -> SetBinError( xbin,    385.30257404370496      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    62026.632939778458      );
  id7 -> SetBinError( xbin,    380.27214739241487      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    61162.880387063138      );
  id7 -> SetBinError( xbin,    376.16811431502634      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    60271.787380615009      );
  id7 -> SetBinError( xbin,    372.23588106121178      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    57707.103353153732      );
  id7 -> SetBinError( xbin,    359.61071901282514      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    55259.258970844014      );
  id7 -> SetBinError( xbin,    345.53921679899565      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    52189.529883946678      );
  id7 -> SetBinError( xbin,    335.28676715993419      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    48355.713546365565      );
  id7 -> SetBinError( xbin,    317.27382528674008      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    44343.409306139925      );
  id7 -> SetBinError( xbin,    299.66332936002726      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    39479.288422145357      );
  id7 -> SetBinError( xbin,    276.01408499306166      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    34690.247132570468      );
  id7 -> SetBinError( xbin,    254.75991209981413      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    30047.220765503807      );
  id7 -> SetBinError( xbin,    234.46684581324317      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    24854.986816791617      );
  id7 -> SetBinError( xbin,    210.94285976785233      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    20309.989119055703      );
  id7 -> SetBinError( xbin,    190.37196212272616      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    16065.847155111194      );
  id7 -> SetBinError( xbin,    169.46919298643834      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7117.2710443691312      );
  id8 -> SetBinError( xbin,    44.402695038802491      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12730.311249466502      );
  id8 -> SetBinError( xbin,    58.582442110160450      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    11081.236459135354      );
  id8 -> SetBinError( xbin,    53.571842021250760      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9784.1556293608210      );
  id8 -> SetBinError( xbin,    49.839340764824982      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8534.5349004062173      );
  id8 -> SetBinError( xbin,    45.870209738872077      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7446.0203268521836      );
  id8 -> SetBinError( xbin,    41.885138093732209      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6554.6450149929578      );
  id8 -> SetBinError( xbin,    38.580383499216182      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5882.1373925950966      );
  id8 -> SetBinError( xbin,    36.315031602811921      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5198.0750789632475      );
  id8 -> SetBinError( xbin,    33.138719192405688      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4544.3319526845426      );
  id8 -> SetBinError( xbin,    30.616135140878658      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4105.3446386160058      );
  id8 -> SetBinError( xbin,    28.985654716670545      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3663.2552705948606      );
  id8 -> SetBinError( xbin,    27.095836632987172      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3290.9881462880217      );
  id8 -> SetBinError( xbin,    25.235467643903498      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2962.9543737653594      );
  id8 -> SetBinError( xbin,    23.553115224601164      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2691.3493860454369      );
  id8 -> SetBinError( xbin,    22.177449241649057      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2432.2495341168519      );
  id8 -> SetBinError( xbin,    20.822738752586812      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2201.3055482383647      );
  id8 -> SetBinError( xbin,    19.787669689485337      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2008.0423858271454      );
  id8 -> SetBinError( xbin,    18.471647654751649      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1852.4972773663519      );
  id8 -> SetBinError( xbin,    17.815824584262554      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1714.1739311333572      );
  id8 -> SetBinError( xbin,    17.123147561636081      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1561.4583936845920      );
  id8 -> SetBinError( xbin,    15.806747932831154      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1403.0890201279997      );
  id8 -> SetBinError( xbin,    14.666545089583096      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1271.8323098041640      );
  id8 -> SetBinError( xbin,    13.757632541084810      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1197.1326794031390      );
  id8 -> SetBinError( xbin,    13.491109613377157      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1102.8758900588152      );
  id8 -> SetBinError( xbin,    12.914329419992029      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    990.44201491812646      );
  id8 -> SetBinError( xbin,    11.953468623641772      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    926.50315259090155      );
  id8 -> SetBinError( xbin,    11.654379179648640      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    857.90456103396616      );
  id8 -> SetBinError( xbin,    11.185549650048170      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
