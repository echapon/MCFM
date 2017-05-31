// Cross-section is:      2333431.5443990002 +/-          906.5428654647)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -49823.37072   -2.14%
//        GQB    |      -26203.82480   -1.12%
//        QG     |      -61354.16256   -2.63%
//        QBG    |      -27229.76687   -1.17%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1358513.31367   58.22%
//        QBQ    |     1142829.50896   48.98%

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
//Wp_eSTARn11_1_1                 [runstring]  
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
//eSTARn11_1_1.LHpdf              [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_eSTARn1_80__80__Wp_eSTARn11_1_1.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.48633320921452583      );
  id1 -> SetBinError( xbin,   0.38707415980033372      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    548.18325202246103      );
  id1 -> SetBinError( xbin,    77.626557885224869      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    5343.9870682073251      );
  id1 -> SetBinError( xbin,    354.57344727402227      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    26268.028688884686      );
  id1 -> SetBinError( xbin,    964.57740772083696      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    63003.784870623262      );
  id1 -> SetBinError( xbin,    1397.8814171011136      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    118026.03523879719      );
  id1 -> SetBinError( xbin,    1527.8961202454268      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    172818.47653707568      );
  id1 -> SetBinError( xbin,    1775.1663051393830      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    224463.89258827097      );
  id1 -> SetBinError( xbin,    1944.1988548574336      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    269192.18085618695      );
  id1 -> SetBinError( xbin,    2080.6528184910308      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    296742.56071407598      );
  id1 -> SetBinError( xbin,    2098.1173740303716      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    329182.46115345764      );
  id1 -> SetBinError( xbin,    2141.2004787782143      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    346312.63816596131      );
  id1 -> SetBinError( xbin,    2141.2666332762687      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    356577.90345854621      );
  id1 -> SetBinError( xbin,    2156.4993447887541      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    368021.36416769138      );
  id1 -> SetBinError( xbin,    2158.4812098648799      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    369896.70334742276      );
  id1 -> SetBinError( xbin,    2155.2407115847768      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    375190.89539434458      );
  id1 -> SetBinError( xbin,    2141.4309092663325      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    378374.13907437766      );
  id1 -> SetBinError( xbin,    2139.4092820688925      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    383490.08002226229      );
  id1 -> SetBinError( xbin,    2156.9742900595816      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    390217.90622597258      );
  id1 -> SetBinError( xbin,    2159.5349472950543      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    389402.41124592745      );
  id1 -> SetBinError( xbin,    2148.9928375953436      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    400161.45799060503      );
  id1 -> SetBinError( xbin,    2169.8053461675731      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    395141.95220332779      );
  id1 -> SetBinError( xbin,    2169.8095724443247      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    401427.70651015016      );
  id1 -> SetBinError( xbin,    2173.8689479422028      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    410302.60896715545      );
  id1 -> SetBinError( xbin,    2204.9858400568669      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    413650.53660650016      );
  id1 -> SetBinError( xbin,    2224.7823819293644      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    420828.97344702389      );
  id1 -> SetBinError( xbin,    2259.3736002987544      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    423261.82430049713      );
  id1 -> SetBinError( xbin,    2278.8106222874007      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    434217.23921544070      );
  id1 -> SetBinError( xbin,    2314.7086951554929      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    439835.33937832911      );
  id1 -> SetBinError( xbin,    2338.8983087308652      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    441355.30132860364      );
  id1 -> SetBinError( xbin,    2352.4453590115140      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    442039.30492700631      );
  id1 -> SetBinError( xbin,    2399.0714201609608      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    439187.82098588441      );
  id1 -> SetBinError( xbin,    2413.0274832554483      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    411885.15849300084      );
  id1 -> SetBinError( xbin,    2424.4150129257919      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    380609.71320181806      );
  id1 -> SetBinError( xbin,    2394.5021885990977      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    333238.80487700860      );
  id1 -> SetBinError( xbin,    2306.6784697471435      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    265913.02947308600      );
  id1 -> SetBinError( xbin,    2128.1431723541768      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    189764.57256716327      );
  id1 -> SetBinError( xbin,    1928.2213031155163      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    107428.38474432431      );
  id1 -> SetBinError( xbin,    1601.0542851711373      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    43248.061996234894      );
  id1 -> SetBinError( xbin,    1156.8073263476088      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    9521.1795274282467      );
  id1 -> SetBinError( xbin,    527.67923547967325      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    807.74598369440537      );
  id1 -> SetBinError( xbin,    98.591488298448652      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   0.88782229726704276      );
  id1 -> SetBinError( xbin,    1.1042081276906628      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    510428.94734353927      );
  id2 -> SetBinError( xbin,    5503.6471211964135      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    486650.98772432667      );
  id2 -> SetBinError( xbin,    4944.7755397008596      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    464931.71250696335      );
  id2 -> SetBinError( xbin,    4181.1483211467666      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    450264.61998462374      );
  id2 -> SetBinError( xbin,    4531.5796623947972      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    424037.11292915785      );
  id2 -> SetBinError( xbin,    4923.7483366029064      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    398265.59916997154      );
  id2 -> SetBinError( xbin,    3293.4570189556125      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    373118.79566584923      );
  id2 -> SetBinError( xbin,    2952.6298176604155      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    352594.89110177103      );
  id2 -> SetBinError( xbin,    2735.4778415353567      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    329324.31691889861      );
  id2 -> SetBinError( xbin,    2383.3713832455005      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    311074.78518952400      );
  id2 -> SetBinError( xbin,    2476.0644653936338      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    284266.91385517863      );
  id2 -> SetBinError( xbin,    1976.9097498949297      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    264808.31485560158      );
  id2 -> SetBinError( xbin,    2027.3332301715038      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    244881.91324818489      );
  id2 -> SetBinError( xbin,    1798.1086570874888      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    224766.11731838193      );
  id2 -> SetBinError( xbin,    1657.2511890554961      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    202816.88615337195      );
  id2 -> SetBinError( xbin,    1451.0260492901018      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    185984.78074587174      );
  id2 -> SetBinError( xbin,    1407.9946503195429      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    164918.87310197059      );
  id2 -> SetBinError( xbin,    1216.3047651095881      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    151752.65524328168      );
  id2 -> SetBinError( xbin,    1495.3381734258103      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    132090.75590827226      );
  id2 -> SetBinError( xbin,    941.94914819361782      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    119323.46939188091      );
  id2 -> SetBinError( xbin,    927.79469817035204      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    105097.23179813614      );
  id2 -> SetBinError( xbin,    1087.3759986400919      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    91829.414336445130      );
  id2 -> SetBinError( xbin,    746.74526459480069      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    81891.857126919727      );
  id2 -> SetBinError( xbin,    737.72745991434510      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    69981.601757515818      );
  id2 -> SetBinError( xbin,    605.68178039295412      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    63675.140898151862      );
  id2 -> SetBinError( xbin,    1053.3714520870728      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    55166.530087356194      );
  id2 -> SetBinError( xbin,    506.05351814983254      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    50063.862284515024      );
  id2 -> SetBinError( xbin,    519.31819361239161      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    45608.424097958123      );
  id2 -> SetBinError( xbin,    479.92203316327686      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    43056.858309657633      );
  id2 -> SetBinError( xbin,    425.93062590677323      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    42008.804562540558      );
  id2 -> SetBinError( xbin,    466.68598139811922      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    42697.243156847435      );
  id2 -> SetBinError( xbin,    690.42902998486716      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    43842.741412939518      );
  id2 -> SetBinError( xbin,    529.23833840302052      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    46262.415594490943      );
  id2 -> SetBinError( xbin,    471.11416989710489      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    50917.379953416850      );
  id2 -> SetBinError( xbin,    469.82862021306551      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    57042.664766439506      );
  id2 -> SetBinError( xbin,    661.04361649122984      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    66441.227793569880      );
  id2 -> SetBinError( xbin,    913.85413024990487      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    74968.470695347656      );
  id2 -> SetBinError( xbin,    1561.5415019888994      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    87040.154371843251      );
  id2 -> SetBinError( xbin,    993.46196246888587      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    97430.891208652101      );
  id2 -> SetBinError( xbin,    722.27962294277165      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    111768.70220156715      );
  id2 -> SetBinError( xbin,    823.29212874769235      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    128031.48605106790      );
  id2 -> SetBinError( xbin,    1105.0429923446179      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    144679.52865916866      );
  id2 -> SetBinError( xbin,    996.31116715482983      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    165353.77937856835      );
  id2 -> SetBinError( xbin,    1134.5926309050433      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    184021.52054904858      );
  id2 -> SetBinError( xbin,    1538.1711513443636      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    206172.24735816894      );
  id2 -> SetBinError( xbin,    1408.2523909230413      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    228516.21761880140      );
  id2 -> SetBinError( xbin,    3754.2392656630091      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    248008.78896634109      );
  id2 -> SetBinError( xbin,    1524.3255090483847      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    274754.30535992136      );
  id2 -> SetBinError( xbin,    2000.4978335571268      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    302970.35425356141      );
  id2 -> SetBinError( xbin,    1958.4364903872524      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    332667.39246290340      );
  id2 -> SetBinError( xbin,    3497.7542022177272      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    350357.21150348545      );
  id2 -> SetBinError( xbin,    2413.0277120847809      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    379070.66190273984      );
  id2 -> SetBinError( xbin,    2526.2999049054224      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    406430.67845562514      );
  id2 -> SetBinError( xbin,    2778.2476205977132      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    426993.72182124521      );
  id2 -> SetBinError( xbin,    2856.9410603292918      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    458851.10666981677      );
  id2 -> SetBinError( xbin,    3500.6358413880298      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    487698.54342364793      );
  id2 -> SetBinError( xbin,    3889.9767746756670      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    521019.71400017210      );
  id2 -> SetBinError( xbin,    4373.1856383601817      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    535734.12154711050      );
  id2 -> SetBinError( xbin,    3920.1526136718171      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    568935.80029747298      );
  id2 -> SetBinError( xbin,    4883.8235215701461      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    603931.22692647378      );
  id2 -> SetBinError( xbin,    5394.5192415027286      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    145569.10630591222      );
  id3 -> SetBinError( xbin,    1388.2400899336424      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    194678.42100845790      );
  id3 -> SetBinError( xbin,    1660.1174012437646      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    249733.94789476891      );
  id3 -> SetBinError( xbin,    1917.2241642321083      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    293038.72065713076      );
  id3 -> SetBinError( xbin,    2079.6419429314665      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    326853.51444873220      );
  id3 -> SetBinError( xbin,    2377.5334479504381      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    357252.35895038047      );
  id3 -> SetBinError( xbin,    2554.7537905976715      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    382787.37621112581      );
  id3 -> SetBinError( xbin,    2473.0794489942223      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    395188.69392994395      );
  id3 -> SetBinError( xbin,    2461.4207585686372      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    408621.26037007314      );
  id3 -> SetBinError( xbin,    2485.0250510208025      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    412841.58275949705      );
  id3 -> SetBinError( xbin,    2515.0582621553467      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    420712.18992865190      );
  id3 -> SetBinError( xbin,    2475.4637088114737      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    422815.08582820604      );
  id3 -> SetBinError( xbin,    2494.2038839761167      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    427888.01397511642      );
  id3 -> SetBinError( xbin,    2493.6388729019277      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    433769.64956975786      );
  id3 -> SetBinError( xbin,    2487.2922268247985      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    431058.62857089576      );
  id3 -> SetBinError( xbin,    2486.3533612370156      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    438362.47142460302      );
  id3 -> SetBinError( xbin,    2501.3005293962319      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    450237.47391762026      );
  id3 -> SetBinError( xbin,    2583.6103290540946      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    455014.47242479841      );
  id3 -> SetBinError( xbin,    2599.1474168542577      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    464628.32014125539      );
  id3 -> SetBinError( xbin,    2652.9157318352645      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    472400.81254385359      );
  id3 -> SetBinError( xbin,    2676.2273376549697      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    478227.48519549379      );
  id3 -> SetBinError( xbin,    2670.8055747674807      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    481649.44776124717      );
  id3 -> SetBinError( xbin,    2663.5264179339647      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    486006.68580472964      );
  id3 -> SetBinError( xbin,    3211.6833874213194      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    481535.15832998278      );
  id3 -> SetBinError( xbin,    3215.5232727319044      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    468029.99527653068      );
  id3 -> SetBinError( xbin,    2643.2393408750263      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    440720.34310417651      );
  id3 -> SetBinError( xbin,    2595.6027147785621      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    399037.43647350586      );
  id3 -> SetBinError( xbin,    2534.7428374909205      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    351123.12597879063      );
  id3 -> SetBinError( xbin,    2348.0125244279411      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    284339.40957093053      );
  id3 -> SetBinError( xbin,    2034.0289193804642      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    212780.53459374924      );
  id3 -> SetBinError( xbin,    1750.0810618688693      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    45022.372929522367      );
  id4 -> SetBinError( xbin,    1325.9752223705423      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    138164.22790203115      );
  id4 -> SetBinError( xbin,    2010.6479033441947      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    168927.85039382294      );
  id4 -> SetBinError( xbin,    2220.3701855195691      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    190212.60934445760      );
  id4 -> SetBinError( xbin,    2469.6370241435461      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    218269.27771077931      );
  id4 -> SetBinError( xbin,    2680.6785328383435      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    243509.66278611100      );
  id4 -> SetBinError( xbin,    2800.6649191105985      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    275853.45672848378      );
  id4 -> SetBinError( xbin,    2978.0607922286431      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    288443.45069888065      );
  id4 -> SetBinError( xbin,    3405.1079342768267      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    310354.73502735019      );
  id4 -> SetBinError( xbin,    3542.9392789066824      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    323143.28162068222      );
  id4 -> SetBinError( xbin,    3262.5357670557282      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    337972.85962577938      );
  id4 -> SetBinError( xbin,    3349.2004726584082      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    357341.06516726664      );
  id4 -> SetBinError( xbin,    3400.3925745841439      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    366641.49122891575      );
  id4 -> SetBinError( xbin,    3494.7773113142725      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    377902.23860441055      );
  id4 -> SetBinError( xbin,    3560.0304243941237      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    393418.90498518420      );
  id4 -> SetBinError( xbin,    3647.9103580816745      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    396201.07811933762      );
  id4 -> SetBinError( xbin,    3799.0547726786444      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    405906.49712510756      );
  id4 -> SetBinError( xbin,    4086.6029127524771      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    404969.66864922573      );
  id4 -> SetBinError( xbin,    4056.8676181381234      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    409123.15637815412      );
  id4 -> SetBinError( xbin,    3672.9003150109334      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    406882.59249811620      );
  id4 -> SetBinError( xbin,    3767.4970078739643      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    422247.43352284853      );
  id4 -> SetBinError( xbin,    3879.3681733478434      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    417835.28547134693      );
  id4 -> SetBinError( xbin,    3725.5379266601540      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    423711.68374599557      );
  id4 -> SetBinError( xbin,    4250.8630802423741      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    424248.31809890480      );
  id4 -> SetBinError( xbin,    4404.1380031757508      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    425509.56949911622      );
  id4 -> SetBinError( xbin,    3897.5089326154234      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    425548.44474795903      );
  id4 -> SetBinError( xbin,    3652.7603551219172      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    426308.22239087924      );
  id4 -> SetBinError( xbin,    3618.7018090201937      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    437024.40768973110      );
  id4 -> SetBinError( xbin,    3708.0863812566904      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    433510.52987164346      );
  id4 -> SetBinError( xbin,    3718.5807030119076      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    430169.79263126099      );
  id4 -> SetBinError( xbin,    3804.0101338722156      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    434423.08765593334      );
  id4 -> SetBinError( xbin,    3855.3560123985926      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    438725.97966551950      );
  id4 -> SetBinError( xbin,    3784.6921243676502      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    442062.19999849063      );
  id4 -> SetBinError( xbin,    3728.5186911602036      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    448174.48217508243      );
  id4 -> SetBinError( xbin,    3745.1308581453732      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    454814.32999419700      );
  id4 -> SetBinError( xbin,    3888.9612091650565      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    458186.13335498091      );
  id4 -> SetBinError( xbin,    3859.1604364110381      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    453242.18438686302      );
  id4 -> SetBinError( xbin,    3800.4594352246713      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    463152.29744070902      );
  id4 -> SetBinError( xbin,    3889.3062989009477      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    468157.01538177114      );
  id4 -> SetBinError( xbin,    3943.7692242953885      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    472623.05376938928      );
  id4 -> SetBinError( xbin,    4026.8221251424829      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    474151.58934221650      );
  id4 -> SetBinError( xbin,    4104.6195193479916      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    478698.53710080340      );
  id4 -> SetBinError( xbin,    4085.9824167237171      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    478014.35609226947      );
  id4 -> SetBinError( xbin,    3962.4673597023925      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    484927.01390289760      );
  id4 -> SetBinError( xbin,    3973.9966319647560      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    485045.37522318517      );
  id4 -> SetBinError( xbin,    4334.2367596396625      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    482850.01648014039      );
  id4 -> SetBinError( xbin,    4358.1722545670664      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    487385.19016207475      );
  id4 -> SetBinError( xbin,    4014.3151366675306      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    478838.85865331360      );
  id4 -> SetBinError( xbin,    4039.5766124024676      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    478778.44266136934      );
  id4 -> SetBinError( xbin,    4097.0353925834934      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    473068.19744694326      );
  id4 -> SetBinError( xbin,    3924.5151068978253      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    457378.55558746099      );
  id4 -> SetBinError( xbin,    3829.1752213851332      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    436292.52591270796      );
  id4 -> SetBinError( xbin,    3809.1017480096825      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    433894.53756462544      );
  id4 -> SetBinError( xbin,    3780.9843640177710      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    402071.67707204446      );
  id4 -> SetBinError( xbin,    3681.5624788605769      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    379741.25537502544      );
  id4 -> SetBinError( xbin,    3584.0788529556330      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    356050.93715511519      );
  id4 -> SetBinError( xbin,    3465.0341142293064      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    41798.348246210255      );
  id5 -> SetBinError( xbin,    372.71981388612875      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    90004.866287336801      );
  id5 -> SetBinError( xbin,    490.35049202674446      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    99949.702609574771      );
  id5 -> SetBinError( xbin,    553.41499032154320      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    107362.25078112178      );
  id5 -> SetBinError( xbin,    573.20459955732974      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    120244.33651200503      );
  id5 -> SetBinError( xbin,    582.32754083437283      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    135309.52422623168      );
  id5 -> SetBinError( xbin,    616.03837858578413      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    157343.48343088350      );
  id5 -> SetBinError( xbin,    719.41949638793244      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    183065.22272932524      );
  id5 -> SetBinError( xbin,    849.05317849790549      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    113835.65929108905      );
  id5 -> SetBinError( xbin,    614.36818888500204      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    40637.638207867196      );
  id5 -> SetBinError( xbin,    208.68124101353396      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    20777.161644883901      );
  id5 -> SetBinError( xbin,    114.97945484909511      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    12791.708143745387      );
  id5 -> SetBinError( xbin,    88.017314689437256      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8732.6109438930489      );
  id5 -> SetBinError( xbin,    77.471781681101902      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    6458.1563017828266      );
  id5 -> SetBinError( xbin,    66.164253857063343      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4862.5543973975246      );
  id5 -> SetBinError( xbin,    48.863791845962062      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3677.0384358663200      );
  id5 -> SetBinError( xbin,    38.714301956285148      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    3007.9385968307906      );
  id5 -> SetBinError( xbin,    32.203177746494944      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2378.5486562959441      );
  id5 -> SetBinError( xbin,    39.105640686760132      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2015.2550932706142      );
  id5 -> SetBinError( xbin,    38.748193133838299      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1633.7259224046488      );
  id5 -> SetBinError( xbin,    24.472491010461034      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1318.3211366717744      );
  id5 -> SetBinError( xbin,    20.474344468711525      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1161.5675951624787      );
  id5 -> SetBinError( xbin,    19.093409029530488      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    952.64707908319747      );
  id5 -> SetBinError( xbin,    19.254157243234523      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    858.07012409011429      );
  id5 -> SetBinError( xbin,    18.930882445163085      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    700.99671713437840      );
  id5 -> SetBinError( xbin,    17.093458117170169      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    603.02417322747101      );
  id5 -> SetBinError( xbin,    16.855116400740155      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    566.71145710161295      );
  id5 -> SetBinError( xbin,    14.411625874130872      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    449.53321860170848      );
  id5 -> SetBinError( xbin,    10.992544551642959      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    441.06943794730034      );
  id5 -> SetBinError( xbin,    11.221418612513819      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    366.52369030679290      );
  id5 -> SetBinError( xbin,    11.445764678637364      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    303.60554592984749      );
  id5 -> SetBinError( xbin,    10.482442231804177      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    279.23014537961262      );
  id5 -> SetBinError( xbin,    10.129310067981303      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    225.61196016561109      );
  id5 -> SetBinError( xbin,    22.938089901686268      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    239.14824318274370      );
  id5 -> SetBinError( xbin,    22.540844728415511      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    214.93708600095547      );
  id5 -> SetBinError( xbin,    10.639915237019009      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    168.20745791903821      );
  id5 -> SetBinError( xbin,    10.880546034624439      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    162.48189437807170      );
  id5 -> SetBinError( xbin,    7.5782172944743174      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    155.80221666877299      );
  id5 -> SetBinError( xbin,    6.0568376504973145      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1764.1993596751313      );
  id6 -> SetBinError( xbin,    33.907328629097350      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    5689.0570605992971      );
  id6 -> SetBinError( xbin,    62.836503085968218      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    11720.077974869022      );
  id6 -> SetBinError( xbin,    93.235345088065898      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    20468.463490677270      );
  id6 -> SetBinError( xbin,    122.78886561389616      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    33400.656548027728      );
  id6 -> SetBinError( xbin,    152.23242664629180      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    51515.825523956584      );
  id6 -> SetBinError( xbin,    178.24849579025241      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    79059.721960848998      );
  id6 -> SetBinError( xbin,    215.34951841225040      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    109946.33591253968      );
  id6 -> SetBinError( xbin,    257.26288661823514      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    42456.292468159518      );
  id6 -> SetBinError( xbin,    181.79380881526228      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    14404.753661441253      );
  id6 -> SetBinError( xbin,    120.25178976874048      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    5189.9275100088798      );
  id6 -> SetBinError( xbin,    77.656505378965207      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2001.4036608643455      );
  id6 -> SetBinError( xbin,    51.334268504383040      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    7113.7203902563242      );
  id7 -> SetBinError( xbin,    89.410659380779123      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9464.2349287567595      );
  id7 -> SetBinError( xbin,    102.56886451914058      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    11797.047485962717      );
  id7 -> SetBinError( xbin,    117.24838145289539      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    14303.128432103316      );
  id7 -> SetBinError( xbin,    129.06148903557795      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    17286.587724808691      );
  id7 -> SetBinError( xbin,    145.77600742719986      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    19673.836317169626      );
  id7 -> SetBinError( xbin,    157.53819484975492      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    22159.016618196547      );
  id7 -> SetBinError( xbin,    170.16385930650242      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    24590.177529090335      );
  id7 -> SetBinError( xbin,    180.70723634940893      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    26952.619162226401      );
  id7 -> SetBinError( xbin,    195.31431636453954      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    29316.004376839202      );
  id7 -> SetBinError( xbin,    205.11260929612965      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    30987.656401330951      );
  id7 -> SetBinError( xbin,    213.70241514022547      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    33061.881236762245      );
  id7 -> SetBinError( xbin,    220.90182289888006      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    33804.661777566551      );
  id7 -> SetBinError( xbin,    226.03009464193011      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    34883.494033160205      );
  id7 -> SetBinError( xbin,    230.51753408879583      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    36104.851563659853      );
  id7 -> SetBinError( xbin,    234.80009736324118      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    35917.045080584234      );
  id7 -> SetBinError( xbin,    233.28256277011744      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    36713.528709806233      );
  id7 -> SetBinError( xbin,    234.88530900289354      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    36019.135020072776      );
  id7 -> SetBinError( xbin,    228.98792386709798      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    35964.917647054463      );
  id7 -> SetBinError( xbin,    227.96996832112222      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    35164.172381125849      );
  id7 -> SetBinError( xbin,    223.07166978831347      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    33114.730256069990      );
  id7 -> SetBinError( xbin,    212.42762397649747      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    31458.489570301412      );
  id7 -> SetBinError( xbin,    201.78162980435138      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    29190.280869300677      );
  id7 -> SetBinError( xbin,    189.30962454150182      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    27411.318774093510      );
  id7 -> SetBinError( xbin,    180.91307898804217      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    24739.606783680487      );
  id7 -> SetBinError( xbin,    170.55889950259845      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    22069.965184456629      );
  id7 -> SetBinError( xbin,    156.63315983516799      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    18795.802125992992      );
  id7 -> SetBinError( xbin,    142.76574201603819      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    15911.612131247237      );
  id7 -> SetBinError( xbin,    130.04458859548913      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    13128.943713940631      );
  id7 -> SetBinError( xbin,    119.08452297950929      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    10094.394534770912      );
  id7 -> SetBinError( xbin,    101.91127219044112      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    4287.9464117469788      );
  id8 -> SetBinError( xbin,    27.173859469796994      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    7653.9884727375165      );
  id8 -> SetBinError( xbin,    35.747193094216335      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    6650.3852600460759      );
  id8 -> SetBinError( xbin,    32.993551619027812      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    5802.8166356935399      );
  id8 -> SetBinError( xbin,    30.354139973529978      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    5076.6349363353784      );
  id8 -> SetBinError( xbin,    27.700290158129853      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    4512.6659650426991      );
  id8 -> SetBinError( xbin,    26.009473862093152      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    3946.0424665202440      );
  id8 -> SetBinError( xbin,    23.867650115583253      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    3467.6643959914090      );
  id8 -> SetBinError( xbin,    21.934864924743238      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    3066.7754639713926      );
  id8 -> SetBinError( xbin,    20.216721203906332      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2723.8397050989588      );
  id8 -> SetBinError( xbin,    18.809505835734917      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2429.2709873017034      );
  id8 -> SetBinError( xbin,    17.501985298442666      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    2168.5000972989342      );
  id8 -> SetBinError( xbin,    16.157281325169144      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    1943.9838459849323      );
  id8 -> SetBinError( xbin,    15.204665285964287      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1765.1923911849472      );
  id8 -> SetBinError( xbin,    14.140235111701296      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1594.1467214549571      );
  id8 -> SetBinError( xbin,    13.455448426836345      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1467.8490782084436      );
  id8 -> SetBinError( xbin,    12.674282125094212      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1304.1912159637625      );
  id8 -> SetBinError( xbin,    11.852259124803719      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1185.6217995462500      );
  id8 -> SetBinError( xbin,    11.288925358132072      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1109.1698649770385      );
  id8 -> SetBinError( xbin,    10.795930148665056      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    995.59372109866115      );
  id8 -> SetBinError( xbin,    10.220266596136407      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    908.44786276157265      );
  id8 -> SetBinError( xbin,    9.6682789455051417      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    835.62512495929514      );
  id8 -> SetBinError( xbin,    9.1293247511008264      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    761.00261730561226      );
  id8 -> SetBinError( xbin,    8.6081507462887892      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    715.32058206553859      );
  id8 -> SetBinError( xbin,    8.2174323643961156      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    646.46274643185416      );
  id8 -> SetBinError( xbin,    7.9721412758856367      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    583.02860352006257      );
  id8 -> SetBinError( xbin,    7.3824349660623705      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    551.35130168794365      );
  id8 -> SetBinError( xbin,    7.0806819168840054      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    507.83494336018111      );
  id8 -> SetBinError( xbin,    6.8317351472932817      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
