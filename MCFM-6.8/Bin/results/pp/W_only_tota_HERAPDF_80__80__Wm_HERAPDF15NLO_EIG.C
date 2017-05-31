// Cross-section is:      2009947.1122625982 +/-          904.4873673707)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -54194.52450   -2.70%
//        GQB    |      -47478.06636   -2.36%
//        QG     |      -51157.28052   -2.55%
//        QBG    |      -46207.97310   -2.30%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1008222.65410   50.16%
//        QBQ    |     1209294.46522   60.17%

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
//Wm_HERAPDF15NLO_EIG             [runstring]  
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
//             HERAPDF            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//HERAPDF15NLO_EIG.LHp            [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//HERAPDF15NLO_EIG.LHp            [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_HERAPDF_80__80__Wm_HERAPDF15NLO_EIG.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   -4.5532263560992383E-003 );
  id1 -> SetBinError( xbin,    3.1180512649754688E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    47.873672426316453      );
  id1 -> SetBinError( xbin,    8.2191294649201740      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    679.95104750742166      );
  id1 -> SetBinError( xbin,    70.379859039318475      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    4790.9439108186325      );
  id1 -> SetBinError( xbin,    280.12852180567688      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    14695.461299796141      );
  id1 -> SetBinError( xbin,    578.99317971074038      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    39268.362860008288      );
  id1 -> SetBinError( xbin,    856.28805235131620      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    78805.092909706931      );
  id1 -> SetBinError( xbin,    4642.9884447108861      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    147431.49152953149      );
  id1 -> SetBinError( xbin,    1480.0450240048222      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    222392.66842641239      );
  id1 -> SetBinError( xbin,    1673.8335017202000      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    303230.36231329915      );
  id1 -> SetBinError( xbin,    1910.9845133450058      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    371237.65743487538      );
  id1 -> SetBinError( xbin,    2090.3812094864356      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    412773.48376318562      );
  id1 -> SetBinError( xbin,    2157.7659048407099      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    426846.72929771413      );
  id1 -> SetBinError( xbin,    2224.5184330745628      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    430479.10508861422      );
  id1 -> SetBinError( xbin,    2168.3085403367895      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    436321.12779497198      );
  id1 -> SetBinError( xbin,    2161.3706746820808      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    431048.07970118988      );
  id1 -> SetBinError( xbin,    2133.6173302753186      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    437351.79807527049      );
  id1 -> SetBinError( xbin,    2176.3331101696604      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    432504.20714449510      );
  id1 -> SetBinError( xbin,    2135.1814354223388      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    431895.11002861644      );
  id1 -> SetBinError( xbin,    2146.2364874331556      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    420444.67804230622      );
  id1 -> SetBinError( xbin,    2181.4500500739323      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    422781.97375437361      );
  id1 -> SetBinError( xbin,    2167.6031531138456      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    418959.63394354866      );
  id1 -> SetBinError( xbin,    2080.8195886322919      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    412839.01405525795      );
  id1 -> SetBinError( xbin,    2086.8540178392659      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    408076.84825410036      );
  id1 -> SetBinError( xbin,    2081.3376706902404      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    401987.07847527857      );
  id1 -> SetBinError( xbin,    2027.8238412163084      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    389737.75178102363      );
  id1 -> SetBinError( xbin,    2021.3741714459825      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    378376.25345698668      );
  id1 -> SetBinError( xbin,    2038.5963390282768      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    373292.70278069028      );
  id1 -> SetBinError( xbin,    2027.1426685418714      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    355781.85915005894      );
  id1 -> SetBinError( xbin,    2005.7062375444852      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    337805.67863326537      );
  id1 -> SetBinError( xbin,    1951.3325473983568      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    315737.55653087911      );
  id1 -> SetBinError( xbin,    1889.5764325500877      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    267323.85291345173      );
  id1 -> SetBinError( xbin,    1833.5160889355886      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    206705.84692338796      );
  id1 -> SetBinError( xbin,    1602.9677124764421      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    145085.67375464333      );
  id1 -> SetBinError( xbin,    1405.1843177941098      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    90431.770066837606      );
  id1 -> SetBinError( xbin,    1196.2198749227637      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    47347.261066955973      );
  id1 -> SetBinError( xbin,    934.18746751436220      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    19688.611210088355      );
  id1 -> SetBinError( xbin,    606.96377754586331      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    6883.0244268306487      );
  id1 -> SetBinError( xbin,    322.84118699271374      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1746.2277487482011      );
  id1 -> SetBinError( xbin,    120.84796470639283      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    297.80755503310348      );
  id1 -> SetBinError( xbin,    27.047170032178691      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    15.339643270367285      );
  id1 -> SetBinError( xbin,    2.6593422132849183      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   -4.5644808433569915E-004 );
  id1 -> SetBinError( xbin,    1.2970696520320776E-002 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    855933.34461301996      );
  id2 -> SetBinError( xbin,    9388.9088295358270      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    821857.58495360590      );
  id2 -> SetBinError( xbin,    7517.2816189727600      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    783913.01431721891      );
  id2 -> SetBinError( xbin,    8422.8055430455170      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    738829.32039786852      );
  id2 -> SetBinError( xbin,    6100.6030228801665      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    698970.57171567669      );
  id2 -> SetBinError( xbin,    5510.8371277605575      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    661994.54583911621      );
  id2 -> SetBinError( xbin,    5050.6460429010222      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    631915.82179832319      );
  id2 -> SetBinError( xbin,    4951.8757018034539      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    602708.23291634489      );
  id2 -> SetBinError( xbin,    4781.8376194195562      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    561223.31742165261      );
  id2 -> SetBinError( xbin,    4021.4798902068051      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    534384.77202417993      );
  id2 -> SetBinError( xbin,    3831.4540166835113      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    491779.34853725380      );
  id2 -> SetBinError( xbin,    5263.4504377191824      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    456244.31341595261      );
  id2 -> SetBinError( xbin,    3088.8737899332050      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    420557.24857969512      );
  id2 -> SetBinError( xbin,    2955.8181256247185      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    391928.00710216846      );
  id2 -> SetBinError( xbin,    2877.0654819554902      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    353620.84896869957      );
  id2 -> SetBinError( xbin,    2479.5710081334159      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    326548.39471799380      );
  id2 -> SetBinError( xbin,    2492.4424721945393      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    293025.93129808537      );
  id2 -> SetBinError( xbin,    2273.5986144741009      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    266368.30288117204      );
  id2 -> SetBinError( xbin,    1859.4055344798549      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    234511.68319105703      );
  id2 -> SetBinError( xbin,    1606.7198589122534      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    206730.54230492021      );
  id2 -> SetBinError( xbin,    1686.9585103830045      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    183383.52432942734      );
  id2 -> SetBinError( xbin,    1603.6037691898450      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    159824.16693964833      );
  id2 -> SetBinError( xbin,    1167.1575897651603      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    139648.92143145768      );
  id2 -> SetBinError( xbin,    1167.8083552063702      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    122496.15042688587      );
  id2 -> SetBinError( xbin,    1079.9379150654597      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    110451.14988688834      );
  id2 -> SetBinError( xbin,    1837.5328475548592      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    93994.078495591340      );
  id2 -> SetBinError( xbin,    815.29687918143043      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    83581.629455417773      );
  id2 -> SetBinError( xbin,    770.63607059531228      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    76538.218754803165      );
  id2 -> SetBinError( xbin,    957.26017561305321      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    70972.358358961399      );
  id2 -> SetBinError( xbin,    711.97684800001139      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    69415.548115752681      );
  id2 -> SetBinError( xbin,    760.70159976255468      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    68642.655471195743      );
  id2 -> SetBinError( xbin,    708.78671258475072      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    71183.015845645903      );
  id2 -> SetBinError( xbin,    688.82727714182738      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    75845.153065433566      );
  id2 -> SetBinError( xbin,    750.37949370792512      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    83238.886164287745      );
  id2 -> SetBinError( xbin,    857.13623259635165      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    91972.981282653840      );
  id2 -> SetBinError( xbin,    977.28312836331963      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    102906.93703532952      );
  id2 -> SetBinError( xbin,    901.79288005055525      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    114449.57427092828      );
  id2 -> SetBinError( xbin,    962.23175445948527      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    131688.10459313606      );
  id2 -> SetBinError( xbin,    1091.1768227344874      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    148840.50956744535      );
  id2 -> SetBinError( xbin,    1218.1586715930364      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    168448.29587715660      );
  id2 -> SetBinError( xbin,    2243.4104606108440      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    190648.55246050219      );
  id2 -> SetBinError( xbin,    1639.7766938955699      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    209157.58353083231      );
  id2 -> SetBinError( xbin,    1429.6000473345423      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    236158.45456743936      );
  id2 -> SetBinError( xbin,    1791.7750939959164      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    264789.44674778573      );
  id2 -> SetBinError( xbin,    2064.8736315325682      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    292709.70587386470      );
  id2 -> SetBinError( xbin,    2309.7400721508116      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    315703.03850769869      );
  id2 -> SetBinError( xbin,    2323.5101778144685      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    349999.74273314106      );
  id2 -> SetBinError( xbin,    2732.7727841060687      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    380731.46296657482      );
  id2 -> SetBinError( xbin,    3372.4788396576892      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    412984.31131905684      );
  id2 -> SetBinError( xbin,    3641.8350769709000      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    436526.09318479162      );
  id2 -> SetBinError( xbin,    3864.8478075016201      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    463790.42835977528      );
  id2 -> SetBinError( xbin,    3949.5049837928800      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    497416.50512462604      );
  id2 -> SetBinError( xbin,    4143.4645633255741      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    519316.23781443929      );
  id2 -> SetBinError( xbin,    4424.0509375986248      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    550919.11542767251      );
  id2 -> SetBinError( xbin,    4826.2054287678111      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    591808.03060392500      );
  id2 -> SetBinError( xbin,    5826.0141997843648      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    614721.96443245676      );
  id2 -> SetBinError( xbin,    5706.3166458218811      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    651967.06235505966      );
  id2 -> SetBinError( xbin,    6730.3814559023740      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    675989.46879290510      );
  id2 -> SetBinError( xbin,    7659.8163396563250      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    702956.24608323304      );
  id2 -> SetBinError( xbin,    9855.5608143727695      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    734811.41399178014      );
  id2 -> SetBinError( xbin,    9051.8386837968301      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    299728.44464716472      );
  id3 -> SetBinError( xbin,    5168.9730434984203      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    328701.02875737101      );
  id3 -> SetBinError( xbin,    2491.8697129107809      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    348420.02356120164      );
  id3 -> SetBinError( xbin,    2350.1015010108167      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    363062.80836196872      );
  id3 -> SetBinError( xbin,    2295.8237751679831      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    368819.67796979664      );
  id3 -> SetBinError( xbin,    2225.1512435437685      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    372288.67989521899      );
  id3 -> SetBinError( xbin,    2139.9797186325650      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    379655.56840948272      );
  id3 -> SetBinError( xbin,    2111.0279830540694      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    381263.98023251491      );
  id3 -> SetBinError( xbin,    2189.9897667886717      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    378983.09089660319      );
  id3 -> SetBinError( xbin,    2090.6507963684603      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    380721.49546871148      );
  id3 -> SetBinError( xbin,    1993.8208800450213      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    382441.04315167596      );
  id3 -> SetBinError( xbin,    2060.0513340217854      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    376688.45104576962      );
  id3 -> SetBinError( xbin,    1988.0465140521253      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    374601.12485196395      );
  id3 -> SetBinError( xbin,    2190.4810642828074      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    377577.81244237814      );
  id3 -> SetBinError( xbin,    2171.5647715188716      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    371083.82776225515      );
  id3 -> SetBinError( xbin,    3100.4193436704968      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    370502.71150889603      );
  id3 -> SetBinError( xbin,    3052.6678991846570      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    363363.16247645271      );
  id3 -> SetBinError( xbin,    1967.5164147520341      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    360137.58383499330      );
  id3 -> SetBinError( xbin,    1939.1257835337726      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    352916.17811492685      );
  id3 -> SetBinError( xbin,    2109.6187259935946      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    347488.76151860651      );
  id3 -> SetBinError( xbin,    2076.7408715447791      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    335985.82723043690      );
  id3 -> SetBinError( xbin,    1922.4747781082722      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    330387.40769606992      );
  id3 -> SetBinError( xbin,    1955.5526370226830      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    317520.55134318070      );
  id3 -> SetBinError( xbin,    1998.6009282991383      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    306395.96579180815      );
  id3 -> SetBinError( xbin,    2003.2431336879674      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    293870.47547076893      );
  id3 -> SetBinError( xbin,    2118.8872445162174      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    278451.23221676348      );
  id3 -> SetBinError( xbin,    2170.5339143848155      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    263375.08276188624      );
  id3 -> SetBinError( xbin,    2114.9026427884110      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    240015.89746242861      );
  id3 -> SetBinError( xbin,    2100.0279823072938      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    210714.76191168377      );
  id3 -> SetBinError( xbin,    2101.4387327616960      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    187983.28866278197      );
  id3 -> SetBinError( xbin,    2186.1067894714060      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    93202.921633175996      );
  id4 -> SetBinError( xbin,    9512.0268193769498      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    301709.29613984103      );
  id4 -> SetBinError( xbin,    4113.1968127349683      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    315607.02178017050      );
  id4 -> SetBinError( xbin,    3970.4835786955064      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    331744.05607373954      );
  id4 -> SetBinError( xbin,    4110.5506033939746      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    336219.79375939304      );
  id4 -> SetBinError( xbin,    4039.8581485248560      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    343937.54485222825      );
  id4 -> SetBinError( xbin,    3888.8481259361220      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    359323.96720619104      );
  id4 -> SetBinError( xbin,    3721.5862606419123      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    353954.02475675760      );
  id4 -> SetBinError( xbin,    3571.3099969484497      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    371156.93002795876      );
  id4 -> SetBinError( xbin,    3553.2710691170705      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    368059.33532694483      );
  id4 -> SetBinError( xbin,    3648.2512953607220      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    370231.12567522482      );
  id4 -> SetBinError( xbin,    3593.2610753920394      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    378206.80656060344      );
  id4 -> SetBinError( xbin,    3687.5159984138295      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    373554.65862693323      );
  id4 -> SetBinError( xbin,    3855.6753792897107      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    377423.72814944480      );
  id4 -> SetBinError( xbin,    3724.5890478367178      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    377615.84981856379      );
  id4 -> SetBinError( xbin,    3514.2334508301210      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    380823.53860856430      );
  id4 -> SetBinError( xbin,    3557.8188070320307      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    383625.05244705058      );
  id4 -> SetBinError( xbin,    3453.8883321845292      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    379152.28806420462      );
  id4 -> SetBinError( xbin,    3392.1217586880043      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    375917.13773218635      );
  id4 -> SetBinError( xbin,    3460.8277173293432      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    387075.60210748942      );
  id4 -> SetBinError( xbin,    3466.6445183917313      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    376512.01349827019      );
  id4 -> SetBinError( xbin,    3347.1837761478291      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    385857.57297480968      );
  id4 -> SetBinError( xbin,    3490.2390586206407      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    375848.18495201040      );
  id4 -> SetBinError( xbin,    3531.0829122143164      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    375356.13106956484      );
  id4 -> SetBinError( xbin,    3360.4668436914058      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    380406.34974702628      );
  id4 -> SetBinError( xbin,    3219.2080800019403      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    376257.40328706469      );
  id4 -> SetBinError( xbin,    3147.5985437787040      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    379007.52563529037      );
  id4 -> SetBinError( xbin,    3205.8512220621747      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    375364.61012434866      );
  id4 -> SetBinError( xbin,    3257.5704803957669      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    375874.74707219918      );
  id4 -> SetBinError( xbin,    3380.9813140809629      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    368690.56640014227      );
  id4 -> SetBinError( xbin,    3335.5141014214082      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    369409.78567164729      );
  id4 -> SetBinError( xbin,    3270.0837674242853      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    370480.69245148142      );
  id4 -> SetBinError( xbin,    3313.9060490232441      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    368584.58793464885      );
  id4 -> SetBinError( xbin,    3186.2431773414378      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    362623.63212604914      );
  id4 -> SetBinError( xbin,    3250.8184227634301      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    358893.15730248950      );
  id4 -> SetBinError( xbin,    3490.1516069205350      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    365664.71010941785      );
  id4 -> SetBinError( xbin,    3386.0771721540145      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    353122.87457482819      );
  id4 -> SetBinError( xbin,    3122.7094616363288      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    355086.83622153976      );
  id4 -> SetBinError( xbin,    3165.8596331884869      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    354671.08697610581      );
  id4 -> SetBinError( xbin,    3101.2893704456328      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    348052.77251392876      );
  id4 -> SetBinError( xbin,    3086.2983801525215      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    340871.74218402564      );
  id4 -> SetBinError( xbin,    3216.2152585273479      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    334805.26746705832      );
  id4 -> SetBinError( xbin,    3144.2258458821211      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    336523.11880638875      );
  id4 -> SetBinError( xbin,    3125.9595198674810      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    326458.97377564141      );
  id4 -> SetBinError( xbin,    3137.7357934287520      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    327566.95851857442      );
  id4 -> SetBinError( xbin,    3208.5955918664699      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    320539.35374138434      );
  id4 -> SetBinError( xbin,    3240.9430038925980      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    311791.78150718176      );
  id4 -> SetBinError( xbin,    3199.1120748655408      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    306638.91999112547      );
  id4 -> SetBinError( xbin,    3160.1539948053901      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    297841.56619585271      );
  id4 -> SetBinError( xbin,    3256.8630902733812      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    295746.55681580666      );
  id4 -> SetBinError( xbin,    3189.9204839538488      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    288822.13921940431      );
  id4 -> SetBinError( xbin,    3184.1770947917125      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    281076.59550767083      );
  id4 -> SetBinError( xbin,    3269.7467929783147      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    271652.80480675917      );
  id4 -> SetBinError( xbin,    3425.0304272180456      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    266492.37803028314      );
  id4 -> SetBinError( xbin,    3501.0581765368725      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    256031.27696177579      );
  id4 -> SetBinError( xbin,    3361.7470914011228      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    239558.08645347378      );
  id4 -> SetBinError( xbin,    3504.1501948848072      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    29908.845680156854      );
  id5 -> SetBinError( xbin,    358.56361462561102      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    66454.911051956704      );
  id5 -> SetBinError( xbin,    460.34327950455355      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    74464.276455466141      );
  id5 -> SetBinError( xbin,    592.18984471612634      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    85316.727578195423      );
  id5 -> SetBinError( xbin,    636.96016753971685      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    97304.873732069434      );
  id5 -> SetBinError( xbin,    756.63114566504612      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    111280.65753925504      );
  id5 -> SetBinError( xbin,    832.70262053801093      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    133223.36905694124      );
  id5 -> SetBinError( xbin,    816.01886039042779      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    132732.41211026945      );
  id5 -> SetBinError( xbin,    1086.3255974648266      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    106087.44283338857      );
  id5 -> SetBinError( xbin,    799.69794253102157      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    52026.034230284808      );
  id5 -> SetBinError( xbin,    279.65931858147644      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    27741.446365435324      );
  id5 -> SetBinError( xbin,    157.23935026843202      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17716.399803423494      );
  id5 -> SetBinError( xbin,    119.55697430162539      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12619.940170323291      );
  id5 -> SetBinError( xbin,    90.136965419848423      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9546.7814347503281      );
  id5 -> SetBinError( xbin,    74.776488483783893      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7089.2959899172029      );
  id5 -> SetBinError( xbin,    61.176096710706801      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5868.0250716118535      );
  id5 -> SetBinError( xbin,    52.906618091668193      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4654.5752403822435      );
  id5 -> SetBinError( xbin,    45.233387770209802      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3870.0812762623232      );
  id5 -> SetBinError( xbin,    46.214647479227246      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3225.8390563803482      );
  id5 -> SetBinError( xbin,    40.955683148149248      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2716.2836518371846      );
  id5 -> SetBinError( xbin,    36.567017241295844      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2291.1718957308599      );
  id5 -> SetBinError( xbin,    39.095077376299024      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    2015.6358549591216      );
  id5 -> SetBinError( xbin,    36.153266208100462      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1765.2262095618582      );
  id5 -> SetBinError( xbin,    36.947921641247902      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1519.9903815559476      );
  id5 -> SetBinError( xbin,    33.322571568723077      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1306.4548249844186      );
  id5 -> SetBinError( xbin,    21.928798114045840      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1135.9828266180557      );
  id5 -> SetBinError( xbin,    20.246970956499510      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    1013.9109990221776      );
  id5 -> SetBinError( xbin,    19.437195910618193      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    873.99413482798593      );
  id5 -> SetBinError( xbin,    19.439207884695875      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    775.50237778360906      );
  id5 -> SetBinError( xbin,    20.021132858342433      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    703.05971635737490      );
  id5 -> SetBinError( xbin,    17.412797187315434      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    612.96301881048305      );
  id5 -> SetBinError( xbin,    15.818232603123393      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    565.75003427739830      );
  id5 -> SetBinError( xbin,    18.133800054799195      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    526.42404757337192      );
  id5 -> SetBinError( xbin,    17.416127455513664      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    465.91432589414984      );
  id5 -> SetBinError( xbin,    15.849145171089907      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    413.49123973047500      );
  id5 -> SetBinError( xbin,    16.019196940237453      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    358.84909932260462      );
  id5 -> SetBinError( xbin,    14.845787283455918      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    327.10787383161045      );
  id5 -> SetBinError( xbin,    11.254101158035871      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    298.75474138372891      );
  id5 -> SetBinError( xbin,    11.932357368728605      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2268.8872579015679      );
  id6 -> SetBinError( xbin,    51.696442780571822      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    7280.7177892519530      );
  id6 -> SetBinError( xbin,    91.819925132217335      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    14046.817416025347      );
  id6 -> SetBinError( xbin,    124.95398883202549      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    24307.267939448822      );
  id6 -> SetBinError( xbin,    155.68282488413939      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    39191.224939139262      );
  id6 -> SetBinError( xbin,    188.04444899931985      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    64013.787208793794      );
  id6 -> SetBinError( xbin,    229.34206282125265      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    109589.35877170641      );
  id6 -> SetBinError( xbin,    306.87704563831744      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    176971.12771028528      );
  id6 -> SetBinError( xbin,    423.62651466309694      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    77539.142626330329      );
  id6 -> SetBinError( xbin,    336.21586083753999      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    29288.556347001941      );
  id6 -> SetBinError( xbin,    246.57947592549101      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    11879.171399631545      );
  id6 -> SetBinError( xbin,    178.39373654295051      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4741.5338156397574      );
  id6 -> SetBinError( xbin,    131.15337442243722      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11757.770542923325      );
  id7 -> SetBinError( xbin,    157.47020923189177      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    15581.933892934365      );
  id7 -> SetBinError( xbin,    169.61636616485990      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19649.986178914292      );
  id7 -> SetBinError( xbin,    188.35042504337281      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24368.339071156290      );
  id7 -> SetBinError( xbin,    213.52559361360662      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    29532.159440187308      );
  id7 -> SetBinError( xbin,    243.49447116304003      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    34392.945372334907      );
  id7 -> SetBinError( xbin,    261.42507000664057      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    39335.549666422346      );
  id7 -> SetBinError( xbin,    283.11186365736273      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    44136.119057055010      );
  id7 -> SetBinError( xbin,    314.34425522156295      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    48070.395063202719      );
  id7 -> SetBinError( xbin,    322.75723640460762      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    51462.522041771743      );
  id7 -> SetBinError( xbin,    334.04309492622576      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    54960.267521929345      );
  id7 -> SetBinError( xbin,    363.12470163217279      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    57215.162794242322      );
  id7 -> SetBinError( xbin,    364.78392012618059      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    57945.844354022935      );
  id7 -> SetBinError( xbin,    377.98678772150919      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    58515.237070164963      );
  id7 -> SetBinError( xbin,    369.85842720698537      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59527.365057005001      );
  id7 -> SetBinError( xbin,    383.31049606055427      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    58613.372869722894      );
  id7 -> SetBinError( xbin,    389.43244364924033      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    57423.725258992316      );
  id7 -> SetBinError( xbin,    381.40682561465911      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    54909.273185147475      );
  id7 -> SetBinError( xbin,    369.37496667844118      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    52025.860247682082      );
  id7 -> SetBinError( xbin,    362.62216967260616      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    48810.432219059374      );
  id7 -> SetBinError( xbin,    350.62120442080555      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    45098.014906943943      );
  id7 -> SetBinError( xbin,    336.38754078838770      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    40552.812305136722      );
  id7 -> SetBinError( xbin,    309.63150794837298      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    35947.535612316860      );
  id7 -> SetBinError( xbin,    315.88734125530965      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    30817.039156858827      );
  id7 -> SetBinError( xbin,    263.69461975611716      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    26048.704779556021      );
  id7 -> SetBinError( xbin,    229.93561139375237      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    21633.722829977298      );
  id7 -> SetBinError( xbin,    237.07800047330591      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17597.353968237214      );
  id7 -> SetBinError( xbin,    186.50027038876607      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    13898.287020029358      );
  id7 -> SetBinError( xbin,    171.34979657792445      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    10318.669878235471      );
  id7 -> SetBinError( xbin,    149.12262817015608      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7240.7808813295460      );
  id7 -> SetBinError( xbin,    117.38191962617439      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    6037.7525404044291      );
  id8 -> SetBinError( xbin,    41.564218460351164      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10859.151690290197      );
  id8 -> SetBinError( xbin,    54.504547806098699      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9527.7991517753908      );
  id8 -> SetBinError( xbin,    51.076631593825901      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    8290.4420467515702      );
  id8 -> SetBinError( xbin,    45.632003383855533      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7289.9717305840359      );
  id8 -> SetBinError( xbin,    42.617772400598668      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6499.8555837720178      );
  id8 -> SetBinError( xbin,    40.696300419998487      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5707.1107915111588      );
  id8 -> SetBinError( xbin,    36.907006281607750      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5115.2565110732403      );
  id8 -> SetBinError( xbin,    34.318192471797012      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4597.9397900487866      );
  id8 -> SetBinError( xbin,    31.555100658759383      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4072.8984627118903      );
  id8 -> SetBinError( xbin,    29.230308189932700      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3689.6155364759211      );
  id8 -> SetBinError( xbin,    29.294861291112209      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3293.9856294266488      );
  id8 -> SetBinError( xbin,    27.552323249652225      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    3012.4263494383108      );
  id8 -> SetBinError( xbin,    24.993956896981476      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2727.8380074173833      );
  id8 -> SetBinError( xbin,    23.966372930723796      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2478.1815504058268      );
  id8 -> SetBinError( xbin,    21.500842440733503      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2240.9946969749049      );
  id8 -> SetBinError( xbin,    20.227399674579122      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2017.9169496994307      );
  id8 -> SetBinError( xbin,    18.648184282009577      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1877.5003996131491      );
  id8 -> SetBinError( xbin,    19.042131706652000      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1721.9352766856264      );
  id8 -> SetBinError( xbin,    18.177673476286465      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1576.1860042803717      );
  id8 -> SetBinError( xbin,    17.548028400631782      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1434.5187953725970      );
  id8 -> SetBinError( xbin,    16.811451725922105      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1321.7686026917090      );
  id8 -> SetBinError( xbin,    15.996657449806202      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1232.5666098586084      );
  id8 -> SetBinError( xbin,    17.300125000860788      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1115.5191836994368      );
  id8 -> SetBinError( xbin,    14.504361219275074      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1045.1463674330034      );
  id8 -> SetBinError( xbin,    14.306664329108163      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    952.10654843060274      );
  id8 -> SetBinError( xbin,    13.333512987066127      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    902.48685526107477      );
  id8 -> SetBinError( xbin,    14.030671520998201      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    809.28301794249114      );
  id8 -> SetBinError( xbin,    12.921622472217031      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
