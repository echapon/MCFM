// Cross-section is:      2374472.0773073169 +/-          950.9253598156)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -81705.53379   -3.44%
//        GQB    |      -44775.80713   -1.89%
//        QG     |      -98282.89198   -4.14%
//        QBG    |      -48945.08392   -2.06%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1381510.54622   58.18%
//        QBQ    |     1272789.82307   53.60%

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
//Wp_EPS09                        [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wp_EPS09.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    7.8888950968525426      );
  id1 -> SetBinError( xbin,    4.9635907402219113      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    602.58061779976993      );
  id1 -> SetBinError( xbin,    77.269157130111978      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4857.8924327344166      );
  id1 -> SetBinError( xbin,    347.38928364419104      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    22316.755489252329      );
  id1 -> SetBinError( xbin,    919.43792540886204      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    56334.902904862982      );
  id1 -> SetBinError( xbin,    1303.3097877093378      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    110745.53202192188      );
  id1 -> SetBinError( xbin,    1491.7514133726863      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    170060.97406052571      );
  id1 -> SetBinError( xbin,    1775.8802553581450      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    225422.50470926447      );
  id1 -> SetBinError( xbin,    1971.2524389436262      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    278745.42317437683      );
  id1 -> SetBinError( xbin,    2074.2176836534909      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    316142.53637797228      );
  id1 -> SetBinError( xbin,    2150.1016642629838      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    350377.18874225602      );
  id1 -> SetBinError( xbin,    2233.1512193265539      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    377497.07531158486      );
  id1 -> SetBinError( xbin,    2287.2624380032094      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    397613.78707755869      );
  id1 -> SetBinError( xbin,    2273.8149783897402      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    414442.78867025685      );
  id1 -> SetBinError( xbin,    2385.7697019184802      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    420848.73379047494      );
  id1 -> SetBinError( xbin,    2396.6220513316894      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    424291.63689783524      );
  id1 -> SetBinError( xbin,    2257.1032404759976      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    428321.26629381994      );
  id1 -> SetBinError( xbin,    2274.3716152559468      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    434123.94513483346      );
  id1 -> SetBinError( xbin,    2275.5209625495254      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    432125.58199818694      );
  id1 -> SetBinError( xbin,    2240.1196840751427      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    432579.38371898310      );
  id1 -> SetBinError( xbin,    2267.5236936919841      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    423275.94471976080      );
  id1 -> SetBinError( xbin,    2232.5273884723870      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    421685.79373940482      );
  id1 -> SetBinError( xbin,    2235.5666758440921      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    425215.81349574862      );
  id1 -> SetBinError( xbin,    2298.6865362937428      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    421425.13885884575      );
  id1 -> SetBinError( xbin,    2236.4410924786121      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    420363.78587011620      );
  id1 -> SetBinError( xbin,    2313.7380612096904      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    417342.70439638663      );
  id1 -> SetBinError( xbin,    2224.1007036001415      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    418843.93928781606      );
  id1 -> SetBinError( xbin,    2272.4297558266735      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    423592.24937919399      );
  id1 -> SetBinError( xbin,    2332.9140315356804      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    416601.24432287528      );
  id1 -> SetBinError( xbin,    2263.2379595756784      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    416297.33583319059      );
  id1 -> SetBinError( xbin,    2296.8678839623190      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    413616.65510118689      );
  id1 -> SetBinError( xbin,    2289.6926795962404      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    396519.32809021376      );
  id1 -> SetBinError( xbin,    2435.6300774369765      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    376181.65127023822      );
  id1 -> SetBinError( xbin,    2690.7387853094242      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    340858.75872407248      );
  id1 -> SetBinError( xbin,    2506.9940366671262      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    297929.74600898288      );
  id1 -> SetBinError( xbin,    2189.5145986124862      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    237226.73724389006      );
  id1 -> SetBinError( xbin,    2069.8086283929219      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    167121.84692349611      );
  id1 -> SetBinError( xbin,    1843.7222032253087      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    94109.250778829213      );
  id1 -> SetBinError( xbin,    1631.0127134542447      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    38449.647673955784      );
  id1 -> SetBinError( xbin,    1207.2032390963682      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    7952.8353649397050      );
  id1 -> SetBinError( xbin,    523.72995764996108      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    759.34098410739614      );
  id1 -> SetBinError( xbin,    106.61761651591367      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.8178770702246041      );
  id1 -> SetBinError( xbin,    1.1719895050315441      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    883854.19184122700      );
  id2 -> SetBinError( xbin,    9331.4747296790665      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    852574.33261178853      );
  id2 -> SetBinError( xbin,    9955.5169177006574      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    802376.89949248137      );
  id2 -> SetBinError( xbin,    7197.1140064415167      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    766573.61245067697      );
  id2 -> SetBinError( xbin,    8170.6270445125929      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    730330.94383487874      );
  id2 -> SetBinError( xbin,    6506.9527641933810      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    687204.88222993305      );
  id2 -> SetBinError( xbin,    5995.2778717719339      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    646380.48406938510      );
  id2 -> SetBinError( xbin,    5041.1497173933794      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    609196.56789920991      );
  id2 -> SetBinError( xbin,    4829.3828474392203      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    580208.21020857967      );
  id2 -> SetBinError( xbin,    6936.6379469574158      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    536288.98319601966      );
  id2 -> SetBinError( xbin,    4888.8119571353154      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    494424.44277165114      );
  id2 -> SetBinError( xbin,    3318.7023185673788      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    462274.39931314933      );
  id2 -> SetBinError( xbin,    3793.8112979735906      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    419744.86083297490      );
  id2 -> SetBinError( xbin,    2998.6239282883944      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    388236.99708700046      );
  id2 -> SetBinError( xbin,    2673.1544622467864      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    351336.10142835346      );
  id2 -> SetBinError( xbin,    2384.9533718181801      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    321066.07941391389      );
  id2 -> SetBinError( xbin,    2288.3553655087971      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    289054.31072892877      );
  id2 -> SetBinError( xbin,    2094.5427536740826      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    261644.42097655020      );
  id2 -> SetBinError( xbin,    2136.0793389110104      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    232673.54338756343      );
  id2 -> SetBinError( xbin,    1582.6100725300687      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    203076.48830732238      );
  id2 -> SetBinError( xbin,    1345.4978224606234      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    181565.33520772855      );
  id2 -> SetBinError( xbin,    1295.2860910829449      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    161466.45667288089      );
  id2 -> SetBinError( xbin,    1717.8813662959089      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    141243.26868911914      );
  id2 -> SetBinError( xbin,    1105.7690045579657      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    125201.29522691689      );
  id2 -> SetBinError( xbin,    1078.3789468447546      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    110044.17499768891      );
  id2 -> SetBinError( xbin,    931.35488736470643      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    99674.822795930129      );
  id2 -> SetBinError( xbin,    1620.0434789057349      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    86515.660053979169      );
  id2 -> SetBinError( xbin,    791.99043036332500      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    81139.437905845814      );
  id2 -> SetBinError( xbin,    1048.7156844435951      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    76010.216509294842      );
  id2 -> SetBinError( xbin,    791.91431515193756      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    71978.571354744432      );
  id2 -> SetBinError( xbin,    697.46961029865963      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    72808.729300128311      );
  id2 -> SetBinError( xbin,    741.02314094417704      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    75158.009574254495      );
  id2 -> SetBinError( xbin,    743.06076538318848      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    81241.354576141879      );
  id2 -> SetBinError( xbin,    1068.0086832925788      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    87014.490093335698      );
  id2 -> SetBinError( xbin,    770.51815464925517      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    99442.085410558269      );
  id2 -> SetBinError( xbin,    885.31794691928258      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    112002.00223000455      );
  id2 -> SetBinError( xbin,    1069.5435149479481      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    128453.35238265149      );
  id2 -> SetBinError( xbin,    1475.7141550949204      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    143854.62304906172      );
  id2 -> SetBinError( xbin,    1201.8963273392906      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    166007.20129397258      );
  id2 -> SetBinError( xbin,    1379.8656385897375      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    186502.86980047592      );
  id2 -> SetBinError( xbin,    1358.0215831029652      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    214657.90147327917      );
  id2 -> SetBinError( xbin,    1587.0685949020931      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    240984.78191637868      );
  id2 -> SetBinError( xbin,    1683.8480975318002      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    273684.56016879453      );
  id2 -> SetBinError( xbin,    1974.6092062743637      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    299900.37958359154      );
  id2 -> SetBinError( xbin,    1916.8774851224400      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    339244.23432654759      );
  id2 -> SetBinError( xbin,    2799.5055471974815      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    372295.21350952797      );
  id2 -> SetBinError( xbin,    2357.8391966713775      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    407409.76453636948      );
  id2 -> SetBinError( xbin,    2708.7001166992295      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    442728.32165463152      );
  id2 -> SetBinError( xbin,    2891.3073094443444      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    485084.98325491115      );
  id2 -> SetBinError( xbin,    3715.4043198931490      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    526019.69396687369      );
  id2 -> SetBinError( xbin,    3651.3159014662533      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    564641.06233730284      );
  id2 -> SetBinError( xbin,    4310.1275716792252      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    611444.26082690048      );
  id2 -> SetBinError( xbin,    4270.2460085879093      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    650006.58581719734      );
  id2 -> SetBinError( xbin,    5924.0548357534999      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    689689.65708415955      );
  id2 -> SetBinError( xbin,    5289.5463065504618      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    726017.61641158070      );
  id2 -> SetBinError( xbin,    8464.0442894464595      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    777946.08626393974      );
  id2 -> SetBinError( xbin,    7017.2286834856259      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    819022.89211856236      );
  id2 -> SetBinError( xbin,    6792.7292322641824      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    858077.70788867364      );
  id2 -> SetBinError( xbin,    7670.2855358245852      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    904059.82123284228      );
  id2 -> SetBinError( xbin,    8659.1779178922025      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    932396.87332698470      );
  id2 -> SetBinError( xbin,    8852.0919215604408      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    142035.26245187654      );
  id3 -> SetBinError( xbin,    1413.6747467468233      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    194220.66758016570      );
  id3 -> SetBinError( xbin,    1742.4752190412071      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    251538.62426616892      );
  id3 -> SetBinError( xbin,    2014.4070771809888      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    302461.80396759190      );
  id3 -> SetBinError( xbin,    2172.2147444558236      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    345122.41563772457      );
  id3 -> SetBinError( xbin,    2326.4197021427640      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    384177.08839915134      );
  id3 -> SetBinError( xbin,    2490.6298049765146      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    411662.94459192775      );
  id3 -> SetBinError( xbin,    2904.0774389208291      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    439411.27523947175      );
  id3 -> SetBinError( xbin,    2937.3829566683817      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    451535.92088279384      );
  id3 -> SetBinError( xbin,    2742.9658472368710      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    459985.33219943923      );
  id3 -> SetBinError( xbin,    2761.1904881763830      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    466845.47846470581      );
  id3 -> SetBinError( xbin,    2639.4315854457823      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    471873.03147003328      );
  id3 -> SetBinError( xbin,    2671.8604348560157      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    468921.28607063694      );
  id3 -> SetBinError( xbin,    2726.4558056198757      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    468984.46258161077      );
  id3 -> SetBinError( xbin,    2706.5925387522489      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    464499.03012301424      );
  id3 -> SetBinError( xbin,    2883.8005682007097      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    465868.65466659493      );
  id3 -> SetBinError( xbin,    3544.6303458699667      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    468682.83877129277      );
  id3 -> SetBinError( xbin,    3523.9564841840611      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    463750.77909778408      );
  id3 -> SetBinError( xbin,    2767.1053255891366      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    469740.45916037814      );
  id3 -> SetBinError( xbin,    2825.7490201899609      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    462075.36064052902      );
  id3 -> SetBinError( xbin,    2869.4731700721973      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    468835.75448250707      );
  id3 -> SetBinError( xbin,    2835.2119678162107      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    465749.87392111635      );
  id3 -> SetBinError( xbin,    2834.4003160029924      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    460239.87290829909      );
  id3 -> SetBinError( xbin,    2966.1934822310873      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    454023.54985010903      );
  id3 -> SetBinError( xbin,    2923.2183972388689      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    432421.51313219266      );
  id3 -> SetBinError( xbin,    2644.1755042705981      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    406729.16063376202      );
  id3 -> SetBinError( xbin,    2554.6769829717960      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    364376.17158926837      );
  id3 -> SetBinError( xbin,    2559.8315622407727      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    317790.89649062743      );
  id3 -> SetBinError( xbin,    2355.7038294928798      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    258347.34096008894      );
  id3 -> SetBinError( xbin,    2002.1554971052994      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    190923.09403309860      );
  id3 -> SetBinError( xbin,    1723.5145670640261      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    45481.326388637019      );
  id4 -> SetBinError( xbin,    1907.8430329980390      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    135220.18899355610      );
  id4 -> SetBinError( xbin,    2418.5835112754012      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    163841.25075162447      );
  id4 -> SetBinError( xbin,    2354.0802573770616      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    189056.78872836998      );
  id4 -> SetBinError( xbin,    2614.0435497455096      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    217704.43300612012      );
  id4 -> SetBinError( xbin,    2799.7431434386317      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    250110.46356052614      );
  id4 -> SetBinError( xbin,    3157.5226266839209      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    279190.14201724686      );
  id4 -> SetBinError( xbin,    3414.3889321868037      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    300899.78187032527      );
  id4 -> SetBinError( xbin,    3508.9186244245411      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    316289.47523402859      );
  id4 -> SetBinError( xbin,    3575.5528713044928      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    341249.63597697683      );
  id4 -> SetBinError( xbin,    3708.8346540089969      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    361068.34982828336      );
  id4 -> SetBinError( xbin,    4521.7961519950632      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    380840.74057287083      );
  id4 -> SetBinError( xbin,    4684.8887184046434      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    390972.59072320064      );
  id4 -> SetBinError( xbin,    4740.2380532370371      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    417785.68594425463      );
  id4 -> SetBinError( xbin,    4694.6798161780098      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    432013.84129808343      );
  id4 -> SetBinError( xbin,    4241.7741809973340      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    428532.67574577476      );
  id4 -> SetBinError( xbin,    4363.8436353802081      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    447008.26962276077      );
  id4 -> SetBinError( xbin,    4723.8531652428892      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    451213.99313092162      );
  id4 -> SetBinError( xbin,    4766.4499356273673      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    451840.62236776645      );
  id4 -> SetBinError( xbin,    4341.0753862214042      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    467751.30856350757      );
  id4 -> SetBinError( xbin,    4348.1141942322856      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    460415.16182912246      );
  id4 -> SetBinError( xbin,    4483.6424949991069      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    465058.24881449185      );
  id4 -> SetBinError( xbin,    4290.3478210282692      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    476372.24521824310      );
  id4 -> SetBinError( xbin,    5953.8346125730031      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    465330.73451468407      );
  id4 -> SetBinError( xbin,    5997.2488676457806      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    468938.71638164343      );
  id4 -> SetBinError( xbin,    4322.1784608642220      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    468971.64469193527      );
  id4 -> SetBinError( xbin,    4352.6141020242430      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    471287.79465485411      );
  id4 -> SetBinError( xbin,    4518.8084265305924      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    465900.30753943522      );
  id4 -> SetBinError( xbin,    4365.0949773379089      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    466610.12579670263      );
  id4 -> SetBinError( xbin,    4821.2610803420421      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    462566.86501630035      );
  id4 -> SetBinError( xbin,    4737.2647336771679      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    471666.18148252397      );
  id4 -> SetBinError( xbin,    4313.4386197417671      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    462481.99004876916      );
  id4 -> SetBinError( xbin,    4230.8631671698322      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    471243.35993272171      );
  id4 -> SetBinError( xbin,    4764.0692016580469      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    466374.26541715715      );
  id4 -> SetBinError( xbin,    4800.6014766246481      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    462866.29316393356      );
  id4 -> SetBinError( xbin,    4230.1533387676327      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    467196.40191890328      );
  id4 -> SetBinError( xbin,    4252.3996491877870      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    463081.51162527851      );
  id4 -> SetBinError( xbin,    4614.7627612941278      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    474207.42706023157      );
  id4 -> SetBinError( xbin,    4801.4586342209159      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    461613.75228649419      );
  id4 -> SetBinError( xbin,    4429.5151185750055      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    469120.97016029473      );
  id4 -> SetBinError( xbin,    4453.3172743852974      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    458175.35086334322      );
  id4 -> SetBinError( xbin,    5755.4687336080115      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    471581.26826986001      );
  id4 -> SetBinError( xbin,    5635.0012904704108      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    470693.35560273565      );
  id4 -> SetBinError( xbin,    4757.8667262523550      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    467444.92165360437      );
  id4 -> SetBinError( xbin,    4714.3816472077106      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    462764.37901650229      );
  id4 -> SetBinError( xbin,    4259.0108487243797      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    457924.54409529548      );
  id4 -> SetBinError( xbin,    4235.3954476006702      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    457749.97743642045      );
  id4 -> SetBinError( xbin,    4379.5157902001883      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    452594.90508765099      );
  id4 -> SetBinError( xbin,    4496.9912183629776      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    452871.44078662503      );
  id4 -> SetBinError( xbin,    4462.8064935565289      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    436040.10803656559      );
  id4 -> SetBinError( xbin,    4408.2311550526911      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    418684.73374835087      );
  id4 -> SetBinError( xbin,    4370.9675927720473      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    406616.01177120116      );
  id4 -> SetBinError( xbin,    4252.6433256975261      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    391231.13275437115      );
  id4 -> SetBinError( xbin,    4122.6229124223428      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    371504.59347588953      );
  id4 -> SetBinError( xbin,    3931.1395790212987      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    347068.34484013909      );
  id4 -> SetBinError( xbin,    3736.3776560189190      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    322344.38345484063      );
  id4 -> SetBinError( xbin,    3795.5602358125584      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    42638.750035812554      );
  id5 -> SetBinError( xbin,    419.72863863966563      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    91355.568693096633      );
  id5 -> SetBinError( xbin,    579.35170559970379      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    100686.78583231555      );
  id5 -> SetBinError( xbin,    701.21918592985310      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    109452.64731026467      );
  id5 -> SetBinError( xbin,    750.47614828611290      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    120258.99892912983      );
  id5 -> SetBinError( xbin,    778.95866313653994      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    134314.53763486174      );
  id5 -> SetBinError( xbin,    859.27059903191127      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    151651.80563680219      );
  id5 -> SetBinError( xbin,    942.66176650527723      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    145095.49789417218      );
  id5 -> SetBinError( xbin,    1089.1828278288151      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    115924.92726071965      );
  id5 -> SetBinError( xbin,    951.66855346794284      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    57864.375040833984      );
  id5 -> SetBinError( xbin,    515.73537053251721      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    30587.626858981181      );
  id5 -> SetBinError( xbin,    165.31618654643597      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19332.689778548895      );
  id5 -> SetBinError( xbin,    119.63850365769632      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13732.650125269360      );
  id5 -> SetBinError( xbin,    114.50208037818888      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9713.2528750504443      );
  id5 -> SetBinError( xbin,    102.54600998582386      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7470.1952672016414      );
  id5 -> SetBinError( xbin,    60.952570493063313      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5802.9593613086881      );
  id5 -> SetBinError( xbin,    57.805116976797088      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4606.7763885183231      );
  id5 -> SetBinError( xbin,    54.736548615170726      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3803.7342501995554      );
  id5 -> SetBinError( xbin,    43.607288481840932      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3116.8297890258095      );
  id5 -> SetBinError( xbin,    36.378834925138513      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2532.0712726509851      );
  id5 -> SetBinError( xbin,    34.768065100402154      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2156.5241259817853      );
  id5 -> SetBinError( xbin,    37.524614284668765      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1831.9763144715246      );
  id5 -> SetBinError( xbin,    32.407342414538597      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1541.5589187352434      );
  id5 -> SetBinError( xbin,    24.521862416838118      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1322.1873611393962      );
  id5 -> SetBinError( xbin,    23.971985918085426      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1136.3855080861101      );
  id5 -> SetBinError( xbin,    21.235164453704158      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    967.45441164064016      );
  id5 -> SetBinError( xbin,    25.166434899392389      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    879.65494961623210      );
  id5 -> SetBinError( xbin,    25.382135276693695      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    760.71130382208230      );
  id5 -> SetBinError( xbin,    17.762264501168225      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    675.87391332386665      );
  id5 -> SetBinError( xbin,    16.328265435992101      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    582.23465018321838      );
  id5 -> SetBinError( xbin,    14.527611720216184      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    492.21795929386917      );
  id5 -> SetBinError( xbin,    18.869493754117276      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    475.01748591645202      );
  id5 -> SetBinError( xbin,    17.984334048151283      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    403.15139421757982      );
  id5 -> SetBinError( xbin,    15.289623437294939      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    351.77560567387684      );
  id5 -> SetBinError( xbin,    14.439224608802350      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    351.56390078168221      );
  id5 -> SetBinError( xbin,    10.898845636901655      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    278.55100059497317      );
  id5 -> SetBinError( xbin,    13.308506706351812      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    250.51908993004528      );
  id5 -> SetBinError( xbin,    15.519020105731608      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    251.35551668023186      );
  id5 -> SetBinError( xbin,    12.924916468744827      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2936.0587712088491      );
  id6 -> SetBinError( xbin,    54.594520068828679      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9564.5677821877307      );
  id6 -> SetBinError( xbin,    102.51744423738202      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    19366.249198477675      );
  id6 -> SetBinError( xbin,    149.31138977911425      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33845.792514806635      );
  id6 -> SetBinError( xbin,    197.26675283890029      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    55803.561954105215      );
  id6 -> SetBinError( xbin,    245.53364367237936      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    86082.359570711618      );
  id6 -> SetBinError( xbin,    287.54661831614328      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    132322.64542785339      );
  id6 -> SetBinError( xbin,    346.14283870472860      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    184882.03360775815      );
  id6 -> SetBinError( xbin,    413.80329680499017      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    71786.952370605606      );
  id6 -> SetBinError( xbin,    292.82061146850714      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24562.268399922697      );
  id6 -> SetBinError( xbin,    194.39447561089847      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    9120.9543446372008      );
  id6 -> SetBinError( xbin,    129.48127151696352      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3399.5346719164636      );
  id6 -> SetBinError( xbin,    81.263607271532720      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11151.157900138416      );
  id7 -> SetBinError( xbin,    138.12038084735852      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15293.542119443982      );
  id7 -> SetBinError( xbin,    165.63768254722899      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19080.993095436934      );
  id7 -> SetBinError( xbin,    183.13075225123248      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23442.167706947283      );
  id7 -> SetBinError( xbin,    207.51530970531806      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28470.574480686751      );
  id7 -> SetBinError( xbin,    230.86735276039161      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    32985.013083344609      );
  id7 -> SetBinError( xbin,    255.22125655914445      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37829.763811423560      );
  id7 -> SetBinError( xbin,    275.11803503866577      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    42902.202740371038      );
  id7 -> SetBinError( xbin,    300.35492084738479      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    46685.180950252980      );
  id7 -> SetBinError( xbin,    313.34335594315593      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    50980.027659938372      );
  id7 -> SetBinError( xbin,    340.88295658237701      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    53727.476443863059      );
  id7 -> SetBinError( xbin,    347.84301493052931      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    56695.513468179473      );
  id7 -> SetBinError( xbin,    358.53936648488792      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58640.374564361424      );
  id7 -> SetBinError( xbin,    363.20196038987200      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    61492.358686235573      );
  id7 -> SetBinError( xbin,    378.73185365050483      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    62686.110907411581      );
  id7 -> SetBinError( xbin,    379.97069921980273      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    61996.768632889463      );
  id7 -> SetBinError( xbin,    376.46372838274152      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    62008.714703213569      );
  id7 -> SetBinError( xbin,    376.17612537330859      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    61549.222551794504      );
  id7 -> SetBinError( xbin,    370.58194423506944      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    59894.682950582566      );
  id7 -> SetBinError( xbin,    363.72657947061566      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    58257.901626597617      );
  id7 -> SetBinError( xbin,    357.19804700375397      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    54952.687588181267      );
  id7 -> SetBinError( xbin,    339.74793370369679      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    52115.574432547466      );
  id7 -> SetBinError( xbin,    325.28097293311185      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    48302.615293555253      );
  id7 -> SetBinError( xbin,    308.14994851766852      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    44313.189350678476      );
  id7 -> SetBinError( xbin,    293.19616204804470      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    39567.827067036589      );
  id7 -> SetBinError( xbin,    269.67189075996123      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    34756.059990010763      );
  id7 -> SetBinError( xbin,    248.53690250148171      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    29921.650815243964      );
  id7 -> SetBinError( xbin,    227.97180892098274      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    24826.363241842620      );
  id7 -> SetBinError( xbin,    205.28175994023860      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    20466.921115575245      );
  id7 -> SetBinError( xbin,    185.24887785869569      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    15900.919915132450      );
  id7 -> SetBinError( xbin,    162.31634581092848      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    7139.6726378089970      );
  id8 -> SetBinError( xbin,    43.744340076876668      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12809.179026380434      );
  id8 -> SetBinError( xbin,    57.613222043719361      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    11064.379142538326      );
  id8 -> SetBinError( xbin,    52.498745973496462      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9662.5356535608917      );
  id8 -> SetBinError( xbin,    48.302059319323355      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8525.3801172117219      );
  id8 -> SetBinError( xbin,    44.879906288467147      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7508.6746757687943      );
  id8 -> SetBinError( xbin,    41.692267879913494      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6578.2588963749331      );
  id8 -> SetBinError( xbin,    38.009394536533115      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5813.3840409077611      );
  id8 -> SetBinError( xbin,    35.431251703403305      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5171.6120028188170      );
  id8 -> SetBinError( xbin,    32.928596119114999      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4548.4869580474506      );
  id8 -> SetBinError( xbin,    30.320127541066960      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4067.6528810933232      );
  id8 -> SetBinError( xbin,    28.168428894864061      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3730.9099293656654      );
  id8 -> SetBinError( xbin,    27.016914892007726      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3280.8849628186686      );
  id8 -> SetBinError( xbin,    24.714415398253038      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2923.3059983582334      );
  id8 -> SetBinError( xbin,    23.198301977479591      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2702.2416876085063      );
  id8 -> SetBinError( xbin,    22.284571904185707      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2451.0793710059138      );
  id8 -> SetBinError( xbin,    21.155534579393379      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2224.2642105279369      );
  id8 -> SetBinError( xbin,    19.500314735937689      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2038.8662208660080      );
  id8 -> SetBinError( xbin,    18.759501942404089      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1844.9999147412684      );
  id8 -> SetBinError( xbin,    17.490628668675310      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1667.9631837501508      );
  id8 -> SetBinError( xbin,    16.198697381927413      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1546.7475229272088      );
  id8 -> SetBinError( xbin,    15.706323053074488      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1415.4346748447779      );
  id8 -> SetBinError( xbin,    14.801681510084952      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1272.3855857867416      );
  id8 -> SetBinError( xbin,    13.894086449117967      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1193.5620928635651      );
  id8 -> SetBinError( xbin,    13.311309254359173      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1100.7951339680110      );
  id8 -> SetBinError( xbin,    12.682516881351056      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    1015.4649354847138      );
  id8 -> SetBinError( xbin,    12.280277280203928      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    947.24123133524779      );
  id8 -> SetBinError( xbin,    11.501805168212307      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    852.46336246642886      );
  id8 -> SetBinError( xbin,    11.011660684681983      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
