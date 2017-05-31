// Cross-section is:      2179719.2956060488 +/-          838.6301456142)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -50232.43220   -2.30%
//        GQB    |      -25041.13438   -1.15%
//        QG     |      -57148.85485   -2.62%
//        QBG    |      -29084.10903   -1.33%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1170579.08021   53.70%
//        QBQ    |     1174723.52169   53.89%

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
//             CT10.LH            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//CT10.LHgrid                     [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//eSTARn11_207_103.LHg            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wp_nCTEQ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    1.0326016971270449      );
  id1 -> SetBinError( xbin,   0.41692354629850220      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    423.95977230596031      );
  id1 -> SetBinError( xbin,    54.565114618083093      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    4855.5552135006719      );
  id1 -> SetBinError( xbin,    312.16512440565543      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    24577.101967900631      );
  id1 -> SetBinError( xbin,    896.52680093762604      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    60536.448406943440      );
  id1 -> SetBinError( xbin,    1289.4285729524086      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    118376.32395317568      );
  id1 -> SetBinError( xbin,    1468.0574612380944      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    176855.04555697713      );
  id1 -> SetBinError( xbin,    1730.2421985959732      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    238121.58371917042      );
  id1 -> SetBinError( xbin,    1900.3675842878160      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    281137.19519956235      );
  id1 -> SetBinError( xbin,    1989.4210051086638      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    316671.93436853681      );
  id1 -> SetBinError( xbin,    2065.9273118253782      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    348834.17981188954      );
  id1 -> SetBinError( xbin,    2091.6027106035258      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    369357.82425904431      );
  id1 -> SetBinError( xbin,    2144.3403323141638      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    384128.84311886341      );
  id1 -> SetBinError( xbin,    2140.8711742500054      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    391636.54296464741      );
  id1 -> SetBinError( xbin,    2142.2089102212503      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    400010.63744560146      );
  id1 -> SetBinError( xbin,    2130.5732262410129      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    404485.78052308958      );
  id1 -> SetBinError( xbin,    2149.9555761265638      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    409706.05411049683      );
  id1 -> SetBinError( xbin,    2119.1642759744764      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    413235.83203798567      );
  id1 -> SetBinError( xbin,    2116.6383966369299      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    411885.74989822635      );
  id1 -> SetBinError( xbin,    2115.3838825660237      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    406578.43037402164      );
  id1 -> SetBinError( xbin,    2107.6839026457633      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    396670.48240697797      );
  id1 -> SetBinError( xbin,    2084.0257804024568      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    399141.15879291348      );
  id1 -> SetBinError( xbin,    2107.4755410055145      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    388663.97513010196      );
  id1 -> SetBinError( xbin,    2079.7098993790514      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    384106.89268276328      );
  id1 -> SetBinError( xbin,    2038.9717347371563      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    375537.07501646486      );
  id1 -> SetBinError( xbin,    2033.7756859896340      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    372209.91404149611      );
  id1 -> SetBinError( xbin,    2175.4867297846949      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    370993.07261601253      );
  id1 -> SetBinError( xbin,    2203.4059110283706      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    361851.83974134852      );
  id1 -> SetBinError( xbin,    2025.8058089261456      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    358996.73427407176      );
  id1 -> SetBinError( xbin,    2036.9453829247930      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    354746.73405725881      );
  id1 -> SetBinError( xbin,    2028.0805782302273      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    351462.25187278783      );
  id1 -> SetBinError( xbin,    2042.0346893050425      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    331526.35993992817      );
  id1 -> SetBinError( xbin,    2038.4297136951391      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    314768.70441977051      );
  id1 -> SetBinError( xbin,    2046.1816933855694      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    282360.72714945924      );
  id1 -> SetBinError( xbin,    2051.8053414342894      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    245155.16956948067      );
  id1 -> SetBinError( xbin,    1974.6361347787338      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    196110.95594972550      );
  id1 -> SetBinError( xbin,    1799.2270029875001      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    137552.19443371260      );
  id1 -> SetBinError( xbin,    1568.8194501640594      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    78085.772772848577      );
  id1 -> SetBinError( xbin,    1381.4064682059554      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    29678.694169197577      );
  id1 -> SetBinError( xbin,    1061.6088805239071      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    6973.9132308318185      );
  id1 -> SetBinError( xbin,    413.54848903533440      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    565.92711715524570      );
  id1 -> SetBinError( xbin,    68.860893833070747      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    1.1961543754436328      );
  id1 -> SetBinError( xbin,   0.70682184708935603      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    553342.99135041062      );
  id2 -> SetBinError( xbin,    6986.4050614396292      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    513780.13111723255      );
  id2 -> SetBinError( xbin,    4504.0165489787869      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    489528.62580559042      );
  id2 -> SetBinError( xbin,    3954.4692915361557      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    475052.31253663276      );
  id2 -> SetBinError( xbin,    4460.2030344394261      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    447673.46108284604      );
  id2 -> SetBinError( xbin,    3625.3718536240854      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    419987.23009296070      );
  id2 -> SetBinError( xbin,    3223.7810827085227      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    396622.65012486116      );
  id2 -> SetBinError( xbin,    3017.0975617658564      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    376676.80377084680      );
  id2 -> SetBinError( xbin,    3216.5499240980348      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    353128.48189960199      );
  id2 -> SetBinError( xbin,    3814.4722648490397      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    324828.82735553599      );
  id2 -> SetBinError( xbin,    2265.8360919254460      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    305935.66514195025      );
  id2 -> SetBinError( xbin,    2938.1942532390244      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    285909.29968459019      );
  id2 -> SetBinError( xbin,    3003.1744723067436      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    261193.74735739408      );
  id2 -> SetBinError( xbin,    2823.9918346278755      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    238488.53785122221      );
  id2 -> SetBinError( xbin,    1608.1969231574342      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    218388.72891681769      );
  id2 -> SetBinError( xbin,    1489.4888422831666      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    198068.55348671810      );
  id2 -> SetBinError( xbin,    1885.1547267831613      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    178747.70723184460      );
  id2 -> SetBinError( xbin,    1112.4802317193901      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    159954.84386483103      );
  id2 -> SetBinError( xbin,    1295.9370646830616      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    141290.18982686131      );
  id2 -> SetBinError( xbin,    952.59100606132142      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    126609.78527824828      );
  id2 -> SetBinError( xbin,    927.60654021304299      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    113075.13965370606      );
  id2 -> SetBinError( xbin,    1050.5002751992495      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    99459.805206446792      );
  id2 -> SetBinError( xbin,    1185.0953832327909      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    86023.930602644541      );
  id2 -> SetBinError( xbin,    635.96203766817473      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    76905.903245454931      );
  id2 -> SetBinError( xbin,    953.41468108821311      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    67143.879019939966      );
  id2 -> SetBinError( xbin,    595.74337269087789      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    58927.904559043120      );
  id2 -> SetBinError( xbin,    517.22675315610081      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    53312.708818032399      );
  id2 -> SetBinError( xbin,    817.52948179367309      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    48450.490206555332      );
  id2 -> SetBinError( xbin,    452.78235375528516      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    45473.263446914527      );
  id2 -> SetBinError( xbin,    445.89650591810909      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    44741.488413746760      );
  id2 -> SetBinError( xbin,    437.75164607687179      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    44831.255422135626      );
  id2 -> SetBinError( xbin,    419.61725606514619      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    46441.861484404370      );
  id2 -> SetBinError( xbin,    485.00578203391217      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    48807.974951396995      );
  id2 -> SetBinError( xbin,    423.99825285988351      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    54028.724522116128      );
  id2 -> SetBinError( xbin,    518.83571948701638      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    60200.326359233681      );
  id2 -> SetBinError( xbin,    538.92539832355101      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    67556.855518121083      );
  id2 -> SetBinError( xbin,    597.01807926880190      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    76376.983651435570      );
  id2 -> SetBinError( xbin,    607.34674269105551      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    86787.150680110426      );
  id2 -> SetBinError( xbin,    715.21201344001111      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    100477.91509595582      );
  id2 -> SetBinError( xbin,    718.76287247844721      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    112249.59164726835      );
  id2 -> SetBinError( xbin,    896.43553888095175      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    127502.81943558404      );
  id2 -> SetBinError( xbin,    1046.3197487406148      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    144051.46405263076      );
  id2 -> SetBinError( xbin,    1039.8247034941542      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    160886.88744773809      );
  id2 -> SetBinError( xbin,    1197.2284774242598      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    180894.94841262576      );
  id2 -> SetBinError( xbin,    2511.8106460864997      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    194831.46399417930      );
  id2 -> SetBinError( xbin,    1191.9179670635422      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    220473.56400304637      );
  id2 -> SetBinError( xbin,    1729.0972705802287      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    239080.71646347933      );
  id2 -> SetBinError( xbin,    1885.0114128322411      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    254895.71792710555      );
  id2 -> SetBinError( xbin,    1598.6762581133080      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    279237.76568653854      );
  id2 -> SetBinError( xbin,    1868.9878432949606      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    304372.51625240268      );
  id2 -> SetBinError( xbin,    2171.4209044861759      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    333795.93630026095      );
  id2 -> SetBinError( xbin,    7328.7633582587951      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    348816.99455823243      );
  id2 -> SetBinError( xbin,    2634.8611188096252      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    371371.51414163085      );
  id2 -> SetBinError( xbin,    2964.6330444886353      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    398250.17478401132      );
  id2 -> SetBinError( xbin,    3129.3464877869715      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    425475.35577933380      );
  id2 -> SetBinError( xbin,    6265.8890050515383      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    443560.21730235475      );
  id2 -> SetBinError( xbin,    4329.0636972510001      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    473058.19947386486      );
  id2 -> SetBinError( xbin,    3894.9339278269367      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    482112.11431212933      );
  id2 -> SetBinError( xbin,    4319.3004671798726      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    509958.85788114427      );
  id2 -> SetBinError( xbin,    4357.4958390143147      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    535105.35364286287      );
  id2 -> SetBinError( xbin,    5655.5900453892245      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    143975.15661587144      );
  id3 -> SetBinError( xbin,    1373.9707360538250      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    197770.10175723687      );
  id3 -> SetBinError( xbin,    1652.7808956186984      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    257713.89654537110      );
  id3 -> SetBinError( xbin,    1869.6595418928455      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    305861.63350919232      );
  id3 -> SetBinError( xbin,    2020.9560334863932      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    339980.73752293433      );
  id3 -> SetBinError( xbin,    2239.4257749300950      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    379719.64802097651      );
  id3 -> SetBinError( xbin,    2353.3589046680468      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    404564.44466880581      );
  id3 -> SetBinError( xbin,    2367.3174846069624      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    426674.11522069661      );
  id3 -> SetBinError( xbin,    2438.2123793825381      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    433053.13797395234      );
  id3 -> SetBinError( xbin,    2446.9913883961644      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    439797.25102352025      );
  id3 -> SetBinError( xbin,    2453.5593021082836      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    444304.89295530826      );
  id3 -> SetBinError( xbin,    2387.6121048989121      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    445336.64104348712      );
  id3 -> SetBinError( xbin,    2402.0366405756945      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    441431.56645679841      );
  id3 -> SetBinError( xbin,    2379.7877322038858      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    436976.35557489342      );
  id3 -> SetBinError( xbin,    2385.2644292840814      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    438579.93612041522      );
  id3 -> SetBinError( xbin,    2403.6364286449466      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    432105.83163319225      );
  id3 -> SetBinError( xbin,    2367.9412084397836      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    425331.20335852867      );
  id3 -> SetBinError( xbin,    2336.1526141732643      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    423549.04667410115      );
  id3 -> SetBinError( xbin,    2357.6554537351217      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    418848.80421071098      );
  id3 -> SetBinError( xbin,    2413.4288389396893      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    416640.40739870421      );
  id3 -> SetBinError( xbin,    2438.6415201019086      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    409576.00234375917      );
  id3 -> SetBinError( xbin,    2365.0917868301444      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    404102.32680900767      );
  id3 -> SetBinError( xbin,    2326.6386646550650      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    399313.45036490675      );
  id3 -> SetBinError( xbin,    2329.7542560905099      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    385126.45060925465      );
  id3 -> SetBinError( xbin,    2317.6008121372961      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    366155.01137251040      );
  id3 -> SetBinError( xbin,    2238.8362411429221      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    342704.92566673219      );
  id3 -> SetBinError( xbin,    2131.7740785762699      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    308164.81840256433      );
  id3 -> SetBinError( xbin,    2053.8321064306488      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    262411.19300065859      );
  id3 -> SetBinError( xbin,    1915.8234826373769      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    211917.63844503381      );
  id3 -> SetBinError( xbin,    1671.2703536172664      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    156889.17554314292      );
  id3 -> SetBinError( xbin,    1476.8698873278779      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    44934.539767108734      );
  id4 -> SetBinError( xbin,    1312.0887735821450      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    139075.85507953246      );
  id4 -> SetBinError( xbin,    2208.3130177154103      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    166455.53013350029      );
  id4 -> SetBinError( xbin,    2394.8366187640240      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    191791.79615619709      );
  id4 -> SetBinError( xbin,    2318.6873813000693      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    226063.33207035731      );
  id4 -> SetBinError( xbin,    2513.8656137091630      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    250228.36982862788      );
  id4 -> SetBinError( xbin,    2693.9004644922070      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    281372.00646863325      );
  id4 -> SetBinError( xbin,    2928.5775892126708      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    300825.35152878077      );
  id4 -> SetBinError( xbin,    3143.3752006356772      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    321126.74195057357      );
  id4 -> SetBinError( xbin,    3212.7465047319956      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    339132.90652210818      );
  id4 -> SetBinError( xbin,    3161.9782023211328      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    355496.35057456046      );
  id4 -> SetBinError( xbin,    3239.4546218616906      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    379475.62770509889      );
  id4 -> SetBinError( xbin,    3469.7626477077374      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    394996.82938845648      );
  id4 -> SetBinError( xbin,    3521.7377689733280      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    400871.74771397683      );
  id4 -> SetBinError( xbin,    3456.4682629635217      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    413033.77727245283      );
  id4 -> SetBinError( xbin,    3516.5332656625383      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    425360.43759431201      );
  id4 -> SetBinError( xbin,    3553.9449181414338      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    432297.74136083788      );
  id4 -> SetBinError( xbin,    3586.5403054338144      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    429554.74565432849      );
  id4 -> SetBinError( xbin,    3621.6435361687331      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    441523.92821975419      );
  id4 -> SetBinError( xbin,    3659.2080864339246      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    441616.10032209189      );
  id4 -> SetBinError( xbin,    3808.7315201303904      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    439296.40380721283      );
  id4 -> SetBinError( xbin,    3832.3917366662818      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    446355.56419555808      );
  id4 -> SetBinError( xbin,    3599.8568554234885      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    442514.90770010644      );
  id4 -> SetBinError( xbin,    3691.7895031428334      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    448548.00578662084      );
  id4 -> SetBinError( xbin,    3687.0808643169134      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    438111.40128982184      );
  id4 -> SetBinError( xbin,    3902.9204563969911      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    446909.60360650485      );
  id4 -> SetBinError( xbin,    4110.2202659980976      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    439791.64148610161      );
  id4 -> SetBinError( xbin,    3879.2081198874498      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    435740.83761024359      );
  id4 -> SetBinError( xbin,    3562.8002005436369      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    435861.70900928305      );
  id4 -> SetBinError( xbin,    3558.4850883553909      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    437931.35794342117      );
  id4 -> SetBinError( xbin,    3606.6742332188260      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    431087.21803634684      );
  id4 -> SetBinError( xbin,    3549.9447566385206      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    431946.33241656621      );
  id4 -> SetBinError( xbin,    3689.5194321825711      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    435707.26565590344      );
  id4 -> SetBinError( xbin,    3722.4077937458037      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    423975.85175550450      );
  id4 -> SetBinError( xbin,    3511.9369057919503      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    425308.37607522291      );
  id4 -> SetBinError( xbin,    3571.8563307510763      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    425206.07250307151      );
  id4 -> SetBinError( xbin,    3589.2120586033848      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    422074.71411950944      );
  id4 -> SetBinError( xbin,    3508.4496392457991      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    419717.50235522119      );
  id4 -> SetBinError( xbin,    3542.8692414165180      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    418803.77344302105      );
  id4 -> SetBinError( xbin,    3624.4744891003606      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    415446.30571853259      );
  id4 -> SetBinError( xbin,    3655.3555455850415      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    413654.10923550959      );
  id4 -> SetBinError( xbin,    3547.8380365538546      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    409434.89486079366      );
  id4 -> SetBinError( xbin,    3608.6199263078024      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    406351.46244508162      );
  id4 -> SetBinError( xbin,    3605.2420465257742      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    406204.98644830997      );
  id4 -> SetBinError( xbin,    3537.3110431534474      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    400919.22889354010      );
  id4 -> SetBinError( xbin,    3512.2946689584273      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    401143.28233808483      );
  id4 -> SetBinError( xbin,    3622.1630528929231      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    390861.47495332634      );
  id4 -> SetBinError( xbin,    4896.6631489734455      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    390033.03888197261      );
  id4 -> SetBinError( xbin,    4836.5754681658291      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    377332.81464574771      );
  id4 -> SetBinError( xbin,    3494.9659203890633      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    370336.33036381734      );
  id4 -> SetBinError( xbin,    3368.0103457614869      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    349633.84689737717      );
  id4 -> SetBinError( xbin,    3934.4838042292990      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    352386.81315681402      );
  id4 -> SetBinError( xbin,    3991.5285928133344      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    327138.99793691019      );
  id4 -> SetBinError( xbin,    3227.3713498248508      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    312674.37730009126      );
  id4 -> SetBinError( xbin,    3061.4126829582224      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    288439.86518581671      );
  id4 -> SetBinError( xbin,    2941.1061365926234      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    267689.59875743213      );
  id4 -> SetBinError( xbin,    2831.5192677806863      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    38959.318707905724      );
  id5 -> SetBinError( xbin,    328.59826297063017      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    83836.995087574222      );
  id5 -> SetBinError( xbin,    455.93997732487566      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    92094.266020082316      );
  id5 -> SetBinError( xbin,    532.92428033820113      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    100692.28959288012      );
  id5 -> SetBinError( xbin,    587.65330810798650      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    111562.57460525604      );
  id5 -> SetBinError( xbin,    577.63444793287579      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    126001.71858818196      );
  id5 -> SetBinError( xbin,    657.22383199769865      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    145839.13286058023      );
  id5 -> SetBinError( xbin,    708.93145870753767      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    167948.41706538841      );
  id5 -> SetBinError( xbin,    759.11961615607106      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    106910.42969957525      );
  id5 -> SetBinError( xbin,    579.91873294683251      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    39363.181514792188      );
  id5 -> SetBinError( xbin,    224.11980008804986      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    20180.123818345761      );
  id5 -> SetBinError( xbin,    172.07531561452069      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    12592.034548778265      );
  id5 -> SetBinError( xbin,    84.645186267783032      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8734.3185374416917      );
  id5 -> SetBinError( xbin,    62.237253545820913      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    6367.8403995188264      );
  id5 -> SetBinError( xbin,    78.749626527058282      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4920.4966375471304      );
  id5 -> SetBinError( xbin,    72.583125190172126      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3646.8435996117537      );
  id5 -> SetBinError( xbin,    37.641162770968414      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    2971.1872923231190      );
  id5 -> SetBinError( xbin,    33.567322930362380      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2405.9319549473998      );
  id5 -> SetBinError( xbin,    29.866401497579890      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2065.9837857330949      );
  id5 -> SetBinError( xbin,    25.650996990070404      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1651.5128596544841      );
  id5 -> SetBinError( xbin,    24.457239570684980      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1364.3751767057918      );
  id5 -> SetBinError( xbin,    22.827991468507314      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1126.5746521546168      );
  id5 -> SetBinError( xbin,    19.963550191318689      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1007.5120524241770      );
  id5 -> SetBinError( xbin,    20.455397268624516      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    863.21179838013768      );
  id5 -> SetBinError( xbin,    18.726216484005551      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    725.03086715886025      );
  id5 -> SetBinError( xbin,    16.334526545330597      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    630.70910683382954      );
  id5 -> SetBinError( xbin,    14.083660289339699      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    562.58452645180193      );
  id5 -> SetBinError( xbin,    12.735972424139437      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    475.62208386667783      );
  id5 -> SetBinError( xbin,    24.481993294741404      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    433.60309899229816      );
  id5 -> SetBinError( xbin,    24.556272994822038      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    360.26720089219316      );
  id5 -> SetBinError( xbin,    12.947834058887819      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    364.65359851319869      );
  id5 -> SetBinError( xbin,    11.915299096108882      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    272.68919269068306      );
  id5 -> SetBinError( xbin,    9.4589864821432137      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    249.88090640897371      );
  id5 -> SetBinError( xbin,    7.7780667272846236      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    238.15223032845421      );
  id5 -> SetBinError( xbin,    7.5785266634579633      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    199.89553621345246      );
  id5 -> SetBinError( xbin,    14.223816277785902      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    162.12848357349114      );
  id5 -> SetBinError( xbin,    28.173669226894532      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    205.43794845617879      );
  id5 -> SetBinError( xbin,    26.475870178768378      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    140.71785284644375      );
  id5 -> SetBinError( xbin,    12.617616424866693      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1783.8760215183961      );
  id6 -> SetBinError( xbin,    33.703674183010087      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    5673.7407166449830      );
  id6 -> SetBinError( xbin,    61.800408179767516      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    11687.191638257440      );
  id6 -> SetBinError( xbin,    95.487126371765072      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    20249.418707421322      );
  id6 -> SetBinError( xbin,    120.96519168764226      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    33802.306895212467      );
  id6 -> SetBinError( xbin,    151.04149180175153      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    52074.376148207477      );
  id6 -> SetBinError( xbin,    176.55497617473975      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    80478.471913168207      );
  id6 -> SetBinError( xbin,    214.11492347261211      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    112049.04662416317      );
  id6 -> SetBinError( xbin,    256.04922681480122      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    43896.647628051258      );
  id6 -> SetBinError( xbin,    179.56735543056712      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    14948.621377975125      );
  id6 -> SetBinError( xbin,    116.73829460370855      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    5693.2433942587841      );
  id6 -> SetBinError( xbin,    76.517141033688191      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2173.9708512508214      );
  id6 -> SetBinError( xbin,    52.128189017769728      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    7086.3138989831277      );
  id7 -> SetBinError( xbin,    85.194120084626235      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9426.7092764410445      );
  id7 -> SetBinError( xbin,    100.17284389091269      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    12290.224763103774      );
  id7 -> SetBinError( xbin,    116.06138668242166      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    14976.166521990035      );
  id7 -> SetBinError( xbin,    129.84454267979390      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    17842.684259786543      );
  id7 -> SetBinError( xbin,    143.39892225299118      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    21107.696004486384      );
  id7 -> SetBinError( xbin,    161.12484396450412      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    23707.574426287712      );
  id7 -> SetBinError( xbin,    170.88542942595012      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    26429.677452356416      );
  id7 -> SetBinError( xbin,    184.92914889556465      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    29327.841778063299      );
  id7 -> SetBinError( xbin,    196.16133402796345      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    31805.746720295301      );
  id7 -> SetBinError( xbin,    209.25670862450332      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    33549.052975227882      );
  id7 -> SetBinError( xbin,    216.14171525754969      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    35423.656244860002      );
  id7 -> SetBinError( xbin,    224.76377795771435      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    36528.037203672633      );
  id7 -> SetBinError( xbin,    229.33891573027685      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    37672.304218476267      );
  id7 -> SetBinError( xbin,    232.79246357845633      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    38343.043698205242      );
  id7 -> SetBinError( xbin,    234.95578459063822      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    38006.394799862828      );
  id7 -> SetBinError( xbin,    232.73667895414718      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    37504.581749310768      );
  id7 -> SetBinError( xbin,    229.15049299370904      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    37491.000009155570      );
  id7 -> SetBinError( xbin,    230.04102312052910      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    36181.221940238276      );
  id7 -> SetBinError( xbin,    222.97723873450963      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    34518.665646843307      );
  id7 -> SetBinError( xbin,    222.72991070837273      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    32654.202700410424      );
  id7 -> SetBinError( xbin,    207.12069966189364      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    30306.460292863103      );
  id7 -> SetBinError( xbin,    194.82543409597210      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    28275.021680521058      );
  id7 -> SetBinError( xbin,    185.81106771761702      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    25583.724556133020      );
  id7 -> SetBinError( xbin,    173.37929869705403      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    22900.874611927866      );
  id7 -> SetBinError( xbin,    162.04072705584022      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    20134.484401583923      );
  id7 -> SetBinError( xbin,    150.84061369283739      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17421.296724346223      );
  id7 -> SetBinError( xbin,    139.75896673673307      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    14264.075500054614      );
  id7 -> SetBinError( xbin,    124.64227399374789      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    11563.302075882037      );
  id7 -> SetBinError( xbin,    112.38873932997465      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    8881.0584245132995      );
  id7 -> SetBinError( xbin,    95.969518673854296      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    4320.5868074263371      );
  id8 -> SetBinError( xbin,    27.465316602787759      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    7689.6505351556880      );
  id8 -> SetBinError( xbin,    35.085053128548040      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    6628.5009258690861      );
  id8 -> SetBinError( xbin,    31.955118192939658      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    5875.8164424943525      );
  id8 -> SetBinError( xbin,    29.840451722134688      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    5131.5956117030255      );
  id8 -> SetBinError( xbin,    27.535024530844158      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    4539.6502970550773      );
  id8 -> SetBinError( xbin,    25.528496744203494      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    3977.1430772305866      );
  id8 -> SetBinError( xbin,    23.672527899412511      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    3543.1386329825723      );
  id8 -> SetBinError( xbin,    21.878270532302263      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    3123.1107927728840      );
  id8 -> SetBinError( xbin,    20.258931290294338      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2784.3168405938668      );
  id8 -> SetBinError( xbin,    18.850450391806945      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2482.5106361767221      );
  id8 -> SetBinError( xbin,    17.403037778252752      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    2227.6835357371001      );
  id8 -> SetBinError( xbin,    16.509362313144845      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2002.8882112881199      );
  id8 -> SetBinError( xbin,    15.275487572150803      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1786.9150728593563      );
  id8 -> SetBinError( xbin,    14.233588085322712      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1636.3742689832266      );
  id8 -> SetBinError( xbin,    13.665895889970027      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1481.6744803950207      );
  id8 -> SetBinError( xbin,    12.832183120261091      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1348.9792449157844      );
  id8 -> SetBinError( xbin,    11.863417799870417      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1236.0065060902011      );
  id8 -> SetBinError( xbin,    11.360118919484320      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1120.9121585168984      );
  id8 -> SetBinError( xbin,    10.708368699336836      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1014.6398988438332      );
  id8 -> SetBinError( xbin,    10.074811686157656      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    940.58082396120210      );
  id8 -> SetBinError( xbin,    9.6046005021273970      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    879.65861195182515      );
  id8 -> SetBinError( xbin,    9.2588808064549379      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    798.57184028096924      );
  id8 -> SetBinError( xbin,    8.7608928504530201      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    730.28992944570746      );
  id8 -> SetBinError( xbin,    8.4503587409187926      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    685.39689178119386      );
  id8 -> SetBinError( xbin,    8.1004391701241776      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    614.19038208298218      );
  id8 -> SetBinError( xbin,    7.3460980305431303      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    571.47565952883735      );
  id8 -> SetBinError( xbin,    7.2207725594225272      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    512.03578420256042      );
  id8 -> SetBinError( xbin,    6.5953426394327321      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
