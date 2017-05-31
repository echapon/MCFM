// Cross-section is:      2429519.6421048837 +/-         1003.6783512185)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -78793.51269   -3.24%
//        GQB    |      -44285.05056   -1.82%
//        QG     |      -94927.92843   -3.91%
//        QBG    |      -45976.94802   -1.89%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1453389.17350   59.82%
//        QBQ    |     1245473.71409   51.26%

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
//Wp_HKNproton                    [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_HKNnlo._80__80__Wp_HKNproton.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.22047748589820634      );
  id1 -> SetBinError( xbin,   0.40510770671360485      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    552.87834426857955      );
  id1 -> SetBinError( xbin,    78.849093059180362      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    5478.2789237729448      );
  id1 -> SetBinError( xbin,    473.03663203285925      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    25793.762866458172      );
  id1 -> SetBinError( xbin,    1049.6367149793289      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    64990.381765298051      );
  id1 -> SetBinError( xbin,    1470.1788298057947      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    118213.33682327939      );
  id1 -> SetBinError( xbin,    1590.0812019526168      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    172882.73709878567      );
  id1 -> SetBinError( xbin,    1827.5715127350018      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    228880.61943900259      );
  id1 -> SetBinError( xbin,    1988.7599820980699      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    274434.18659879372      );
  id1 -> SetBinError( xbin,    2082.0796831450275      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    307560.72925578564      );
  id1 -> SetBinError( xbin,    2156.7493745585880      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    345273.72052790155      );
  id1 -> SetBinError( xbin,    2196.3996338796119      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    366032.29564796743      );
  id1 -> SetBinError( xbin,    2221.0201508908131      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    377761.02157230908      );
  id1 -> SetBinError( xbin,    2227.3167910219317      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    391774.57144267048      );
  id1 -> SetBinError( xbin,    2258.2374584108193      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    394352.48406298086      );
  id1 -> SetBinError( xbin,    2252.9985437422351      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    399117.91761586850      );
  id1 -> SetBinError( xbin,    2212.3782497285160      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    401994.87213857763      );
  id1 -> SetBinError( xbin,    2294.1860615502555      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    402405.15123595111      );
  id1 -> SetBinError( xbin,    2287.0630026035351      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    408662.78255465440      );
  id1 -> SetBinError( xbin,    2213.5057307767106      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    410727.52150627726      );
  id1 -> SetBinError( xbin,    2198.9514900556169      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    418310.53591095097      );
  id1 -> SetBinError( xbin,    2312.1378938066459      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    411695.03169751936      );
  id1 -> SetBinError( xbin,    2208.2673863609139      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    415552.68700816063      );
  id1 -> SetBinError( xbin,    2288.9972188307329      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    428850.08188192546      );
  id1 -> SetBinError( xbin,    2305.2236437309898      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    430989.12269189267      );
  id1 -> SetBinError( xbin,    2274.8122849538545      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    436978.51280178991      );
  id1 -> SetBinError( xbin,    2320.0051041871870      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    440040.21797532332      );
  id1 -> SetBinError( xbin,    2398.3377561049419      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    451373.91420109826      );
  id1 -> SetBinError( xbin,    2386.4458837858356      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    458088.29615038971      );
  id1 -> SetBinError( xbin,    2403.8735873654109      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    456878.69379034662      );
  id1 -> SetBinError( xbin,    2445.7931068237635      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    457060.96166439395      );
  id1 -> SetBinError( xbin,    2450.1292705790102      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    451531.81684148574      );
  id1 -> SetBinError( xbin,    2479.3820375741734      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    423831.11025398946      );
  id1 -> SetBinError( xbin,    2481.3304795542331      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    392767.46269948618      );
  id1 -> SetBinError( xbin,    3491.2689974334216      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    340464.06096168351      );
  id1 -> SetBinError( xbin,    2370.5245251058545      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    273451.31939372083      );
  id1 -> SetBinError( xbin,    2238.1386376108262      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    195505.99236017503      );
  id1 -> SetBinError( xbin,    2011.2993668063723      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    111337.39716582026      );
  id1 -> SetBinError( xbin,    1698.5775682603780      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    46479.391956133768      );
  id1 -> SetBinError( xbin,    1274.8675550375065      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    9700.7166638677281      );
  id1 -> SetBinError( xbin,    597.20617925303270      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    826.01168122718229      );
  id1 -> SetBinError( xbin,    112.03887851587186      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   0.88324222407495379      );
  id1 -> SetBinError( xbin,   0.83596771735799824      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    799313.35994315520      );
  id2 -> SetBinError( xbin,    7560.2556132748014      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    766930.18780539371      );
  id2 -> SetBinError( xbin,    7777.1369678686087      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    746261.36431910074      );
  id2 -> SetBinError( xbin,    8074.2244289088076      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    708307.34078968095      );
  id2 -> SetBinError( xbin,    9438.7862684151660      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    666163.89447312255      );
  id2 -> SetBinError( xbin,    5539.0335880617959      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    632806.69425176468      );
  id2 -> SetBinError( xbin,    5383.9028092683748      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    598000.35706260882      );
  id2 -> SetBinError( xbin,    5118.0971362118353      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    561472.26950837544      );
  id2 -> SetBinError( xbin,    4300.9056405911379      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    531676.67012772604      );
  id2 -> SetBinError( xbin,    4104.4320477122492      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    488920.84834892099      );
  id2 -> SetBinError( xbin,    3767.7377941800696      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    454546.93484370899      );
  id2 -> SetBinError( xbin,    3150.1072604619121      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    421688.40286093898      );
  id2 -> SetBinError( xbin,    2911.9666192235700      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    391159.24947020994      );
  id2 -> SetBinError( xbin,    2701.3072642039556      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    360034.74079483241      );
  id2 -> SetBinError( xbin,    2660.2815629631782      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    329067.84407643438      );
  id2 -> SetBinError( xbin,    2635.2831440936061      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    296122.60476465058      );
  id2 -> SetBinError( xbin,    2315.6052297078954      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    269619.63710297050      );
  id2 -> SetBinError( xbin,    2264.6394207387029      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    241420.31536070202      );
  id2 -> SetBinError( xbin,    1709.8165404723484      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    211998.37900571455      );
  id2 -> SetBinError( xbin,    1448.5715613042553      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    192295.56437903899      );
  id2 -> SetBinError( xbin,    1398.9756174509637      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    170165.13925560785      );
  id2 -> SetBinError( xbin,    1330.4384515138688      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    151614.03720681212      );
  id2 -> SetBinError( xbin,    1227.2037242592310      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    131385.24373114808      );
  id2 -> SetBinError( xbin,    993.95391904759526      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    118181.26324152845      );
  id2 -> SetBinError( xbin,    1148.7373109616683      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    102062.14664886497      );
  id2 -> SetBinError( xbin,    962.85920979719401      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    90853.519665575906      );
  id2 -> SetBinError( xbin,    844.92176006234740      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    80962.003979690911      );
  id2 -> SetBinError( xbin,    698.35316776735863      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    74693.790866387310      );
  id2 -> SetBinError( xbin,    708.02062102507955      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    71623.090133309131      );
  id2 -> SetBinError( xbin,    945.10589686582853      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    68778.129431057299      );
  id2 -> SetBinError( xbin,    682.07372283394329      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    68887.319623603951      );
  id2 -> SetBinError( xbin,    653.99054754095232      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    71722.185428354758      );
  id2 -> SetBinError( xbin,    716.80119561403433      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    76756.738271068069      );
  id2 -> SetBinError( xbin,    727.87202621544429      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    84930.843856951382      );
  id2 -> SetBinError( xbin,    806.58026347253406      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    93017.393289531188      );
  id2 -> SetBinError( xbin,    770.81771967977818      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    106310.48772905231      );
  id2 -> SetBinError( xbin,    983.85075354103935      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    119074.90531836596      );
  id2 -> SetBinError( xbin,    949.25966603832649      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    136829.71023483458      );
  id2 -> SetBinError( xbin,    1033.8501231628672      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    159296.41680846995      );
  id2 -> SetBinError( xbin,    1314.6797766515283      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    179985.90212264482      );
  id2 -> SetBinError( xbin,    1230.5143403541226      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    204419.58576710010      );
  id2 -> SetBinError( xbin,    1401.4141215043962      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    230566.84985109672      );
  id2 -> SetBinError( xbin,    1720.4326845084900      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    263237.55991687189      );
  id2 -> SetBinError( xbin,    1882.5783247565248      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    292025.56915013649      );
  id2 -> SetBinError( xbin,    1742.2220346215777      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    326945.11920105451      );
  id2 -> SetBinError( xbin,    2109.1744675853606      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    363446.27151645836      );
  id2 -> SetBinError( xbin,    3234.9338677177743      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    397945.07643480290      );
  id2 -> SetBinError( xbin,    2380.1580181654003      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    433648.94444461400      );
  id2 -> SetBinError( xbin,    2660.3821808816251      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    472263.42301476467      );
  id2 -> SetBinError( xbin,    2864.7472976332542      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    512132.72625422059      );
  id2 -> SetBinError( xbin,    3553.4491428550173      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    559525.45499920438      );
  id2 -> SetBinError( xbin,    5297.8151814419143      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    594931.74782034417      );
  id2 -> SetBinError( xbin,    3986.3413694672340      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    639792.38348788733      );
  id2 -> SetBinError( xbin,    4952.3107174636716      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    689540.28208105522      );
  id2 -> SetBinError( xbin,    5819.4914855280531      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    727830.89534942945      );
  id2 -> SetBinError( xbin,    5665.8732428222274      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    762817.78079062223      );
  id2 -> SetBinError( xbin,    6134.1851819911417      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    807306.12577396503      );
  id2 -> SetBinError( xbin,    5651.5697909091459      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    851056.40125647560      );
  id2 -> SetBinError( xbin,    8355.5082947495866      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    913378.58438455837      );
  id2 -> SetBinError( xbin,    11983.989702099994      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    935531.72304166062      );
  id2 -> SetBinError( xbin,    8587.7325478201292      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    152032.24995121959      );
  id3 -> SetBinError( xbin,    1488.2785915333011      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    204367.22692074487      );
  id3 -> SetBinError( xbin,    1789.4747099447461      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    261538.80210134969      );
  id3 -> SetBinError( xbin,    2293.8275240528865      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    305104.43113134219      );
  id3 -> SetBinError( xbin,    2516.4790345671063      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    339290.99963736290      );
  id3 -> SetBinError( xbin,    2528.4520346318059      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    374277.93174992834      );
  id3 -> SetBinError( xbin,    2582.6710186621553      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    399597.99137289333      );
  id3 -> SetBinError( xbin,    2565.5714398266623      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    417080.21657101205      );
  id3 -> SetBinError( xbin,    2631.6641636632885      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    430508.57074206905      );
  id3 -> SetBinError( xbin,    2685.2396600574907      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    431679.85559111863      );
  id3 -> SetBinError( xbin,    2776.9432794056843      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    439841.26978709159      );
  id3 -> SetBinError( xbin,    2670.3665357728505      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    445120.18147744698      );
  id3 -> SetBinError( xbin,    2842.8343676200002      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    446963.30611108593      );
  id3 -> SetBinError( xbin,    2865.1366962140378      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    451389.44616753992      );
  id3 -> SetBinError( xbin,    2717.9352146914143      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    447968.86196325533      );
  id3 -> SetBinError( xbin,    2653.8199465822618      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    456681.70691587165      );
  id3 -> SetBinError( xbin,    2683.1680976889452      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    464592.57365760190      );
  id3 -> SetBinError( xbin,    2722.3936447055758      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    472102.37528031319      );
  id3 -> SetBinError( xbin,    2720.4035660594373      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    476359.84963549045      );
  id3 -> SetBinError( xbin,    2831.7031249131678      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    490427.18425321032      );
  id3 -> SetBinError( xbin,    2836.9971546229795      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    493485.94284991920      );
  id3 -> SetBinError( xbin,    2842.7344971632647      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    499051.53251608269      );
  id3 -> SetBinError( xbin,    3012.2280714756953      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    501095.68588066031      );
  id3 -> SetBinError( xbin,    3869.0613632834193      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    497893.37791193597      );
  id3 -> SetBinError( xbin,    2822.9967450865320      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    486901.82572529197      );
  id3 -> SetBinError( xbin,    2808.9544737190008      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    453894.11078025197      );
  id3 -> SetBinError( xbin,    2721.1736145860687      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    419590.54234062205      );
  id3 -> SetBinError( xbin,    2601.8098487155125      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    365355.61728328647      );
  id3 -> SetBinError( xbin,    2407.3979053655380      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    297164.20392091962      );
  id3 -> SetBinError( xbin,    2221.0781051858021      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    227245.81866471522      );
  id3 -> SetBinError( xbin,    1916.7039578367082      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    46840.286751635256      );
  id4 -> SetBinError( xbin,    1619.7230990987498      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    145214.93436269063      );
  id4 -> SetBinError( xbin,    2219.4332049748623      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    174014.07871519285      );
  id4 -> SetBinError( xbin,    2480.6994662161896      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    200023.64605794312      );
  id4 -> SetBinError( xbin,    2897.2861104704216      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    231978.21634256697      );
  id4 -> SetBinError( xbin,    4184.6556157200312      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    250334.63575124927      );
  id4 -> SetBinError( xbin,    4330.0456352623487      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    282969.85625306849      );
  id4 -> SetBinError( xbin,    6371.3618472282515      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    307592.09531345137      );
  id4 -> SetBinError( xbin,    6351.5482129203174      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    318328.07612647407      );
  id4 -> SetBinError( xbin,    4280.3647537645047      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    337393.19306174456      );
  id4 -> SetBinError( xbin,    4422.9867256197967      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    357966.34454209870      );
  id4 -> SetBinError( xbin,    3985.3327369223630      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    368428.99232701061      );
  id4 -> SetBinError( xbin,    4016.6766233478616      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    384625.22722983779      );
  id4 -> SetBinError( xbin,    4053.3432167849464      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    398772.81957385031      );
  id4 -> SetBinError( xbin,    4313.6053433961242      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    408954.81103642873      );
  id4 -> SetBinError( xbin,    4404.0747550178157      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    414846.97019159741      );
  id4 -> SetBinError( xbin,    4178.0792118002410      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    428561.63735657989      );
  id4 -> SetBinError( xbin,    4245.6703742148593      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    425257.48847098398      );
  id4 -> SetBinError( xbin,    4283.5651341588209      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    430421.38628175942      );
  id4 -> SetBinError( xbin,    4445.5139818489715      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    435355.05063826760      );
  id4 -> SetBinError( xbin,    4389.2652703728008      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    439695.37370065856      );
  id4 -> SetBinError( xbin,    4436.9221605390103      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    438174.41033099929      );
  id4 -> SetBinError( xbin,    4369.0377960474470      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    440239.40364469058      );
  id4 -> SetBinError( xbin,    4269.0885350718390      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    447046.33833343140      );
  id4 -> SetBinError( xbin,    4438.6862357496611      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    446685.47244221298      );
  id4 -> SetBinError( xbin,    4549.9904939894677      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    443397.24144656397      );
  id4 -> SetBinError( xbin,    4239.0942308934364      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    445468.13852181326      );
  id4 -> SetBinError( xbin,    4268.0578403591180      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    458137.83096077177      );
  id4 -> SetBinError( xbin,    4404.2923678261041      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    446412.83724699816      );
  id4 -> SetBinError( xbin,    4312.6815055733223      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    455540.05662884883      );
  id4 -> SetBinError( xbin,    4367.1228394635564      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    448492.84817929438      );
  id4 -> SetBinError( xbin,    4258.0994252464261      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    455937.40909550333      );
  id4 -> SetBinError( xbin,    4164.0390513730435      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    455394.03019062825      );
  id4 -> SetBinError( xbin,    4292.5416566226313      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    467106.20010173769      );
  id4 -> SetBinError( xbin,    4335.0627022106273      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    467642.88287203014      );
  id4 -> SetBinError( xbin,    4312.0289978829405      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    470918.55079814774      );
  id4 -> SetBinError( xbin,    4502.0070409962555      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    471311.58159280615      );
  id4 -> SetBinError( xbin,    4488.0165940763327      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    476117.20938575390      );
  id4 -> SetBinError( xbin,    4308.2473352550924      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    483562.22630603315      );
  id4 -> SetBinError( xbin,    4502.5461362120977      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    485071.47987605655      );
  id4 -> SetBinError( xbin,    4450.1553870522175      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    490288.73255163897      );
  id4 -> SetBinError( xbin,    4419.7108114886014      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    491597.63721346617      );
  id4 -> SetBinError( xbin,    4520.1078138490748      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    501837.16593428387      );
  id4 -> SetBinError( xbin,    4503.6839692316626      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    500136.87209475646      );
  id4 -> SetBinError( xbin,    4679.6386787111605      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    504713.91911173891      );
  id4 -> SetBinError( xbin,    6771.8675268778343      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    496541.25029082992      );
  id4 -> SetBinError( xbin,    4785.9962810708448      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    504507.77561534685      );
  id4 -> SetBinError( xbin,    4750.2590566843610      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    507300.40264383325      );
  id4 -> SetBinError( xbin,    4714.7697827045340      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    480160.60604363133      );
  id4 -> SetBinError( xbin,    4864.5958208642351      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    495888.60016143229      );
  id4 -> SetBinError( xbin,    4781.1371875999839      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    467606.65148827853      );
  id4 -> SetBinError( xbin,    4743.5362865654561      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    461170.52298139903      );
  id4 -> SetBinError( xbin,    4572.0907329347574      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    447119.73096968711      );
  id4 -> SetBinError( xbin,    4476.8063048382446      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    416699.51522276795      );
  id4 -> SetBinError( xbin,    4382.8837280007328      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    400801.09065216879      );
  id4 -> SetBinError( xbin,    4454.7658958027205      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    369770.88357462728      );
  id4 -> SetBinError( xbin,    4195.9331528890561      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    333507.38886045211      );
  id4 -> SetBinError( xbin,    3731.2564451650396      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    305722.69663774472      );
  id4 -> SetBinError( xbin,    3615.4836074290151      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    267731.11526287330      );
  id4 -> SetBinError( xbin,    3235.0962780675463      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    231362.15502876989      );
  id4 -> SetBinError( xbin,    2931.1211759545727      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    132511.39740418483      );
  id4 -> SetBinError( xbin,    2358.2879332764196      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    43721.206979132519      );
  id5 -> SetBinError( xbin,    563.12636059586828      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    91672.772716508625      );
  id5 -> SetBinError( xbin,    685.80416987934871      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    104546.85644110473      );
  id5 -> SetBinError( xbin,    737.58883412895625      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    111662.41399592983      );
  id5 -> SetBinError( xbin,    772.79755009603173      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    123671.03370558206      );
  id5 -> SetBinError( xbin,    801.62977030206696      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    137285.82652788065      );
  id5 -> SetBinError( xbin,    1208.6148446762727      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    157626.90549675209      );
  id5 -> SetBinError( xbin,    1306.4126802343585      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    153975.01237516725      );
  id5 -> SetBinError( xbin,    1156.3126387571156      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    117330.31882830619      );
  id5 -> SetBinError( xbin,    879.76038437089983      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    56843.000008962001      );
  id5 -> SetBinError( xbin,    292.70037486686590      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    30273.600522881810      );
  id5 -> SetBinError( xbin,    191.81406770282123      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    19243.949538170284      );
  id5 -> SetBinError( xbin,    138.11438205258222      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    13002.259416030482      );
  id5 -> SetBinError( xbin,    97.776402180867052      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9700.8483449048726      );
  id5 -> SetBinError( xbin,    74.813326684592042      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7399.7653116276333      );
  id5 -> SetBinError( xbin,    57.449408821850618      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5743.0352520864290      );
  id5 -> SetBinError( xbin,    49.642677245518577      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4538.9902670744768      );
  id5 -> SetBinError( xbin,    50.729033316911767      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3733.2131253475450      );
  id5 -> SetBinError( xbin,    43.969521307578340      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3064.2545555366237      );
  id5 -> SetBinError( xbin,    32.444588673537943      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2598.8311403715079      );
  id5 -> SetBinError( xbin,    31.254721376046799      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2141.0332535380076      );
  id5 -> SetBinError( xbin,    27.323303922888801      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1758.6627460380396      );
  id5 -> SetBinError( xbin,    26.569959950519181      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1493.5323616970702      );
  id5 -> SetBinError( xbin,    24.313174480733210      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1363.3698158186571      );
  id5 -> SetBinError( xbin,    19.974601546934462      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1119.2003603629853      );
  id5 -> SetBinError( xbin,    18.470244027555935      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    980.14433164642583      );
  id5 -> SetBinError( xbin,    18.139936232931444      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    931.25304716314395      );
  id5 -> SetBinError( xbin,    42.958568208493475      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    688.45618829584794      );
  id5 -> SetBinError( xbin,    42.742353138793000      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    680.52149865556123      );
  id5 -> SetBinError( xbin,    15.607991987808536      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    560.43498529431542      );
  id5 -> SetBinError( xbin,    15.978100261612070      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    514.19784492831616      );
  id5 -> SetBinError( xbin,    17.060233461417777      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    459.19646945569241      );
  id5 -> SetBinError( xbin,    14.589850153435247      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    403.12890961668580      );
  id5 -> SetBinError( xbin,    12.113013769779439      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    342.47545336324822      );
  id5 -> SetBinError( xbin,    10.627281035875663      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    313.63166483005830      );
  id5 -> SetBinError( xbin,    9.9458484783500776      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    302.90979524483328      );
  id5 -> SetBinError( xbin,    10.913338173618133      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    266.04918848200276      );
  id5 -> SetBinError( xbin,    9.7335288048735578      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    250.81191462686971      );
  id5 -> SetBinError( xbin,    9.0323249238959313      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2823.5915026356834      );
  id6 -> SetBinError( xbin,    53.526833228323881      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    9327.6578971403451      );
  id6 -> SetBinError( xbin,    101.04930655629670      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    18722.510652948065      );
  id6 -> SetBinError( xbin,    146.68669722328167      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    33008.364751899644      );
  id6 -> SetBinError( xbin,    195.78918973069744      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    53799.656185154978      );
  id6 -> SetBinError( xbin,    241.48393098458195      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    83698.353678452142      );
  id6 -> SetBinError( xbin,    284.57617202776754      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    128858.59505600978      );
  id6 -> SetBinError( xbin,    345.20852580967852      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    181049.05765523046      );
  id6 -> SetBinError( xbin,    415.89618104203737      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    70412.298882337331      );
  id6 -> SetBinError( xbin,    293.55420898212742      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    24090.377937722838      );
  id6 -> SetBinError( xbin,    193.36625808892575      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    9103.2673765802228      );
  id6 -> SetBinError( xbin,    127.84062441599941      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    3530.4427398673456      );
  id6 -> SetBinError( xbin,    83.799809145333782      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11262.067600806213      );
  id7 -> SetBinError( xbin,    140.85984564779685      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    14993.941274499626      );
  id7 -> SetBinError( xbin,    165.17274743679528      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    18906.365572335519      );
  id7 -> SetBinError( xbin,    188.96392711940916      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23152.063217704977      );
  id7 -> SetBinError( xbin,    211.01713314283751      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28112.676907429632      );
  id7 -> SetBinError( xbin,    235.71016846563074      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    32108.797026062141      );
  id7 -> SetBinError( xbin,    255.57538333548899      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    36573.662541002981      );
  id7 -> SetBinError( xbin,    275.18880287039570      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    40571.062600938123      );
  id7 -> SetBinError( xbin,    295.91497933604830      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    44699.625902421474      );
  id7 -> SetBinError( xbin,    313.80342495493670      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    48601.300079799992      );
  id7 -> SetBinError( xbin,    332.31426379592932      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    51237.105329911821      );
  id7 -> SetBinError( xbin,    343.59720233693463      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    54571.966998973483      );
  id7 -> SetBinError( xbin,    359.31393295207545      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    56496.496635598822      );
  id7 -> SetBinError( xbin,    364.73753426580402      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    58366.374735419406      );
  id7 -> SetBinError( xbin,    372.52752592641582      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59297.243421792358      );
  id7 -> SetBinError( xbin,    374.90421410056899      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    59955.276064625898      );
  id7 -> SetBinError( xbin,    375.15732915573625      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    59996.300635703810      );
  id7 -> SetBinError( xbin,    373.23943230531745      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    59176.661767296879      );
  id7 -> SetBinError( xbin,    365.67728724732814      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    58162.140231255536      );
  id7 -> SetBinError( xbin,    361.33605940645850      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    57287.041289609333      );
  id7 -> SetBinError( xbin,    355.35327674924008      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    54052.906198864250      );
  id7 -> SetBinError( xbin,    336.96345356078882      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    52129.968794219232      );
  id7 -> SetBinError( xbin,    328.96572939678327      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    48761.628923807883      );
  id7 -> SetBinError( xbin,    309.18987733830346      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    44153.543650807915      );
  id7 -> SetBinError( xbin,    288.09142986338111      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    39795.785198800892      );
  id7 -> SetBinError( xbin,    270.27744680681752      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    34895.541582877508      );
  id7 -> SetBinError( xbin,    248.91488904278444      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    30845.451218948561      );
  id7 -> SetBinError( xbin,    229.66380981142123      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    25393.541629068510      );
  id7 -> SetBinError( xbin,    207.50851832433884      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    20530.796800608023      );
  id7 -> SetBinError( xbin,    184.75892252741747      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    16387.467115836389      );
  id7 -> SetBinError( xbin,    168.52343676248228      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    6927.7314515824755      );
  id8 -> SetBinError( xbin,    43.568997116931115      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    12307.125725414360      );
  id8 -> SetBinError( xbin,    56.969069592099245      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    10795.971682389545      );
  id8 -> SetBinError( xbin,    52.671427011573172      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    9441.1933949639551      );
  id8 -> SetBinError( xbin,    48.212176938125197      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    8294.8025986766916      );
  id8 -> SetBinError( xbin,    44.538318253691223      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    7237.9087682701038      );
  id8 -> SetBinError( xbin,    41.218750336592130      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    6441.4977139907478      );
  id8 -> SetBinError( xbin,    38.126508731123451      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5737.4149869325302      );
  id8 -> SetBinError( xbin,    35.417986405197531      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    5022.0263250213584      );
  id8 -> SetBinError( xbin,    32.557609467580690      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4442.1564369459948      );
  id8 -> SetBinError( xbin,    30.389509817882555      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    4010.5763188314031      );
  id8 -> SetBinError( xbin,    28.192053369149463      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3542.9737258948098      );
  id8 -> SetBinError( xbin,    26.210044813505270      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3258.7879941966671      );
  id8 -> SetBinError( xbin,    25.081161934221313      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2873.6497161012048      );
  id8 -> SetBinError( xbin,    22.914622522564972      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2610.8776129217413      );
  id8 -> SetBinError( xbin,    21.730998302658108      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2409.1480554637596      );
  id8 -> SetBinError( xbin,    20.615264836265560      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2145.9687925236512      );
  id8 -> SetBinError( xbin,    19.386172561491467      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    2015.5038813690862      );
  id8 -> SetBinError( xbin,    18.799975328129982      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1815.1999169211970      );
  id8 -> SetBinError( xbin,    17.699625620711274      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1665.4572910378965      );
  id8 -> SetBinError( xbin,    16.805562797688804      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1518.1362713159631      );
  id8 -> SetBinError( xbin,    15.813920937526229      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1372.3582756367932      );
  id8 -> SetBinError( xbin,    14.761039812795582      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1268.9845554707044      );
  id8 -> SetBinError( xbin,    14.122619342195597      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1178.5136854962384      );
  id8 -> SetBinError( xbin,    13.465855868238123      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1064.5260930880995      );
  id8 -> SetBinError( xbin,    12.797193372689756      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    996.04280125603827      );
  id8 -> SetBinError( xbin,    12.315166148221325      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    922.98987113937369      );
  id8 -> SetBinError( xbin,    11.827766101393248      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    830.13698911911331      );
  id8 -> SetBinError( xbin,    11.036503317675823      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
