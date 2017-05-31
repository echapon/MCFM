// Cross-section is:      1853735.8515011612 +/-          828.6656184283)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -51949.19068   -2.80%
//        GQB    |      -43671.62814   -2.36%
//        QG     |      -50014.41537   -2.70%
//        QBG    |      -43413.02941   -2.34%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      917612.67691   49.50%
//        QBQ    |     1134135.92268   61.18%

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
//Wm_CT10_DSSZ                    [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wm_CT10_DSSZ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -1.5664389417138509E-002 );
  id1 -> SetBinError( xbin,    1.2449331847933445E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    17.177611996962238      );
  id1 -> SetBinError( xbin,    3.3368351300144199      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    319.88911790474157      );
  id1 -> SetBinError( xbin,    45.822243499664708      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2542.1535530771143      );
  id1 -> SetBinError( xbin,    156.60288804426128      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    10046.318893003125      );
  id1 -> SetBinError( xbin,    446.28723585721303      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    31084.092347946411      );
  id1 -> SetBinError( xbin,    719.61622351980895      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    71755.277080980304      );
  id1 -> SetBinError( xbin,    1115.4248184707560      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    137355.65133650196      );
  id1 -> SetBinError( xbin,    1365.1605601849635      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    210546.32251786996      );
  id1 -> SetBinError( xbin,    1575.9372434326949      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    297646.60441813309      );
  id1 -> SetBinError( xbin,    1831.4803303575143      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    363930.24182023283      );
  id1 -> SetBinError( xbin,    2075.1115715828141      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    409958.89834385423      );
  id1 -> SetBinError( xbin,    2239.6172025229312      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    425797.81458969554      );
  id1 -> SetBinError( xbin,    2084.4624647001174      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    424967.64273980056      );
  id1 -> SetBinError( xbin,    2026.1458415518603      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    422515.54526787484      );
  id1 -> SetBinError( xbin,    2029.5383445544155      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    422104.51978945918      );
  id1 -> SetBinError( xbin,    1963.7603666431964      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    417621.61358186405      );
  id1 -> SetBinError( xbin,    1938.7276037089023      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    413567.76052757353      );
  id1 -> SetBinError( xbin,    1927.9881049251280      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    399776.38549592340      );
  id1 -> SetBinError( xbin,    1862.6032397492197      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    397904.18415518181      );
  id1 -> SetBinError( xbin,    1879.3758707771406      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    390836.26376820914      );
  id1 -> SetBinError( xbin,    1854.1450649965093      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    381692.16140121216      );
  id1 -> SetBinError( xbin,    1840.6659349486588      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    371784.97103583813      );
  id1 -> SetBinError( xbin,    1864.6270459657433      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    367560.96633944922      );
  id1 -> SetBinError( xbin,    1811.9120858274975      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    355621.82668620319      );
  id1 -> SetBinError( xbin,    1798.8081907877552      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    345893.64101131790      );
  id1 -> SetBinError( xbin,    1793.9282419626163      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    332892.07874031266      );
  id1 -> SetBinError( xbin,    1774.1576683431915      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    327029.45294797810      );
  id1 -> SetBinError( xbin,    1830.9865298013704      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    305516.90041687863      );
  id1 -> SetBinError( xbin,    1728.1361775994947      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    293360.86060017085      );
  id1 -> SetBinError( xbin,    1716.3757266551902      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    271748.82208185637      );
  id1 -> SetBinError( xbin,    1673.9269360528922      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    227281.58772822740      );
  id1 -> SetBinError( xbin,    1556.7515107570887      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    177942.89788342398      );
  id1 -> SetBinError( xbin,    1443.6819873469976      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    122610.27828842435      );
  id1 -> SetBinError( xbin,    1282.4185218242499      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    76644.669307622811      );
  id1 -> SetBinError( xbin,    1181.2295620904990      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    39358.999802881292      );
  id1 -> SetBinError( xbin,    780.26938143950144      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    16013.110318452280      );
  id1 -> SetBinError( xbin,    549.31948017185357      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    4966.4084458174075      );
  id1 -> SetBinError( xbin,    236.91074573845557      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1022.5118243626748      );
  id1 -> SetBinError( xbin,    68.178089114026662      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    141.82151602097295      );
  id1 -> SetBinError( xbin,    13.237377041064434      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    7.0041679875076683      );
  id1 -> SetBinError( xbin,    1.0737854859874394      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   -2.0641321930696326E-002 );
  id1 -> SetBinError( xbin,    1.3433726116131105E-002 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    821015.86383449531      );
  id2 -> SetBinError( xbin,    6502.9829094124716      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    779575.54175444064      );
  id2 -> SetBinError( xbin,    6330.7612153792215      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    753249.05966482230      );
  id2 -> SetBinError( xbin,    6072.2270889639112      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    710322.67037901771      );
  id2 -> SetBinError( xbin,    5051.9145781450370      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    677335.18605113018      );
  id2 -> SetBinError( xbin,    5177.5937711429806      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    637349.89812651707      );
  id2 -> SetBinError( xbin,    4423.5283801024916      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    608311.83684034238      );
  id2 -> SetBinError( xbin,    3981.8110836664578      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    580423.17765115190      );
  id2 -> SetBinError( xbin,    3854.0788244904597      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    537660.17739622714      );
  id2 -> SetBinError( xbin,    3275.6001501037817      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    512749.43406464095      );
  id2 -> SetBinError( xbin,    7171.9622895731281      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    471749.75165230111      );
  id2 -> SetBinError( xbin,    2729.3885756033819      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    441715.74209920992      );
  id2 -> SetBinError( xbin,    3271.2049990165665      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    412328.86911271233      );
  id2 -> SetBinError( xbin,    3334.3979129563750      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    373476.67349785671      );
  id2 -> SetBinError( xbin,    2277.7631743374423      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    343088.48066954257      );
  id2 -> SetBinError( xbin,    2653.7586204313989      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    315481.60702778044      );
  id2 -> SetBinError( xbin,    1806.0803832105757      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    282066.14363646577      );
  id2 -> SetBinError( xbin,    1628.5958416315191      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    253029.05556617270      );
  id2 -> SetBinError( xbin,    1451.6941050345774      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    225257.39844955099      );
  id2 -> SetBinError( xbin,    1661.2522719146682      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    200754.25976694262      );
  id2 -> SetBinError( xbin,    1282.6147238742628      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    174961.94702782587      );
  id2 -> SetBinError( xbin,    1164.9381618552386      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    152990.41187764410      );
  id2 -> SetBinError( xbin,    1014.1696468079048      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    137006.08755884040      );
  id2 -> SetBinError( xbin,    1386.0378938011841      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    118213.76590360385      );
  id2 -> SetBinError( xbin,    1275.1980447137994      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    103007.05599958624      );
  id2 -> SetBinError( xbin,    771.35793781889902      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    90574.169749599649      );
  id2 -> SetBinError( xbin,    734.79770495168248      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    81326.506816784284      );
  id2 -> SetBinError( xbin,    671.18670682936954      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    73497.170264520435      );
  id2 -> SetBinError( xbin,    694.48372871622178      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    68210.116775511677      );
  id2 -> SetBinError( xbin,    709.45052924771971      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    66692.109880566699      );
  id2 -> SetBinError( xbin,    592.81930304893501      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    64619.943041146318      );
  id2 -> SetBinError( xbin,    594.50805994270115      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    66981.698898840303      );
  id2 -> SetBinError( xbin,    567.55595918483482      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    70181.140964121660      );
  id2 -> SetBinError( xbin,    591.10304320720718      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    77312.763299643062      );
  id2 -> SetBinError( xbin,    633.07468733127689      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    85486.005737580665      );
  id2 -> SetBinError( xbin,    785.22220644698996      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    96023.958164413008      );
  id2 -> SetBinError( xbin,    788.09692742029790      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    108633.55712376472      );
  id2 -> SetBinError( xbin,    857.69674494082881      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    124196.04492155796      );
  id2 -> SetBinError( xbin,    1102.5141866296763      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    140027.37154641299      );
  id2 -> SetBinError( xbin,    1108.6523260794556      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    157358.44567859327      );
  id2 -> SetBinError( xbin,    1099.1410446300038      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    177924.37983481432      );
  id2 -> SetBinError( xbin,    1423.1500896233636      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    198629.53714554809      );
  id2 -> SetBinError( xbin,    1320.5081729647213      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    221574.07661583266      );
  id2 -> SetBinError( xbin,    1544.5543296388778      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    243269.84367530310      );
  id2 -> SetBinError( xbin,    1597.9473688440037      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    271406.21974121511      );
  id2 -> SetBinError( xbin,    2296.1855356536830      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    297520.90014826076      );
  id2 -> SetBinError( xbin,    2259.4796931421606      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    321311.08702845947      );
  id2 -> SetBinError( xbin,    2241.5187610279368      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    340647.09249026567      );
  id2 -> SetBinError( xbin,    2307.6533711413776      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    381583.40613646177      );
  id2 -> SetBinError( xbin,    11644.723660170017      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    396116.88076181913      );
  id2 -> SetBinError( xbin,    2816.9802116315414      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    424743.43988911383      );
  id2 -> SetBinError( xbin,    4919.1327825066955      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    455524.66117413074      );
  id2 -> SetBinError( xbin,    3949.2753190496423      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    483008.79740722920      );
  id2 -> SetBinError( xbin,    4658.5364074465579      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    508236.36356219783      );
  id2 -> SetBinError( xbin,    3894.4044016301896      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    538942.78055655491      );
  id2 -> SetBinError( xbin,    4981.9423616623262      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    563007.69461936725      );
  id2 -> SetBinError( xbin,    7043.4013573791208      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    588481.35922351654      );
  id2 -> SetBinError( xbin,    6717.2603758170917      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    602902.48654348426      );
  id2 -> SetBinError( xbin,    5679.8160216600309      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    637494.95635096531      );
  id2 -> SetBinError( xbin,    6570.2143396501533      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    668014.60716747306      );
  id2 -> SetBinError( xbin,    6580.7709527741890      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    292857.67732785584      );
  id3 -> SetBinError( xbin,    2529.3829668931339      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    318909.23093103908      );
  id3 -> SetBinError( xbin,    2395.8511902390328      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    337696.76163038873      );
  id3 -> SetBinError( xbin,    2155.1159530360010      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    349335.09756722511      );
  id3 -> SetBinError( xbin,    2093.8812122705208      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    357367.95346357743      );
  id3 -> SetBinError( xbin,    2029.7756367293723      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    363817.75818603521      );
  id3 -> SetBinError( xbin,    1978.3935232465242      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    364494.48858081707      );
  id3 -> SetBinError( xbin,    1953.2652545580258      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    368089.58854522317      );
  id3 -> SetBinError( xbin,    1898.5004066445688      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    367525.46157646331      );
  id3 -> SetBinError( xbin,    1847.7535262333606      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    362745.88123724516      );
  id3 -> SetBinError( xbin,    1830.8090641326696      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    361581.65072629642      );
  id3 -> SetBinError( xbin,    1849.6596013085202      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    356287.86751022743      );
  id3 -> SetBinError( xbin,    1837.4832147781040      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    353759.28245526477      );
  id3 -> SetBinError( xbin,    1810.3774182819136      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    347462.14057783235      );
  id3 -> SetBinError( xbin,    1775.1442885734546      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    346106.95933327265      );
  id3 -> SetBinError( xbin,    1727.9011700604271      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    337940.28522627824      );
  id3 -> SetBinError( xbin,    1952.1216803703005      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    331911.57139716338      );
  id3 -> SetBinError( xbin,    1957.7699220451746      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    324204.88759734808      );
  id3 -> SetBinError( xbin,    1709.2225192319190      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    316121.11658533668      );
  id3 -> SetBinError( xbin,    1709.1957852008188      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    307561.45046095649      );
  id3 -> SetBinError( xbin,    1695.6992610721315      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    296196.71398660977      );
  id3 -> SetBinError( xbin,    1693.7751969987098      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    288546.56532919273      );
  id3 -> SetBinError( xbin,    1716.2120081634532      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    277933.37338642083      );
  id3 -> SetBinError( xbin,    1744.1050283969294      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    263578.18790571089      );
  id3 -> SetBinError( xbin,    1734.8834616061047      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    255783.15409518263      );
  id3 -> SetBinError( xbin,    1747.6947910098208      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    240334.32010835354      );
  id3 -> SetBinError( xbin,    1712.3917868581555      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    226315.87837267976      );
  id3 -> SetBinError( xbin,    1837.2664214466608      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    207142.44558645884      );
  id3 -> SetBinError( xbin,    1752.0896802846919      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    183516.23851620153      );
  id3 -> SetBinError( xbin,    1865.7977388701977      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    164261.30299316024      );
  id3 -> SetBinError( xbin,    2033.6887470326590      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    98802.049748982958      );
  id4 -> SetBinError( xbin,    2972.9207676154092      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    290600.38671074819      );
  id4 -> SetBinError( xbin,    3723.6725440055657      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    307828.10920110991      );
  id4 -> SetBinError( xbin,    3637.8870980710685      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    316711.47836550855      );
  id4 -> SetBinError( xbin,    3716.2604332807978      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    323946.32920782274      );
  id4 -> SetBinError( xbin,    3597.6141789751223      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    340098.75873010728      );
  id4 -> SetBinError( xbin,    3548.7658671218269      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    342257.54714050685      );
  id4 -> SetBinError( xbin,    3476.4919916596186      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    351401.44500915927      );
  id4 -> SetBinError( xbin,    3337.4407759592400      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    354975.55647122825      );
  id4 -> SetBinError( xbin,    3591.2733636885373      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    353501.91370991553      );
  id4 -> SetBinError( xbin,    3502.5628136716305      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    359703.07080321200      );
  id4 -> SetBinError( xbin,    3202.2820367779759      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    367130.80583361309      );
  id4 -> SetBinError( xbin,    3232.7552601471289      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    360789.34779479227      );
  id4 -> SetBinError( xbin,    3205.3166746815118      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    362690.29739251075      );
  id4 -> SetBinError( xbin,    3429.7164839404491      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    371933.67635151185      );
  id4 -> SetBinError( xbin,    3404.2697499143155      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    366551.86567272269      );
  id4 -> SetBinError( xbin,    3030.6059820495775      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    363348.47009043104      );
  id4 -> SetBinError( xbin,    3016.3946972555923      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    365228.66547222756      );
  id4 -> SetBinError( xbin,    3024.5961216440601      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    369461.26879634382      );
  id4 -> SetBinError( xbin,    3204.9608047951983      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    363950.10461751022      );
  id4 -> SetBinError( xbin,    3141.1268411517199      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    364385.98195076437      );
  id4 -> SetBinError( xbin,    2937.8514419986832      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    362029.05152258399      );
  id4 -> SetBinError( xbin,    2889.7742088145592      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    360221.32785762334      );
  id4 -> SetBinError( xbin,    5904.0098714898259      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    352134.00391885673      );
  id4 -> SetBinError( xbin,    5898.4345710222105      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    355723.17041585816      );
  id4 -> SetBinError( xbin,    2967.3606767620627      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    355251.03090752230      );
  id4 -> SetBinError( xbin,    3058.9968485603499      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    352580.31190404168      );
  id4 -> SetBinError( xbin,    2928.6829669161643      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    348767.90423158987      );
  id4 -> SetBinError( xbin,    2917.5639477698255      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    348269.29504927347      );
  id4 -> SetBinError( xbin,    2825.9231870772874      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    344058.82747966825      );
  id4 -> SetBinError( xbin,    2874.2902981757061      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    341417.24362198589      );
  id4 -> SetBinError( xbin,    3047.2435709760325      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    336065.08584892319      );
  id4 -> SetBinError( xbin,    2919.1613205129661      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    332970.67657097150      );
  id4 -> SetBinError( xbin,    2715.3933353621337      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    336813.88638873515      );
  id4 -> SetBinError( xbin,    2750.0015796064345      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    327104.33288895525      );
  id4 -> SetBinError( xbin,    2870.8659180582767      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    323535.97330049815      );
  id4 -> SetBinError( xbin,    3145.4606035080419      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    322289.92216685408      );
  id4 -> SetBinError( xbin,    3063.4547658153760      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    317132.24271053704      );
  id4 -> SetBinError( xbin,    2765.0116016056322      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    314346.70753129147      );
  id4 -> SetBinError( xbin,    2749.3049080390269      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    309494.76233626035      );
  id4 -> SetBinError( xbin,    2752.7928420304543      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    298483.49338848435      );
  id4 -> SetBinError( xbin,    2749.5105013777215      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    296645.10321529856      );
  id4 -> SetBinError( xbin,    2803.8754728723820      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    298285.40248255088      );
  id4 -> SetBinError( xbin,    2808.7107970002062      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    287297.31283901085      );
  id4 -> SetBinError( xbin,    2708.6898844870275      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    281000.88610339904      );
  id4 -> SetBinError( xbin,    2704.9221627191146      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    282756.51081304782      );
  id4 -> SetBinError( xbin,    2795.8428275889883      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    269853.36167788081      );
  id4 -> SetBinError( xbin,    2684.6943552531152      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    264341.95236205118      );
  id4 -> SetBinError( xbin,    2734.5578511359527      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    258695.26173178657      );
  id4 -> SetBinError( xbin,    2827.8328110097209      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    258690.56892629410      );
  id4 -> SetBinError( xbin,    2810.4616761530365      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    249952.39644487482      );
  id4 -> SetBinError( xbin,    2773.4411120745322      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    243939.65760285981      );
  id4 -> SetBinError( xbin,    2738.0631728033454      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    233979.54453727274      );
  id4 -> SetBinError( xbin,    2709.8587354641045      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    227852.25579563837      );
  id4 -> SetBinError( xbin,    2808.7205005968040      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    220117.45471281011      );
  id4 -> SetBinError( xbin,    3100.5097749500333      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    204848.58540616205      );
  id4 -> SetBinError( xbin,    2826.0132784581961      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    27595.701993472263      );
  id5 -> SetBinError( xbin,    312.84584374876425      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    60472.458818110943      );
  id5 -> SetBinError( xbin,    393.09224264039398      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    69080.310893886068      );
  id5 -> SetBinError( xbin,    489.57222649749946      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    78643.536333071883      );
  id5 -> SetBinError( xbin,    530.66235825129661      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    88379.279195157811      );
  id5 -> SetBinError( xbin,    607.61685418999070      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    102962.45720813185      );
  id5 -> SetBinError( xbin,    697.59040053002207      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    121608.90167461576      );
  id5 -> SetBinError( xbin,    779.84513271006449      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    121846.73077809930      );
  id5 -> SetBinError( xbin,    916.94378206337933      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    95848.899753812759      );
  id5 -> SetBinError( xbin,    695.13400421639381      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    49225.979917699027      );
  id5 -> SetBinError( xbin,    226.09061196577778      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    26574.063755896655      );
  id5 -> SetBinError( xbin,    133.99807151158953      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17018.483887523715      );
  id5 -> SetBinError( xbin,    115.29619944208720      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12050.690229310752      );
  id5 -> SetBinError( xbin,    96.681537478554532      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    8906.7917583778508      );
  id5 -> SetBinError( xbin,    64.891504178906985      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7053.6388086947154      );
  id5 -> SetBinError( xbin,    57.540625238633936      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5614.5809136700409      );
  id5 -> SetBinError( xbin,    48.747455340705137      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4504.0878741854349      );
  id5 -> SetBinError( xbin,    41.339328523536928      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3738.8919820579194      );
  id5 -> SetBinError( xbin,    39.110586384359948      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3185.5296528852482      );
  id5 -> SetBinError( xbin,    38.684973751283941      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2681.0543497472186      );
  id5 -> SetBinError( xbin,    32.016331973850903      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2277.6060117067968      );
  id5 -> SetBinError( xbin,    29.280396570791648      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1928.1595834037519      );
  id5 -> SetBinError( xbin,    26.066755267059076      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1702.6088099596834      );
  id5 -> SetBinError( xbin,    27.824447359691373      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1416.5969470111515      );
  id5 -> SetBinError( xbin,    31.567344036391820      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1334.9234563408843      );
  id5 -> SetBinError( xbin,    26.177366763695236      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1077.9777657103348      );
  id5 -> SetBinError( xbin,    19.794292268579049      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    1005.6566550904681      );
  id5 -> SetBinError( xbin,    21.248541600363929      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    850.95103499506649      );
  id5 -> SetBinError( xbin,    22.134335901539174      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    784.32239489254016      );
  id5 -> SetBinError( xbin,    19.788681440775150      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    690.60144277168104      );
  id5 -> SetBinError( xbin,    17.897853561238360      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    590.76044383044325      );
  id5 -> SetBinError( xbin,    18.136060163494719      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    545.41321081672834      );
  id5 -> SetBinError( xbin,    13.676862849577867      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    484.22780348488408      );
  id5 -> SetBinError( xbin,    12.390019794541995      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    438.60504501441619      );
  id5 -> SetBinError( xbin,    12.819465000914697      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    403.46256727714587      );
  id5 -> SetBinError( xbin,    11.812673793026734      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    374.27074087216459      );
  id5 -> SetBinError( xbin,    9.2619879517116352      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    319.22923873100143      );
  id5 -> SetBinError( xbin,    10.840691962538797      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    276.43274794682344      );
  id5 -> SetBinError( xbin,    12.569986289698562      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2186.2257367327888      );
  id6 -> SetBinError( xbin,    44.002321992637746      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    6992.9512924653318      );
  id6 -> SetBinError( xbin,    77.159687133109585      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13567.688611418329      );
  id6 -> SetBinError( xbin,    106.82686226244715      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    23217.771347758764      );
  id6 -> SetBinError( xbin,    135.14740085188083      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    37508.791438268170      );
  id6 -> SetBinError( xbin,    163.08726150947402      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    61088.703936417158      );
  id6 -> SetBinError( xbin,    198.88777775027577      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    105140.48265154981      );
  id6 -> SetBinError( xbin,    265.01180039305331      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    171931.12844444357      );
  id6 -> SetBinError( xbin,    369.03166319809822      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    75765.974944511589      );
  id6 -> SetBinError( xbin,    295.03072425222098      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    28617.803239754547      );
  id6 -> SetBinError( xbin,    213.22887847457915      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    11650.504310298464      );
  id6 -> SetBinError( xbin,    149.78426028657518      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4756.2154088427624      );
  id6 -> SetBinError( xbin,    105.91683171184464      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11488.422562558642      );
  id7 -> SetBinError( xbin,    135.66439176544557      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15145.840841515077      );
  id7 -> SetBinError( xbin,    153.11419979219903      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19697.776738325556      );
  id7 -> SetBinError( xbin,    176.36682073780796      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24435.301577634280      );
  id7 -> SetBinError( xbin,    191.00443041971948      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28840.847296093532      );
  id7 -> SetBinError( xbin,    207.65571366951465      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    34458.821032063854      );
  id7 -> SetBinError( xbin,    231.59813139657464      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    39369.727974756825      );
  id7 -> SetBinError( xbin,    253.82059062122630      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    43388.454244902343      );
  id7 -> SetBinError( xbin,    270.37803161359392      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    47149.559212171604      );
  id7 -> SetBinError( xbin,    281.18303530093868      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    50902.878427107789      );
  id7 -> SetBinError( xbin,    298.79867243465839      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    53468.221597521791      );
  id7 -> SetBinError( xbin,    312.17514831316237      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    55482.685385041688      );
  id7 -> SetBinError( xbin,    318.40971670522259      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    56708.727275208039      );
  id7 -> SetBinError( xbin,    326.86295600113658      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    56662.964842145477      );
  id7 -> SetBinError( xbin,    327.92650782498475      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    57336.118367769523      );
  id7 -> SetBinError( xbin,    333.22903901498648      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    56773.426102580597      );
  id7 -> SetBinError( xbin,    334.17455393014581      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    54596.910168444658      );
  id7 -> SetBinError( xbin,    327.53517781872193      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    52633.621843562651      );
  id7 -> SetBinError( xbin,    322.62161009335676      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    49674.363595530063      );
  id7 -> SetBinError( xbin,    309.90088149395149      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    45633.596161796595      );
  id7 -> SetBinError( xbin,    294.00160667626068      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    43137.925438355313      );
  id7 -> SetBinError( xbin,    288.43862571586698      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    37972.817363463189      );
  id7 -> SetBinError( xbin,    260.38519574835965      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    34012.837103236583      );
  id7 -> SetBinError( xbin,    244.80418144097789      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    29064.363891215660      );
  id7 -> SetBinError( xbin,    222.77176077798066      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    24790.120275855566      );
  id7 -> SetBinError( xbin,    203.75730763012308      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    20747.740440222398      );
  id7 -> SetBinError( xbin,    186.15097587261818      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    16632.661983733033      );
  id7 -> SetBinError( xbin,    166.36256870031471      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    12946.934130167796      );
  id7 -> SetBinError( xbin,    144.10294868172451      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9774.9374345831529      );
  id7 -> SetBinError( xbin,    124.29772738020758      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7177.3714745910875      );
  id7 -> SetBinError( xbin,    108.03397902798883      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5786.3001184920977      );
  id8 -> SetBinError( xbin,    35.602422472771934      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10360.011723735443      );
  id8 -> SetBinError( xbin,    46.868537112447093      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9116.9272102810010      );
  id8 -> SetBinError( xbin,    43.376233665211863      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    7952.0657183601070      );
  id8 -> SetBinError( xbin,    39.952332608283683      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7053.0836156944533      );
  id8 -> SetBinError( xbin,    37.190635875530290      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6255.4837442166572      );
  id8 -> SetBinError( xbin,    34.801180344122855      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5579.3535215433167      );
  id8 -> SetBinError( xbin,    32.502634053872029      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    4996.5559847371687      );
  id8 -> SetBinError( xbin,    30.512770187367337      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4423.4598926670005      );
  id8 -> SetBinError( xbin,    28.246664856720095      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    3950.3031146415328      );
  id8 -> SetBinError( xbin,    26.410600084096334      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3566.1524470401364      );
  id8 -> SetBinError( xbin,    25.156047053930546      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3204.6137215511671      );
  id8 -> SetBinError( xbin,    23.449473684897754      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2904.6611526860670      );
  id8 -> SetBinError( xbin,    22.102686234015447      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2636.2625184600261      );
  id8 -> SetBinError( xbin,    20.851645645451850      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2379.5676693607829      );
  id8 -> SetBinError( xbin,    19.914663350464529      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2148.9114468172311      );
  id8 -> SetBinError( xbin,    18.168265490511800      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2025.6957545122423      );
  id8 -> SetBinError( xbin,    17.993179133687228      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1816.2711400357803      );
  id8 -> SetBinError( xbin,    16.793548446224321      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1691.9920080062359      );
  id8 -> SetBinError( xbin,    16.212281088385780      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1522.0338857916768      );
  id8 -> SetBinError( xbin,    15.292029860207769      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1430.1806453003569      );
  id8 -> SetBinError( xbin,    14.993360405296544      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1303.0456565024483      );
  id8 -> SetBinError( xbin,    13.851278664001674      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1187.8725825512388      );
  id8 -> SetBinError( xbin,    13.145018607684317      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1087.3963475794378      );
  id8 -> SetBinError( xbin,    12.478059887528017      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    989.53645176251814      );
  id8 -> SetBinError( xbin,    11.777527740841926      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    947.38983820960971      );
  id8 -> SetBinError( xbin,    11.559687151120885      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    846.81838804923291      );
  id8 -> SetBinError( xbin,    10.717128580273345      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    799.01734499562860      );
  id8 -> SetBinError( xbin,    10.600826094656036      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
