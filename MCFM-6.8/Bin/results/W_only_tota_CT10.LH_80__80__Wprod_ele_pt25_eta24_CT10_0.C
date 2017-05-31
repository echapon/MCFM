// Cross-section is:      2104318.2886043009 +/-          997.1642998840)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -69343.66645   -3.30%
//        GQB    |      -39846.90174   -1.89%
//        QG     |      -79832.49719   -3.79%
//        QBG    |      -43385.42064   -2.06%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1206007.23244   57.31%
//        QBQ    |     1136370.64415   54.00%

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
//Wprod_ele_pt25_eta24            [runstring]  
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
//CT10.LHgrid                     [LHAPDF group]  
//                   0            [LHAPDF set]  

 // [Jet definition and event cuts] )
//             40.0000            [m34min]  
//           5020.0000            [m34max]  
//              0.0000            [m56min]  
//           5020.0000            [m56max]  
//                   T            [inclusive]  
//                ankt            [algorithm]  
//             15.0000            [ptjetmin]  
//              0.0000            [etajetmin]  
//              5.0000            [etajetmax]  
//              0.5000            [Rcut]  
//                   T            [makecuts]  
//             25.0000            [leptpt]  
//              2.4000            [leptrap]  
//   0.000,   0.000                [leptveto]  
//              0.0000            [misspt]  
//              0.0000            [leptpt2]  
//             99.0000            [leptrap2]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wprod_ele_pt25_eta24_CT10_0.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,   -5.1300893535604221E-002 );
  id1 -> SetBinError( xbin,    1.0527048043168767      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    868.28455471181553      );
  id1 -> SetBinError( xbin,    263.17779650691523      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    11306.841005330805      );
  id1 -> SetBinError( xbin,    797.33163370654052      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    40656.715982187547      );
  id1 -> SetBinError( xbin,    1335.6935269129799      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    86342.834796055016      );
  id1 -> SetBinError( xbin,    1494.5492736793244      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    140543.25555994691      );
  id1 -> SetBinError( xbin,    1770.1517713362882      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    205148.32494454828      );
  id1 -> SetBinError( xbin,    1955.4248667029358      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    258426.62459871778      );
  id1 -> SetBinError( xbin,    2016.5771746872110      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    296564.61089385924      );
  id1 -> SetBinError( xbin,    2099.8244286797408      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    334702.68178119377      );
  id1 -> SetBinError( xbin,    2208.4106362707284      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    368100.34576683113      );
  id1 -> SetBinError( xbin,    2155.1418044744378      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    399582.15064950858      );
  id1 -> SetBinError( xbin,    2219.3368589499637      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    417517.12606461096      );
  id1 -> SetBinError( xbin,    2425.5229818392500      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    426181.78186534764      );
  id1 -> SetBinError( xbin,    2393.3264436481545      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    428017.96534178802      );
  id1 -> SetBinError( xbin,    2216.4755793028639      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    433969.05938638450      );
  id1 -> SetBinError( xbin,    2207.9023822285958      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    430231.08817364939      );
  id1 -> SetBinError( xbin,    2192.1036038800817      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    432521.88588820549      );
  id1 -> SetBinError( xbin,    2208.3023447523374      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    422983.52109493106      );
  id1 -> SetBinError( xbin,    2213.2591676433908      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    420720.35520461836      );
  id1 -> SetBinError( xbin,    2156.0432038044833      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    424203.74139387906      );
  id1 -> SetBinError( xbin,    2124.6385026315143      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    423414.37393194903      );
  id1 -> SetBinError( xbin,    2155.5289320621418      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    417513.18620069325      );
  id1 -> SetBinError( xbin,    2153.0207668080479      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    418525.55656519288      );
  id1 -> SetBinError( xbin,    2203.6143193496937      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    420096.70462116267      );
  id1 -> SetBinError( xbin,    2198.5408915837952      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    419231.64702317701      );
  id1 -> SetBinError( xbin,    2236.3870922130282      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    404437.05172497802      );
  id1 -> SetBinError( xbin,    2246.4025548085488      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    386991.44834883348      );
  id1 -> SetBinError( xbin,    2199.2564484953919      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    369975.34436107118      );
  id1 -> SetBinError( xbin,    2192.9912766285565      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    339315.75091365934      );
  id1 -> SetBinError( xbin,    2208.3246748647493      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    300965.12353874301      );
  id1 -> SetBinError( xbin,    2178.6875052583955      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    257371.10255515177      );
  id1 -> SetBinError( xbin,    2327.3707415693984      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    187297.58677847503      );
  id1 -> SetBinError( xbin,    1950.0313832728548      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    122561.04213574756      );
  id1 -> SetBinError( xbin,    1727.7294814578843      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    57880.209328459750      );
  id1 -> SetBinError( xbin,    1452.6743480933453      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    17819.688953083376      );
  id1 -> SetBinError( xbin,    1044.5242106193496      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    788.68779140696768      );
  id1 -> SetBinError( xbin,    253.97215466155649      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    1.5198685037744664      );
  id1 -> SetBinError( xbin,    2.4329429490037744      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    831999.02954019303      );
  id2 -> SetBinError( xbin,    8374.7685813559783      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    782012.08177381859      );
  id2 -> SetBinError( xbin,    7349.8518491309396      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    740293.64296518383      );
  id2 -> SetBinError( xbin,    6362.1722883714338      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    723059.34409881989      );
  id2 -> SetBinError( xbin,    8123.3502415323583      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    692798.21563697350      );
  id2 -> SetBinError( xbin,    6062.4425075184963      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    652833.16693355190      );
  id2 -> SetBinError( xbin,    5276.8326855483892      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    617119.17159164441      );
  id2 -> SetBinError( xbin,    6426.3852592938210      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    583949.68180792860      );
  id2 -> SetBinError( xbin,    4489.8828403202679      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    548278.22319079982      );
  id2 -> SetBinError( xbin,    4709.5083789310793      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    504156.78037794190      );
  id2 -> SetBinError( xbin,    3559.2430706201208      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    477851.19185281015      );
  id2 -> SetBinError( xbin,    3327.1659600095368      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    447489.21847696230      );
  id2 -> SetBinError( xbin,    3730.6391663968934      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    408760.01450632612      );
  id2 -> SetBinError( xbin,    2763.6406030213898      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    379082.27479601605      );
  id2 -> SetBinError( xbin,    2617.0850659168805      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    343486.05747971870      );
  id2 -> SetBinError( xbin,    2407.2431718288567      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    314484.05306962848      );
  id2 -> SetBinError( xbin,    2167.2674520277537      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    287272.90162680723      );
  id2 -> SetBinError( xbin,    1987.0632089605915      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    258790.31226741342      );
  id2 -> SetBinError( xbin,    1723.0329075379298      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    230165.34541202287      );
  id2 -> SetBinError( xbin,    1499.7416710188973      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    206611.56527688014      );
  id2 -> SetBinError( xbin,    1747.7259565679230      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    180039.66901697940      );
  id2 -> SetBinError( xbin,    1331.8930910441863      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    160944.18590889979      );
  id2 -> SetBinError( xbin,    1264.3117258199909      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    142293.99471582679      );
  id2 -> SetBinError( xbin,    1512.7196827109051      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    125074.48221669247      );
  id2 -> SetBinError( xbin,    1079.5550589174679      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    111645.38364525430      );
  id2 -> SetBinError( xbin,    1234.7017801697561      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    97582.170149148122      );
  id2 -> SetBinError( xbin,    823.00314467991257      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    88003.615166797943      );
  id2 -> SetBinError( xbin,    1038.3571815000817      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    79622.523402589315      );
  id2 -> SetBinError( xbin,    804.39620287930745      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    76972.947285045026      );
  id2 -> SetBinError( xbin,    838.72537339390669      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    72456.774436453794      );
  id2 -> SetBinError( xbin,    761.44885054426265      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    73126.580298162633      );
  id2 -> SetBinError( xbin,    724.46442085247509      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    75804.305469450002      );
  id2 -> SetBinError( xbin,    786.58093973608834      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    80956.927531532550      );
  id2 -> SetBinError( xbin,    792.06733563689158      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    87367.180077241035      );
  id2 -> SetBinError( xbin,    755.23931585244384      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    97733.698161967623      );
  id2 -> SetBinError( xbin,    834.93654506609505      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    110487.90299967400      );
  id2 -> SetBinError( xbin,    947.01659962367012      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    125775.15310558205      );
  id2 -> SetBinError( xbin,    970.10313749721081      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    143110.26190536146      );
  id2 -> SetBinError( xbin,    1033.4053460744465      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    164414.39492881592      );
  id2 -> SetBinError( xbin,    1507.5197569954494      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    189804.50420746460      );
  id2 -> SetBinError( xbin,    1496.2709022715821      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    213478.41224067088      );
  id2 -> SetBinError( xbin,    2296.1189077845197      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    239327.34335844262      );
  id2 -> SetBinError( xbin,    1487.9181294242783      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    271799.19969826529      );
  id2 -> SetBinError( xbin,    2020.2713416504653      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    298357.79788300506      );
  id2 -> SetBinError( xbin,    2442.7994239610321      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    331042.55861929501      );
  id2 -> SetBinError( xbin,    2089.3467445289507      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    356479.09210012422      );
  id2 -> SetBinError( xbin,    2242.0006227491613      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    391502.02594313270      );
  id2 -> SetBinError( xbin,    2409.1816400352036      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    428259.99240960722      );
  id2 -> SetBinError( xbin,    2772.0892395331130      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    461646.66755543865      );
  id2 -> SetBinError( xbin,    2723.9902740454118      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    500353.83380653936      );
  id2 -> SetBinError( xbin,    3316.1348377627987      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    533119.25428759889      );
  id2 -> SetBinError( xbin,    3857.8103878341826      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    567549.37378781673      );
  id2 -> SetBinError( xbin,    3776.7380313863573      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    612824.63359541632      );
  id2 -> SetBinError( xbin,    4328.6313952209302      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    637951.72160865320      );
  id2 -> SetBinError( xbin,    4605.8991184861952      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    676911.85870324960      );
  id2 -> SetBinError( xbin,    5245.2773873258202      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    719638.26736723655      );
  id2 -> SetBinError( xbin,    5868.8647371263787      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    755785.24719724339      );
  id2 -> SetBinError( xbin,    6217.5017444085279      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    784425.54890732164      );
  id2 -> SetBinError( xbin,    6317.3186573177063      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    830582.86537290155      );
  id2 -> SetBinError( xbin,    7754.9032161765381      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    863959.71993848425      );
  id2 -> SetBinError( xbin,    8074.0234470903251      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    307517.27480389463      );
  id3 -> SetBinError( xbin,    2338.5211738403937      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    345331.13663638243      );
  id3 -> SetBinError( xbin,    2392.4057019968127      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    382917.32518379047      );
  id3 -> SetBinError( xbin,    2422.2522639083436      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    413185.54350329906      );
  id3 -> SetBinError( xbin,    2524.8264993279813      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    436339.96356126678      );
  id3 -> SetBinError( xbin,    2613.0204425387260      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    454356.44848885620      );
  id3 -> SetBinError( xbin,    2652.1560900757931      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    459465.98246900551      );
  id3 -> SetBinError( xbin,    2646.2603133130897      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    463402.93654080940      );
  id3 -> SetBinError( xbin,    2736.3405869048124      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    470844.65912311908      );
  id3 -> SetBinError( xbin,    2619.4851641071546      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    467973.75627109309      );
  id3 -> SetBinError( xbin,    2611.3769996314863      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    468976.25532085146      );
  id3 -> SetBinError( xbin,    2580.0018767873239      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    463459.85106957983      );
  id3 -> SetBinError( xbin,    2687.5026592389509      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    468387.54269383190      );
  id3 -> SetBinError( xbin,    2752.4062488687982      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    468085.60997558583      );
  id3 -> SetBinError( xbin,    2686.4933855280237      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    464833.30159353290      );
  id3 -> SetBinError( xbin,    2723.1825471413463      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    466789.71569383034      );
  id3 -> SetBinError( xbin,    2862.8204849741760      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    465524.71394774795      );
  id3 -> SetBinError( xbin,    2952.3848081378951      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    466416.53117388993      );
  id3 -> SetBinError( xbin,    2938.1156692052341      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    466154.25473181927      );
  id3 -> SetBinError( xbin,    2917.1343922596393      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    460782.88818759000      );
  id3 -> SetBinError( xbin,    2945.2920850732694      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    453010.58539001388      );
  id3 -> SetBinError( xbin,    2622.8466515629357      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    435289.81585649011      );
  id3 -> SetBinError( xbin,    2585.3359461298010      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    404427.61255276902      );
  id3 -> SetBinError( xbin,    2608.2129328804795      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    369301.46351669932      );
  id3 -> SetBinError( xbin,    2650.9082815608426      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "pt(lep)", 50,    0.00000,  100.00000);

  id4 -> GetXaxis() -> SetTitle("pt(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(   25.000000000000000      );
  id4 -> SetBinContent( xbin,    38807.652981806525      );
  id4 -> SetBinError( xbin,    484.01303162307596      );
   int xbin = id4->FindBin(   27.000000000000000      );
  id4 -> SetBinContent( xbin,    83694.144118501747      );
  id4 -> SetBinError( xbin,    606.74587397492212      );
   int xbin = id4->FindBin(   29.000000000000000      );
  id4 -> SetBinContent( xbin,    92443.557238864523      );
  id4 -> SetBinError( xbin,    654.08190503687138      );
   int xbin = id4->FindBin(   31.000000000000000      );
  id4 -> SetBinContent( xbin,    98773.200680763242      );
  id4 -> SetBinError( xbin,    724.20219122264075      );
   int xbin = id4->FindBin(   33.000000000000000      );
  id4 -> SetBinContent( xbin,    107615.78932964004      );
  id4 -> SetBinError( xbin,    766.74283167607439      );
   int xbin = id4->FindBin(   35.000000000000000      );
  id4 -> SetBinContent( xbin,    117088.64565910930      );
  id4 -> SetBinError( xbin,    847.12839799912513      );
   int xbin = id4->FindBin(   37.000000000000000      );
  id4 -> SetBinContent( xbin,    134158.48488890854      );
  id4 -> SetBinError( xbin,    898.09625601798916      );
   int xbin = id4->FindBin(   39.000000000000000      );
  id4 -> SetBinContent( xbin,    121937.71055434580      );
  id4 -> SetBinError( xbin,    975.00782314711148      );
   int xbin = id4->FindBin(   41.000000000000000      );
  id4 -> SetBinContent( xbin,    99034.648265087744      );
  id4 -> SetBinError( xbin,    759.86031700096044      );
   int xbin = id4->FindBin(   43.000000000000000      );
  id4 -> SetBinContent( xbin,    51234.746969336840      );
  id4 -> SetBinError( xbin,    274.05326261322438      );
   int xbin = id4->FindBin(   45.000000000000000      );
  id4 -> SetBinContent( xbin,    27219.898720626745      );
  id4 -> SetBinError( xbin,    179.58330849800834      );
   int xbin = id4->FindBin(   47.000000000000000      );
  id4 -> SetBinContent( xbin,    17283.908905940534      );
  id4 -> SetBinError( xbin,    147.10796411327257      );
   int xbin = id4->FindBin(   49.000000000000000      );
  id4 -> SetBinContent( xbin,    12071.618099538595      );
  id4 -> SetBinError( xbin,    101.45290868957738      );
   int xbin = id4->FindBin(   51.000000000000000      );
  id4 -> SetBinContent( xbin,    8966.5438507528579      );
  id4 -> SetBinError( xbin,    91.975386217688964      );
   int xbin = id4->FindBin(   53.000000000000000      );
  id4 -> SetBinContent( xbin,    6852.4366071051209      );
  id4 -> SetBinError( xbin,    68.379478637118353      );
   int xbin = id4->FindBin(   55.000000000000000      );
  id4 -> SetBinContent( xbin,    5390.7712639327738      );
  id4 -> SetBinError( xbin,    56.794261555394421      );
   int xbin = id4->FindBin(   57.000000000000000      );
  id4 -> SetBinContent( xbin,    4307.5709705309418      );
  id4 -> SetBinError( xbin,    50.919751228489723      );
   int xbin = id4->FindBin(   59.000000000000000      );
  id4 -> SetBinContent( xbin,    3518.7591055220018      );
  id4 -> SetBinError( xbin,    46.769846503112362      );
   int xbin = id4->FindBin(   61.000000000000000      );
  id4 -> SetBinContent( xbin,    2891.7168113898624      );
  id4 -> SetBinError( xbin,    37.966693977238137      );
   int xbin = id4->FindBin(   63.000000000000000      );
  id4 -> SetBinContent( xbin,    2379.9739425018442      );
  id4 -> SetBinError( xbin,    38.835233250092500      );
   int xbin = id4->FindBin(   65.000000000000000      );
  id4 -> SetBinContent( xbin,    2039.4059716651955      );
  id4 -> SetBinError( xbin,    38.461477346358052      );
   int xbin = id4->FindBin(   67.000000000000000      );
  id4 -> SetBinContent( xbin,    1644.5033754773810      );
  id4 -> SetBinError( xbin,    31.105075017172076      );
   int xbin = id4->FindBin(   69.000000000000000      );
  id4 -> SetBinContent( xbin,    1503.6775661724682      );
  id4 -> SetBinError( xbin,    27.073926533670090      );
   int xbin = id4->FindBin(   71.000000000000000      );
  id4 -> SetBinContent( xbin,    1249.7233305250056      );
  id4 -> SetBinError( xbin,    23.533753420617444      );
   int xbin = id4->FindBin(   73.000000000000000      );
  id4 -> SetBinContent( xbin,    1063.2599757081259      );
  id4 -> SetBinError( xbin,    34.343061549196470      );
   int xbin = id4->FindBin(   75.000000000000000      );
  id4 -> SetBinContent( xbin,    966.00700596851914      );
  id4 -> SetBinError( xbin,    33.225487802441634      );
   int xbin = id4->FindBin(   77.000000000000000      );
  id4 -> SetBinContent( xbin,    861.71144169137324      );
  id4 -> SetBinError( xbin,    23.665076711769668      );
   int xbin = id4->FindBin(   79.000000000000000      );
  id4 -> SetBinContent( xbin,    700.32127153856572      );
  id4 -> SetBinError( xbin,    22.230346849846583      );
   int xbin = id4->FindBin(   81.000000000000000      );
  id4 -> SetBinContent( xbin,    628.87542849913132      );
  id4 -> SetBinError( xbin,    17.594894600914699      );
   int xbin = id4->FindBin(   83.000000000000000      );
  id4 -> SetBinContent( xbin,    568.36183580831027      );
  id4 -> SetBinError( xbin,    15.891573027743627      );
   int xbin = id4->FindBin(   85.000000000000000      );
  id4 -> SetBinContent( xbin,    479.74479245473424      );
  id4 -> SetBinError( xbin,    17.987565602359034      );
   int xbin = id4->FindBin(   87.000000000000000      );
  id4 -> SetBinContent( xbin,    447.51175109191928      );
  id4 -> SetBinError( xbin,    18.970324254281795      );
   int xbin = id4->FindBin(   89.000000000000000      );
  id4 -> SetBinContent( xbin,    387.42578473135939      );
  id4 -> SetBinError( xbin,    16.351601166593198      );
   int xbin = id4->FindBin(   91.000000000000000      );
  id4 -> SetBinContent( xbin,    347.90323568148824      );
  id4 -> SetBinError( xbin,    11.807590326745018      );
   int xbin = id4->FindBin(   93.000000000000000      );
  id4 -> SetBinContent( xbin,    331.20286092769157      );
  id4 -> SetBinError( xbin,    13.274896306341228      );
   int xbin = id4->FindBin(   95.000000000000000      );
  id4 -> SetBinContent( xbin,    284.95047491456290      );
  id4 -> SetBinError( xbin,    16.404110202987571      );
   int xbin = id4->FindBin(   97.000000000000000      );
  id4 -> SetBinContent( xbin,    264.64783623535050      );
  id4 -> SetBinError( xbin,    14.882100069666649      );
   int xbin = id4->FindBin(   99.000000000000000      );
  id4 -> SetBinContent( xbin,    232.83346716411324      );
  id4 -> SetBinError( xbin,    9.0346050162869620      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "DeltaRe5", 12,    0.00000,    5.00000);

  id5 -> GetXaxis() -> SetTitle("DeltaRe5");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(  0.20000000000000001      );
  id5 -> SetBinContent( xbin,    9032.6924357249136      );
  id5 -> SetBinError( xbin,    104.41647215735705      );
   int xbin = id5->FindBin(  0.60000000000000009      );
  id5 -> SetBinContent( xbin,    27899.573323702371      );
  id5 -> SetBinError( xbin,    188.22562926418775      );
   int xbin = id5->FindBin(   1.0000000000000000      );
  id5 -> SetBinContent( xbin,    50222.459443181055      );
  id5 -> SetBinError( xbin,    258.65529556234242      );
   int xbin = id5->FindBin(   1.4000000000000001      );
  id5 -> SetBinContent( xbin,    78082.822151583052      );
  id5 -> SetBinError( xbin,    324.37837038240184      );
   int xbin = id5->FindBin(   1.8000000000000000      );
  id5 -> SetBinContent( xbin,    113989.29044645336      );
  id5 -> SetBinError( xbin,    383.55889420316561      );
   int xbin = id5->FindBin(   2.2000000000000002      );
  id5 -> SetBinContent( xbin,    160908.46490534587      );
  id5 -> SetBinError( xbin,    441.47917213842766      );
   int xbin = id5->FindBin(   2.6000000000000001      );
  id5 -> SetBinContent( xbin,    226571.22470454086      );
  id5 -> SetBinError( xbin,    512.86059145278716      );
   int xbin = id5->FindBin(   3.0000000000000000      );
  id5 -> SetBinContent( xbin,    293326.59861326433      );
  id5 -> SetBinError( xbin,    587.35772910100980      );
   int xbin = id5->FindBin(   3.4000000000000004      );
  id5 -> SetBinContent( xbin,    125350.46561251114      );
  id5 -> SetBinError( xbin,    428.27368653483160      );
   int xbin = id5->FindBin(   3.8000000000000003      );
  id5 -> SetBinContent( xbin,    49256.763944243117      );
  id5 -> SetBinError( xbin,    291.48420431533265      );
   int xbin = id5->FindBin(   4.2000000000000002      );
  id5 -> SetBinContent( xbin,    20984.405221645160      );
  id5 -> SetBinError( xbin,    201.80388772885888      );
   int xbin = id5->FindBin(   4.6000000000000005      );
  id5 -> SetBinContent( xbin,    8934.3728702506833      );
  id5 -> SetBinError( xbin,    137.18786338418971      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "y5", 30,   -3.00000,    3.00000);

  id6 -> GetXaxis() -> SetTitle("y5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  -2.8999999999999999      );
  id6 -> SetBinContent( xbin,    23081.564997603229      );
  id6 -> SetBinError( xbin,    235.79542946097445      );
   int xbin = id6->FindBin(  -2.7000000000000002      );
  id6 -> SetBinContent( xbin,    29050.049983888657      );
  id6 -> SetBinError( xbin,    268.43302459140551      );
   int xbin = id6->FindBin(  -2.5000000000000000      );
  id6 -> SetBinContent( xbin,    36145.360371590061      );
  id6 -> SetBinError( xbin,    300.16287123976116      );
   int xbin = id6->FindBin(  -2.2999999999999998      );
  id6 -> SetBinContent( xbin,    43796.322793719330      );
  id6 -> SetBinError( xbin,    335.21754594597712      );
   int xbin = id6->FindBin(  -2.1000000000000001      );
  id6 -> SetBinContent( xbin,    52236.428141342731      );
  id6 -> SetBinError( xbin,    377.47049027580158      );
   int xbin = id6->FindBin(  -1.8999999999999999      );
  id6 -> SetBinContent( xbin,    59902.670528102259      );
  id6 -> SetBinError( xbin,    393.92162678028831      );
   int xbin = id6->FindBin(  -1.7000000000000000      );
  id6 -> SetBinContent( xbin,    67124.950101086375      );
  id6 -> SetBinError( xbin,    420.81158147911498      );
   int xbin = id6->FindBin(  -1.5000000000000000      );
  id6 -> SetBinContent( xbin,    74985.967238812227      );
  id6 -> SetBinError( xbin,    450.28512974601330      );
   int xbin = id6->FindBin(  -1.2999999999999998      );
  id6 -> SetBinContent( xbin,    82540.179735009413      );
  id6 -> SetBinError( xbin,    473.52137852790571      );
   int xbin = id6->FindBin(  -1.0999999999999999      );
  id6 -> SetBinContent( xbin,    89034.212860720421      );
  id6 -> SetBinError( xbin,    502.84351254795371      );
   int xbin = id6->FindBin( -0.89999999999999991      );
  id6 -> SetBinContent( xbin,    94634.628189092095      );
  id6 -> SetBinError( xbin,    514.34559587436866      );
   int xbin = id6->FindBin( -0.69999999999999973      );
  id6 -> SetBinContent( xbin,    99307.134925218983      );
  id6 -> SetBinError( xbin,    526.93906214478795      );
   int xbin = id6->FindBin( -0.50000000000000000      );
  id6 -> SetBinContent( xbin,    102495.67920783788      );
  id6 -> SetBinError( xbin,    538.42312448904272      );
   int xbin = id6->FindBin( -0.29999999999999982      );
  id6 -> SetBinContent( xbin,    107052.48808029323      );
  id6 -> SetBinError( xbin,    550.96686999649785      );
   int xbin = id6->FindBin(  -9.9999999999999645E-002 );
  id6 -> SetBinContent( xbin,    108135.83647217391      );
  id6 -> SetBinError( xbin,    551.03163335627914      );
   int xbin = id6->FindBin(  0.10000000000000009      );
  id6 -> SetBinContent( xbin,    107292.84092994191      );
  id6 -> SetBinError( xbin,    547.14775173802525      );
   int xbin = id6->FindBin(  0.30000000000000027      );
  id6 -> SetBinContent( xbin,    106715.05174720881      );
  id6 -> SetBinError( xbin,    543.00688701437116      );
   int xbin = id6->FindBin(  0.50000000000000000      );
  id6 -> SetBinContent( xbin,    105444.17837976752      );
  id6 -> SetBinError( xbin,    538.67385170438774      );
   int xbin = id6->FindBin(  0.70000000000000018      );
  id6 -> SetBinContent( xbin,    102915.22829025303      );
  id6 -> SetBinError( xbin,    527.17705308356335      );
   int xbin = id6->FindBin(  0.90000000000000036      );
  id6 -> SetBinContent( xbin,    98209.212099081793      );
  id6 -> SetBinError( xbin,    508.69059755701386      );
   int xbin = id6->FindBin(   1.1000000000000005      );
  id6 -> SetBinContent( xbin,    92547.623217641813      );
  id6 -> SetBinError( xbin,    488.83184247981461      );
   int xbin = id6->FindBin(   1.2999999999999998      );
  id6 -> SetBinContent( xbin,    87332.969182338304      );
  id6 -> SetBinError( xbin,    466.24361533947683      );
   int xbin = id6->FindBin(   1.5000000000000000      );
  id6 -> SetBinContent( xbin,    80574.459902262170      );
  id6 -> SetBinError( xbin,    442.48724188792363      );
   int xbin = id6->FindBin(   1.7000000000000002      );
  id6 -> SetBinContent( xbin,    74249.400046666153      );
  id6 -> SetBinError( xbin,    418.04331800011335      );
   int xbin = id6->FindBin(   1.9000000000000004      );
  id6 -> SetBinContent( xbin,    66949.474219983545      );
  id6 -> SetBinError( xbin,    392.88222929743716      );
   int xbin = id6->FindBin(   2.1000000000000005      );
  id6 -> SetBinContent( xbin,    59366.654397265069      );
  id6 -> SetBinError( xbin,    367.98463774296118      );
   int xbin = id6->FindBin(   2.3000000000000007      );
  id6 -> SetBinContent( xbin,    51313.836899803369      );
  id6 -> SetBinError( xbin,    345.10689534639687      );
   int xbin = id6->FindBin(   2.5000000000000000      );
  id6 -> SetBinContent( xbin,    43522.659913917283      );
  id6 -> SetBinError( xbin,    311.52845652695527      );
   int xbin = id6->FindBin(   2.7000000000000002      );
  id6 -> SetBinContent( xbin,    35452.922820515691      );
  id6 -> SetBinError( xbin,    278.85573431624516      );
   int xbin = id6->FindBin(   2.9000000000000004      );
  id6 -> SetBinContent( xbin,    28856.785823398270      );
  id6 -> SetBinError( xbin,    252.53830677095976      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "pt5", 40,    0.00000,   80.00000);

  id7 -> GetXaxis() -> SetTitle("pt5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(   15.000000000000000      );
  id7 -> SetBinContent( xbin,    16505.402449523062      );
  id7 -> SetBinError( xbin,    75.446793148249796      );
   int xbin = id7->FindBin(   17.000000000000000      );
  id7 -> SetBinContent( xbin,    28382.624448113158      );
  id7 -> SetBinError( xbin,    96.061283739011529      );
   int xbin = id7->FindBin(   19.000000000000000      );
  id7 -> SetBinContent( xbin,    23408.365140203616      );
  id7 -> SetBinError( xbin,    84.223823583351063      );
   int xbin = id7->FindBin(   21.000000000000000      );
  id7 -> SetBinContent( xbin,    19663.091724636623      );
  id7 -> SetBinError( xbin,    75.205544246829319      );
   int xbin = id7->FindBin(   23.000000000000000      );
  id7 -> SetBinContent( xbin,    16795.536457486876      );
  id7 -> SetBinError( xbin,    69.312084625147307      );
   int xbin = id7->FindBin(   25.000000000000000      );
  id7 -> SetBinContent( xbin,    14299.785716326523      );
  id7 -> SetBinError( xbin,    62.120051223176517      );
   int xbin = id7->FindBin(   27.000000000000000      );
  id7 -> SetBinContent( xbin,    12318.624528714774      );
  id7 -> SetBinError( xbin,    57.022538405991369      );
   int xbin = id7->FindBin(   29.000000000000000      );
  id7 -> SetBinContent( xbin,    10713.413535964501      );
  id7 -> SetBinError( xbin,    52.371334379801119      );
   int xbin = id7->FindBin(   31.000000000000000      );
  id7 -> SetBinContent( xbin,    9266.2466382531165      );
  id7 -> SetBinError( xbin,    47.882238649075461      );
   int xbin = id7->FindBin(   33.000000000000000      );
  id7 -> SetBinContent( xbin,    8180.6242099092087      );
  id7 -> SetBinError( xbin,    44.573980645137539      );
   int xbin = id7->FindBin(   35.000000000000000      );
  id7 -> SetBinContent( xbin,    7224.3965955790263      );
  id7 -> SetBinError( xbin,    40.889966669073480      );
   int xbin = id7->FindBin(   37.000000000000000      );
  id7 -> SetBinContent( xbin,    6296.7568780458814      );
  id7 -> SetBinError( xbin,    37.646109474116621      );
   int xbin = id7->FindBin(   39.000000000000000      );
  id7 -> SetBinContent( xbin,    5565.6405683043777      );
  id7 -> SetBinError( xbin,    35.104379339993471      );
   int xbin = id7->FindBin(   41.000000000000000      );
  id7 -> SetBinContent( xbin,    4960.5095297518847      );
  id7 -> SetBinError( xbin,    32.638132818028268      );
   int xbin = id7->FindBin(   43.000000000000000      );
  id7 -> SetBinContent( xbin,    4354.3971830565679      );
  id7 -> SetBinError( xbin,    30.054466942151937      );
   int xbin = id7->FindBin(   45.000000000000000      );
  id7 -> SetBinContent( xbin,    3875.3185486448961      );
  id7 -> SetBinError( xbin,    28.567329560731853      );
   int xbin = id7->FindBin(   47.000000000000000      );
  id7 -> SetBinContent( xbin,    3498.5192715614498      );
  id7 -> SetBinError( xbin,    26.617488981597191      );
   int xbin = id7->FindBin(   49.000000000000000      );
  id7 -> SetBinContent( xbin,    3136.2335119378736      );
  id7 -> SetBinError( xbin,    25.241603063178271      );
   int xbin = id7->FindBin(   51.000000000000000      );
  id7 -> SetBinContent( xbin,    2841.8435169243353      );
  id7 -> SetBinError( xbin,    23.690595664902787      );
   int xbin = id7->FindBin(   53.000000000000000      );
  id7 -> SetBinContent( xbin,    2564.5672338721497      );
  id7 -> SetBinError( xbin,    21.919067523394052      );
   int xbin = id7->FindBin(   55.000000000000000      );
  id7 -> SetBinContent( xbin,    2329.0961888631659      );
  id7 -> SetBinError( xbin,    21.065112779919421      );
   int xbin = id7->FindBin(   57.000000000000000      );
  id7 -> SetBinContent( xbin,    2080.4020481210378      );
  id7 -> SetBinError( xbin,    19.436269747194370      );
   int xbin = id7->FindBin(   59.000000000000000      );
  id7 -> SetBinContent( xbin,    1918.5445947883190      );
  id7 -> SetBinError( xbin,    18.765917206474573      );
   int xbin = id7->FindBin(   61.000000000000000      );
  id7 -> SetBinContent( xbin,    1767.1390548817810      );
  id7 -> SetBinError( xbin,    18.189727973311857      );
   int xbin = id7->FindBin(   63.000000000000000      );
  id7 -> SetBinContent( xbin,    1592.4898765561052      );
  id7 -> SetBinError( xbin,    16.701858183070193      );
   int xbin = id7->FindBin(   65.000000000000000      );
  id7 -> SetBinContent( xbin,    1506.1507073290372      );
  id7 -> SetBinError( xbin,    16.181435400253186      );
   int xbin = id7->FindBin(   67.000000000000000      );
  id7 -> SetBinContent( xbin,    1352.6663546102420      );
  id7 -> SetBinError( xbin,    15.159524741308855      );
   int xbin = id7->FindBin(   69.000000000000000      );
  id7 -> SetBinContent( xbin,    1254.6867681414578      );
  id7 -> SetBinError( xbin,    14.547475330277402      );
   int xbin = id7->FindBin(   71.000000000000000      );
  id7 -> SetBinContent( xbin,    1127.7650969155131      );
  id7 -> SetBinError( xbin,    13.511575312601064      );
   int xbin = id7->FindBin(   73.000000000000000      );
  id7 -> SetBinContent( xbin,    1050.4006135842676      );
  id7 -> SetBinError( xbin,    12.976068857605146      );
   int xbin = id7->FindBin(   75.000000000000000      );
  id7 -> SetBinContent( xbin,    958.08031604053747      );
  id7 -> SetBinError( xbin,    12.325948614603730      );
   int xbin = id7->FindBin(   77.000000000000000      );
  id7 -> SetBinContent( xbin,    891.63329787278258      );
  id7 -> SetBinError( xbin,    11.723794806849739      );
   int xbin = id7->FindBin(   79.000000000000000      );
  id7 -> SetBinContent( xbin,    815.46043703468013      );
  id7 -> SetBinError( xbin,    11.426305878048336      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
