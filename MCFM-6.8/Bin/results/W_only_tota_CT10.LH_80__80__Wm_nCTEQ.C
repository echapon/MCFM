// Cross-section is:      1711909.8214271336 +/-          708.3592770999)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -31117.06599   -1.82%
//        GQB    |      -26809.15270   -1.57%
//        QG     |      -30130.00106   -1.76%
//        QBG    |      -26885.73175   -1.57%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      825746.08023   48.24%
//        QBQ    |     1006191.63063   58.78%

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
//Wm_nCTEQ                        [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wm_nCTEQ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    6.8094709953551956E-003 );
  id1 -> SetBinError( xbin,    7.2622433833139655E-003 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    12.780448962403517      );
  id1 -> SetBinError( xbin,    1.9521038883980879      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    196.60075842971969      );
  id1 -> SetBinError( xbin,    22.576659658344447      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1900.0700389340700      );
  id1 -> SetBinError( xbin,    116.24606185183504      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    7298.3129963650572      );
  id1 -> SetBinError( xbin,    340.21165828575215      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    24726.564486409970      );
  id1 -> SetBinError( xbin,    624.03700561893436      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    59925.719704246709      );
  id1 -> SetBinError( xbin,    1067.4703054196664      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    116331.10165308589      );
  id1 -> SetBinError( xbin,    1178.5375049562790      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    184458.08793821582      );
  id1 -> SetBinError( xbin,    1417.6038894038520      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    266043.85574903199      );
  id1 -> SetBinError( xbin,    1796.9780931585549      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    331890.60985276318      );
  id1 -> SetBinError( xbin,    1779.8216127919843      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    379881.69727051276      );
  id1 -> SetBinError( xbin,    1849.5266296047978      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    398426.12672550883      );
  id1 -> SetBinError( xbin,    1866.2649746858992      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    404887.08671502955      );
  id1 -> SetBinError( xbin,    1878.1565963895196      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    410994.71963199321      );
  id1 -> SetBinError( xbin,    1862.7754719879847      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    411408.57908058097      );
  id1 -> SetBinError( xbin,    1848.8742110905314      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    415577.78356589470      );
  id1 -> SetBinError( xbin,    1853.4789225745508      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    411305.23906845477      );
  id1 -> SetBinError( xbin,    1838.5454353704522      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    398958.85214253585      );
  id1 -> SetBinError( xbin,    1814.8627152870974      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    394747.32103229134      );
  id1 -> SetBinError( xbin,    1789.2870206476864      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    384131.64198501781      );
  id1 -> SetBinError( xbin,    1928.2123051406359      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    367449.21488880645      );
  id1 -> SetBinError( xbin,    1806.8643340882695      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    356061.27358913125      );
  id1 -> SetBinError( xbin,    1704.4346344921662      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    343190.76418070216      );
  id1 -> SetBinError( xbin,    1712.8384934722419      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    323777.13431937183      );
  id1 -> SetBinError( xbin,    1670.6154816323719      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    308083.32039922982      );
  id1 -> SetBinError( xbin,    1622.5811514174034      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    299540.92772211652      );
  id1 -> SetBinError( xbin,    1589.7889970053996      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    280546.71090602706      );
  id1 -> SetBinError( xbin,    1567.2682739062393      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    263324.44668504922      );
  id1 -> SetBinError( xbin,    1537.5978907533686      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    248453.26904055930      );
  id1 -> SetBinError( xbin,    1507.2203557032074      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    224781.77720911006      );
  id1 -> SetBinError( xbin,    1476.1296173753499      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    187788.71877026785      );
  id1 -> SetBinError( xbin,    1377.8927359809468      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    145899.93008876251      );
  id1 -> SetBinError( xbin,    1226.8439327979343      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    99883.936940627376      );
  id1 -> SetBinError( xbin,    1032.1432010939461      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    59006.189449522892      );
  id1 -> SetBinError( xbin,    964.84114376423588      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    31309.394967832533      );
  id1 -> SetBinError( xbin,    660.28673663546431      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    12378.572629602750      );
  id1 -> SetBinError( xbin,    466.93549961177797      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    3616.0072334539909      );
  id1 -> SetBinError( xbin,    191.33174631146267      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    830.24344890494274      );
  id1 -> SetBinError( xbin,    56.778867779037839      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    112.00076518120086      );
  id1 -> SetBinError( xbin,    9.0748602821977542      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    7.0495696404232717      );
  id1 -> SetBinError( xbin,   0.94169029707916407      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    5.1818823493143488E-003 );
  id1 -> SetBinError( xbin,    8.7708936837852386E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    513373.54206843115      );
  id2 -> SetBinError( xbin,    5790.8113519025674      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    499165.37239297084      );
  id2 -> SetBinError( xbin,    6355.3594742531031      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    464887.88061349117      );
  id2 -> SetBinError( xbin,    3615.2704176399934      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    444051.69162380835      );
  id2 -> SetBinError( xbin,    3614.5051500541526      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    425876.90628303681      );
  id2 -> SetBinError( xbin,    3306.5677378254250      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    398973.05987671763      );
  id2 -> SetBinError( xbin,    4761.8035668633393      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    381712.23258882790      );
  id2 -> SetBinError( xbin,    3167.2433099509099      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    355176.05210990564      );
  id2 -> SetBinError( xbin,    2403.1498574649991      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    335754.84233518108      );
  id2 -> SetBinError( xbin,    2343.6746436597177      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    320709.57657055423      );
  id2 -> SetBinError( xbin,    2118.2772078946450      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    293180.01728486078      );
  id2 -> SetBinError( xbin,    2035.6017197134006      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    275489.61341928889      );
  id2 -> SetBinError( xbin,    2572.5479316715810      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    254382.71604964547      );
  id2 -> SetBinError( xbin,    1695.0723853718080      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    238727.38671402528      );
  id2 -> SetBinError( xbin,    2538.1535040997364      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    214391.26673091692      );
  id2 -> SetBinError( xbin,    1257.7336508744959      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    193821.79830297080      );
  id2 -> SetBinError( xbin,    1095.4877863880083      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    176920.11193421244      );
  id2 -> SetBinError( xbin,    1593.4216626943876      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    160265.47342200598      );
  id2 -> SetBinError( xbin,    1199.5996077910813      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    140938.91439185690      );
  id2 -> SetBinError( xbin,    837.01582155653148      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    124333.99528795015      );
  id2 -> SetBinError( xbin,    740.27999724214146      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    110244.55203974638      );
  id2 -> SetBinError( xbin,    884.24990335545124      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    97417.944701156652      );
  id2 -> SetBinError( xbin,    636.97356569117790      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    85657.324778600596      );
  id2 -> SetBinError( xbin,    679.98627862226897      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    73819.350362240380      );
  id2 -> SetBinError( xbin,    593.10413588602762      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    64891.357818047043      );
  id2 -> SetBinError( xbin,    693.37302248788660      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    57682.696979169727      );
  id2 -> SetBinError( xbin,    486.64991748684582      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    52211.374709050753      );
  id2 -> SetBinError( xbin,    973.99315848767151      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    46064.103565084690      );
  id2 -> SetBinError( xbin,    375.09741800001279      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    43561.859113282044      );
  id2 -> SetBinError( xbin,    372.20573438410457      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    41832.636368314561      );
  id2 -> SetBinError( xbin,    366.34713804900150      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    41311.449168247826      );
  id2 -> SetBinError( xbin,    382.69869335783494      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    43012.413159578937      );
  id2 -> SetBinError( xbin,    407.17600585035512      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    45267.068415383030      );
  id2 -> SetBinError( xbin,    413.47016307466134      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    50136.065803239449      );
  id2 -> SetBinError( xbin,    520.32965344029333      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    53705.101667827767      );
  id2 -> SetBinError( xbin,    418.01447017845356      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    61630.660238706536      );
  id2 -> SetBinError( xbin,    536.26623629459607      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    68834.927266211831      );
  id2 -> SetBinError( xbin,    567.82906962652612      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    77703.146631372671      );
  id2 -> SetBinError( xbin,    627.87899742695322      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    88173.594212327967      );
  id2 -> SetBinError( xbin,    1117.5654666171722      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    97727.699371308263      );
  id2 -> SetBinError( xbin,    671.51061477324299      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    112044.17077750176      );
  id2 -> SetBinError( xbin,    2085.2974397917628      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    121943.42521035923      );
  id2 -> SetBinError( xbin,    877.36469122617962      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    134085.79611097326      );
  id2 -> SetBinError( xbin,    915.57832137677894      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    148712.09639496019      );
  id2 -> SetBinError( xbin,    1033.7194387778070      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    162481.00581719328      );
  id2 -> SetBinError( xbin,    1217.6442807606970      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    177985.53881378914      );
  id2 -> SetBinError( xbin,    1361.3573483343657      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    193328.60786884744      );
  id2 -> SetBinError( xbin,    1763.0712417737404      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    206191.42159292870      );
  id2 -> SetBinError( xbin,    1494.1913325768312      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    222772.75687972212      );
  id2 -> SetBinError( xbin,    1783.5752217636198      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    235885.09129859312      );
  id2 -> SetBinError( xbin,    1667.5968588322430      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    252011.71988877637      );
  id2 -> SetBinError( xbin,    2330.1670489762287      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    273105.19201108336      );
  id2 -> SetBinError( xbin,    3053.3436272754680      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    279762.88406449114      );
  id2 -> SetBinError( xbin,    2229.2523040559331      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    299966.98124656646      );
  id2 -> SetBinError( xbin,    2643.9998064651531      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    314845.86151245178      );
  id2 -> SetBinError( xbin,    2868.0572559431284      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    328751.65678796370      );
  id2 -> SetBinError( xbin,    3116.8864750852672      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    340472.72148423281      );
  id2 -> SetBinError( xbin,    3618.7432993850903      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    360765.77298157458      );
  id2 -> SetBinError( xbin,    3730.2064245063489      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    374183.97021813208      );
  id2 -> SetBinError( xbin,    4006.7968914262315      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    388254.76871535834      );
  id2 -> SetBinError( xbin,    4181.0131062416394      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    260220.59144747184      );
  id3 -> SetBinError( xbin,    2300.6737703491290      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    287941.65847785876      );
  id3 -> SetBinError( xbin,    2032.7684574417906      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    305034.96834038931      );
  id3 -> SetBinError( xbin,    1938.1051412487100      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    320537.94641386601      );
  id3 -> SetBinError( xbin,    1880.7273347902992      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    331465.65977660997      );
  id3 -> SetBinError( xbin,    1858.6370256174371      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    336879.62314880436      );
  id3 -> SetBinError( xbin,    2058.9011573676166      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    343925.68571833370      );
  id3 -> SetBinError( xbin,    1898.1725958063314      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    348942.13759614743      );
  id3 -> SetBinError( xbin,    1686.2156419161613      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    351358.59389090771      );
  id3 -> SetBinError( xbin,    1675.1897328369316      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    353475.01447312464      );
  id3 -> SetBinError( xbin,    1791.3521075410890      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    350490.36330659559      );
  id3 -> SetBinError( xbin,    1797.3097633588466      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    348484.79190674471      );
  id3 -> SetBinError( xbin,    1664.1385752267518      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    348350.95319215296      );
  id3 -> SetBinError( xbin,    1937.4304976093774      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    339196.92283412069      );
  id3 -> SetBinError( xbin,    1922.5923491084802      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    336413.18615005002      );
  id3 -> SetBinError( xbin,    1590.3375891593653      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    325918.68838955939      );
  id3 -> SetBinError( xbin,    1704.6350288134427      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    316049.81316627027      );
  id3 -> SetBinError( xbin,    1690.7140373207837      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    307818.16805445863      );
  id3 -> SetBinError( xbin,    1564.9507351336351      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    295758.22373765899      );
  id3 -> SetBinError( xbin,    1546.2110708538899      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    281053.13298412401      );
  id3 -> SetBinError( xbin,    1515.2653659356856      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    269462.18151225365      );
  id3 -> SetBinError( xbin,    1521.8346760135612      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    257086.08659245592      );
  id3 -> SetBinError( xbin,    1515.2967099606574      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    241361.33014157484      );
  id3 -> SetBinError( xbin,    1502.2000521821337      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    232674.78551034722      );
  id3 -> SetBinError( xbin,    1495.7112446778692      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    218003.38304355403      );
  id3 -> SetBinError( xbin,    1487.8595389332204      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    203547.55363875808      );
  id3 -> SetBinError( xbin,    1480.1173325001907      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    189909.58386313121      );
  id3 -> SetBinError( xbin,    1507.0750764941379      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    170868.19706068549      );
  id3 -> SetBinError( xbin,    1529.9419844902552      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    153082.98620975282      );
  id3 -> SetBinError( xbin,    1561.0374233981379      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    133831.43506176173      );
  id3 -> SetBinError( xbin,    1582.7024144534598      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    88734.384486295196      );
  id4 -> SetBinError( xbin,    2745.4833876653447      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    254675.07083119778      );
  id4 -> SetBinError( xbin,    3287.8854738532464      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    274312.20555471885      );
  id4 -> SetBinError( xbin,    3230.3671238253974      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    286008.15584727103      );
  id4 -> SetBinError( xbin,    3517.4770339412021      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    296967.50537931657      );
  id4 -> SetBinError( xbin,    3371.1934596107071      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    305324.85717254411      );
  id4 -> SetBinError( xbin,    2862.3101616293575      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    309518.16456597240      );
  id4 -> SetBinError( xbin,    2855.8937748121698      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    320324.09838528064      );
  id4 -> SetBinError( xbin,    2868.0279365372512      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    328200.57225168636      );
  id4 -> SetBinError( xbin,    2820.9341679920799      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    330998.56628030929      );
  id4 -> SetBinError( xbin,    2734.7394869597192      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    332764.33640039305      );
  id4 -> SetBinError( xbin,    2691.2864482658383      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    338244.66880103137      );
  id4 -> SetBinError( xbin,    3053.5153932470830      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    338544.78305847576      );
  id4 -> SetBinError( xbin,    2748.0326862311440      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    341592.47548211599      );
  id4 -> SetBinError( xbin,    2614.6512523609340      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    346687.87480098649      );
  id4 -> SetBinError( xbin,    2701.5949174399025      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    349090.36188172409      );
  id4 -> SetBinError( xbin,    2667.3239008192668      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    350715.92496361944      );
  id4 -> SetBinError( xbin,    2526.0852712416063      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    347784.02485708729      );
  id4 -> SetBinError( xbin,    2525.7565411042242      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    352561.97924650571      );
  id4 -> SetBinError( xbin,    2530.2178573809883      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    353703.60245919623      );
  id4 -> SetBinError( xbin,    2562.3674262232375      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    351487.65239853342      );
  id4 -> SetBinError( xbin,    2577.5312782479532      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    353510.48769411154      );
  id4 -> SetBinError( xbin,    2495.1464417954289      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    347040.35576229542      );
  id4 -> SetBinError( xbin,    2492.8956158640744      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    350557.14865719416      );
  id4 -> SetBinError( xbin,    2504.2277497982736      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    349743.30256568466      );
  id4 -> SetBinError( xbin,    2434.2537582456016      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    347066.78900316416      );
  id4 -> SetBinError( xbin,    2409.6920129126797      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    342345.71782501694      );
  id4 -> SetBinError( xbin,    2418.8560434405113      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    343117.07114323735      );
  id4 -> SetBinError( xbin,    2402.9585873434689      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    339632.79363011487      );
  id4 -> SetBinError( xbin,    2494.0384928962503      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    334708.63350204588      );
  id4 -> SetBinError( xbin,    2479.5120427475781      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    332942.42813259270      );
  id4 -> SetBinError( xbin,    2374.6533777655654      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    325931.11770600092      );
  id4 -> SetBinError( xbin,    2359.3641171576901      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    324354.17880023090      );
  id4 -> SetBinError( xbin,    2350.2177106600543      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    319217.10538105585      );
  id4 -> SetBinError( xbin,    2366.9727378086609      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    309534.13370117749      );
  id4 -> SetBinError( xbin,    2359.5096312885039      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    307328.60296858125      );
  id4 -> SetBinError( xbin,    2353.1604296159612      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    305587.91434846161      );
  id4 -> SetBinError( xbin,    2367.5553929289581      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    299157.04113605310      );
  id4 -> SetBinError( xbin,    2321.8795137466586      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    284078.16454222769      );
  id4 -> SetBinError( xbin,    2293.2498969142462      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    281334.54048321903      );
  id4 -> SetBinError( xbin,    2270.2182212832399      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    281715.10787769931      );
  id4 -> SetBinError( xbin,    2276.2810794935494      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    267892.20685640653      );
  id4 -> SetBinError( xbin,    2259.1087792976427      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    262868.97687102755      );
  id4 -> SetBinError( xbin,    2307.3897380413396      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    258653.44937591930      );
  id4 -> SetBinError( xbin,    2318.1247873697048      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    250984.84940465319      );
  id4 -> SetBinError( xbin,    2216.9809148152676      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    242903.90022486355      );
  id4 -> SetBinError( xbin,    2214.4826959327238      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    236930.39631858078      );
  id4 -> SetBinError( xbin,    2286.9227252038268      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    234596.23898306221      );
  id4 -> SetBinError( xbin,    2282.2624028577320      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    225303.47755753138      );
  id4 -> SetBinError( xbin,    2290.9471745956021      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    216861.94246208991      );
  id4 -> SetBinError( xbin,    2260.4729992442285      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    213920.09881860946      );
  id4 -> SetBinError( xbin,    2315.5072697588571      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    207519.96501014131      );
  id4 -> SetBinError( xbin,    2415.8782812055051      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    198044.90313482561      );
  id4 -> SetBinError( xbin,    2310.0572806673349      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    190936.38755052612      );
  id4 -> SetBinError( xbin,    2289.5254080315081      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    181700.24368283819      );
  id4 -> SetBinError( xbin,    2304.2535312292180      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    168561.79614489054      );
  id4 -> SetBinError( xbin,    2280.5586590262938      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    25716.409904035987      );
  id5 -> SetBinError( xbin,    241.50414818693105      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    56719.210635897121      );
  id5 -> SetBinError( xbin,    309.01714498093332      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    64361.620087108939      );
  id5 -> SetBinError( xbin,    355.32205970721571      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    73252.259584318221      );
  id5 -> SetBinError( xbin,    380.57438916583641      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    82877.930592993129      );
  id5 -> SetBinError( xbin,    409.69612341378911      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    97593.061643768495      );
  id5 -> SetBinError( xbin,    452.23172480554740      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    117658.10494065215      );
  id5 -> SetBinError( xbin,    507.05085235086636      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    142761.71371550890      );
  id5 -> SetBinError( xbin,    698.42802217525286      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    89858.578435119271      );
  id5 -> SetBinError( xbin,    577.81278961004341      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    33575.243824565536      );
  id5 -> SetBinError( xbin,    157.30076887695728      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    17405.214337474070      );
  id5 -> SetBinError( xbin,    112.76364592344339      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    11121.460087449650      );
  id5 -> SetBinError( xbin,    89.158820968750376      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    7841.3689861393086      );
  id5 -> SetBinError( xbin,    54.738485232789849      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    5729.2140518256365      );
  id5 -> SetBinError( xbin,    43.621918768214279      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4436.5620512098421      );
  id5 -> SetBinError( xbin,    37.264066850471899      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3559.7491571767919      );
  id5 -> SetBinError( xbin,    37.436419447236652      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    2879.9912358201163      );
  id5 -> SetBinError( xbin,    32.640262791037024      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2380.5650336657886      );
  id5 -> SetBinError( xbin,    25.991873013707707      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    1979.6729991890525      );
  id5 -> SetBinError( xbin,    27.084784478029967      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1680.7722009914849      );
  id5 -> SetBinError( xbin,    26.301337202730693      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1437.9234480780005      );
  id5 -> SetBinError( xbin,    19.932819219655038      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1211.4287474483569      );
  id5 -> SetBinError( xbin,    19.139067681580354      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1095.9958605543031      );
  id5 -> SetBinError( xbin,    24.311415201837619      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    897.97548189263762      );
  id5 -> SetBinError( xbin,    22.469428328493404      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    783.70555596769032      );
  id5 -> SetBinError( xbin,    14.488019836524007      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    699.42935977548768      );
  id5 -> SetBinError( xbin,    11.808631563221155      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    623.20400205266333      );
  id5 -> SetBinError( xbin,    11.835384349259042      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    546.93451385752712      );
  id5 -> SetBinError( xbin,    13.032776598007400      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    502.35435130781582      );
  id5 -> SetBinError( xbin,    13.505256619828801      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    439.54299680293366      );
  id5 -> SetBinError( xbin,    10.740347253673981      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    373.24359155386014      );
  id5 -> SetBinError( xbin,    8.5926676555037051      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    325.46730576698491      );
  id5 -> SetBinError( xbin,    7.6591942817081202      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    294.11835232014295      );
  id5 -> SetBinError( xbin,    13.119234737889613      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    306.12120810318794      );
  id5 -> SetBinError( xbin,    13.023847655696857      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    235.91912580499547      );
  id5 -> SetBinError( xbin,    7.6579110539643569      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    230.42509759990372      );
  id5 -> SetBinError( xbin,    7.4046795987644876      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    189.87118649859104      );
  id5 -> SetBinError( xbin,    7.2392745029669872      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    195.39093490722760      );
  id5 -> SetBinError( xbin,    7.2243846654863901      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1310.9749944978334      );
  id6 -> SetBinError( xbin,    25.516464505276875      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    4218.8788710119397      );
  id6 -> SetBinError( xbin,    46.830731430523734      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    8237.0166698368193      );
  id6 -> SetBinError( xbin,    63.583046760997561      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    14156.749874155788      );
  id6 -> SetBinError( xbin,    80.717684450808846      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    23082.814329601431      );
  id6 -> SetBinError( xbin,    98.708910829533195      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    37215.687229062598      );
  id6 -> SetBinError( xbin,    119.09750479871124      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    64325.683870814828      );
  id6 -> SetBinError( xbin,    158.35333975093667      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    104532.19247629645      );
  id6 -> SetBinError( xbin,    219.49151193641924      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    45956.334051709047      );
  id6 -> SetBinError( xbin,    174.60619675871189      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    17607.236788311206      );
  id6 -> SetBinError( xbin,    128.43636675410218      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    7355.7198595033860      );
  id6 -> SetBinError( xbin,    93.333197267125342      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2852.2146251563845      );
  id6 -> SetBinError( xbin,    64.420573797339458      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    6220.0749938942745      );
  id7 -> SetBinError( xbin,    72.882227686168463      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    8350.3611062753953      );
  id7 -> SetBinError( xbin,    84.590954039252665      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    10920.307272084166      );
  id7 -> SetBinError( xbin,    97.342379878285996      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    13729.434088278851      );
  id7 -> SetBinError( xbin,    107.60079227158054      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    16865.705145459473      );
  id7 -> SetBinError( xbin,    120.36778347720879      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    20048.415003985439      );
  id7 -> SetBinError( xbin,    132.60647020572938      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    23225.922550322153      );
  id7 -> SetBinError( xbin,    147.09456038618040      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    26283.044581807349      );
  id7 -> SetBinError( xbin,    159.73471298522901      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    28876.306635094599      );
  id7 -> SetBinError( xbin,    168.64865043846908      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    31328.846116783436      );
  id7 -> SetBinError( xbin,    180.81705514048741      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    33311.375718372539      );
  id7 -> SetBinError( xbin,    187.69347037391776      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    34936.954821538173      );
  id7 -> SetBinError( xbin,    195.46292428167092      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    35755.107793725772      );
  id7 -> SetBinError( xbin,    199.23333626014539      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    35839.131870005316      );
  id7 -> SetBinError( xbin,    200.49652494989917      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    36029.510684318309      );
  id7 -> SetBinError( xbin,    200.98925605469938      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    35306.514969979427      );
  id7 -> SetBinError( xbin,    201.17279521103228      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    34139.698353159903      );
  id7 -> SetBinError( xbin,    195.71512922707032      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    32657.684645707919      );
  id7 -> SetBinError( xbin,    194.06010957630022      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    30739.171783515172      );
  id7 -> SetBinError( xbin,    186.56157860137958      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    28562.110812740309      );
  id7 -> SetBinError( xbin,    179.94736480427920      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    25849.322484571767      );
  id7 -> SetBinError( xbin,    168.52051609132158      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    23482.728615232358      );
  id7 -> SetBinError( xbin,    159.44123113377884      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    20300.949706797313      );
  id7 -> SetBinError( xbin,    144.97974342474566      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    17541.127923212389      );
  id7 -> SetBinError( xbin,    134.13312586254847      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    14685.290705355595      );
  id7 -> SetBinError( xbin,    122.98986511878920      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    12397.747967017189      );
  id7 -> SetBinError( xbin,    111.51744756838205      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    9896.9067631759972      );
  id7 -> SetBinError( xbin,    99.454525751685850      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    7660.9507071184025      );
  id7 -> SetBinError( xbin,    87.202554422598084      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    5627.1839481844399      );
  id7 -> SetBinError( xbin,    74.755645180554495      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    4104.1947845795357      );
  id7 -> SetBinError( xbin,    63.807532535676806      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    3513.8679512655322      );
  id8 -> SetBinError( xbin,    21.007572717030406      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    6320.8163606262779      );
  id8 -> SetBinError( xbin,    27.752539616210996      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    5552.7181041464783      );
  id8 -> SetBinError( xbin,    25.799910012603416      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    4891.5085109502515      );
  id8 -> SetBinError( xbin,    24.049335126438020      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    4323.2352390002115      );
  id8 -> SetBinError( xbin,    22.206864914079446      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    3843.5225959184995      );
  id8 -> SetBinError( xbin,    20.659716644508752      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    3336.4389956990813      );
  id8 -> SetBinError( xbin,    19.043118082647766      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    2998.8065252710817      );
  id8 -> SetBinError( xbin,    18.100761912897653      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    2704.0641103412017      );
  id8 -> SetBinError( xbin,    16.956256722917285      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2422.6815165167118      );
  id8 -> SetBinError( xbin,    15.779133693879087      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2181.9984099144617      );
  id8 -> SetBinError( xbin,    14.906234748611865      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    1956.2485640577161      );
  id8 -> SetBinError( xbin,    14.240002674271414      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    1746.8964414414584      );
  id8 -> SetBinError( xbin,    13.100544149302488      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1615.0104968978728      );
  id8 -> SetBinError( xbin,    12.702498724793340      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1462.8323233368567      );
  id8 -> SetBinError( xbin,    11.731236645613198      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1335.2270516424726      );
  id8 -> SetBinError( xbin,    11.411645793127633      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1224.0777907474383      );
  id8 -> SetBinError( xbin,    10.660375979695370      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1104.2038055783019      );
  id8 -> SetBinError( xbin,    10.107446898027922      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1036.8327823955858      );
  id8 -> SetBinError( xbin,    9.8181302981404315      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    948.74849060261295      );
  id8 -> SetBinError( xbin,    9.4157619112491684      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    862.12909143510899      );
  id8 -> SetBinError( xbin,    8.9764199334083248      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    791.83290750813921      );
  id8 -> SetBinError( xbin,    8.3610837707328081      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    730.17498776352613      );
  id8 -> SetBinError( xbin,    7.9853456780195735      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    686.16616273518605      );
  id8 -> SetBinError( xbin,    7.7547975585601678      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    608.46781461239095      );
  id8 -> SetBinError( xbin,    7.1118924365794616      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    554.11185905641457      );
  id8 -> SetBinError( xbin,    6.8814252600572710      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    522.74639566974633      );
  id8 -> SetBinError( xbin,    6.4557472370266575      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    477.67683037954004      );
  id8 -> SetBinError( xbin,    6.3181752989143511      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
