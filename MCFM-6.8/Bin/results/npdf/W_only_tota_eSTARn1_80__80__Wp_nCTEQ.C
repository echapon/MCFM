// Cross-section is:      2178194.6242095362 +/-          840.2944163359)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -51409.14858   -2.36%
//        GQB    |      -25396.93318   -1.17%
//        QG     |      -57722.60214   -2.65%
//        QBG    |      -27794.63624   -1.28%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1185754.62516   54.44%
//        QBQ    |     1158841.58255   53.20%

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
//Wp_nCTEQ                        [runstring]  
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
//             eSTARn1            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//eSTARn11_1_1.LHpdf              [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//eSTARn11_207_103.LHp            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_eSTARn1_80__80__Wp_nCTEQ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.47209893287874505      );
  id1 -> SetBinError( xbin,   0.48405122555204694      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    449.52645447174604      );
  id1 -> SetBinError( xbin,    54.443535403354716      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4702.7192076275414      );
  id1 -> SetBinError( xbin,    317.40465100545606      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    24428.134825327816      );
  id1 -> SetBinError( xbin,    926.55703785465971      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    62166.486821786923      );
  id1 -> SetBinError( xbin,    1315.4443317613559      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    119490.36600490790      );
  id1 -> SetBinError( xbin,    1463.3982044007626      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    180150.88382396253      );
  id1 -> SetBinError( xbin,    1769.0860428876911      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    239981.73080612731      );
  id1 -> SetBinError( xbin,    1948.7103274947442      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    281965.04494270508      );
  id1 -> SetBinError( xbin,    2001.0901674100301      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    317440.04701489507      );
  id1 -> SetBinError( xbin,    2087.0534877325176      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    348930.85946144699      );
  id1 -> SetBinError( xbin,    2109.3786412328732      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    371123.31299976021      );
  id1 -> SetBinError( xbin,    2150.9886212068959      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    383897.39143201004      );
  id1 -> SetBinError( xbin,    2129.3507780910322      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    390777.18516587344      );
  id1 -> SetBinError( xbin,    2135.8327428618131      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    398542.87257315317      );
  id1 -> SetBinError( xbin,    2145.3937421840901      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    400189.19233793073      );
  id1 -> SetBinError( xbin,    2182.9012905449763      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    406750.89131148905      );
  id1 -> SetBinError( xbin,    2180.4279197849669      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    408427.28501240886      );
  id1 -> SetBinError( xbin,    2144.7988613974949      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    409205.55798065476      );
  id1 -> SetBinError( xbin,    2140.4560222054811      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    400643.95407986519      );
  id1 -> SetBinError( xbin,    2085.6102548498015      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    391771.87170766317      );
  id1 -> SetBinError( xbin,    2054.8963802661137      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    391938.62314864626      );
  id1 -> SetBinError( xbin,    2055.2164013456922      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    381566.18219164084      );
  id1 -> SetBinError( xbin,    2066.4320062062961      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    378242.28849912586      );
  id1 -> SetBinError( xbin,    2057.3069416048752      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    368973.53696656745      );
  id1 -> SetBinError( xbin,    2015.2670380606119      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    368500.95376149612      );
  id1 -> SetBinError( xbin,    1996.7002567744721      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    368167.88630529423      );
  id1 -> SetBinError( xbin,    2042.1119692704169      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    360960.38544021157      );
  id1 -> SetBinError( xbin,    2036.9832707586556      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    359443.01833599899      );
  id1 -> SetBinError( xbin,    2055.2108355631212      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    358310.32373549719      );
  id1 -> SetBinError( xbin,    2054.2610464050513      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    358068.41412383929      );
  id1 -> SetBinError( xbin,    2056.5473940901793      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    340613.95388830337      );
  id1 -> SetBinError( xbin,    2252.5130685256891      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    317868.83619281690      );
  id1 -> SetBinError( xbin,    2682.1484091988200      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    293152.28256023867      );
  id1 -> SetBinError( xbin,    2635.3223535965190      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    249334.66221129266      );
  id1 -> SetBinError( xbin,    1928.3513489155794      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    199151.05659813510      );
  id1 -> SetBinError( xbin,    1818.9568907572805      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    139248.74765474605      );
  id1 -> SetBinError( xbin,    1580.7527319225214      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    79187.245649677367      );
  id1 -> SetBinError( xbin,    1387.0026157384632      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    30609.689588503647      );
  id1 -> SetBinError( xbin,    977.12179259854406      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    7110.4458453395782      );
  id1 -> SetBinError( xbin,    431.48707368119597      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    568.95321692711036      );
  id1 -> SetBinError( xbin,    70.537603767040636      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   0.91067079905903714      );
  id1 -> SetBinError( xbin,   0.60834873790094035      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    540934.38957422168      );
  id2 -> SetBinError( xbin,    5703.6514711382388      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    518705.27246353216      );
  id2 -> SetBinError( xbin,    6681.3594065245588      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    498416.02637586475      );
  id2 -> SetBinError( xbin,    4625.5115738526320      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    462086.50942303345      );
  id2 -> SetBinError( xbin,    3915.6810797273206      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    449476.84019135853      );
  id2 -> SetBinError( xbin,    4044.0559980256526      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    427940.51374928199      );
  id2 -> SetBinError( xbin,    6908.8779240735303      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    401349.30488723516      );
  id2 -> SetBinError( xbin,    3512.0181200642915      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    379352.51214170898      );
  id2 -> SetBinError( xbin,    2898.8901298860637      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    346886.01554985082      );
  id2 -> SetBinError( xbin,    2418.6699043612703      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    327251.03072294779      );
  id2 -> SetBinError( xbin,    2697.4537362722695      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    302940.42849914520      );
  id2 -> SetBinError( xbin,    2320.2097828906212      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    283924.81414022594      );
  id2 -> SetBinError( xbin,    2438.0489528195440      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    259337.26682897771      );
  id2 -> SetBinError( xbin,    2341.5730486938314      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    238760.80921573119      );
  id2 -> SetBinError( xbin,    1789.1347547050989      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    215821.18975046670      );
  id2 -> SetBinError( xbin,    1498.1558439428086      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    194577.87514940361      );
  id2 -> SetBinError( xbin,    1384.2047471279614      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    176536.13544359809      );
  id2 -> SetBinError( xbin,    1145.7517360053109      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    158296.03158347908      );
  id2 -> SetBinError( xbin,    1106.9900221391183      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    146169.93633631660      );
  id2 -> SetBinError( xbin,    6409.2852183290815      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    124722.67727398771      );
  id2 -> SetBinError( xbin,    973.05399464492041      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    109769.62362484385      );
  id2 -> SetBinError( xbin,    811.02619858739740      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    98835.347244485441      );
  id2 -> SetBinError( xbin,    902.55521032053480      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    83953.977081109813      );
  id2 -> SetBinError( xbin,    637.98912010544257      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    74923.047885021180      );
  id2 -> SetBinError( xbin,    696.03525714494731      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    66439.276282498235      );
  id2 -> SetBinError( xbin,    625.13261196201620      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    59513.421859114489      );
  id2 -> SetBinError( xbin,    616.77667348515320      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    52764.879262815084      );
  id2 -> SetBinError( xbin,    501.30682876660904      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    48688.274176520259      );
  id2 -> SetBinError( xbin,    461.67736042703706      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    45367.106338916514      );
  id2 -> SetBinError( xbin,    465.35978823842339      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    44147.399762202425      );
  id2 -> SetBinError( xbin,    448.04682101044216      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    44365.796802634140      );
  id2 -> SetBinError( xbin,    534.96931152532625      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    45667.897554347575      );
  id2 -> SetBinError( xbin,    480.88139196449310      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    48505.231330488139      );
  id2 -> SetBinError( xbin,    455.07649275561323      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    53748.145222252911      );
  id2 -> SetBinError( xbin,    495.23492278890797      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    58826.171445120417      );
  id2 -> SetBinError( xbin,    503.87892321212496      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    66821.181473731398      );
  id2 -> SetBinError( xbin,    563.22820647852598      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    76135.086253710557      );
  id2 -> SetBinError( xbin,    630.42082035067608      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    85681.147808593130      );
  id2 -> SetBinError( xbin,    768.29798633030180      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    97651.672656850802      );
  id2 -> SetBinError( xbin,    711.87088631787628      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    110129.04874542385      );
  id2 -> SetBinError( xbin,    785.49512866140344      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    125714.51954518502      );
  id2 -> SetBinError( xbin,    1005.5242275020668      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    141064.77360662169      );
  id2 -> SetBinError( xbin,    978.17225673091730      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    161306.90445808528      );
  id2 -> SetBinError( xbin,    1298.4085066265791      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    176695.74040205698      );
  id2 -> SetBinError( xbin,    1167.9809698742060      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    194617.52195579902      );
  id2 -> SetBinError( xbin,    1279.3760861261596      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    216232.10982539860      );
  id2 -> SetBinError( xbin,    1428.4626320486743      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    236916.48045138462      );
  id2 -> SetBinError( xbin,    1660.0702610498470      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    258326.32679307414      );
  id2 -> SetBinError( xbin,    1743.6334772438554      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    275857.04152085219      );
  id2 -> SetBinError( xbin,    2050.5544159871833      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    307338.74502045114      );
  id2 -> SetBinError( xbin,    2696.9614651372112      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    324786.67639724270      );
  id2 -> SetBinError( xbin,    2311.5667219368734      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    345292.81556293357      );
  id2 -> SetBinError( xbin,    2334.6446426640900      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    367740.02689709596      );
  id2 -> SetBinError( xbin,    2791.1251434371334      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    400418.79703398462      );
  id2 -> SetBinError( xbin,    3541.9532459423413      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    413819.31317523203      );
  id2 -> SetBinError( xbin,    3566.1397625100349      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    438875.65713318571      );
  id2 -> SetBinError( xbin,    3466.1154867078035      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    466909.50907501992      );
  id2 -> SetBinError( xbin,    3837.7476263345720      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    493738.53466779133      );
  id2 -> SetBinError( xbin,    4890.1728564307359      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    506399.19693330204      );
  id2 -> SetBinError( xbin,    5060.6813439386342      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    527845.19517295656      );
  id2 -> SetBinError( xbin,    5774.9676812497109      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    147057.09942412397      );
  id3 -> SetBinError( xbin,    1346.0830061029919      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    201218.80507604271      );
  id3 -> SetBinError( xbin,    1631.3580604044078      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    260332.38236117153      );
  id3 -> SetBinError( xbin,    1871.6456074624630      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    306085.32924999436      );
  id3 -> SetBinError( xbin,    2017.0519338645829      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    342744.17909669137      );
  id3 -> SetBinError( xbin,    2164.9205295036545      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    382342.04106922925      );
  id3 -> SetBinError( xbin,    2309.8269957259818      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    407486.32473955373      );
  id3 -> SetBinError( xbin,    2389.0383946381507      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    424543.75553706358      );
  id3 -> SetBinError( xbin,    2460.7852143974078      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    433805.01553924935      );
  id3 -> SetBinError( xbin,    2491.4728357952686      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    439720.32496618968      );
  id3 -> SetBinError( xbin,    2495.3213112772582      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    439796.72179849847      );
  id3 -> SetBinError( xbin,    2399.1810562255027      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    442567.71077737166      );
  id3 -> SetBinError( xbin,    2462.7075928405293      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    437900.67138126073      );
  id3 -> SetBinError( xbin,    2434.3788264965669      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    433797.06667251664      );
  id3 -> SetBinError( xbin,    2386.4403422687506      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    430959.83136332233      );
  id3 -> SetBinError( xbin,    2388.0039669669695      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    430379.35146289365      );
  id3 -> SetBinError( xbin,    2631.4236300112789      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    417460.74058872421      );
  id3 -> SetBinError( xbin,    2594.1746398860273      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    421585.28497990727      );
  id3 -> SetBinError( xbin,    2351.8787271775063      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    413147.13795169955      );
  id3 -> SetBinError( xbin,    2318.4738349620229      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    409601.12353652105      );
  id3 -> SetBinError( xbin,    2320.4729538892479      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    411039.38485822664      );
  id3 -> SetBinError( xbin,    2321.3898489732915      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    401233.65001188288      );
  id3 -> SetBinError( xbin,    2340.4659219892474      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    398633.37500339013      );
  id3 -> SetBinError( xbin,    2379.4213127895182      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    388779.09660497273      );
  id3 -> SetBinError( xbin,    2391.6626618652235      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    368161.07281952258      );
  id3 -> SetBinError( xbin,    2496.5965686648124      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    346718.63591127400      );
  id3 -> SetBinError( xbin,    2230.6317953838720      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    312094.68283795298      );
  id3 -> SetBinError( xbin,    2106.8041391115953      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    267212.19584931905      );
  id3 -> SetBinError( xbin,    1930.8436701031142      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    214449.57350702304      );
  id3 -> SetBinError( xbin,    1693.5574688753186      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    161201.61767253684      );
  id3 -> SetBinError( xbin,    1434.7064811172802      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    46257.946979711916      );
  id4 -> SetBinError( xbin,    1224.8003007623274      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    141725.01074867643      );
  id4 -> SetBinError( xbin,    1919.3145129764744      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    167996.88173754502      );
  id4 -> SetBinError( xbin,    2158.0353185926310      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    194712.58070288540      );
  id4 -> SetBinError( xbin,    2366.4810918806452      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    227198.85442806102      );
  id4 -> SetBinError( xbin,    2616.4832732751115      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    250478.60245314648      );
  id4 -> SetBinError( xbin,    2849.4751885320106      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    289913.61262574757      );
  id4 -> SetBinError( xbin,    3058.4436196199426      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    299114.62219984928      );
  id4 -> SetBinError( xbin,    3086.2317186840273      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    323303.25777406967      );
  id4 -> SetBinError( xbin,    4418.4717731985302      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    343579.73462002148      );
  id4 -> SetBinError( xbin,    4498.0127269351788      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    358919.11650455574      );
  id4 -> SetBinError( xbin,    3383.7733077964594      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    377578.20362924389      );
  id4 -> SetBinError( xbin,    3551.0331140012381      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    394275.42666700098      );
  id4 -> SetBinError( xbin,    3639.0730950397742      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    407287.98977258266      );
  id4 -> SetBinError( xbin,    3571.2529534533865      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    415720.24207165156      );
  id4 -> SetBinError( xbin,    3601.6261747821995      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    415554.83310430538      );
  id4 -> SetBinError( xbin,    5978.1443843980278      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    444201.97369171132      );
  id4 -> SetBinError( xbin,    6193.5678451044196      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    428788.28192178934      );
  id4 -> SetBinError( xbin,    4016.4977824382809      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    439316.92277206277      );
  id4 -> SetBinError( xbin,    3741.1506073757014      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    436671.84010561503      );
  id4 -> SetBinError( xbin,    3804.9447314865583      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    442258.61840288644      );
  id4 -> SetBinError( xbin,    3879.7437671587691      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    443292.25564551709      );
  id4 -> SetBinError( xbin,    3694.6789378087265      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    438660.37664368725      );
  id4 -> SetBinError( xbin,    3770.2005774667300      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    444568.63637436304      );
  id4 -> SetBinError( xbin,    3801.4862809655938      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    438963.24660076940      );
  id4 -> SetBinError( xbin,    3702.8061277878428      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    443066.28645778680      );
  id4 -> SetBinError( xbin,    3734.8731349801888      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    432187.98677460506      );
  id4 -> SetBinError( xbin,    3705.4967943192223      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    427833.02488927834      );
  id4 -> SetBinError( xbin,    3719.7756240440990      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    436083.74467159482      );
  id4 -> SetBinError( xbin,    3745.0865290042552      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    430095.06214104290      );
  id4 -> SetBinError( xbin,    3638.9369768720985      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    429820.67757805809      );
  id4 -> SetBinError( xbin,    3629.9911176139167      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    427308.02960196510      );
  id4 -> SetBinError( xbin,    3579.8296231999243      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    428382.17253281875      );
  id4 -> SetBinError( xbin,    3604.0683119802156      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    418196.39632936468      );
  id4 -> SetBinError( xbin,    3613.1532354200567      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    420605.13126563723      );
  id4 -> SetBinError( xbin,    3603.6975295875895      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    422048.08149236947      );
  id4 -> SetBinError( xbin,    3665.2792388335511      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    414941.86540498136      );
  id4 -> SetBinError( xbin,    3597.4787956449268      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    414427.79975635913      );
  id4 -> SetBinError( xbin,    3468.0958269277548      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    408488.62406987441      );
  id4 -> SetBinError( xbin,    3919.1782650722207      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    415908.35111166461      );
  id4 -> SetBinError( xbin,    3962.8595546495371      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    407101.04041998490      );
  id4 -> SetBinError( xbin,    3653.0934399698826      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    412647.42176699021      );
  id4 -> SetBinError( xbin,    3646.9342447007307      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    407051.69784965168      );
  id4 -> SetBinError( xbin,    3606.8178748607452      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    401184.31266367942      );
  id4 -> SetBinError( xbin,    3601.0526292649552      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    402959.12358887016      );
  id4 -> SetBinError( xbin,    3572.7254949059384      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    400886.17541250278      );
  id4 -> SetBinError( xbin,    3561.5055210763303      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    393982.34663456172      );
  id4 -> SetBinError( xbin,    3575.4814950225978      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    387839.87214291631      );
  id4 -> SetBinError( xbin,    3530.3428862950295      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    380207.69060382515      );
  id4 -> SetBinError( xbin,    3471.4133734007091      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    375124.81508625968      );
  id4 -> SetBinError( xbin,    4042.1672865340647      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    359518.05406330473      );
  id4 -> SetBinError( xbin,    3486.2466655024114      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    348301.93025249138      );
  id4 -> SetBinError( xbin,    3314.7138717026355      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    331675.41307735257      );
  id4 -> SetBinError( xbin,    3247.5212030463108      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    319138.45908387378      );
  id4 -> SetBinError( xbin,    3165.1126264319905      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    290755.20928466966      );
  id4 -> SetBinError( xbin,    3008.6456907868219      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    273200.55122028734      );
  id4 -> SetBinError( xbin,    2902.9418301318624      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    39140.636678113551      );
  id5 -> SetBinError( xbin,    350.52094779414961      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    83547.269292068740      );
  id5 -> SetBinError( xbin,    455.48226193154790      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    92108.136279352053      );
  id5 -> SetBinError( xbin,    501.94488538354619      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    100389.97171418407      );
  id5 -> SetBinError( xbin,    562.26290879223416      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    111894.35002224072      );
  id5 -> SetBinError( xbin,    602.71324357194760      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    125446.68012852318      );
  id5 -> SetBinError( xbin,    605.02516158467154      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    146199.09894488711      );
  id5 -> SetBinError( xbin,    645.96650469771419      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    167169.44832126441      );
  id5 -> SetBinError( xbin,    795.24167149048003      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    106963.18118915419      );
  id5 -> SetBinError( xbin,    618.10349866662773      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    39786.668391755898      );
  id5 -> SetBinError( xbin,    202.08112263668053      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    20039.922096721868      );
  id5 -> SetBinError( xbin,    118.03297989008645      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    12662.932906508380      );
  id5 -> SetBinError( xbin,    85.073610431872183      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8725.7980585564310      );
  id5 -> SetBinError( xbin,    66.914066887134354      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    6399.3458690080370      );
  id5 -> SetBinError( xbin,    50.352866826266187      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4816.9103996138883      );
  id5 -> SetBinError( xbin,    43.521514589057851      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3688.3541200530199      );
  id5 -> SetBinError( xbin,    62.085873059940944      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    3022.7351433925696      );
  id5 -> SetBinError( xbin,    59.826115529255141      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2435.0868673516538      );
  id5 -> SetBinError( xbin,    29.723116455159182      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2022.2108510393946      );
  id5 -> SetBinError( xbin,    27.850623401370044      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1647.3534570137053      );
  id5 -> SetBinError( xbin,    24.541529070346517      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1365.8365141813292      );
  id5 -> SetBinError( xbin,    22.944840993785313      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1109.7641287702784      );
  id5 -> SetBinError( xbin,    19.994119035676427      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1021.3861228561506      );
  id5 -> SetBinError( xbin,    26.240819018146489      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    878.05591048961855      );
  id5 -> SetBinError( xbin,    28.051515219898981      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    704.21416894022468      );
  id5 -> SetBinError( xbin,    20.415723711478254      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    613.53220767276684      );
  id5 -> SetBinError( xbin,    16.283875014090540      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    567.01735249019271      );
  id5 -> SetBinError( xbin,    15.212010373574095      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    498.12349449158478      );
  id5 -> SetBinError( xbin,    12.114410695871630      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    409.20806349630493      );
  id5 -> SetBinError( xbin,    11.019972616958194      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    375.07857950606189      );
  id5 -> SetBinError( xbin,    10.424771249917439      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    346.41621556123692      );
  id5 -> SetBinError( xbin,    10.407140488183428      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    299.91860357721839      );
  id5 -> SetBinError( xbin,    9.4334647309301154      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    243.83299276940699      );
  id5 -> SetBinError( xbin,    9.1356712394383166      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    226.37057628893956      );
  id5 -> SetBinError( xbin,    11.158225232686373      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    207.83968045843901      );
  id5 -> SetBinError( xbin,    12.983948305458952      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    178.27681495040900      );
  id5 -> SetBinError( xbin,    11.294598484310049      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    179.34075342163408      );
  id5 -> SetBinError( xbin,    6.0231577799647793      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    153.45610441713430      );
  id5 -> SetBinError( xbin,    5.2558018464532807      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1793.5459897882083      );
  id6 -> SetBinError( xbin,    34.419855311176711      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    5746.7637583401220      );
  id6 -> SetBinError( xbin,    62.970467727911370      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    11615.039578507760      );
  id6 -> SetBinError( xbin,    92.732794141597921      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    20468.691828011091      );
  id6 -> SetBinError( xbin,    123.35640972060020      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    33765.732899243616      );
  id6 -> SetBinError( xbin,    153.02024270942661      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    52359.079978851056      );
  id6 -> SetBinError( xbin,    180.30310708990879      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    80771.556832907707      );
  id6 -> SetBinError( xbin,    217.38881220374924      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    112248.44504816364      );
  id6 -> SetBinError( xbin,    259.79542673161984      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    43706.337355485251      );
  id6 -> SetBinError( xbin,    182.39080566775354      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    14939.640521842151      );
  id6 -> SetBinError( xbin,    120.22908732419175      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    5602.1865265738497      );
  id6 -> SetBinError( xbin,    79.133169578861327      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2144.1271001124242      );
  id6 -> SetBinError( xbin,    53.424535909273949      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    7318.1151267128898      );
  id7 -> SetBinError( xbin,    88.739306599864406      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9648.5039291911198      );
  id7 -> SetBinError( xbin,    102.57293173881698      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    12184.568079339082      );
  id7 -> SetBinError( xbin,    116.43333080425795      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    15041.459846562244      );
  id7 -> SetBinError( xbin,    131.72163186602126      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    17940.081030464433      );
  id7 -> SetBinError( xbin,    147.06782330004853      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    20924.496607664540      );
  id7 -> SetBinError( xbin,    160.76680154050490      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    23708.466241393227      );
  id7 -> SetBinError( xbin,    175.41593420483628      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    26414.317419352821      );
  id7 -> SetBinError( xbin,    187.78223791958081      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    29405.849952039829      );
  id7 -> SetBinError( xbin,    201.56110137360446      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    31680.465731048545      );
  id7 -> SetBinError( xbin,    213.84342025061733      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    33752.139597056601      );
  id7 -> SetBinError( xbin,    224.68140527078469      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    34948.432761046504      );
  id7 -> SetBinError( xbin,    225.18401950071723      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    36466.719980888527      );
  id7 -> SetBinError( xbin,    232.43494687351355      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    37641.537352709063      );
  id7 -> SetBinError( xbin,    237.98858496368052      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    38228.542435544172      );
  id7 -> SetBinError( xbin,    238.68974092946817      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    37916.012261808850      );
  id7 -> SetBinError( xbin,    236.59153292560288      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    37522.588211166018      );
  id7 -> SetBinError( xbin,    233.55755488249019      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    37490.239867294156      );
  id7 -> SetBinError( xbin,    235.46438959606022      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    36001.077179564760      );
  id7 -> SetBinError( xbin,    225.46338265954481      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    34740.486086528857      );
  id7 -> SetBinError( xbin,    220.08765827894729      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    32550.809516519599      );
  id7 -> SetBinError( xbin,    207.60265116970228      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    30963.732504372427      );
  id7 -> SetBinError( xbin,    203.07325959375490      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    28358.987383748343      );
  id7 -> SetBinError( xbin,    187.12386225785255      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    25728.054046628997      );
  id7 -> SetBinError( xbin,    176.65484497145576      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    23057.827088679362      );
  id7 -> SetBinError( xbin,    164.04292453275238      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    20303.183080830724      );
  id7 -> SetBinError( xbin,    151.24557740346458      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17353.735977467026      );
  id7 -> SetBinError( xbin,    138.09370158890741      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    14417.495242296576      );
  id7 -> SetBinError( xbin,    125.51755576407020      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    11695.311182499619      );
  id7 -> SetBinError( xbin,    112.51611080979323      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    9069.3084640453017      );
  id7 -> SetBinError( xbin,    98.611526188926931      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    4226.4857271058754      );
  id8 -> SetBinError( xbin,    26.943633380814109      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    7750.7171681113614      );
  id8 -> SetBinError( xbin,    36.192137658719645      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    6695.3524500792446      );
  id8 -> SetBinError( xbin,    32.789697942252459      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    5897.0972614215380      );
  id8 -> SetBinError( xbin,    30.408198154136411      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    5134.6640828175941      );
  id8 -> SetBinError( xbin,    28.007785997482198      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    4533.5159932593760      );
  id8 -> SetBinError( xbin,    25.893160286069925      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    4028.2919561042859      );
  id8 -> SetBinError( xbin,    24.039430544577986      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    3484.7674443483829      );
  id8 -> SetBinError( xbin,    21.930461320568234      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    3135.0393136501079      );
  id8 -> SetBinError( xbin,    20.535693211111763      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2788.7161404218214      );
  id8 -> SetBinError( xbin,    19.031488735893493      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2507.5004584123071      );
  id8 -> SetBinError( xbin,    17.898310494340496      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    2218.7836029647997      );
  id8 -> SetBinError( xbin,    16.466540006234201      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    1994.9712125603246      );
  id8 -> SetBinError( xbin,    15.310238479535046      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1808.8568009483088      );
  id8 -> SetBinError( xbin,    14.544272829627834      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1641.8350372981267      );
  id8 -> SetBinError( xbin,    13.527250314301821      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1504.3724469333758      );
  id8 -> SetBinError( xbin,    13.329953196069035      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1375.7470545287854      );
  id8 -> SetBinError( xbin,    12.562622433014786      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1213.8055013682667      );
  id8 -> SetBinError( xbin,    11.299813940919543      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1126.9056041064114      );
  id8 -> SetBinError( xbin,    10.946856235384896      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1040.6442886405873      );
  id8 -> SetBinError( xbin,    10.446124113572374      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    938.66241382369196      );
  id8 -> SetBinError( xbin,    9.7579098075788675      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    878.92655507990776      );
  id8 -> SetBinError( xbin,    9.2962611374013289      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    769.00917378712654      );
  id8 -> SetBinError( xbin,    8.6738075115103488      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    738.71455869975500      );
  id8 -> SetBinError( xbin,    8.4410831023598565      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    673.16527252756714      );
  id8 -> SetBinError( xbin,    7.8833994220098180      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    632.47821695881203      );
  id8 -> SetBinError( xbin,    7.6040522586639590      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    564.75218868617355      );
  id8 -> SetBinError( xbin,    7.5180945004673561      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    533.35730653466101      );
  id8 -> SetBinError( xbin,    6.9090619593552303      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
