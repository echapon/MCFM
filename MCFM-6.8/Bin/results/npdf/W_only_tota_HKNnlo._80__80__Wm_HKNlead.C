// Cross-section is:      1766497.0275939801 +/-          773.6948935362)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -47867.32996   -2.71%
//        GQB    |      -42860.99644   -2.43%
//        QG     |      -46939.15403   -2.66%
//        QBG    |      -42155.24665   -2.39%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      894119.47577   50.62%
//        QBQ    |     1060164.75967   60.02%

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
//Wm_HKNlead                      [runstring]  
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
//                  18            [LHAPDF set 2]  

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
  mcfmhisto = new TFile("W_only_tota_HKNnlo._80__80__Wm_HKNlead.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -6.2212278082532059E-003 );
  id1 -> SetBinError( xbin,    7.3279279234910524E-003 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    13.683943457773402      );
  id1 -> SetBinError( xbin,    2.8227109704339952      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    367.34296084825138      );
  id1 -> SetBinError( xbin,    52.527002073960496      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2619.6352807389699      );
  id1 -> SetBinError( xbin,    179.21626360358133      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    10281.393753936041      );
  id1 -> SetBinError( xbin,    450.09106600953800      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    30345.331188856533      );
  id1 -> SetBinError( xbin,    692.03962168666590      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    68989.417307382479      );
  id1 -> SetBinError( xbin,    1061.3173588093916      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    128747.64743993686      );
  id1 -> SetBinError( xbin,    1243.9670957068247      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    202736.74291521858      );
  id1 -> SetBinError( xbin,    1471.8595165463878      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    283598.89534671261      );
  id1 -> SetBinError( xbin,    1681.2393412212659      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    350373.89220045501      );
  id1 -> SetBinError( xbin,    1823.9849331576147      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    394359.70167506591      );
  id1 -> SetBinError( xbin,    1892.3614760467367      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    403931.77915007737      );
  id1 -> SetBinError( xbin,    1946.1955861758577      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    406062.46482091583      );
  id1 -> SetBinError( xbin,    1905.1729153682909      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    402158.57974366983      );
  id1 -> SetBinError( xbin,    1848.6781463782240      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    397196.94936648523      );
  id1 -> SetBinError( xbin,    1830.2437739134673      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    392478.95806821261      );
  id1 -> SetBinError( xbin,    1819.1865129678079      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    384108.61860903801      );
  id1 -> SetBinError( xbin,    1783.7374212722477      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    373218.11916667083      );
  id1 -> SetBinError( xbin,    1759.3672003640258      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    368526.27282974723      );
  id1 -> SetBinError( xbin,    1825.9754941458914      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    362638.08348514978      );
  id1 -> SetBinError( xbin,    1779.7893219308487      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    356679.29193899978      );
  id1 -> SetBinError( xbin,    1704.5902256712998      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    349335.61333841149      );
  id1 -> SetBinError( xbin,    1680.9699166342743      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    345512.50674002233      );
  id1 -> SetBinError( xbin,    1676.3279492984075      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    337947.80471569533      );
  id1 -> SetBinError( xbin,    1821.5398701751194      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    330559.64928753139      );
  id1 -> SetBinError( xbin,    1724.9279141453560      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    319067.58405161259      );
  id1 -> SetBinError( xbin,    1725.3364092713548      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    318439.05667765951      );
  id1 -> SetBinError( xbin,    1659.5014972450729      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    301467.09529229807      );
  id1 -> SetBinError( xbin,    1629.2108148335044      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    288355.88610594621      );
  id1 -> SetBinError( xbin,    1609.2500404049254      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    268211.41566307301      );
  id1 -> SetBinError( xbin,    1585.2783790899778      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    226253.51934798411      );
  id1 -> SetBinError( xbin,    1482.8951013855853      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    174868.14802794016      );
  id1 -> SetBinError( xbin,    1335.2874037380564      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    121492.49591466093      );
  id1 -> SetBinError( xbin,    1326.0670746333153      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    73107.216470371990      );
  id1 -> SetBinError( xbin,    1027.0197277463012      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    38167.493480471559      );
  id1 -> SetBinError( xbin,    752.60140245686250      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    14555.703019503697      );
  id1 -> SetBinError( xbin,    513.99830075968862      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    4406.5697102640197      );
  id1 -> SetBinError( xbin,    219.50692297843642      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    872.28941901053679      );
  id1 -> SetBinError( xbin,    67.190062289640807      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    95.839662327691769      );
  id1 -> SetBinError( xbin,    10.480011797578484      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    3.3101195227442157      );
  id1 -> SetBinError( xbin,   0.66353537919214189      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.1360303077717874E-004 );
  id1 -> SetBinError( xbin,    1.1719977569744290E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    749960.45873741794      );
  id2 -> SetBinError( xbin,    6945.5722735058562      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    731273.11608753190      );
  id2 -> SetBinError( xbin,    6999.7485723468544      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    691496.93720036093      );
  id2 -> SetBinError( xbin,    7665.0786422843494      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    664243.27545095806      );
  id2 -> SetBinError( xbin,    7082.3391047602881      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    627051.35427527770      );
  id2 -> SetBinError( xbin,    6123.1689439954935      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    593190.85853287613      );
  id2 -> SetBinError( xbin,    4667.7791621968454      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    561371.91312195186      );
  id2 -> SetBinError( xbin,    3888.1715530421093      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    540609.79984116682      );
  id2 -> SetBinError( xbin,    5922.7946315311628      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    498956.90247164969      );
  id2 -> SetBinError( xbin,    3292.9247717081525      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    470351.86039959651      );
  id2 -> SetBinError( xbin,    3159.9985840558379      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    434431.89628812001      );
  id2 -> SetBinError( xbin,    2624.6486358526613      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    407650.93514912250      );
  id2 -> SetBinError( xbin,    2471.2073290034577      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    374896.26600380888      );
  id2 -> SetBinError( xbin,    2228.9426148722100      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    346001.69887319067      );
  id2 -> SetBinError( xbin,    2074.1291321928256      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    316752.08186643216      );
  id2 -> SetBinError( xbin,    1983.2775305653054      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    289935.65462566342      );
  id2 -> SetBinError( xbin,    1991.3854268056600      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    264773.79999210662      );
  id2 -> SetBinError( xbin,    2419.3873052508220      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    234040.22490853333      );
  id2 -> SetBinError( xbin,    1436.2432621882554      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    212754.95601519334      );
  id2 -> SetBinError( xbin,    1459.0199120158834      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    186291.52238729841      );
  id2 -> SetBinError( xbin,    1172.7745327421062      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    164250.86633362109      );
  id2 -> SetBinError( xbin,    1179.1497345405287      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    142756.97449126589      );
  id2 -> SetBinError( xbin,    939.53456103876590      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    126336.55062869245      );
  id2 -> SetBinError( xbin,    1190.0425791667124      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    110814.47458820161      );
  id2 -> SetBinError( xbin,    779.84734268866725      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    96658.365226840149      );
  id2 -> SetBinError( xbin,    913.80800110506379      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    84161.086313262116      );
  id2 -> SetBinError( xbin,    733.81495980275554      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    76883.352974812355      );
  id2 -> SetBinError( xbin,    640.43259761174761      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    70858.865090132109      );
  id2 -> SetBinError( xbin,    832.42606132180060      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    64893.366146894128      );
  id2 -> SetBinError( xbin,    637.63469862791965      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    62391.667830665567      );
  id2 -> SetBinError( xbin,    575.80464334405224      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    61412.412476374127      );
  id2 -> SetBinError( xbin,    537.51761421613833      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    63912.217303715035      );
  id2 -> SetBinError( xbin,    571.39819650800541      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    66238.686095640907      );
  id2 -> SetBinError( xbin,    543.60983435984747      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    73680.176025891211      );
  id2 -> SetBinError( xbin,    771.25950868460529      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    81310.779412469885      );
  id2 -> SetBinError( xbin,    717.14070205486303      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    92141.951800322160      );
  id2 -> SetBinError( xbin,    769.65375805418068      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    101948.63500700828      );
  id2 -> SetBinError( xbin,    766.28173190149766      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    116648.58594304626      );
  id2 -> SetBinError( xbin,    835.89581409388177      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    131490.37526845877      );
  id2 -> SetBinError( xbin,    1715.0537871108679      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    150479.94290240644      );
  id2 -> SetBinError( xbin,    2365.3593632852517      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    165072.30471910833      );
  id2 -> SetBinError( xbin,    1179.5882283416115      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    186085.31295488856      );
  id2 -> SetBinError( xbin,    1611.1741488189523      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    208339.40348506748      );
  id2 -> SetBinError( xbin,    1666.2335681163240      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    228551.31190942321      );
  id2 -> SetBinError( xbin,    2727.0687814562957      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    251603.47261822247      );
  id2 -> SetBinError( xbin,    1629.9555055773330      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    275867.64564100810      );
  id2 -> SetBinError( xbin,    2026.1725543309478      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    294603.12052868452      );
  id2 -> SetBinError( xbin,    1874.7650572704968      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    323051.05394060799      );
  id2 -> SetBinError( xbin,    2457.8759642150098      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    348936.20975928282      );
  id2 -> SetBinError( xbin,    2946.5896478698064      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    368545.24591138895      );
  id2 -> SetBinError( xbin,    2596.7611298043457      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    392766.68319891160      );
  id2 -> SetBinError( xbin,    3004.6902095862815      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    422512.00821914664      );
  id2 -> SetBinError( xbin,    4072.0738669435191      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    443446.51939143799      );
  id2 -> SetBinError( xbin,    3578.8670828507179      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    471861.13976630720      );
  id2 -> SetBinError( xbin,    4435.9864862953400      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    490097.76204770192      );
  id2 -> SetBinError( xbin,    4546.3657310578301      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    522291.78064492618      );
  id2 -> SetBinError( xbin,    6039.2290521876794      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    535997.32245051686      );
  id2 -> SetBinError( xbin,    4465.2748670132305      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    566214.05728434876      );
  id2 -> SetBinError( xbin,    5426.3855739671199      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    580716.68829670094      );
  id2 -> SetBinError( xbin,    5500.1820575129414      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    612695.73623901093      );
  id2 -> SetBinError( xbin,    6592.7313121974239      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    271969.32516336069      );
  id3 -> SetBinError( xbin,    2288.2326002823897      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    302216.31963586260      );
  id3 -> SetBinError( xbin,    2270.7912724230659      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    316637.20012145751      );
  id3 -> SetBinError( xbin,    2156.9459946205438      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    332099.91834238789      );
  id3 -> SetBinError( xbin,    2042.6795852706393      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    341193.23441950482      );
  id3 -> SetBinError( xbin,    1973.5911992580982      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    344758.60434885276      );
  id3 -> SetBinError( xbin,    1870.0269382174167      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    346861.25193515565      );
  id3 -> SetBinError( xbin,    1850.7659585221711      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    349979.32763096527      );
  id3 -> SetBinError( xbin,    1922.1121467966402      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    342423.57577842614      );
  id3 -> SetBinError( xbin,    2049.1947083428854      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    347534.39822208887      );
  id3 -> SetBinError( xbin,    1927.0172752289670      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    341651.84793559392      );
  id3 -> SetBinError( xbin,    1666.0173557095188      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    335026.05193832947      );
  id3 -> SetBinError( xbin,    1723.3641561438869      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    334722.27738481387      );
  id3 -> SetBinError( xbin,    1734.8855506342848      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    327895.43060381571      );
  id3 -> SetBinError( xbin,    1709.3636200982896      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    324727.48157784296      );
  id3 -> SetBinError( xbin,    1717.4064735995794      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    316171.79058448016      );
  id3 -> SetBinError( xbin,    1673.8678039280908      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    312524.38148200634      );
  id3 -> SetBinError( xbin,    1814.4379186217350      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    307909.34976046084      );
  id3 -> SetBinError( xbin,    1636.5175689499372      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    301558.67521992582      );
  id3 -> SetBinError( xbin,    1649.1766626331857      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    291030.39526529727      );
  id3 -> SetBinError( xbin,    1697.1156330347367      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    287430.05652850308      );
  id3 -> SetBinError( xbin,    1652.2992495786586      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    276733.84437649179      );
  id3 -> SetBinError( xbin,    1570.2962255134032      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    269336.64880780992      );
  id3 -> SetBinError( xbin,    1594.0685425143454      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    257492.17354304102      );
  id3 -> SetBinError( xbin,    1586.3637525800300      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    249610.97233250845      );
  id3 -> SetBinError( xbin,    1662.7927871151887      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    236730.00631657132      );
  id3 -> SetBinError( xbin,    1680.3340988741695      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    221213.22501355616      );
  id3 -> SetBinError( xbin,    1672.1656990892670      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    205347.35278644954      );
  id3 -> SetBinError( xbin,    1703.1659791959660      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    178409.44515960649      );
  id3 -> SetBinError( xbin,    1709.5804590309365      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    160957.42991309671      );
  id3 -> SetBinError( xbin,    1889.0747547303822      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    90140.012528065476      );
  id4 -> SetBinError( xbin,    2916.4995686014136      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    272784.64908826794      );
  id4 -> SetBinError( xbin,    3712.5607247157582      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    288620.12226409343      );
  id4 -> SetBinError( xbin,    3439.7991423343065      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    293268.68256391032      );
  id4 -> SetBinError( xbin,    4572.0449394341385      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    308788.86505783332      );
  id4 -> SetBinError( xbin,    4495.2272449870434      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    316839.08681322035      );
  id4 -> SetBinError( xbin,    3274.5874356024697      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    326069.87558108615      );
  id4 -> SetBinError( xbin,    3493.7556837693237      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    328858.26634270838      );
  id4 -> SetBinError( xbin,    3421.9445364019871      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    344307.36605512322      );
  id4 -> SetBinError( xbin,    3979.0755652387475      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    337772.26836885686      );
  id4 -> SetBinError( xbin,    3933.8714746507608      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    342376.53636884858      );
  id4 -> SetBinError( xbin,    3137.4587311021896      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    345423.70806739101      );
  id4 -> SetBinError( xbin,    3269.7466732147423      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    340854.42957826937      );
  id4 -> SetBinError( xbin,    3100.5646146963954      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    347998.81665602647      );
  id4 -> SetBinError( xbin,    2843.9567676224838      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    348447.81974449888      );
  id4 -> SetBinError( xbin,    2835.8760338312950      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    351612.66252757085      );
  id4 -> SetBinError( xbin,    3107.5118959203523      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    344875.23828311433      );
  id4 -> SetBinError( xbin,    3112.9722399555758      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    343423.06358254881      );
  id4 -> SetBinError( xbin,    2842.5252945539978      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    351984.05749394582      );
  id4 -> SetBinError( xbin,    2764.1877089968689      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    344215.00810092420      );
  id4 -> SetBinError( xbin,    2686.4303724241190      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    346205.74206094624      );
  id4 -> SetBinError( xbin,    2859.7068004871244      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    339009.64329776564      );
  id4 -> SetBinError( xbin,    2813.8117531094094      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    341769.81471928273      );
  id4 -> SetBinError( xbin,    2673.7599008275793      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    333977.98634820542      );
  id4 -> SetBinError( xbin,    2657.6068650530588      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    333642.94255605148      );
  id4 -> SetBinError( xbin,    2891.7673166421891      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    330267.41692965024      );
  id4 -> SetBinError( xbin,    6558.1989824090606      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    336415.56806207780      );
  id4 -> SetBinError( xbin,    6425.2152534731813      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    328650.38433518418      );
  id4 -> SetBinError( xbin,    2683.4269227005589      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    323684.53514282592      );
  id4 -> SetBinError( xbin,    2615.2148771999096      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    324724.07150080462      );
  id4 -> SetBinError( xbin,    2501.2844043914870      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    320377.57953701168      );
  id4 -> SetBinError( xbin,    2936.7763699628663      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    318569.76637290558      );
  id4 -> SetBinError( xbin,    2989.6942275391452      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    311403.92283337325      );
  id4 -> SetBinError( xbin,    2599.7326055195299      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    316623.00262652000      );
  id4 -> SetBinError( xbin,    2549.3694527259604      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    311431.60982788645      );
  id4 -> SetBinError( xbin,    2959.3627659579047      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    306885.66417716938      );
  id4 -> SetBinError( xbin,    3080.1629399920103      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    305626.11617035978      );
  id4 -> SetBinError( xbin,    3071.5373100644479      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    301903.56496924232      );
  id4 -> SetBinError( xbin,    2533.9487397656972      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    298863.82081453275      );
  id4 -> SetBinError( xbin,    2527.0059242118227      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    293523.55773476715      );
  id4 -> SetBinError( xbin,    2529.3110254810904      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    288198.45417164458      );
  id4 -> SetBinError( xbin,    2537.9394696281215      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    287111.83715268568      );
  id4 -> SetBinError( xbin,    2573.7350348671835      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    280634.16617902729      );
  id4 -> SetBinError( xbin,    2574.6654589443829      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    279969.09650297812      );
  id4 -> SetBinError( xbin,    2547.0878005477866      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    270552.50726469595      );
  id4 -> SetBinError( xbin,    2528.4156844043068      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    271406.07781115506      );
  id4 -> SetBinError( xbin,    3834.4821736180006      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    267693.54149863118      );
  id4 -> SetBinError( xbin,    3848.1136749441280      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    256217.11696439065      );
  id4 -> SetBinError( xbin,    2621.5070237590180      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    254972.36384864792      );
  id4 -> SetBinError( xbin,    2564.8074678739481      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    252580.18633294004      );
  id4 -> SetBinError( xbin,    2609.6546173140578      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    241569.20911418414      );
  id4 -> SetBinError( xbin,    2728.9269391149228      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    237681.57804694024      );
  id4 -> SetBinError( xbin,    2712.7426945732914      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    230697.78443650284      );
  id4 -> SetBinError( xbin,    2609.7089809008917      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    222924.85770348567      );
  id4 -> SetBinError( xbin,    2839.1977216903551      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    216821.99180431259      );
  id4 -> SetBinError( xbin,    2898.9064018715403      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    203916.95968598139      );
  id4 -> SetBinError( xbin,    2786.3064927455666      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    197474.65592250397      );
  id4 -> SetBinError( xbin,    2761.1080167664090      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    176329.06828861331      );
  id4 -> SetBinError( xbin,    2868.4806618014122      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    173298.06551809012      );
  id4 -> SetBinError( xbin,    2995.9138918496478      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    161777.09898145622      );
  id4 -> SetBinError( xbin,    2971.9519498233722      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    100260.12194484183      );
  id4 -> SetBinError( xbin,    2798.8858091774259      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    26138.376910199775      );
  id5 -> SetBinError( xbin,    292.37445362899109      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    57553.866406303066      );
  id5 -> SetBinError( xbin,    391.78869312106764      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    65556.203036386069      );
  id5 -> SetBinError( xbin,    465.90663368285300      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    74459.854201825889      );
  id5 -> SetBinError( xbin,    503.69775242529192      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    83247.753415844854      );
  id5 -> SetBinError( xbin,    782.87209842452148      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    99502.778602113714      );
  id5 -> SetBinError( xbin,    820.02459509027449      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    115871.16269989284      );
  id5 -> SetBinError( xbin,    760.23603012824231      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    115994.23693351579      );
  id5 -> SetBinError( xbin,    891.70631195811347      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    92042.346196734492      );
  id5 -> SetBinError( xbin,    640.45769249423483      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    46290.775859773326      );
  id5 -> SetBinError( xbin,    220.24346466297396      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    25029.996878898295      );
  id5 -> SetBinError( xbin,    142.25312629548611      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    16314.166813292695      );
  id5 -> SetBinError( xbin,    95.921521144179309      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    11390.188717298453      );
  id5 -> SetBinError( xbin,    70.186025506712895      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    8709.4965171084023      );
  id5 -> SetBinError( xbin,    57.776252787550966      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    6678.2617174663656      );
  id5 -> SetBinError( xbin,    51.612366686113788      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5380.9783073227081      );
  id5 -> SetBinError( xbin,    45.568800012296172      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4322.3131190047998      );
  id5 -> SetBinError( xbin,    38.014877656926195      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3534.2655733614520      );
  id5 -> SetBinError( xbin,    93.924188826145169      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3133.9709205593408      );
  id5 -> SetBinError( xbin,    94.117767968595231      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2629.1659998269256      );
  id5 -> SetBinError( xbin,    31.841871814024906      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2194.5622841325071      );
  id5 -> SetBinError( xbin,    27.478761798309240      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1840.7961447989212      );
  id5 -> SetBinError( xbin,    24.753040743885180      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1629.7058001704033      );
  id5 -> SetBinError( xbin,    22.685599583699720      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1410.3684576053179      );
  id5 -> SetBinError( xbin,    22.189648556455534      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1251.8939479883638      );
  id5 -> SetBinError( xbin,    19.580798231869434      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1078.8772668756435      );
  id5 -> SetBinError( xbin,    17.115307141001171      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    991.68561085434055      );
  id5 -> SetBinError( xbin,    21.783859822396369      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    823.35375607624212      );
  id5 -> SetBinError( xbin,    20.659809748915777      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    743.73879295063261      );
  id5 -> SetBinError( xbin,    13.873886925851565      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    663.46246753568130      );
  id5 -> SetBinError( xbin,    13.848279383140429      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    587.79252965822297      );
  id5 -> SetBinError( xbin,    13.313312189269238      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    554.02368749506718      );
  id5 -> SetBinError( xbin,    12.998707688968208      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    497.58967895884126      );
  id5 -> SetBinError( xbin,    13.428689492035142      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    432.60339484133084      );
  id5 -> SetBinError( xbin,    11.953605089523613      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    378.62201986820469      );
  id5 -> SetBinError( xbin,    11.177662513365300      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    352.41683277531661      );
  id5 -> SetBinError( xbin,    11.149577643541861      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    325.58004038735612      );
  id5 -> SetBinError( xbin,    9.2997805371525821      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    287.23757068932463      );
  id5 -> SetBinError( xbin,    9.1809448075210796      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2088.6013316653871      );
  id6 -> SetBinError( xbin,    39.080779256251148      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    6630.8416809999653      );
  id6 -> SetBinError( xbin,    69.375476376825972      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13004.561080293603      );
  id6 -> SetBinError( xbin,    96.332696656056484      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    22279.950837636428      );
  id6 -> SetBinError( xbin,    122.00925857283890      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    36335.913414306575      );
  id6 -> SetBinError( xbin,    149.29778833674800      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    58698.206669041771      );
  id6 -> SetBinError( xbin,    181.77534977878784      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    102030.13792092536      );
  id6 -> SetBinError( xbin,    243.97485388860218      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    166005.15979104140      );
  id6 -> SetBinError( xbin,    340.03986635664506      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    73357.792780614735      );
  id6 -> SetBinError( xbin,    270.86830333440372      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    28254.554480852981      );
  id6 -> SetBinError( xbin,    201.06931656634680      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    11757.256278625031      );
  id6 -> SetBinError( xbin,    146.01419229535776      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4757.7002468163419      );
  id6 -> SetBinError( xbin,    103.36574653900158      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    10677.756560827063      );
  id7 -> SetBinError( xbin,    122.96319012167497      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    14553.285867736216      );
  id7 -> SetBinError( xbin,    142.15911664721301      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    18508.139806853655      );
  id7 -> SetBinError( xbin,    158.91298965691436      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23018.231376166645      );
  id7 -> SetBinError( xbin,    176.69195065034629      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28051.787212644565      );
  id7 -> SetBinError( xbin,    195.74094195836625      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    32765.468652414416      );
  id7 -> SetBinError( xbin,    212.52494405835193      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    37483.620441598097      );
  id7 -> SetBinError( xbin,    231.59714307662765      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    41903.965907941310      );
  id7 -> SetBinError( xbin,    247.90281817564761      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    45838.817920617425      );
  id7 -> SetBinError( xbin,    264.37045306888825      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    49612.368427692272      );
  id7 -> SetBinError( xbin,    278.94949142360610      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52083.867664632497      );
  id7 -> SetBinError( xbin,    288.57358309103694      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    53775.383749517998      );
  id7 -> SetBinError( xbin,    297.00488869707652      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    55612.763866773021      );
  id7 -> SetBinError( xbin,    304.56286032477630      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    55759.500145458827      );
  id7 -> SetBinError( xbin,    307.25304891219872      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    55283.387313056788      );
  id7 -> SetBinError( xbin,    305.36147983212834      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    54939.502987012245      );
  id7 -> SetBinError( xbin,    306.91142974659721      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    53069.217305899925      );
  id7 -> SetBinError( xbin,    300.64335508505695      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    51170.143341205818      );
  id7 -> SetBinError( xbin,    296.30119048476490      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    48209.595357590879      );
  id7 -> SetBinError( xbin,    295.91377333648717      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    44827.137181302118      );
  id7 -> SetBinError( xbin,    270.43612773616474      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    41133.642397207746      );
  id7 -> SetBinError( xbin,    259.40671827687225      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    37245.730287116166      );
  id7 -> SetBinError( xbin,    243.12887867766008      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    33077.295903239828      );
  id7 -> SetBinError( xbin,    227.37962264556202      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    28497.307076858568      );
  id7 -> SetBinError( xbin,    206.69733800600744      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    24043.834271010419      );
  id7 -> SetBinError( xbin,    188.02403847285103      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    19989.337281983826      );
  id7 -> SetBinError( xbin,    169.13948338638235      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    16012.936773204616      );
  id7 -> SetBinError( xbin,    151.54217486667466      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    12546.586013547263      );
  id7 -> SetBinError( xbin,    133.77653519295922      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9152.4929733841345      );
  id7 -> SetBinError( xbin,    113.42604524809794      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    6705.2739499415975      );
  id7 -> SetBinError( xbin,    97.665632199821928      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5545.8681518358044      );
  id8 -> SetBinError( xbin,    33.349804913412903      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    9964.1092245061209      );
  id8 -> SetBinError( xbin,    42.617892696435071      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    8756.8666644885943      );
  id8 -> SetBinError( xbin,    39.624098041349718      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    7680.1152132826046      );
  id8 -> SetBinError( xbin,    36.476978800565988      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    6749.7689661905133      );
  id8 -> SetBinError( xbin,    33.895934586045605      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6051.1612927504466      );
  id8 -> SetBinError( xbin,    31.829811916087738      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5357.6761423929320      );
  id8 -> SetBinError( xbin,    29.842376103373855      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    4722.6427941880575      );
  id8 -> SetBinError( xbin,    27.767090216648160      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4267.4277291392655      );
  id8 -> SetBinError( xbin,    26.115274050776868      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    3813.4716271676307      );
  id8 -> SetBinError( xbin,    24.530562304926477      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3451.9922512028093      );
  id8 -> SetBinError( xbin,    23.248654066381281      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3133.7216670255475      );
  id8 -> SetBinError( xbin,    22.074563578318479      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2839.5180520711324      );
  id8 -> SetBinError( xbin,    21.033571069812492      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2558.1230769293629      );
  id8 -> SetBinError( xbin,    19.773366551110541      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2327.6192673497376      );
  id8 -> SetBinError( xbin,    18.414920953810750      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2133.1887118509071      );
  id8 -> SetBinError( xbin,    17.389061312317715      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1929.3249920662522      );
  id8 -> SetBinError( xbin,    16.437117917405967      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1771.7399617552564      );
  id8 -> SetBinError( xbin,    15.725743319023968      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1601.7746008134945      );
  id8 -> SetBinError( xbin,    14.969500784995486      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1528.5518407459863      );
  id8 -> SetBinError( xbin,    14.645606729573938      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1385.1186493008117      );
  id8 -> SetBinError( xbin,    13.770041401962416      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1257.8239152047731      );
  id8 -> SetBinError( xbin,    12.979931341640338      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1176.6836856388868      );
  id8 -> SetBinError( xbin,    12.460523547386112      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1069.1918377639565      );
  id8 -> SetBinError( xbin,    11.777448295749869      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1004.8833872308422      );
  id8 -> SetBinError( xbin,    11.473249082042846      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    897.27174467327757      );
  id8 -> SetBinError( xbin,    10.480702573881047      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    855.29210899367217      );
  id8 -> SetBinError( xbin,    10.604271415062122      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    762.30227273131584      );
  id8 -> SetBinError( xbin,    9.7623253706973010      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
