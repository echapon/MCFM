// Cross-section is:      1893384.4197524707 +/-          695.5015415672)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -72331.50991   -3.82%
//        GQB    |      -37200.51989   -1.96%
//        QG     |      -57803.59294   -3.05%
//        QBG    |      -35615.69052   -1.88%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      928993.90158   49.07%
//        QBQ    |     1175836.80394   62.10%

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
//Wm_CT10nlo_44TeV                [runstring]  
//           4395.0000            [sqrts]  
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
//           4395.0000            [m34max]  
//             60.0000            [m56min]  
//            120.0000            [m56max]  
//                   T            [inclusive]  
//                ankt            [algorithm]  
//             25.0000            [ptjetmin]  
//              0.0000            [etajetmin]  
//              6.0000            [etajetmax]  
//              0.5000            [Rcut]  
//                   T            [makecuts]  
//             25.0000            [leptpt]  
//              6.0000            [leptrap]  
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
//              0.0005            [cutoff]  
//              0.1000            [aii]  
//              0.1000            [aif]  
//              0.1000            [afi]  
//              1.0000            [aff]  
//              1.0000            [bfi]  
//              1.0000            [bff]  


  {
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wm_CT10nlo_44TeV.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    1.0668553631971924E-003 );
  id1 -> SetBinError( xbin,    1.0668553057007783E-003 );
   int xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,   0.10540503289713306      );
  id1 -> SetBinError( xbin,   0.10450220532473604      );
   int xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    1.3118818024451551      );
  id1 -> SetBinError( xbin,    1.0369516999475623      );
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    38.221655158849046      );
  id1 -> SetBinError( xbin,    14.609122880097649      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    931.76610476195731      );
  id1 -> SetBinError( xbin,    66.456553437096119      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    9466.2362059401312      );
  id1 -> SetBinError( xbin,    309.63065166035335      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    36275.238670434715      );
  id1 -> SetBinError( xbin,    789.31480752879963      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    81669.825105706172      );
  id1 -> SetBinError( xbin,    1149.5977771193909      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    139768.31065741679      );
  id1 -> SetBinError( xbin,    1316.7682165656709      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    193647.17812581369      );
  id1 -> SetBinError( xbin,    1526.7917905730960      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    247316.40370538295      );
  id1 -> SetBinError( xbin,    1692.3155596005331      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    287973.55897907203      );
  id1 -> SetBinError( xbin,    1778.9034749270356      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    318871.51045386068      );
  id1 -> SetBinError( xbin,    1828.0991432129081      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    338217.59859851806      );
  id1 -> SetBinError( xbin,    1919.8966298025318      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    355318.81705977372      );
  id1 -> SetBinError( xbin,    1940.7426076948266      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    361544.99735123175      );
  id1 -> SetBinError( xbin,    1891.7694094870417      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    369591.67188318243      );
  id1 -> SetBinError( xbin,    1872.2113799914830      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    368477.34783006099      );
  id1 -> SetBinError( xbin,    1862.8989035456889      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    373627.35142423114      );
  id1 -> SetBinError( xbin,    1860.1730439616078      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    371628.92324020603      );
  id1 -> SetBinError( xbin,    1847.8411400461525      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    370462.19836480933      );
  id1 -> SetBinError( xbin,    1825.2564341691589      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    364124.93043572112      );
  id1 -> SetBinError( xbin,    1836.7246079463739      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    362921.57605064876      );
  id1 -> SetBinError( xbin,    1846.7713847498139      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    362254.02897318639      );
  id1 -> SetBinError( xbin,    1831.5499723407304      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    358278.20608460699      );
  id1 -> SetBinError( xbin,    1811.7077572250098      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    347965.97823977761      );
  id1 -> SetBinError( xbin,    1796.2097100780884      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    345491.19249158772      );
  id1 -> SetBinError( xbin,    1787.0730588035412      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    340541.15890466905      );
  id1 -> SetBinError( xbin,    1806.5501298468305      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    327666.15130932158      );
  id1 -> SetBinError( xbin,    1768.0055891144007      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    318047.10881902603      );
  id1 -> SetBinError( xbin,    1794.6843672625184      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    307364.52386615513      );
  id1 -> SetBinError( xbin,    1774.7496144098116      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    296689.47877441981      );
  id1 -> SetBinError( xbin,    1773.3169990592071      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    276405.91290677415      );
  id1 -> SetBinError( xbin,    1676.9491294374252      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    259944.85476669855      );
  id1 -> SetBinError( xbin,    1677.5152157917012      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    235149.09048506257      );
  id1 -> SetBinError( xbin,    1617.9443633996336      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    206225.36380151365      );
  id1 -> SetBinError( xbin,    1520.6553317901582      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    175724.14152141151      );
  id1 -> SetBinError( xbin,    1420.6711539985317      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    140820.16038597171      );
  id1 -> SetBinError( xbin,    1305.8123597762738      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    102113.84505277377      );
  id1 -> SetBinError( xbin,    1109.2946100599504      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    65511.209342059476      );
  id1 -> SetBinError( xbin,    1027.0801313053980      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    33669.493753071489      );
  id1 -> SetBinError( xbin,    759.66725829066274      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    11661.269851850471      );
  id1 -> SetBinError( xbin,    558.63437653836854      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    3130.2693185380808      );
  id1 -> SetBinError( xbin,    138.25189253543573      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    399.21852349110304      );
  id1 -> SetBinError( xbin,    27.054515248399294      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    10.058324378421695      );
  id1 -> SetBinError( xbin,    3.2650222806397862      );
   int xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,   0.44012084571250187      );
  id1 -> SetBinError( xbin,   0.27710865774971138      );
   int xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    6.4441109976817776E-002 );
  id1 -> SetBinError( xbin,    6.3529615530257752E-002 );
   int xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    4.3444322420347244E-003 );
  id1 -> SetBinError( xbin,    4.3444320078986987E-003 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    783070.55462253932      );
  id2 -> SetBinError( xbin,    12390.964099605057      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    740558.38083056058      );
  id2 -> SetBinError( xbin,    9026.1623410668562      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    723929.94057505869      );
  id2 -> SetBinError( xbin,    9372.7529926197876      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    662084.76539371838      );
  id2 -> SetBinError( xbin,    5273.9687651128816      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    640557.63228917134      );
  id2 -> SetBinError( xbin,    5674.7142889097822      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    594009.94992774038      );
  id2 -> SetBinError( xbin,    5148.4254977288274      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    556842.96231334284      );
  id2 -> SetBinError( xbin,    4360.6515177438323      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    530290.59979448840      );
  id2 -> SetBinError( xbin,    4991.9580298275969      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    492011.71370612952      );
  id2 -> SetBinError( xbin,    3808.7842473624569      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    461308.84351313015      );
  id2 -> SetBinError( xbin,    3557.2439711050388      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    427342.42744218151      );
  id2 -> SetBinError( xbin,    4685.9614439097040      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    389179.71786352369      );
  id2 -> SetBinError( xbin,    2522.6043150212213      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    363880.79667749110      );
  id2 -> SetBinError( xbin,    3248.9611418856734      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    327040.06202227017      );
  id2 -> SetBinError( xbin,    2252.6534053848750      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    303800.70842372667      );
  id2 -> SetBinError( xbin,    2095.1745610699422      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    273075.28564884950      );
  id2 -> SetBinError( xbin,    3013.4714555271034      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    244343.05482727117      );
  id2 -> SetBinError( xbin,    1680.3070468836947      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    219302.30859829590      );
  id2 -> SetBinError( xbin,    1507.2858043991539      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    193673.89810663695      );
  id2 -> SetBinError( xbin,    1268.5824734849698      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    173254.91276983425      );
  id2 -> SetBinError( xbin,    1343.4099989917720      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    150738.26839816821      );
  id2 -> SetBinError( xbin,    1125.2484051975334      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    133043.46086473818      );
  id2 -> SetBinError( xbin,    1029.8249198901387      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    116795.54584824755      );
  id2 -> SetBinError( xbin,    1129.1209679807682      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    99955.914212381831      );
  id2 -> SetBinError( xbin,    797.32902840267457      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    88561.962812710350      );
  id2 -> SetBinError( xbin,    736.68227168205703      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    77901.282661712423      );
  id2 -> SetBinError( xbin,    868.25321309390699      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    70240.244723140248      );
  id2 -> SetBinError( xbin,    627.62507770362299      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    64536.867982255309      );
  id2 -> SetBinError( xbin,    925.54747923007369      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    60023.105292441316      );
  id2 -> SetBinError( xbin,    605.41140348360000      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    56525.157002479704      );
  id2 -> SetBinError( xbin,    578.75339271332621      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    55982.850673390843      );
  id2 -> SetBinError( xbin,    573.02024445444681      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    58938.558154214305      );
  id2 -> SetBinError( xbin,    675.77915528143274      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    61169.035049216094      );
  id2 -> SetBinError( xbin,    582.37727814547418      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    67001.863510190742      );
  id2 -> SetBinError( xbin,    800.33758636477330      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    74831.061369144518      );
  id2 -> SetBinError( xbin,    736.93135315627342      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    84514.295649139676      );
  id2 -> SetBinError( xbin,    1091.7671955090866      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    94488.310356100556      );
  id2 -> SetBinError( xbin,    908.14196360487949      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    107800.56042735708      );
  id2 -> SetBinError( xbin,    906.97053022460102      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    123422.93473776651      );
  id2 -> SetBinError( xbin,    986.47348371408702      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    138739.92937821828      );
  id2 -> SetBinError( xbin,    1126.5355111236008      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    157186.15348740257      );
  id2 -> SetBinError( xbin,    1200.0202500572884      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    174479.89122763567      );
  id2 -> SetBinError( xbin,    1410.1312024222732      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    195588.15585281016      );
  id2 -> SetBinError( xbin,    1482.1037268432133      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    217071.42931577042      );
  id2 -> SetBinError( xbin,    1590.3177908792948      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    238950.21318722476      );
  id2 -> SetBinError( xbin,    1672.2586680106915      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    264553.97477396246      );
  id2 -> SetBinError( xbin,    2050.6857692218218      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    285932.58554978919      );
  id2 -> SetBinError( xbin,    2282.7958752172099      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    315810.05718371662      );
  id2 -> SetBinError( xbin,    2405.7141378312404      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    341957.98004864040      );
  id2 -> SetBinError( xbin,    5215.1643636063163      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    367600.44941442140      );
  id2 -> SetBinError( xbin,    3777.9910705030675      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    388027.18324781657      );
  id2 -> SetBinError( xbin,    3132.1134305791879      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    424275.64155972493      );
  id2 -> SetBinError( xbin,    3414.4452294677167      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    450029.48063974001      );
  id2 -> SetBinError( xbin,    4412.1320031976593      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    477651.33028463472      );
  id2 -> SetBinError( xbin,    4291.8516276858572      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    506347.58690005861      );
  id2 -> SetBinError( xbin,    6010.6014320464101      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    528957.20140700089      );
  id2 -> SetBinError( xbin,    4976.3519934821234      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    549549.54648157966      );
  id2 -> SetBinError( xbin,    5137.3012942692703      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    577722.08717255073      );
  id2 -> SetBinError( xbin,    5220.4493147110243      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    614971.84680415725      );
  id2 -> SetBinError( xbin,    7369.0225806908156      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    641376.02543395525      );
  id2 -> SetBinError( xbin,    9229.3051711916141      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -5.0999999999999996      );
  id3 -> SetBinContent( xbin,   -2.1088640665399772E-002 );
  id3 -> SetBinError( xbin,    3.6870437471203707E-002 );
   int xbin = id3->FindBin(  -4.9000000000000004      );
  id3 -> SetBinContent( xbin,    96.769103113105416      );
  id3 -> SetBinError( xbin,    26.401744518146202      );
   int xbin = id3->FindBin(  -4.7000000000000002      );
  id3 -> SetBinContent( xbin,    873.31247664784860      );
  id3 -> SetBinError( xbin,    105.17362990887133      );
   int xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,    5163.8915739616887      );
  id3 -> SetBinError( xbin,    357.41346006771124      );
   int xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,    16299.141995043265      );
  id3 -> SetBinError( xbin,    622.77253382980666      );
   int xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    35704.437427354642      );
  id3 -> SetBinError( xbin,    1198.2744203796076      );
   int xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    59199.371442598109      );
  id3 -> SetBinError( xbin,    1415.7569118709416      );
   int xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    97020.115077303184      );
  id3 -> SetBinError( xbin,    1420.8733135428590      );
   int xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    139837.65769000209      );
  id3 -> SetBinError( xbin,    1593.3841136279602      );
   int xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    175384.75607431980      );
  id3 -> SetBinError( xbin,    1676.9690638460236      );
   int xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    211735.00398018831      );
  id3 -> SetBinError( xbin,    2055.7195211101043      );
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    241119.26203023331      );
  id3 -> SetBinError( xbin,    2217.0682068284732      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    267681.46507229283      );
  id3 -> SetBinError( xbin,    2029.0579965201734      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    286002.52063002728      );
  id3 -> SetBinError( xbin,    1947.8551736558995      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    294720.38771395932      );
  id3 -> SetBinError( xbin,    1994.6024816893200      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    303450.34349487687      );
  id3 -> SetBinError( xbin,    2261.5829531829763      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    312513.21338954865      );
  id3 -> SetBinError( xbin,    2149.2578951215019      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    319129.52737466223      );
  id3 -> SetBinError( xbin,    1822.3084480876353      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    318023.06476996420      );
  id3 -> SetBinError( xbin,    1783.7253937713483      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    320028.41466607765      );
  id3 -> SetBinError( xbin,    1754.5332860141568      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    322653.04637966672      );
  id3 -> SetBinError( xbin,    1732.5211945051062      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    320863.99834467005      );
  id3 -> SetBinError( xbin,    1743.8343810478596      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    318684.76437174645      );
  id3 -> SetBinError( xbin,    1705.2712645687982      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    320591.96962510259      );
  id3 -> SetBinError( xbin,    1700.6130383388056      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    317404.34001645725      );
  id3 -> SetBinError( xbin,    1859.7336739488396      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    315822.82548093284      );
  id3 -> SetBinError( xbin,    1844.2199830465333      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    311329.38956874429      );
  id3 -> SetBinError( xbin,    1717.3722687999100      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    307265.49573983921      );
  id3 -> SetBinError( xbin,    1750.6990902414013      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    301526.28587196942      );
  id3 -> SetBinError( xbin,    1732.4125154990356      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    296657.50543546304      );
  id3 -> SetBinError( xbin,    1697.6636044819143      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    289480.31457101367      );
  id3 -> SetBinError( xbin,    1732.3157289410021      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    278171.66100887593      );
  id3 -> SetBinError( xbin,    1674.5891420758417      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    272210.80894407706      );
  id3 -> SetBinError( xbin,    1701.6063069512156      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    261546.03722382616      );
  id3 -> SetBinError( xbin,    1743.2050160853926      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    252587.83883734071      );
  id3 -> SetBinError( xbin,    1758.8258949962981      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    239325.70309531316      );
  id3 -> SetBinError( xbin,    1709.2639436187792      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    228806.25574759743      );
  id3 -> SetBinError( xbin,    1730.6064998892068      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    215054.47894526785      );
  id3 -> SetBinError( xbin,    2942.0867893160575      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    190292.19970934093      );
  id3 -> SetBinError( xbin,    2936.7643519056264      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    172730.99852601066      );
  id3 -> SetBinError( xbin,    1693.2432259520167      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    145623.68003727490      );
  id3 -> SetBinError( xbin,    1559.7776394375408      );
   int xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    121581.69205510127      );
  id3 -> SetBinError( xbin,    1466.2360177955329      );
   int xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    97111.011870818067      );
  id3 -> SetBinError( xbin,    1618.6533671452116      );
   int xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    69989.709729985232      );
  id3 -> SetBinError( xbin,    1519.1443645405468      );
   int xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    46693.971559468730      );
  id3 -> SetBinError( xbin,    1027.0782798490764      );
   int xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    28354.449168244508      );
  id3 -> SetBinError( xbin,    824.82882162651538      );
   int xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    13658.927496670847      );
  id3 -> SetBinError( xbin,    568.12034405629572      );
   int xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,    5136.8720233211097      );
  id3 -> SetBinError( xbin,    329.38810303089480      );
   int xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    1368.8253378524221      );
  id3 -> SetBinError( xbin,    394.93489752655222      );
   int xbin = id3->FindBin(   4.7000000000000011      );
  id3 -> SetBinContent( xbin,    415.41505123575007      );
  id3 -> SetBinError( xbin,    47.649500665672875      );
   int xbin = id3->FindBin(   4.9000000000000004      );
  id3 -> SetBinContent( xbin,    15.160181844368285      );
  id3 -> SetBinError( xbin,    4.5229305191998952      );
   int xbin = id3->FindBin(   5.1000000000000014      );
  id3 -> SetBinContent( xbin,    3.7809786479630139E-002 );
  id3 -> SetBinError( xbin,   0.15968139932008307      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -4.6500000000000004      );
  id4 -> SetBinContent( xbin,    1.5057477986565507E-004 );
  id4 -> SetBinError( xbin,    1.5057477175067511E-004 );
   int xbin = id4->FindBin(  -4.5499999999999998      );
  id4 -> SetBinContent( xbin,    1.6942797628305613      );
  id4 -> SetBinError( xbin,   0.80739622097583252      );
   int xbin = id4->FindBin(  -4.4500000000000002      );
  id4 -> SetBinContent( xbin,    27.496107158774649      );
  id4 -> SetBinError( xbin,    9.1528632684483853      );
   int xbin = id4->FindBin(  -4.3499999999999996      );
  id4 -> SetBinContent( xbin,    256.67820032619153      );
  id4 -> SetBinError( xbin,    57.270116371348259      );
   int xbin = id4->FindBin(  -4.2500000000000000      );
  id4 -> SetBinContent( xbin,    751.86225139682074      );
  id4 -> SetBinError( xbin,    143.98704514325561      );
   int xbin = id4->FindBin(  -4.1500000000000004      );
  id4 -> SetBinContent( xbin,    2090.8644347816585      );
  id4 -> SetBinError( xbin,    260.07134518453978      );
   int xbin = id4->FindBin(  -4.0499999999999998      );
  id4 -> SetBinContent( xbin,    4463.6347242270067      );
  id4 -> SetBinError( xbin,    480.67672108200679      );
   int xbin = id4->FindBin(  -3.9500000000000002      );
  id4 -> SetBinContent( xbin,    8963.0540928670634      );
  id4 -> SetBinError( xbin,    856.17414441418043      );
   int xbin = id4->FindBin(  -3.8499999999999996      );
  id4 -> SetBinContent( xbin,    13685.910394717090      );
  id4 -> SetBinError( xbin,    984.72460344590741      );
   int xbin = id4->FindBin(  -3.7500000000000000      );
  id4 -> SetBinContent( xbin,    24501.007872196504      );
  id4 -> SetBinError( xbin,    1112.0564040240233      );
   int xbin = id4->FindBin(  -3.6499999999999999      );
  id4 -> SetBinContent( xbin,    34419.263315299031      );
  id4 -> SetBinError( xbin,    1355.6444131969865      );
   int xbin = id4->FindBin(  -3.5499999999999998      );
  id4 -> SetBinContent( xbin,    40516.302383999995      );
  id4 -> SetBinError( xbin,    1567.1678222322628      );
   int xbin = id4->FindBin(  -3.4500000000000002      );
  id4 -> SetBinContent( xbin,    58617.806125453033      );
  id4 -> SetBinError( xbin,    1752.4669115162872      );
   int xbin = id4->FindBin(  -3.3499999999999996      );
  id4 -> SetBinContent( xbin,    78856.638779900299      );
  id4 -> SetBinError( xbin,    1982.4378967827381      );
   int xbin = id4->FindBin(  -3.2500000000000000      );
  id4 -> SetBinContent( xbin,    93720.099120993313      );
  id4 -> SetBinError( xbin,    2132.8100578075146      );
   int xbin = id4->FindBin(  -3.1499999999999999      );
  id4 -> SetBinContent( xbin,    112106.39163409719      );
  id4 -> SetBinError( xbin,    2339.4269553863628      );
   int xbin = id4->FindBin(  -3.0499999999999998      );
  id4 -> SetBinContent( xbin,    135677.42651467965      );
  id4 -> SetBinError( xbin,    3024.1197716066590      );
   int xbin = id4->FindBin(  -2.9499999999999997      );
  id4 -> SetBinContent( xbin,    154187.35429996296      );
  id4 -> SetBinError( xbin,    3107.4304363311617      );
   int xbin = id4->FindBin(  -2.8500000000000001      );
  id4 -> SetBinContent( xbin,    175201.17320636963      );
  id4 -> SetBinError( xbin,    2987.8238761439411      );
   int xbin = id4->FindBin(  -2.7500000000000000      );
  id4 -> SetBinContent( xbin,    190062.70076972852      );
  id4 -> SetBinError( xbin,    3155.7053276117849      );
   int xbin = id4->FindBin(  -2.6499999999999999      );
  id4 -> SetBinContent( xbin,    210356.36957381840      );
  id4 -> SetBinError( xbin,    2933.2719834878212      );
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    223372.80288451674      );
  id4 -> SetBinError( xbin,    3402.6853826526967      );
   int xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    243806.54650414726      );
  id4 -> SetBinError( xbin,    3421.3274040880433      );
   int xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    249207.39146349375      );
  id4 -> SetBinError( xbin,    2990.4686896087719      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    266949.48745276080      );
  id4 -> SetBinError( xbin,    3054.0517547161089      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    274384.69903148175      );
  id4 -> SetBinError( xbin,    3072.6451042555177      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    284491.94879590481      );
  id4 -> SetBinError( xbin,    2970.1856115397368      );
   int xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    292236.48530069779      );
  id4 -> SetBinError( xbin,    2995.1005190788710      );
   int xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    294249.18011408503      );
  id4 -> SetBinError( xbin,    3023.3356666757659      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    297409.66061519546      );
  id4 -> SetBinError( xbin,    3119.0090976671595      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    310425.58973718446      );
  id4 -> SetBinError( xbin,    3362.1447132662056      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    305101.82297417818      );
  id4 -> SetBinError( xbin,    3146.3523546045617      );
   int xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    308520.65091154038      );
  id4 -> SetBinError( xbin,    3069.6992366331529      );
   int xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    313891.83768847532      );
  id4 -> SetBinError( xbin,    3032.7483613264089      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    320692.19884896628      );
  id4 -> SetBinError( xbin,    3173.5373043056024      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    315556.97946576012      );
  id4 -> SetBinError( xbin,    3108.3019679874351      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    319901.04147028772      );
  id4 -> SetBinError( xbin,    2831.8797075238053      );
   int xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    316745.81148775888      );
  id4 -> SetBinError( xbin,    3128.8949948720738      );
   int xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    325371.27804559655      );
  id4 -> SetBinError( xbin,    3254.7406518118946      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    320762.42873824365      );
  id4 -> SetBinError( xbin,    2966.0085060518454      );
   int xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    319981.09337837872      );
  id4 -> SetBinError( xbin,    2778.1700528460310      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    324632.28692442435      );
  id4 -> SetBinError( xbin,    2770.6826364019257      );
   int xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    324135.84368821559      );
  id4 -> SetBinError( xbin,    2804.3252890415365      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    315495.57618787687      );
  id4 -> SetBinError( xbin,    2799.8284386144151      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    320010.44557177648      );
  id4 -> SetBinError( xbin,    2702.3379166242398      );
   int xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    320235.59675625194      );
  id4 -> SetBinError( xbin,    2697.7543558755265      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    320253.37310896936      );
  id4 -> SetBinError( xbin,    2838.4341128951064      );
   int xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    322880.73906047473      );
  id4 -> SetBinError( xbin,    3081.9676504004842      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    315379.57432598551      );
  id4 -> SetBinError( xbin,    2958.6831656981049      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    317321.35909037018      );
  id4 -> SetBinError( xbin,    2785.0335893335214      );
   int xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    316766.66306265088      );
  id4 -> SetBinError( xbin,    2836.3909603734219      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    311639.17237672227      );
  id4 -> SetBinError( xbin,    2904.7907734160549      );
   int xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    308785.79780564737      );
  id4 -> SetBinError( xbin,    3137.8356658499997      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    309266.51070386142      );
  id4 -> SetBinError( xbin,    3836.3911648419630      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    311347.87162396405      );
  id4 -> SetBinError( xbin,    3623.1166642647604      );
   int xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    303938.87666352623      );
  id4 -> SetBinError( xbin,    2693.9929809597493      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    299021.74394323741      );
  id4 -> SetBinError( xbin,    2677.6784066516857      );
   int xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    301755.48138652224      );
  id4 -> SetBinError( xbin,    3155.7757315667254      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    296448.53299896483      );
  id4 -> SetBinError( xbin,    3241.4275147475482      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    295527.56010016956      );
  id4 -> SetBinError( xbin,    2801.6289062489013      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    292370.55529950268      );
  id4 -> SetBinError( xbin,    2870.6191419815468      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    283613.09855068661      );
  id4 -> SetBinError( xbin,    2756.5546192390807      );
   int xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    275620.64917431719      );
  id4 -> SetBinError( xbin,    2710.6387030508517      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    279598.82454454736      );
  id4 -> SetBinError( xbin,    2696.5538729653349      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    273064.18705199950      );
  id4 -> SetBinError( xbin,    2638.2369285539412      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    268546.81936499843      );
  id4 -> SetBinError( xbin,    2617.7447017159716      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    263497.98907658673      );
  id4 -> SetBinError( xbin,    2636.0789205190445      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    257205.42762248346      );
  id4 -> SetBinError( xbin,    2623.1849685262291      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    250213.23733281335      );
  id4 -> SetBinError( xbin,    2695.5569254352572      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    243565.78965465087      );
  id4 -> SetBinError( xbin,    2689.2136240262153      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    244013.89665907665      );
  id4 -> SetBinError( xbin,    3021.8037543598580      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    230880.78131032523      );
  id4 -> SetBinError( xbin,    3042.0676533106002      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    233733.14710718254      );
  id4 -> SetBinError( xbin,    3281.4094320596150      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    222564.09864463779      );
  id4 -> SetBinError( xbin,    3260.3358660786212      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    209942.76001577845      );
  id4 -> SetBinError( xbin,    2620.6205202530873      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    209751.98583640694      );
  id4 -> SetBinError( xbin,    4252.6175730114928      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    194810.20397282441      );
  id4 -> SetBinError( xbin,    4302.9793555306687      );
   int xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    182330.39109626831      );
  id4 -> SetBinError( xbin,    2748.7036700122785      );
   int xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    176450.40410452534      );
  id4 -> SetBinError( xbin,    2675.6658828441596      );
   int xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    160555.26616506724      );
  id4 -> SetBinError( xbin,    2747.0224758028144      );
   int xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    146902.97051296031      );
  id4 -> SetBinError( xbin,    2550.8139779512053      );
   int xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    134626.24481549475      );
  id4 -> SetBinError( xbin,    2297.2525657072561      );
   int xbin = id4->FindBin(   3.5500000000000007      );
  id4 -> SetBinContent( xbin,    125077.32992607936      );
  id4 -> SetBinError( xbin,    2549.8164176256987      );
   int xbin = id4->FindBin(   3.6500000000000004      );
  id4 -> SetBinContent( xbin,    111508.79602028940      );
  id4 -> SetBinError( xbin,    2551.6489642338920      );
   int xbin = id4->FindBin(   3.7500000000000000      );
  id4 -> SetBinContent( xbin,    96416.805622869113      );
  id4 -> SetBinError( xbin,    2303.7752705209109      );
   int xbin = id4->FindBin(   3.8499999999999996      );
  id4 -> SetBinContent( xbin,    83787.909366681575      );
  id4 -> SetBinError( xbin,    2120.5377331852496      );
   int xbin = id4->FindBin(   3.9500000000000011      );
  id4 -> SetBinContent( xbin,    76040.424454662891      );
  id4 -> SetBinError( xbin,    1927.1344643325165      );
   int xbin = id4->FindBin(   4.0500000000000007      );
  id4 -> SetBinContent( xbin,    60884.815875201595      );
  id4 -> SetBinError( xbin,    1697.0207953471170      );
   int xbin = id4->FindBin(   4.1500000000000004      );
  id4 -> SetBinContent( xbin,    46461.689777109772      );
  id4 -> SetBinError( xbin,    1576.5281803297819      );
   int xbin = id4->FindBin(   4.2500000000000000      );
  id4 -> SetBinContent( xbin,    38661.334707794274      );
  id4 -> SetBinError( xbin,    1574.6584233673179      );
   int xbin = id4->FindBin(   4.3499999999999996      );
  id4 -> SetBinContent( xbin,    29045.581326002728      );
  id4 -> SetBinError( xbin,    1326.1946039923766      );
   int xbin = id4->FindBin(   4.4500000000000011      );
  id4 -> SetBinContent( xbin,    19656.597057527539      );
  id4 -> SetBinError( xbin,    1081.7174239739738      );
   int xbin = id4->FindBin(   4.5500000000000007      );
  id4 -> SetBinContent( xbin,    15368.370301181594      );
  id4 -> SetBinError( xbin,    928.87584719148606      );
   int xbin = id4->FindBin(   4.6500000000000004      );
  id4 -> SetBinContent( xbin,    8996.1230575374866      );
  id4 -> SetBinError( xbin,    741.05878688267262      );
   int xbin = id4->FindBin(   4.7500000000000000      );
  id4 -> SetBinContent( xbin,    5864.2363237420486      );
  id4 -> SetBinError( xbin,    574.06611434466436      );
   int xbin = id4->FindBin(   4.8500000000000014      );
  id4 -> SetBinContent( xbin,    3061.7528307741177      );
  id4 -> SetBinError( xbin,    386.35944294399968      );
   int xbin = id4->FindBin(   4.9500000000000011      );
  id4 -> SetBinContent( xbin,    1505.7616302321555      );
  id4 -> SetBinError( xbin,    772.27576738442019      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    32677.188089243587      );
  id5 -> SetBinError( xbin,    333.40758999137557      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    69749.788156152179      );
  id5 -> SetBinError( xbin,    425.70643747690150      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    78211.835897037134      );
  id5 -> SetBinError( xbin,    504.48734691491603      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    85377.227354744842      );
  id5 -> SetBinError( xbin,    595.70223591171703      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    94546.211549431828      );
  id5 -> SetBinError( xbin,    638.71154639306053      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    105787.49305550969      );
  id5 -> SetBinError( xbin,    742.87285167430139      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    122842.95547874662      );
  id5 -> SetBinError( xbin,    815.05353841402041      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    123187.66263268742      );
  id5 -> SetBinError( xbin,    1054.8064791472343      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    93809.212686050407      );
  id5 -> SetBinError( xbin,    893.72508500152082      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    44570.817927044067      );
  id5 -> SetBinError( xbin,    220.01846040020513      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    23887.178543866437      );
  id5 -> SetBinError( xbin,    130.58273574855838      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    14967.604439918483      );
  id5 -> SetBinError( xbin,    97.894746837401200      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    10591.409115220567      );
  id5 -> SetBinError( xbin,    71.683634745309860      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    7914.1063444259271      );
  id5 -> SetBinError( xbin,    65.868892202023503      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    5996.4887796655112      );
  id5 -> SetBinError( xbin,    58.037725764129263      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    4761.1979744204218      );
  id5 -> SetBinError( xbin,    49.919257616268489      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    3833.0336872512776      );
  id5 -> SetBinError( xbin,    50.494495121251781      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3136.3331152269784      );
  id5 -> SetBinError( xbin,    46.043960633588739      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    2671.7545178045712      );
  id5 -> SetBinError( xbin,    38.747166797072481      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2194.7092575793099      );
  id5 -> SetBinError( xbin,    28.696298370469417      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1932.5031855633938      );
  id5 -> SetBinError( xbin,    56.246514713303299      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1575.3531295732903      );
  id5 -> SetBinError( xbin,    54.703362954139322      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1413.4871430790843      );
  id5 -> SetBinError( xbin,    31.157320278117883      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1159.9537959458710      );
  id5 -> SetBinError( xbin,    30.176303032207922      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1026.3615440128744      );
  id5 -> SetBinError( xbin,    17.149562468558020      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    944.74958643583454      );
  id5 -> SetBinError( xbin,    20.392741584396138      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    788.27409629430281      );
  id5 -> SetBinError( xbin,    23.401747314625755      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    608.26220246948128      );
  id5 -> SetBinError( xbin,    42.748621493979350      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    674.50770269119187      );
  id5 -> SetBinError( xbin,    40.527823540754213      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    540.29278167791176      );
  id5 -> SetBinError( xbin,    13.679104634995362      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    498.80557453420926      );
  id5 -> SetBinError( xbin,    16.436745949015503      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    425.84899435825741      );
  id5 -> SetBinError( xbin,    14.915179757221630      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    370.14968293169170      );
  id5 -> SetBinError( xbin,    12.156328971528136      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    344.67792693067514      );
  id5 -> SetBinError( xbin,    13.465841354159389      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    326.64379333822990      );
  id5 -> SetBinError( xbin,    11.641877778330596      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    288.98998359390237      );
  id5 -> SetBinError( xbin,    12.379433686446752      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    244.71183520218170      );
  id5 -> SetBinError( xbin,    13.325493050936551      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    243.01537374270816      );
  id5 -> SetBinError( xbin,    8.9629648060306053      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1817.9846629153797      );
  id6 -> SetBinError( xbin,    36.334035599571109      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    6046.3815956115122      );
  id6 -> SetBinError( xbin,    67.113177242351554      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    11767.052520156811      );
  id6 -> SetBinError( xbin,    93.212405681925532      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    20378.839848835079      );
  id6 -> SetBinError( xbin,    119.21812473869770      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    33221.748579218438      );
  id6 -> SetBinError( xbin,    145.24888168661295      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    53778.493950847158      );
  id6 -> SetBinError( xbin,    175.44735950319316      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    92280.842284538870      );
  id6 -> SetBinError( xbin,    229.86891243251969      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    149201.79027949285      );
  id6 -> SetBinError( xbin,    312.56666282862585      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    68916.469045861100      );
  id6 -> SetBinError( xbin,    254.71049733729450      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    28205.718907690112      );
  id6 -> SetBinError( xbin,    192.05559890980584      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    12377.351481714984      );
  id6 -> SetBinError( xbin,    143.55156336567259      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    5482.1092762484996      );
  id6 -> SetBinError( xbin,    108.75917181375918      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    9854.9707680288502      );
  id7 -> SetBinError( xbin,    101.63028870776955      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    13068.056378761556      );
  id7 -> SetBinError( xbin,    118.26467477035170      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    17224.091078695310      );
  id7 -> SetBinError( xbin,    140.59659199903524      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    21150.022998791275      );
  id7 -> SetBinError( xbin,    156.83005065828803      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    25311.327093193075      );
  id7 -> SetBinError( xbin,    175.30344019514979      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    30268.390569301893      );
  id7 -> SetBinError( xbin,    196.98018073311454      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    33705.751705648690      );
  id7 -> SetBinError( xbin,    212.47832435938659      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    37952.464009275915      );
  id7 -> SetBinError( xbin,    234.00968324215430      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    41176.684385029737      );
  id7 -> SetBinError( xbin,    249.49996040407999      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    44201.725423657568      );
  id7 -> SetBinError( xbin,    261.78224411388197      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    46223.445912762894      );
  id7 -> SetBinError( xbin,    272.36605023684706      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    47888.646818132023      );
  id7 -> SetBinError( xbin,    282.76736313709779      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    49314.841169532432      );
  id7 -> SetBinError( xbin,    290.25080319557009      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    49288.987108466477      );
  id7 -> SetBinError( xbin,    291.57939552900996      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    49492.690898810179      );
  id7 -> SetBinError( xbin,    297.31123942858659      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    48905.384077202500      );
  id7 -> SetBinError( xbin,    295.68269596323034      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    47152.243351920202      );
  id7 -> SetBinError( xbin,    288.96951453961827      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    45940.579427853285      );
  id7 -> SetBinError( xbin,    286.66919076653164      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    42586.552833264461      );
  id7 -> SetBinError( xbin,    270.64320900898053      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    39934.013174666907      );
  id7 -> SetBinError( xbin,    263.71781874292793      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    37034.087154174325      );
  id7 -> SetBinError( xbin,    251.10329472198958      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    33583.163958825578      );
  id7 -> SetBinError( xbin,    235.57870445529650      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    29400.495340057510      );
  id7 -> SetBinError( xbin,    210.95943967794523      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    25862.329402537453      );
  id7 -> SetBinError( xbin,    197.18153243118624      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    21845.016224480642      );
  id7 -> SetBinError( xbin,    177.11909265551506      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    18057.538116646709      );
  id7 -> SetBinError( xbin,    158.80353825553368      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    14630.567341156491      );
  id7 -> SetBinError( xbin,    137.56785991603147      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    11288.273902444489      );
  id7 -> SetBinError( xbin,    119.67610318636015      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    8474.7031686965565      );
  id7 -> SetBinError( xbin,    101.92112608293695      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    6015.3003141300078      );
  id7 -> SetBinError( xbin,    84.825237593550611      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5554.2157346519643      );
  id8 -> SetBinError( xbin,    32.381116427794069      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    9940.8515584103534      );
  id8 -> SetBinError( xbin,    42.927631277742996      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    8539.2542304604212      );
  id8 -> SetBinError( xbin,    38.832187514837827      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    7515.8480495112090      );
  id8 -> SetBinError( xbin,    35.966496623999483      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    6532.7751053643569      );
  id8 -> SetBinError( xbin,    33.143388268267394      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    5776.9292296388412      );
  id8 -> SetBinError( xbin,    31.008272588413572      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5033.8839083060511      );
  id8 -> SetBinError( xbin,    28.379722952825357      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    4487.1568227697780      );
  id8 -> SetBinError( xbin,    26.733863235719244      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    3955.6002155611586      );
  id8 -> SetBinError( xbin,    24.790877449473935      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    3597.2696091542975      );
  id8 -> SetBinError( xbin,    23.983965105592105      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3160.1257237416467      );
  id8 -> SetBinError( xbin,    21.623015359646448      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    2849.8046767221131      );
  id8 -> SetBinError( xbin,    20.621907665938618      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2533.8769804284079      );
  id8 -> SetBinError( xbin,    18.981436862031121      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2290.2769610651353      );
  id8 -> SetBinError( xbin,    17.996085878604852      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2114.0108953303552      );
  id8 -> SetBinError( xbin,    17.290945685706181      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1895.0272433943228      );
  id8 -> SetBinError( xbin,    16.208285677487634      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1689.9864205819431      );
  id8 -> SetBinError( xbin,    14.798233684435687      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1553.2775936640496      );
  id8 -> SetBinError( xbin,    14.139771476441009      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1432.3200821929363      );
  id8 -> SetBinError( xbin,    13.694483731635927      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1304.8849597515459      );
  id8 -> SetBinError( xbin,    12.873302980081808      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1162.3725373883769      );
  id8 -> SetBinError( xbin,    11.923109804273031      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1078.7415899120081      );
  id8 -> SetBinError( xbin,    11.294433461779356      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    995.52425135092926      );
  id8 -> SetBinError( xbin,    10.802662193187574      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    913.12631153986376      );
  id8 -> SetBinError( xbin,    10.497199664658293      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    830.46460740523673      );
  id8 -> SetBinError( xbin,    10.202636470243091      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    751.77106775798234      );
  id8 -> SetBinError( xbin,    9.3186136877446977      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    701.58617158497862      );
  id8 -> SetBinError( xbin,    9.0640620360578392      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    646.69006361568222      );
  id8 -> SetBinError( xbin,    8.6332107882627334      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
