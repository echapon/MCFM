// Cross-section is:       621037.0548932835 +/-           95.4774857906)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -25340.13419   -4.08%
//        GQB    |      -13752.37135   -2.21%
//        QG     |      -24743.39430   -3.98%
//        QBG    |      -14143.17244   -2.28%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      334336.77151   53.84%
//        QBQ    |      366738.06436   59.05%

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
//                  31            [nproc]  
//                tota            [part]  
//Zprod_DSSZ                      [runstring]  
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
//             MSTW200            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//MSTW2008nlo68cl.LHgr            [LHAPDF group]  
//                   0            [LHAPDF set]  

 // [Jet definition and event cuts] )
//             60.0000            [m34min]  
//            120.0000            [m34max]  
//             60.0000            [m56min]  
//            120.0000            [m56max]  
//                   T            [inclusive]  
//                ankt            [algorithm]  
//             20.0000            [ptjetmin]  
//              0.0000            [etajetmin]  
//              2.4000            [etajetmax]  
//              0.5000            [Rcut]  
//                   F            [makecuts]  
//              0.0000            [leptpt]  
//             10.0000            [leptrap]  
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
  mcfmhisto = new TFile("Z_only_tota_MSTW200_91__91__Zprod_DSSZ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "y3", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("y3");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dy3 [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -5.9000000000000004      );
  id1 -> SetBinContent( xbin,    873.14476916591866      );
  id1 -> SetBinError( xbin,    430.82673531408147      );
   int xbin = id1->FindBin(  -5.7000000000000002      );
  id1 -> SetBinContent( xbin,   -5.6273805453130432      );
  id1 -> SetBinError( xbin,    552.39413969244492      );
   int xbin = id1->FindBin(  -5.5000000000000000      );
  id1 -> SetBinContent( xbin,    1856.0568011803678      );
  id1 -> SetBinError( xbin,    451.24157014162654      );
   int xbin = id1->FindBin(  -5.2999999999999998      );
  id1 -> SetBinContent( xbin,    1811.5555269057827      );
  id1 -> SetBinError( xbin,    218.55631624736617      );
   int xbin = id1->FindBin(  -5.0999999999999996      );
  id1 -> SetBinContent( xbin,    2817.6377694815910      );
  id1 -> SetBinError( xbin,    209.92634339415423      );
   int xbin = id1->FindBin(  -4.9000000000000004      );
  id1 -> SetBinContent( xbin,    4301.0170602016624      );
  id1 -> SetBinError( xbin,    395.70325145223291      );
   int xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    6658.8739709591937      );
  id1 -> SetBinError( xbin,    445.11104452847820      );
   int xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,    8616.8515509328899      );
  id1 -> SetBinError( xbin,    602.40070873878472      );
   int xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    11028.598262031444      );
  id1 -> SetBinError( xbin,    639.20372406905813      );
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    15411.824609969353      );
  id1 -> SetBinError( xbin,    491.77594688567439      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    22007.272335305854      );
  id1 -> SetBinError( xbin,    522.88019620557225      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    26829.642474981516      );
  id1 -> SetBinError( xbin,    509.48512606845230      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    33620.684893613892      );
  id1 -> SetBinError( xbin,    494.04026207112838      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    41881.725463533861      );
  id1 -> SetBinError( xbin,    619.40286211514092      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    49881.016738869177      );
  id1 -> SetBinError( xbin,    715.98251416839480      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    56987.315513114074      );
  id1 -> SetBinError( xbin,    1422.3168334973584      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    65883.177051014165      );
  id1 -> SetBinError( xbin,    1427.1815911592100      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    73310.928850554177      );
  id1 -> SetBinError( xbin,    721.91991505577835      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    80108.240112583764      );
  id1 -> SetBinError( xbin,    681.58074929302290      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    87349.536526905256      );
  id1 -> SetBinError( xbin,    1859.6515295985262      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    89077.780402198914      );
  id1 -> SetBinError( xbin,    2092.7381667356490      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    98938.103228515727      );
  id1 -> SetBinError( xbin,    1329.9884887546598      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    100818.01414337680      );
  id1 -> SetBinError( xbin,    1308.1471123988999      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    102953.97172553951      );
  id1 -> SetBinError( xbin,    1229.9887591257234      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    104338.10211111547      );
  id1 -> SetBinError( xbin,    993.85556984636344      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    108029.05316994435      );
  id1 -> SetBinError( xbin,    1037.2864036620342      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    109769.78320802009      );
  id1 -> SetBinError( xbin,    921.47778202295069      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    107136.75741553336      );
  id1 -> SetBinError( xbin,    997.17977514224015      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    109740.59083537477      );
  id1 -> SetBinError( xbin,    1096.0732734748262      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    106345.22126738227      );
  id1 -> SetBinError( xbin,    905.41479645354832      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    107364.47805210027      );
  id1 -> SetBinError( xbin,    837.41233395388156      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    106685.40379144739      );
  id1 -> SetBinError( xbin,    869.11196328573271      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    103927.77697639508      );
  id1 -> SetBinError( xbin,    810.75544912343514      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    101968.18003931033      );
  id1 -> SetBinError( xbin,    911.91168532147003      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    99317.214043419051      );
  id1 -> SetBinError( xbin,    927.02404132128356      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    97779.753999138440      );
  id1 -> SetBinError( xbin,    770.99353932508745      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    90196.840466921494      );
  id1 -> SetBinError( xbin,    4269.6781980418500      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    94313.221703492338      );
  id1 -> SetBinError( xbin,    4288.8343774687764      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    86657.462922803286      );
  id1 -> SetBinError( xbin,    814.67996278107773      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    80017.278840216735      );
  id1 -> SetBinError( xbin,    1222.6777613665440      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    76915.555171877946      );
  id1 -> SetBinError( xbin,    1258.3113230803992      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    69555.411386136213      );
  id1 -> SetBinError( xbin,    697.74805492898167      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    63352.825673199928      );
  id1 -> SetBinError( xbin,    658.55564173230766      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    55799.160272528141      );
  id1 -> SetBinError( xbin,    664.54175388913370      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    49431.827711062622      );
  id1 -> SetBinError( xbin,    572.80048054069960      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    41489.211680050059      );
  id1 -> SetBinError( xbin,    614.98004442675665      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    35321.626613961802      );
  id1 -> SetBinError( xbin,    617.99849540472803      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    28527.109810374917      );
  id1 -> SetBinError( xbin,    515.50309211541196      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    22658.929507538320      );
  id1 -> SetBinError( xbin,    462.10692584998964      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    18167.563952816901      );
  id1 -> SetBinError( xbin,    454.84026699308390      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    12109.371276674377      );
  id1 -> SetBinError( xbin,    446.60446331479716      );
   int xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,    10624.124106753830      );
  id1 -> SetBinError( xbin,    410.92863081487445      );
   int xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    7382.8269545820294      );
  id1 -> SetBinError( xbin,    316.45416196387623      );
   int xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    4368.8112851125125      );
  id1 -> SetBinError( xbin,    484.11522441811428      );
   int xbin = id1->FindBin(   4.9000000000000004      );
  id1 -> SetBinContent( xbin,    5215.4576192018903      );
  id1 -> SetBinError( xbin,    1389.9825785579997      );
   int xbin = id1->FindBin(   5.1000000000000014      );
  id1 -> SetBinContent( xbin,    1190.2994345985198      );
  id1 -> SetBinError( xbin,    1325.9212131468717      );
   int xbin = id1->FindBin(   5.3000000000000007      );
  id1 -> SetBinContent( xbin,    1776.2379551071256      );
  id1 -> SetBinError( xbin,    226.39560543249181      );
   int xbin = id1->FindBin(   5.5000000000000000      );
  id1 -> SetBinContent( xbin,    900.43672519773509      );
  id1 -> SetBinError( xbin,    198.72256713369541      );
   int xbin = id1->FindBin(   5.7000000000000011      );
  id1 -> SetBinContent( xbin,    914.76093957316687      );
  id1 -> SetBinError( xbin,    134.55698997463267      );
   int xbin = id1->FindBin(   5.9000000000000004      );
  id1 -> SetBinContent( xbin,    550.58569928134273      );
  id1 -> SetBinError( xbin,    89.383902967305971      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "y4", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("y4");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dy4 [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    557.20883691191500      );
  id2 -> SetBinError( xbin,    217.74859995283586      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    879.36490988460105      );
  id2 -> SetBinError( xbin,    194.17800899859867      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1809.8706565362897      );
  id2 -> SetBinError( xbin,    613.55044382231085      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    763.95874481251224      );
  id2 -> SetBinError( xbin,    621.16233853530446      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    1864.4647381468421      );
  id2 -> SetBinError( xbin,    267.69161353848779      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    3632.7403101159794      );
  id2 -> SetBinError( xbin,    269.60226115557515      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    4703.5362598777619      );
  id2 -> SetBinError( xbin,    269.48906235650901      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    7513.3906214192675      );
  id2 -> SetBinError( xbin,    460.26460752327017      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    9313.4158806809410      );
  id2 -> SetBinError( xbin,    476.38706885029012      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    12537.923305389766      );
  id2 -> SetBinError( xbin,    627.91592189797382      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    17521.621519682754      );
  id2 -> SetBinError( xbin,    673.61288547969230      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    21966.463197098135      );
  id2 -> SetBinError( xbin,    468.23188968359966      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    29882.512847580041      );
  id2 -> SetBinError( xbin,    505.64171357689651      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    35340.667674414632      );
  id2 -> SetBinError( xbin,    538.91896077191223      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    43742.913863744165      );
  id2 -> SetBinError( xbin,    610.18158845339428      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    51376.113333036948      );
  id2 -> SetBinError( xbin,    580.49357048108277      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    60285.557994899726      );
  id2 -> SetBinError( xbin,    539.11482020732672      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    65730.235639073697      );
  id2 -> SetBinError( xbin,    3547.7146520290139      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    82241.972000415917      );
  id2 -> SetBinError( xbin,    3617.4138190332519      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    85320.224323267175      );
  id2 -> SetBinError( xbin,    902.51986449042499      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    92286.811698586112      );
  id2 -> SetBinError( xbin,    666.60926335444981      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    99608.402619295826      );
  id2 -> SetBinError( xbin,    850.62111480332328      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    104902.05828501578      );
  id2 -> SetBinError( xbin,    879.99198497186580      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    113960.69391044218      );
  id2 -> SetBinError( xbin,    5211.4490141074211      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    105047.09208948311      );
  id2 -> SetBinError( xbin,    5243.6503503146350      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    113811.14248977853      );
  id2 -> SetBinError( xbin,    1287.9339214780653      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    112482.15541207619      );
  id2 -> SetBinError( xbin,    1318.0345086949683      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    115013.70566975442      );
  id2 -> SetBinError( xbin,    1139.0161893772838      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    115236.01959083577      );
  id2 -> SetBinError( xbin,    1008.8269129056702      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    115595.26373241833      );
  id2 -> SetBinError( xbin,    875.08199942406577      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    113299.84531805139      );
  id2 -> SetBinError( xbin,    1061.7023927316538      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    112719.16724643594      );
  id2 -> SetBinError( xbin,    1333.1826349757346      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    109175.76210262052      );
  id2 -> SetBinError( xbin,    1135.6608513352292      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    108472.66923587966      );
  id2 -> SetBinError( xbin,    768.21492906424737      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    105847.93090731557      );
  id2 -> SetBinError( xbin,    1201.3543464643253      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    100384.18947399688      );
  id2 -> SetBinError( xbin,    1246.9489491823422      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    98679.447807952456      );
  id2 -> SetBinError( xbin,    850.80172742277796      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    92491.655797128275      );
  id2 -> SetBinError( xbin,    802.89629147195637      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    88651.891551152308      );
  id2 -> SetBinError( xbin,    773.99865527294594      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    81566.235995750045      );
  id2 -> SetBinError( xbin,    718.27354479648523      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    75919.476072001722      );
  id2 -> SetBinError( xbin,    692.23997307953346      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    67942.895271639005      );
  id2 -> SetBinError( xbin,    642.19847951234658      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    59866.023606672359      );
  id2 -> SetBinError( xbin,    671.02464881107483      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    52042.187081642449      );
  id2 -> SetBinError( xbin,    779.37919441497070      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    45387.303720156458      );
  id2 -> SetBinError( xbin,    662.04283014155999      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    37114.864024889706      );
  id2 -> SetBinError( xbin,    590.71932098751017      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    31168.573775590743      );
  id2 -> SetBinError( xbin,    560.23629669304228      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    24112.445152662491      );
  id2 -> SetBinError( xbin,    444.20960166493933      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    19782.825376838751      );
  id2 -> SetBinError( xbin,    645.13527083765882      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    15153.263806910636      );
  id2 -> SetBinError( xbin,    705.58469412204249      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    11828.036904072464      );
  id2 -> SetBinError( xbin,    495.31356812530515      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    8353.3034229261339      );
  id2 -> SetBinError( xbin,    344.32925691899851      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    6097.3808507503200      );
  id2 -> SetBinError( xbin,    320.11201931647980      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    4618.5909423894909      );
  id2 -> SetBinError( xbin,    657.95278688596068      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    2225.6612770460592      );
  id2 -> SetBinError( xbin,    650.48052785916366      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    2180.7662391233875      );
  id2 -> SetBinError( xbin,    199.88717997627069      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    1563.7026474065376      );
  id2 -> SetBinError( xbin,    162.50226202213372      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    887.14862600002311      );
  id2 -> SetBinError( xbin,    182.22446830813018      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    456.21925401203481      );
  id2 -> SetBinError( xbin,    166.89288940336877      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    208.08977398920288      );
  id2 -> SetBinError( xbin,    142.23859615894605      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y34", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y34");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy34 [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,   -6.9421196356795256E-005 );
  id3 -> SetBinError( xbin,    6.9126428208159444E-005 );
   int xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,   0.88530205058323763      );
  id3 -> SetBinError( xbin,   0.42895708765052737      );
   int xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    27.016257792576187      );
  id3 -> SetBinError( xbin,    6.1786595070176347      );
   int xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    260.42094412604342      );
  id3 -> SetBinError( xbin,    23.271567042317720      );
   int xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    2664.8137443584733      );
  id3 -> SetBinError( xbin,    85.430965744327963      );
   int xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    9648.4569697809329      );
  id3 -> SetBinError( xbin,    208.36572021572385      );
   int xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    20594.951038319105      );
  id3 -> SetBinError( xbin,    1524.6726044114539      );
   int xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    39997.617311497961      );
  id3 -> SetBinError( xbin,    1537.2325369750258      );
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    54692.110696779557      );
  id3 -> SetBinError( xbin,    417.47851390576159      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    70959.210257127692      );
  id3 -> SetBinError( xbin,    481.92627765962555      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    85620.583538964871      );
  id3 -> SetBinError( xbin,    515.32931166906644      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    95784.054531555623      );
  id3 -> SetBinError( xbin,    524.52928537453749      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    104427.96395998998      );
  id3 -> SetBinError( xbin,    539.75079763518374      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    109761.16648601420      );
  id3 -> SetBinError( xbin,    545.30345594087669      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    115265.81372277532      );
  id3 -> SetBinError( xbin,    625.97755305409601      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    116070.88200256189      );
  id3 -> SetBinError( xbin,    661.15791305677226      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    117505.98959351893      );
  id3 -> SetBinError( xbin,    611.66955969841479      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    117867.45810552387      );
  id3 -> SetBinError( xbin,    606.90570698478848      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    118094.31758939706      );
  id3 -> SetBinError( xbin,    653.14781270807964      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    117238.37500864042      );
  id3 -> SetBinError( xbin,    631.08382081136347      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    116245.58015108298      );
  id3 -> SetBinError( xbin,    581.47756085906849      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    113922.13914032746      );
  id3 -> SetBinError( xbin,    563.63983091308569      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    114539.59104420122      );
  id3 -> SetBinError( xbin,    556.56342261257237      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    112765.55540213601      );
  id3 -> SetBinError( xbin,    600.54594565791979      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    111355.35196627124      );
  id3 -> SetBinError( xbin,    582.89586873079122      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    109872.55991501256      );
  id3 -> SetBinError( xbin,    553.54031794968330      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    109249.87737792847      );
  id3 -> SetBinError( xbin,    559.84919277787583      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    108553.99722787092      );
  id3 -> SetBinError( xbin,    650.91065419247127      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    104534.19822930773      );
  id3 -> SetBinError( xbin,    674.21664919431510      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    103343.05789181597      );
  id3 -> SetBinError( xbin,    571.36983285073438      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    102036.10494950607      );
  id3 -> SetBinError( xbin,    543.73233028720028      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    98514.847836169545      );
  id3 -> SetBinError( xbin,    530.78587225377680      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    93362.085242928471      );
  id3 -> SetBinError( xbin,    513.94696903229158      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    88708.578085299116      );
  id3 -> SetBinError( xbin,    515.44647601183112      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    80869.232566412771      );
  id3 -> SetBinError( xbin,    485.52595838243616      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    71554.055890713105      );
  id3 -> SetBinError( xbin,    456.32893366311316      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    59474.765219254121      );
  id3 -> SetBinError( xbin,    430.71513559503444      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    48080.611868995555      );
  id3 -> SetBinError( xbin,    395.76307005814783      );
   int xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    32563.245159191756      );
  id3 -> SetBinError( xbin,    355.10614543160085      );
   int xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    18959.483721663972      );
  id3 -> SetBinError( xbin,    287.11130572305518      );
   int xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    7859.0113231612695      );
  id3 -> SetBinError( xbin,    180.24291908551990      );
   int xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    2032.7484873439255      );
  id3 -> SetBinError( xbin,    75.796429175731845      );
   int xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    267.64056269886044      );
  id3 -> SetBinError( xbin,    26.912371748193035      );
   int xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    31.516145380240676      );
  id3 -> SetBinError( xbin,    8.1136370271294016      );
   int xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,   0.33792048313235884      );
  id3 -> SetBinError( xbin,   0.23467491416982877      );
   int xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    1.3688995551023674E-005 );
  id3 -> SetBinError( xbin,    3.0403705978598925E-005 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "pt3", 40,    0.00000,   80.00000);

  id4 -> GetXaxis() -> SetTitle("pt3");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/dpt3 [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(   1.0000000000000000      );
  id4 -> SetBinContent( xbin,    390.20531087662056      );
  id4 -> SetBinError( xbin,    42.972718150760834      );
   int xbin = id4->FindBin(   3.0000000000000000      );
  id4 -> SetBinContent( xbin,    1411.3303834748340      );
  id4 -> SetBinError( xbin,    64.246096720977562      );
   int xbin = id4->FindBin(   5.0000000000000000      );
  id4 -> SetBinContent( xbin,    2150.7779318060288      );
  id4 -> SetBinError( xbin,    68.684561045223049      );
   int xbin = id4->FindBin(   7.0000000000000000      );
  id4 -> SetBinContent( xbin,    3235.5774960551930      );
  id4 -> SetBinError( xbin,    102.07094284550593      );
   int xbin = id4->FindBin(   9.0000000000000000      );
  id4 -> SetBinContent( xbin,    3896.6571776821797      );
  id4 -> SetBinError( xbin,    146.00255741854514      );
   int xbin = id4->FindBin(   11.000000000000000      );
  id4 -> SetBinContent( xbin,    5825.5509112567879      );
  id4 -> SetBinError( xbin,    848.34623369339386      );
   int xbin = id4->FindBin(   13.000000000000000      );
  id4 -> SetBinContent( xbin,    4887.4159453433249      );
  id4 -> SetBinError( xbin,    850.71722733377851      );
   int xbin = id4->FindBin(   15.000000000000000      );
  id4 -> SetBinContent( xbin,    6932.8804863967061      );
  id4 -> SetBinError( xbin,    170.61049685483005      );
   int xbin = id4->FindBin(   17.000000000000000      );
  id4 -> SetBinContent( xbin,    7116.4132162793458      );
  id4 -> SetBinError( xbin,    159.15892815735356      );
   int xbin = id4->FindBin(   19.000000000000000      );
  id4 -> SetBinContent( xbin,    9085.5101865419474      );
  id4 -> SetBinError( xbin,    206.90005469765265      );
   int xbin = id4->FindBin(   21.000000000000000      );
  id4 -> SetBinContent( xbin,    9492.8072362617586      );
  id4 -> SetBinError( xbin,    204.43241970284376      );
   int xbin = id4->FindBin(   23.000000000000000      );
  id4 -> SetBinContent( xbin,    10762.446280568376      );
  id4 -> SetBinError( xbin,    173.76428988003894      );
   int xbin = id4->FindBin(   25.000000000000000      );
  id4 -> SetBinContent( xbin,    11245.641731289779      );
  id4 -> SetBinError( xbin,    239.19874036122306      );
   int xbin = id4->FindBin(   27.000000000000000      );
  id4 -> SetBinContent( xbin,    13126.774861571437      );
  id4 -> SetBinError( xbin,    238.51809088008628      );
   int xbin = id4->FindBin(   29.000000000000000      );
  id4 -> SetBinContent( xbin,    13871.394350145656      );
  id4 -> SetBinError( xbin,    190.00574698391063      );
   int xbin = id4->FindBin(   31.000000000000000      );
  id4 -> SetBinContent( xbin,    15109.577191454217      );
  id4 -> SetBinError( xbin,    205.24639172963097      );
   int xbin = id4->FindBin(   33.000000000000000      );
  id4 -> SetBinContent( xbin,    16244.529200390614      );
  id4 -> SetBinError( xbin,    213.38273314524932      );
   int xbin = id4->FindBin(   35.000000000000000      );
  id4 -> SetBinContent( xbin,    18151.308851263682      );
  id4 -> SetBinError( xbin,    449.54301360543127      );
   int xbin = id4->FindBin(   37.000000000000000      );
  id4 -> SetBinContent( xbin,    18943.835476520537      );
  id4 -> SetBinError( xbin,    467.89073994496795      );
   int xbin = id4->FindBin(   39.000000000000000      );
  id4 -> SetBinContent( xbin,    17634.987990269266      );
  id4 -> SetBinError( xbin,    2761.3518993500729      );
   int xbin = id4->FindBin(   41.000000000000000      );
  id4 -> SetBinContent( xbin,    26254.086461360679      );
  id4 -> SetBinError( xbin,    2761.5450621189980      );
   int xbin = id4->FindBin(   43.000000000000000      );
  id4 -> SetBinContent( xbin,    26355.878531828141      );
  id4 -> SetBinError( xbin,    310.63059217513387      );
   int xbin = id4->FindBin(   45.000000000000000      );
  id4 -> SetBinContent( xbin,    21406.809792969980      );
  id4 -> SetBinError( xbin,    403.60122373328778      );
   int xbin = id4->FindBin(   47.000000000000000      );
  id4 -> SetBinContent( xbin,    17938.273523424446      );
  id4 -> SetBinError( xbin,    321.43584633354931      );
   int xbin = id4->FindBin(   49.000000000000000      );
  id4 -> SetBinContent( xbin,    8507.0230414262878      );
  id4 -> SetBinError( xbin,    72.387691137189080      );
   int xbin = id4->FindBin(   51.000000000000000      );
  id4 -> SetBinContent( xbin,    4964.0265395092665      );
  id4 -> SetBinError( xbin,    46.238936644272606      );
   int xbin = id4->FindBin(   53.000000000000000      );
  id4 -> SetBinContent( xbin,    3196.6372571270617      );
  id4 -> SetBinError( xbin,    30.397579508351622      );
   int xbin = id4->FindBin(   55.000000000000000      );
  id4 -> SetBinContent( xbin,    2323.0567760699350      );
  id4 -> SetBinError( xbin,    26.292800185501697      );
   int xbin = id4->FindBin(   57.000000000000000      );
  id4 -> SetBinContent( xbin,    1703.8098981305677      );
  id4 -> SetBinError( xbin,    21.108576993639566      );
   int xbin = id4->FindBin(   59.000000000000000      );
  id4 -> SetBinContent( xbin,    1304.4696521715271      );
  id4 -> SetBinError( xbin,    11.757935847192542      );
   int xbin = id4->FindBin(   61.000000000000000      );
  id4 -> SetBinContent( xbin,    1013.3688394825318      );
  id4 -> SetBinError( xbin,    6.0185220573025520      );
   int xbin = id4->FindBin(   63.000000000000000      );
  id4 -> SetBinContent( xbin,    807.44922039772018      );
  id4 -> SetBinError( xbin,    4.6154843401176455      );
   int xbin = id4->FindBin(   65.000000000000000      );
  id4 -> SetBinContent( xbin,    660.16168611525734      );
  id4 -> SetBinError( xbin,    3.8736833636878658      );
   int xbin = id4->FindBin(   67.000000000000000      );
  id4 -> SetBinContent( xbin,    557.62532864631078      );
  id4 -> SetBinError( xbin,    3.5539224336115138      );
   int xbin = id4->FindBin(   69.000000000000000      );
  id4 -> SetBinContent( xbin,    468.50004361047581      );
  id4 -> SetBinError( xbin,    3.2981995540263549      );
   int xbin = id4->FindBin(   71.000000000000000      );
  id4 -> SetBinContent( xbin,    396.41006214701548      );
  id4 -> SetBinError( xbin,    2.8182836057191318      );
   int xbin = id4->FindBin(   73.000000000000000      );
  id4 -> SetBinContent( xbin,    343.37734728309056      );
  id4 -> SetBinError( xbin,    2.5530335005665892      );
   int xbin = id4->FindBin(   75.000000000000000      );
  id4 -> SetBinContent( xbin,    295.66485998802665      );
  id4 -> SetBinError( xbin,    2.2921306014857969      );
   int xbin = id4->FindBin(   77.000000000000000      );
  id4 -> SetBinContent( xbin,    260.16265120955580      );
  id4 -> SetBinError( xbin,    2.2163258608479808      );
   int xbin = id4->FindBin(   79.000000000000000      );
  id4 -> SetBinContent( xbin,    225.47293895322807      );
  id4 -> SetBinError( xbin,    2.0524188136313124      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt4", 40,    0.00000,   80.00000);

  id5 -> GetXaxis() -> SetTitle("pt4");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt4 [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   1.0000000000000000      );
  id5 -> SetBinContent( xbin,    489.02316772057202      );
  id5 -> SetBinError( xbin,    35.947804717630156      );
   int xbin = id5->FindBin(   3.0000000000000000      );
  id5 -> SetBinContent( xbin,    1340.7514962834771      );
  id5 -> SetBinError( xbin,    56.029530920838191      );
   int xbin = id5->FindBin(   5.0000000000000000      );
  id5 -> SetBinContent( xbin,    2352.1645867729308      );
  id5 -> SetBinError( xbin,    134.79073413658057      );
   int xbin = id5->FindBin(   7.0000000000000000      );
  id5 -> SetBinContent( xbin,    2759.0618834086508      );
  id5 -> SetBinError( xbin,    162.53535367099457      );
   int xbin = id5->FindBin(   9.0000000000000000      );
  id5 -> SetBinContent( xbin,    4103.5405656771127      );
  id5 -> SetBinError( xbin,    121.99488990543021      );
   int xbin = id5->FindBin(   11.000000000000000      );
  id5 -> SetBinContent( xbin,    4872.8832290397804      );
  id5 -> SetBinError( xbin,    148.83682938165950      );
   int xbin = id5->FindBin(   13.000000000000000      );
  id5 -> SetBinContent( xbin,    5658.2412154562007      );
  id5 -> SetBinError( xbin,    213.91441704365923      );
   int xbin = id5->FindBin(   15.000000000000000      );
  id5 -> SetBinContent( xbin,    6406.8697935996088      );
  id5 -> SetBinError( xbin,    479.03790406207105      );
   int xbin = id5->FindBin(   17.000000000000000      );
  id5 -> SetBinContent( xbin,    8309.6171120245763      );
  id5 -> SetBinError( xbin,    465.94066428300971      );
   int xbin = id5->FindBin(   19.000000000000000      );
  id5 -> SetBinContent( xbin,    8762.6971976759560      );
  id5 -> SetBinError( xbin,    311.14747996174543      );
   int xbin = id5->FindBin(   21.000000000000000      );
  id5 -> SetBinContent( xbin,    8998.1299666922223      );
  id5 -> SetBinError( xbin,    406.01978525603425      );
   int xbin = id5->FindBin(   23.000000000000000      );
  id5 -> SetBinContent( xbin,    11412.601684619231      );
  id5 -> SetBinError( xbin,    394.45307309270584      );
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    11018.106959330162      );
  id5 -> SetBinError( xbin,    368.78806857722151      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    13266.164801299057      );
  id5 -> SetBinError( xbin,    299.25202608700772      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    13817.226139469270      );
  id5 -> SetBinError( xbin,    250.57261873145725      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    15051.999160745261      );
  id5 -> SetBinError( xbin,    333.63109505882488      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    16542.308443652826      );
  id5 -> SetBinError( xbin,    323.28927305962742      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    17240.349664463964      );
  id5 -> SetBinError( xbin,    388.65097192369097      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    19652.898278234683      );
  id5 -> SetBinError( xbin,    577.50333993535821      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    20816.523099113459      );
  id5 -> SetBinError( xbin,    498.98640068729543      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    23509.835799871900      );
  id5 -> SetBinError( xbin,    403.56050954422136      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    26426.960440698240      );
  id5 -> SetBinError( xbin,    416.79151227553058      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    21378.093999810157      );
  id5 -> SetBinError( xbin,    335.54778167686658      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17718.496789042765      );
  id5 -> SetBinError( xbin,    265.51026394053810      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8582.7831565569031      );
  id5 -> SetBinError( xbin,    96.432915966817191      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    4875.3012548428442      );
  id5 -> SetBinError( xbin,    43.194759564165786      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    3206.3057228573634      );
  id5 -> SetBinError( xbin,    30.636825499492545      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    2277.0841859598690      );
  id5 -> SetBinError( xbin,    20.964569854445941      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    1662.4147972996652      );
  id5 -> SetBinError( xbin,    19.505359403305633      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    1283.7276379151151      );
  id5 -> SetBinError( xbin,    16.910358487497003      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    988.05429491210987      );
  id5 -> SetBinError( xbin,    7.9772358023642669      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    782.68663943592560      );
  id5 -> SetBinError( xbin,    4.2895158770337520      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    644.38406328536189      );
  id5 -> SetBinError( xbin,    3.7324270705034088      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    538.16944971362238      );
  id5 -> SetBinError( xbin,    3.2101912990762029      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    447.76834073348311      );
  id5 -> SetBinError( xbin,    2.8926606340760110      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    382.29420582378992      );
  id5 -> SetBinError( xbin,    2.5935404907951871      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    325.74794416490590      );
  id5 -> SetBinError( xbin,    2.3521377205115637      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    283.54102833068868      );
  id5 -> SetBinError( xbin,    2.1603198887036110      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    240.66985832806881      );
  id5 -> SetBinError( xbin,    1.9066615769163799      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    211.81514012188651      );
  id5 -> SetBinError( xbin,    1.7940367840302116      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "pt34", 25,    0.00000,   50.00000);

  id6 -> GetXaxis() -> SetTitle("pt34");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dpt34 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,   -26902.128813881365      );
  id6 -> SetBinError( xbin,    372.56339275293624      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    117007.69668539023      );
  id6 -> SetBinError( xbin,    231.37389697515616      );
   int xbin = id6->FindBin(   5.0000000000000000      );
  id6 -> SetBinContent( xbin,    56118.355479624988      );
  id6 -> SetBinError( xbin,    104.74298058789999      );
   int xbin = id6->FindBin(   7.0000000000000000      );
  id6 -> SetBinContent( xbin,    34342.497757635967      );
  id6 -> SetBinError( xbin,    64.754167837982777      );
   int xbin = id6->FindBin(   9.0000000000000000      );
  id6 -> SetBinContent( xbin,    23553.089330421324      );
  id6 -> SetBinError( xbin,    45.764153848697518      );
   int xbin = id6->FindBin(   11.000000000000000      );
  id6 -> SetBinContent( xbin,    17241.361400882543      );
  id6 -> SetBinError( xbin,    34.978063242689615      );
   int xbin = id6->FindBin(   13.000000000000000      );
  id6 -> SetBinContent( xbin,    13234.331915294324      );
  id6 -> SetBinError( xbin,    28.493869493307390      );
   int xbin = id6->FindBin(   15.000000000000000      );
  id6 -> SetBinContent( xbin,    10437.408146058784      );
  id6 -> SetBinError( xbin,    23.528807380643141      );
   int xbin = id6->FindBin(   17.000000000000000      );
  id6 -> SetBinContent( xbin,    8415.8362937633046      );
  id6 -> SetBinError( xbin,    19.830596894595384      );
   int xbin = id6->FindBin(   19.000000000000000      );
  id6 -> SetBinContent( xbin,    6961.8319299406130      );
  id6 -> SetBinError( xbin,    17.187769654091113      );
   int xbin = id6->FindBin(   21.000000000000000      );
  id6 -> SetBinContent( xbin,    5826.0413245553937      );
  id6 -> SetBinError( xbin,    15.029671189297817      );
   int xbin = id6->FindBin(   23.000000000000000      );
  id6 -> SetBinContent( xbin,    4928.0974596778524      );
  id6 -> SetBinError( xbin,    13.172357885626134      );
   int xbin = id6->FindBin(   25.000000000000000      );
  id6 -> SetBinContent( xbin,    4204.2776742518417      );
  id6 -> SetBinError( xbin,    11.911763656703993      );
   int xbin = id6->FindBin(   27.000000000000000      );
  id6 -> SetBinContent( xbin,    3631.4934600755587      );
  id6 -> SetBinError( xbin,    10.611507024409786      );
   int xbin = id6->FindBin(   29.000000000000000      );
  id6 -> SetBinContent( xbin,    3157.1730211827430      );
  id6 -> SetBinError( xbin,    9.5391776831758310      );
   int xbin = id6->FindBin(   31.000000000000000      );
  id6 -> SetBinContent( xbin,    2769.5626777337966      );
  id6 -> SetBinError( xbin,    8.7793392055390918      );
   int xbin = id6->FindBin(   33.000000000000000      );
  id6 -> SetBinContent( xbin,    2432.8257798017735      );
  id6 -> SetBinError( xbin,    8.0066288765935063      );
   int xbin = id6->FindBin(   35.000000000000000      );
  id6 -> SetBinContent( xbin,    2137.4450655491660      );
  id6 -> SetBinError( xbin,    7.2827689165039393      );
   int xbin = id6->FindBin(   37.000000000000000      );
  id6 -> SetBinContent( xbin,    1903.9395649977073      );
  id6 -> SetBinError( xbin,    6.6901624540251827      );
   int xbin = id6->FindBin(   39.000000000000000      );
  id6 -> SetBinContent( xbin,    1701.6004256239089      );
  id6 -> SetBinError( xbin,    6.1707690062304890      );
   int xbin = id6->FindBin(   41.000000000000000      );
  id6 -> SetBinContent( xbin,    1522.1851852068153      );
  id6 -> SetBinError( xbin,    5.8328162821740044      );
   int xbin = id6->FindBin(   43.000000000000000      );
  id6 -> SetBinContent( xbin,    1361.2848096601285      );
  id6 -> SetBinError( xbin,    5.3094203128967008      );
   int xbin = id6->FindBin(   45.000000000000000      );
  id6 -> SetBinContent( xbin,    1225.1948671108273      );
  id6 -> SetBinError( xbin,    5.0005422717532557      );
   int xbin = id6->FindBin(   47.000000000000000      );
  id6 -> SetBinContent( xbin,    1102.2327876459437      );
  id6 -> SetBinError( xbin,    4.6922202473136290      );
   int xbin = id6->FindBin(   49.000000000000000      );
  id6 -> SetBinContent( xbin,    997.36567819081120      );
  id6 -> SetBinError( xbin,    4.4171300700782954      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "m34", 80,   70.00000,  110.00000);

  id7 -> GetXaxis() -> SetTitle("m34");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dm34 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(   70.250000000000000      );
  id7 -> SetBinContent( xbin,    1178.7109858357605      );
  id7 -> SetBinError( xbin,    36.533256253799749      );
   int xbin = id7->FindBin(   70.750000000000000      );
  id7 -> SetBinContent( xbin,    1261.4033496151351      );
  id7 -> SetBinError( xbin,    36.645129152354691      );
   int xbin = id7->FindBin(   71.250000000000000      );
  id7 -> SetBinContent( xbin,    1235.3414317321403      );
  id7 -> SetBinError( xbin,    35.710259780539893      );
   int xbin = id7->FindBin(   71.750000000000000      );
  id7 -> SetBinContent( xbin,    1243.4298113753628      );
  id7 -> SetBinError( xbin,    35.486208112337437      );
   int xbin = id7->FindBin(   72.250000000000000      );
  id7 -> SetBinContent( xbin,    1266.1184491377310      );
  id7 -> SetBinError( xbin,    35.357857168976615      );
   int xbin = id7->FindBin(   72.750000000000000      );
  id7 -> SetBinContent( xbin,    1337.0425867073609      );
  id7 -> SetBinError( xbin,    36.277733143671711      );
   int xbin = id7->FindBin(   73.250000000000000      );
  id7 -> SetBinContent( xbin,    1341.4704220262338      );
  id7 -> SetBinError( xbin,    34.541154235652328      );
   int xbin = id7->FindBin(   73.750000000000000      );
  id7 -> SetBinContent( xbin,    1418.1077259456340      );
  id7 -> SetBinError( xbin,    34.965628598974249      );
   int xbin = id7->FindBin(   74.250000000000000      );
  id7 -> SetBinContent( xbin,    1385.9643824878158      );
  id7 -> SetBinError( xbin,    34.014160703421211      );
   int xbin = id7->FindBin(   74.750000000000000      );
  id7 -> SetBinContent( xbin,    1426.4855623635781      );
  id7 -> SetBinError( xbin,    35.054322945350954      );
   int xbin = id7->FindBin(   75.250000000000000      );
  id7 -> SetBinContent( xbin,    1513.9544604855612      );
  id7 -> SetBinError( xbin,    36.453862277603037      );
   int xbin = id7->FindBin(   75.750000000000000      );
  id7 -> SetBinContent( xbin,    1496.3612542339490      );
  id7 -> SetBinError( xbin,    36.091931696300392      );
   int xbin = id7->FindBin(   76.250000000000000      );
  id7 -> SetBinContent( xbin,    1664.8912878475421      );
  id7 -> SetBinError( xbin,    37.526800943943336      );
   int xbin = id7->FindBin(   76.750000000000000      );
  id7 -> SetBinContent( xbin,    1708.6682293241893      );
  id7 -> SetBinError( xbin,    37.627565630435043      );
   int xbin = id7->FindBin(   77.250000000000000      );
  id7 -> SetBinContent( xbin,    1785.7781088116242      );
  id7 -> SetBinError( xbin,    37.950163327566734      );
   int xbin = id7->FindBin(   77.750000000000000      );
  id7 -> SetBinContent( xbin,    1925.1527403788750      );
  id7 -> SetBinError( xbin,    38.737508306393444      );
   int xbin = id7->FindBin(   78.250000000000000      );
  id7 -> SetBinContent( xbin,    1978.2043784088755      );
  id7 -> SetBinError( xbin,    40.674020454722204      );
   int xbin = id7->FindBin(   78.750000000000000      );
  id7 -> SetBinContent( xbin,    2104.4342635133398      );
  id7 -> SetBinError( xbin,    43.605320504524705      );
   int xbin = id7->FindBin(   79.250000000000000      );
  id7 -> SetBinContent( xbin,    2307.8270186046120      );
  id7 -> SetBinError( xbin,    45.150376944067958      );
   int xbin = id7->FindBin(   79.750000000000000      );
  id7 -> SetBinContent( xbin,    2423.6936882865880      );
  id7 -> SetBinError( xbin,    45.823075800500483      );
   int xbin = id7->FindBin(   80.250000000000000      );
  id7 -> SetBinContent( xbin,    2601.3755971260935      );
  id7 -> SetBinError( xbin,    46.756491293082881      );
   int xbin = id7->FindBin(   80.750000000000000      );
  id7 -> SetBinContent( xbin,    2794.3180358451245      );
  id7 -> SetBinError( xbin,    48.337815551713604      );
   int xbin = id7->FindBin(   81.250000000000000      );
  id7 -> SetBinContent( xbin,    2918.0787831217763      );
  id7 -> SetBinError( xbin,    49.949884652241366      );
   int xbin = id7->FindBin(   81.750000000000000      );
  id7 -> SetBinContent( xbin,    3221.2446611777932      );
  id7 -> SetBinError( xbin,    52.697287982428712      );
   int xbin = id7->FindBin(   82.250000000000000      );
  id7 -> SetBinContent( xbin,    3577.3552760527368      );
  id7 -> SetBinError( xbin,    54.696935326823883      );
   int xbin = id7->FindBin(   82.750000000000000      );
  id7 -> SetBinContent( xbin,    3847.6079908486922      );
  id7 -> SetBinError( xbin,    56.457504166913068      );
   int xbin = id7->FindBin(   83.250000000000000      );
  id7 -> SetBinContent( xbin,    4348.1735109361744      );
  id7 -> SetBinError( xbin,    60.189251969224891      );
   int xbin = id7->FindBin(   83.750000000000000      );
  id7 -> SetBinContent( xbin,    4960.1634544899598      );
  id7 -> SetBinError( xbin,    63.919282276103090      );
   int xbin = id7->FindBin(   84.250000000000000      );
  id7 -> SetBinContent( xbin,    5490.7991141440516      );
  id7 -> SetBinError( xbin,    67.984371755911482      );
   int xbin = id7->FindBin(   84.750000000000000      );
  id7 -> SetBinContent( xbin,    6410.8614750577872      );
  id7 -> SetBinError( xbin,    74.107704566542353      );
   int xbin = id7->FindBin(   85.250000000000000      );
  id7 -> SetBinContent( xbin,    7294.6883521343807      );
  id7 -> SetBinError( xbin,    78.049739145536691      );
   int xbin = id7->FindBin(   85.750000000000000      );
  id7 -> SetBinContent( xbin,    8629.7208555118978      );
  id7 -> SetBinError( xbin,    84.696869914421484      );
   int xbin = id7->FindBin(   86.250000000000000      );
  id7 -> SetBinContent( xbin,    10215.454980631052      );
  id7 -> SetBinError( xbin,    93.736953184690805      );
   int xbin = id7->FindBin(   86.750000000000000      );
  id7 -> SetBinContent( xbin,    12174.243534937390      );
  id7 -> SetBinError( xbin,    100.13578526687769      );
   int xbin = id7->FindBin(   87.250000000000000      );
  id7 -> SetBinContent( xbin,    15370.531669467589      );
  id7 -> SetBinError( xbin,    114.45587836159240      );
   int xbin = id7->FindBin(   87.750000000000000      );
  id7 -> SetBinContent( xbin,    19240.368783024172      );
  id7 -> SetBinError( xbin,    127.04928755388455      );
   int xbin = id7->FindBin(   88.250000000000000      );
  id7 -> SetBinContent( xbin,    24999.760054087488      );
  id7 -> SetBinError( xbin,    144.75205578355644      );
   int xbin = id7->FindBin(   88.750000000000000      );
  id7 -> SetBinContent( xbin,    33704.606665924970      );
  id7 -> SetBinError( xbin,    168.50384039675137      );
   int xbin = id7->FindBin(   89.250000000000000      );
  id7 -> SetBinContent( xbin,    47449.069239021832      );
  id7 -> SetBinError( xbin,    199.68055484451480      );
   int xbin = id7->FindBin(   89.750000000000000      );
  id7 -> SetBinContent( xbin,    69217.315311704457      );
  id7 -> SetBinError( xbin,    240.90082433521295      );
   int xbin = id7->FindBin(   90.250000000000000      );
  id7 -> SetBinContent( xbin,    101917.43496738636      );
  id7 -> SetBinError( xbin,    291.49906601479370      );
   int xbin = id7->FindBin(   90.750000000000000      );
  id7 -> SetBinContent( xbin,    140006.07751397669      );
  id7 -> SetBinError( xbin,    341.10939812413500      );
   int xbin = id7->FindBin(   91.250000000000000      );
  id7 -> SetBinContent( xbin,    155936.51752846237      );
  id7 -> SetBinError( xbin,    359.95468146402874      );
   int xbin = id7->FindBin(   91.750000000000000      );
  id7 -> SetBinContent( xbin,    130711.90847886442      );
  id7 -> SetBinError( xbin,    330.38493597445080      );
   int xbin = id7->FindBin(   92.250000000000000      );
  id7 -> SetBinContent( xbin,    91981.882221266525      );
  id7 -> SetBinError( xbin,    278.04481023754624      );
   int xbin = id7->FindBin(   92.750000000000000      );
  id7 -> SetBinContent( xbin,    61846.870336512911      );
  id7 -> SetBinError( xbin,    228.55668825894864      );
   int xbin = id7->FindBin(   93.250000000000000      );
  id7 -> SetBinContent( xbin,    42433.725865131186      );
  id7 -> SetBinError( xbin,    189.32785294592298      );
   int xbin = id7->FindBin(   93.750000000000000      );
  id7 -> SetBinContent( xbin,    29851.142289669482      );
  id7 -> SetBinError( xbin,    159.23286035945742      );
   int xbin = id7->FindBin(   94.250000000000000      );
  id7 -> SetBinContent( xbin,    22234.277285775770      );
  id7 -> SetBinError( xbin,    137.90686237842741      );
   int xbin = id7->FindBin(   94.750000000000000      );
  id7 -> SetBinContent( xbin,    16972.817296338308      );
  id7 -> SetBinError( xbin,    120.43112835697227      );
   int xbin = id7->FindBin(   95.250000000000000      );
  id7 -> SetBinContent( xbin,    13230.210822851488      );
  id7 -> SetBinError( xbin,    106.60524399241488      );
   int xbin = id7->FindBin(   95.750000000000000      );
  id7 -> SetBinContent( xbin,    10644.141145536316      );
  id7 -> SetBinError( xbin,    95.581348900600076      );
   int xbin = id7->FindBin(   96.250000000000000      );
  id7 -> SetBinContent( xbin,    8880.1742804521855      );
  id7 -> SetBinError( xbin,    86.711894403846671      );
   int xbin = id7->FindBin(   96.750000000000000      );
  id7 -> SetBinContent( xbin,    7380.4481999559666      );
  id7 -> SetBinError( xbin,    81.307661607192756      );
   int xbin = id7->FindBin(   97.250000000000000      );
  id7 -> SetBinContent( xbin,    6259.0362151359013      );
  id7 -> SetBinError( xbin,    73.740336153389876      );
   int xbin = id7->FindBin(   97.750000000000000      );
  id7 -> SetBinContent( xbin,    5303.6554374293992      );
  id7 -> SetBinError( xbin,    66.701452862619789      );
   int xbin = id7->FindBin(   98.250000000000000      );
  id7 -> SetBinContent( xbin,    4552.1003122122293      );
  id7 -> SetBinError( xbin,    62.033236351885314      );
   int xbin = id7->FindBin(   98.750000000000000      );
  id7 -> SetBinContent( xbin,    3960.6561574084585      );
  id7 -> SetBinError( xbin,    59.681407597739884      );
   int xbin = id7->FindBin(   99.250000000000000      );
  id7 -> SetBinContent( xbin,    3572.9010314803427      );
  id7 -> SetBinError( xbin,    57.114120834097292      );
   int xbin = id7->FindBin(   99.750000000000000      );
  id7 -> SetBinContent( xbin,    3123.7428384855430      );
  id7 -> SetBinError( xbin,    53.000167910235376      );
   int xbin = id7->FindBin(   100.25000000000000      );
  id7 -> SetBinContent( xbin,    2871.6849717947371      );
  id7 -> SetBinError( xbin,    50.175920699809843      );
   int xbin = id7->FindBin(   100.75000000000000      );
  id7 -> SetBinContent( xbin,    2566.3940842767388      );
  id7 -> SetBinError( xbin,    46.811164645318371      );
   int xbin = id7->FindBin(   101.25000000000000      );
  id7 -> SetBinContent( xbin,    2247.2696775419695      );
  id7 -> SetBinError( xbin,    43.506465339628491      );
   int xbin = id7->FindBin(   101.75000000000000      );
  id7 -> SetBinContent( xbin,    2119.8593502629114      );
  id7 -> SetBinError( xbin,    42.427194520251497      );
   int xbin = id7->FindBin(   102.25000000000000      );
  id7 -> SetBinContent( xbin,    1941.9428506849815      );
  id7 -> SetBinError( xbin,    40.789383143238851      );
   int xbin = id7->FindBin(   102.75000000000000      );
  id7 -> SetBinContent( xbin,    1683.1777111162985      );
  id7 -> SetBinError( xbin,    37.672987090258289      );
   int xbin = id7->FindBin(   103.25000000000000      );
  id7 -> SetBinContent( xbin,    1604.4970389749603      );
  id7 -> SetBinError( xbin,    37.749954966727763      );
   int xbin = id7->FindBin(   103.75000000000000      );
  id7 -> SetBinContent( xbin,    1462.5667988603050      );
  id7 -> SetBinError( xbin,    35.935430247925616      );
   int xbin = id7->FindBin(   104.25000000000000      );
  id7 -> SetBinContent( xbin,    1391.7691268573383      );
  id7 -> SetBinError( xbin,    35.831458052814114      );
   int xbin = id7->FindBin(   104.75000000000000      );
  id7 -> SetBinContent( xbin,    1242.5690108309473      );
  id7 -> SetBinError( xbin,    33.119281772427478      );
   int xbin = id7->FindBin(   105.25000000000000      );
  id7 -> SetBinContent( xbin,    1175.2998817291602      );
  id7 -> SetBinError( xbin,    33.138597801109839      );
   int xbin = id7->FindBin(   105.75000000000000      );
  id7 -> SetBinContent( xbin,    1127.8747242849265      );
  id7 -> SetBinError( xbin,    31.822805098006722      );
   int xbin = id7->FindBin(   106.25000000000000      );
  id7 -> SetBinContent( xbin,    1041.0908800510210      );
  id7 -> SetBinError( xbin,    30.756496242189776      );
   int xbin = id7->FindBin(   106.75000000000000      );
  id7 -> SetBinContent( xbin,    940.07494955342179      );
  id7 -> SetBinError( xbin,    29.163200190765249      );
   int xbin = id7->FindBin(   107.25000000000000      );
  id7 -> SetBinContent( xbin,    902.08539970996321      );
  id7 -> SetBinError( xbin,    28.753865747844863      );
   int xbin = id7->FindBin(   107.75000000000000      );
  id7 -> SetBinContent( xbin,    920.14352957962114      );
  id7 -> SetBinError( xbin,    29.196429143424979      );
   int xbin = id7->FindBin(   108.25000000000000      );
  id7 -> SetBinContent( xbin,    788.65014381610490      );
  id7 -> SetBinError( xbin,    26.209694667870888      );
   int xbin = id7->FindBin(   108.75000000000000      );
  id7 -> SetBinContent( xbin,    774.57388534084919      );
  id7 -> SetBinError( xbin,    26.299571763217365      );
   int xbin = id7->FindBin(   109.25000000000000      );
  id7 -> SetBinContent( xbin,    672.48895193955639      );
  id7 -> SetBinError( xbin,    24.223954288032864      );
   int xbin = id7->FindBin(   109.75000000000000      );
  id7 -> SetBinContent( xbin,    677.20679114746258      );
  id7 -> SetBinError( xbin,    24.502573780894391      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "DeltaR35", 50,    0.00000,    5.00000);

  id8 -> GetXaxis() -> SetTitle("DeltaR35");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaR35 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   5.0000000000000003E-002 );
  id8 -> SetBinContent( xbin,    578.78658576079454      );
  id8 -> SetBinError( xbin,    13.528153753467723      );
   int xbin = id8->FindBin(  0.15000000000000002      );
  id8 -> SetBinContent( xbin,    1798.6205319032497      );
  id8 -> SetBinError( xbin,    23.923257270024653      );
   int xbin = id8->FindBin(  0.25000000000000000      );
  id8 -> SetBinContent( xbin,    2973.5708541396089      );
  id8 -> SetBinError( xbin,    30.592526973051573      );
   int xbin = id8->FindBin(  0.35000000000000003      );
  id8 -> SetBinContent( xbin,    4072.5633635132963      );
  id8 -> SetBinError( xbin,    36.012076378813624      );
   int xbin = id8->FindBin(  0.45000000000000001      );
  id8 -> SetBinContent( xbin,    5313.2118031427945      );
  id8 -> SetBinError( xbin,    42.381078839013725      );
   int xbin = id8->FindBin(  0.55000000000000004      );
  id8 -> SetBinContent( xbin,    6459.0660825655959      );
  id8 -> SetBinError( xbin,    46.046846749432056      );
   int xbin = id8->FindBin(  0.65000000000000002      );
  id8 -> SetBinContent( xbin,    7618.0611946323879      );
  id8 -> SetBinError( xbin,    50.561706429371355      );
   int xbin = id8->FindBin(  0.75000000000000000      );
  id8 -> SetBinContent( xbin,    8711.5378540413058      );
  id8 -> SetBinError( xbin,    54.257582162330159      );
   int xbin = id8->FindBin(  0.85000000000000009      );
  id8 -> SetBinContent( xbin,    9921.0499347360601      );
  id8 -> SetBinError( xbin,    58.634269745850759      );
   int xbin = id8->FindBin(  0.95000000000000007      );
  id8 -> SetBinContent( xbin,    10999.977174006524      );
  id8 -> SetBinError( xbin,    61.955839873206060      );
   int xbin = id8->FindBin(   1.0500000000000000      );
  id8 -> SetBinContent( xbin,    12074.139278642260      );
  id8 -> SetBinError( xbin,    64.840356672220125      );
   int xbin = id8->FindBin(   1.1500000000000001      );
  id8 -> SetBinContent( xbin,    13204.296022491946      );
  id8 -> SetBinError( xbin,    68.663884032918105      );
   int xbin = id8->FindBin(   1.2500000000000000      );
  id8 -> SetBinContent( xbin,    14504.319846827439      );
  id8 -> SetBinError( xbin,    72.508486915724561      );
   int xbin = id8->FindBin(   1.3500000000000001      );
  id8 -> SetBinContent( xbin,    15465.227017268146      );
  id8 -> SetBinError( xbin,    74.648552039008948      );
   int xbin = id8->FindBin(   1.4500000000000002      );
  id8 -> SetBinContent( xbin,    16562.101793623646      );
  id8 -> SetBinError( xbin,    77.996610874581478      );
   int xbin = id8->FindBin(   1.5500000000000000      );
  id8 -> SetBinContent( xbin,    17790.116499816195      );
  id8 -> SetBinError( xbin,    81.065852464879697      );
   int xbin = id8->FindBin(   1.6500000000000001      );
  id8 -> SetBinContent( xbin,    19161.477320230842      );
  id8 -> SetBinError( xbin,    84.508903663516506      );
   int xbin = id8->FindBin(   1.7500000000000000      );
  id8 -> SetBinContent( xbin,    20353.593242008428      );
  id8 -> SetBinError( xbin,    87.692966052895258      );
   int xbin = id8->FindBin(   1.8500000000000001      );
  id8 -> SetBinContent( xbin,    21727.753702409325      );
  id8 -> SetBinError( xbin,    90.803900411529554      );
   int xbin = id8->FindBin(   1.9500000000000002      );
  id8 -> SetBinContent( xbin,    23277.677254110138      );
  id8 -> SetBinError( xbin,    94.301540158654333      );
   int xbin = id8->FindBin(   2.0500000000000003      );
  id8 -> SetBinContent( xbin,    24933.694628309619      );
  id8 -> SetBinError( xbin,    98.219325551937715      );
   int xbin = id8->FindBin(   2.1499999999999999      );
  id8 -> SetBinContent( xbin,    26830.340374659248      );
  id8 -> SetBinError( xbin,    102.36606346879293      );
   int xbin = id8->FindBin(   2.2500000000000000      );
  id8 -> SetBinContent( xbin,    28621.812413552529      );
  id8 -> SetBinError( xbin,    104.30044175184965      );
   int xbin = id8->FindBin(   2.3500000000000001      );
  id8 -> SetBinContent( xbin,    30929.762712265216      );
  id8 -> SetBinError( xbin,    109.71754206985115      );
   int xbin = id8->FindBin(   2.4500000000000002      );
  id8 -> SetBinContent( xbin,    33358.041691900478      );
  id8 -> SetBinError( xbin,    112.61979318577013      );
   int xbin = id8->FindBin(   2.5500000000000003      );
  id8 -> SetBinContent( xbin,    36202.798658723885      );
  id8 -> SetBinError( xbin,    117.15450917186709      );
   int xbin = id8->FindBin(   2.6500000000000004      );
  id8 -> SetBinContent( xbin,    39364.597205195088      );
  id8 -> SetBinError( xbin,    121.24183239383770      );
   int xbin = id8->FindBin(   2.7500000000000000      );
  id8 -> SetBinContent( xbin,    43055.401102455209      );
  id8 -> SetBinError( xbin,    128.17363542480905      );
   int xbin = id8->FindBin(   2.8500000000000001      );
  id8 -> SetBinContent( xbin,    46569.283709695141      );
  id8 -> SetBinError( xbin,    132.92375801615719      );
   int xbin = id8->FindBin(   2.9500000000000002      );
  id8 -> SetBinContent( xbin,    50679.665161110745      );
  id8 -> SetBinError( xbin,    138.46439607413635      );
   int xbin = id8->FindBin(   3.0500000000000003      );
  id8 -> SetBinContent( xbin,    54146.224026147582      );
  id8 -> SetBinError( xbin,    142.75323393992639      );
   int xbin = id8->FindBin(   3.1500000000000004      );
  id8 -> SetBinContent( xbin,    49479.392088322369      );
  id8 -> SetBinError( xbin,    142.46151840746882      );
   int xbin = id8->FindBin(   3.2500000000000000      );
  id8 -> SetBinContent( xbin,    33267.331616218682      );
  id8 -> SetBinError( xbin,    132.93391220604735      );
   int xbin = id8->FindBin(   3.3500000000000001      );
  id8 -> SetBinContent( xbin,    25853.049994777841      );
  id8 -> SetBinError( xbin,    128.58665743076989      );
   int xbin = id8->FindBin(   3.4500000000000002      );
  id8 -> SetBinContent( xbin,    20603.741771546069      );
  id8 -> SetBinError( xbin,    123.18293376962497      );
   int xbin = id8->FindBin(   3.5500000000000003      );
  id8 -> SetBinContent( xbin,    16839.577285860360      );
  id8 -> SetBinError( xbin,    119.44750647041953      );
   int xbin = id8->FindBin(   3.6500000000000004      );
  id8 -> SetBinContent( xbin,    14047.650055788519      );
  id8 -> SetBinError( xbin,    116.70666381987365      );
   int xbin = id8->FindBin(   3.7500000000000000      );
  id8 -> SetBinContent( xbin,    11625.878126043264      );
  id8 -> SetBinError( xbin,    111.92221689280517      );
   int xbin = id8->FindBin(   3.8500000000000001      );
  id8 -> SetBinContent( xbin,    9846.5429288814175      );
  id8 -> SetBinError( xbin,    109.51630754708546      );
   int xbin = id8->FindBin(   3.9500000000000002      );
  id8 -> SetBinContent( xbin,    8297.7418778416577      );
  id8 -> SetBinError( xbin,    106.36336507253633      );
   int xbin = id8->FindBin(   4.0499999999999998      );
  id8 -> SetBinContent( xbin,    6781.9064145159837      );
  id8 -> SetBinError( xbin,    99.111674729684538      );
   int xbin = id8->FindBin(   4.1500000000000004      );
  id8 -> SetBinContent( xbin,    5846.5762163894196      );
  id8 -> SetBinError( xbin,    96.518458700864826      );
   int xbin = id8->FindBin(   4.2500000000000000      );
  id8 -> SetBinContent( xbin,    4832.9063833048267      );
  id8 -> SetBinError( xbin,    90.789625526127466      );
   int xbin = id8->FindBin(   4.3500000000000005      );
  id8 -> SetBinContent( xbin,    3990.2118205834022      );
  id8 -> SetBinError( xbin,    84.484932181847185      );
   int xbin = id8->FindBin(   4.4500000000000002      );
  id8 -> SetBinContent( xbin,    3374.3691292318381      );
  id8 -> SetBinError( xbin,    82.612111530404945      );
   int xbin = id8->FindBin(   4.5499999999999998      );
  id8 -> SetBinContent( xbin,    2848.9698406283073      );
  id8 -> SetBinError( xbin,    78.459316809432067      );
   int xbin = id8->FindBin(   4.6500000000000004      );
  id8 -> SetBinContent( xbin,    2435.9426764992527      );
  id8 -> SetBinError( xbin,    73.952009962938135      );
   int xbin = id8->FindBin(   4.7500000000000000      );
  id8 -> SetBinContent( xbin,    1929.6372793523096      );
  id8 -> SetBinError( xbin,    67.699556350307233      );
   int xbin = id8->FindBin(   4.8500000000000005      );
  id8 -> SetBinContent( xbin,    1680.7628904561443      );
  id8 -> SetBinError( xbin,    66.272840994220729      );
   int xbin = id8->FindBin(   4.9500000000000002      );
  id8 -> SetBinContent( xbin,    1349.1265506400637      );
  id8 -> SetBinError( xbin,    57.728264957559112      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id9", "y5", 12,   -3.20000,    3.20000);

  id9 -> GetXaxis() -> SetTitle("y5");
  id9 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id9 -> GetYaxis() -> SetTitleOffset(1.2);
  id9 -> SetStats(false);
   int xbin = id9->FindBin(  -2.4500000000000002      );
  id9 -> SetBinContent( xbin,    4215.7226551307458      );
  id9 -> SetBinError( xbin,    20.796316527722116      );
   int xbin = id9->FindBin(  -1.9500000000000002      );
  id9 -> SetBinContent( xbin,    13742.551336199642      );
  id9 -> SetBinError( xbin,    36.394031685362613      );
   int xbin = id9->FindBin(  -1.4500000000000002      );
  id9 -> SetBinContent( xbin,    18022.690259777657      );
  id9 -> SetBinError( xbin,    42.555234531551022      );
   int xbin = id9->FindBin( -0.95000000000000018      );
  id9 -> SetBinContent( xbin,    21232.977587674282      );
  id9 -> SetBinError( xbin,    46.191823661953087      );
   int xbin = id9->FindBin( -0.45000000000000018      );
  id9 -> SetBinContent( xbin,    23170.462771714483      );
  id9 -> SetBinError( xbin,    49.122426345438015      );
   int xbin = id9->FindBin(   4.9999999999999822E-002 );
  id9 -> SetBinContent( xbin,    23588.834717463917      );
  id9 -> SetBinError( xbin,    50.224200279496230      );
   int xbin = id9->FindBin(  0.54999999999999982      );
  id9 -> SetBinContent( xbin,    22234.548087715433      );
  id9 -> SetBinError( xbin,    48.456780051103081      );
   int xbin = id9->FindBin(   1.0499999999999998      );
  id9 -> SetBinContent( xbin,    19778.685832270243      );
  id9 -> SetBinError( xbin,    45.926944518026168      );
   int xbin = id9->FindBin(   1.5499999999999998      );
  id9 -> SetBinContent( xbin,    16109.028198146829      );
  id9 -> SetBinError( xbin,    40.948293202439579      );
   int xbin = id9->FindBin(   2.0499999999999998      );
  id9 -> SetBinContent( xbin,    11794.208891187000      );
  id9 -> SetBinError( xbin,    35.032375136483353      );
   int xbin = id9->FindBin(   2.5499999999999998      );
  id9 -> SetBinContent( xbin,    1816.2010958525618      );
  id9 -> SetBinError( xbin,    13.257120921708495      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id10", "pt5", 50,    0.00000,  100.00000);

  id10 -> GetXaxis() -> SetTitle("pt5");
  id10 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id10 -> GetYaxis() -> SetTitleOffset(1.2);
  id10 -> SetStats(false);
   int xbin = id10->FindBin(   21.000000000000000      );
  id10 -> SetBinContent( xbin,    4841.1486884142605      );
  id10 -> SetBinError( xbin,    13.747487721749536      );
   int xbin = id10->FindBin(   23.000000000000000      );
  id10 -> SetBinContent( xbin,    4134.4316657429663      );
  id10 -> SetBinError( xbin,    12.098179968737684      );
   int xbin = id10->FindBin(   25.000000000000000      );
  id10 -> SetBinContent( xbin,    3547.9697357139639      );
  id10 -> SetBinError( xbin,    10.927707091936790      );
   int xbin = id10->FindBin(   27.000000000000000      );
  id10 -> SetBinContent( xbin,    3093.3457114386474      );
  id10 -> SetBinError( xbin,    9.8268991656554618      );
   int xbin = id10->FindBin(   29.000000000000000      );
  id10 -> SetBinContent( xbin,    2705.6780096243569      );
  id10 -> SetBinError( xbin,    8.8691046965010099      );
   int xbin = id10->FindBin(   31.000000000000000      );
  id10 -> SetBinContent( xbin,    2390.3479267036532      );
  id10 -> SetBinError( xbin,    8.1631262954188539      );
   int xbin = id10->FindBin(   33.000000000000000      );
  id10 -> SetBinContent( xbin,    2117.4642792784380      );
  id10 -> SetBinError( xbin,    7.5393750287068988      );
   int xbin = id10->FindBin(   35.000000000000000      );
  id10 -> SetBinContent( xbin,    1869.4082767615575      );
  id10 -> SetBinError( xbin,    6.8551307641413350      );
   int xbin = id10->FindBin(   37.000000000000000      );
  id10 -> SetBinContent( xbin,    1669.0927482606876      );
  id10 -> SetBinError( xbin,    6.2954987651624039      );
   int xbin = id10->FindBin(   39.000000000000000      );
  id10 -> SetBinContent( xbin,    1504.0840657951526      );
  id10 -> SetBinError( xbin,    5.8555237263339093      );
   int xbin = id10->FindBin(   41.000000000000000      );
  id10 -> SetBinContent( xbin,    1353.3339222128670      );
  id10 -> SetBinError( xbin,    5.5297143673208975      );
   int xbin = id10->FindBin(   43.000000000000000      );
  id10 -> SetBinContent( xbin,    1212.9824391763809      );
  id10 -> SetBinError( xbin,    5.0430802397764545      );
   int xbin = id10->FindBin(   45.000000000000000      );
  id10 -> SetBinContent( xbin,    1098.5261852495571      );
  id10 -> SetBinError( xbin,    4.7731282091095650      );
   int xbin = id10->FindBin(   47.000000000000000      );
  id10 -> SetBinContent( xbin,    989.41409701564578      );
  id10 -> SetBinError( xbin,    4.4855622803941113      );
   int xbin = id10->FindBin(   49.000000000000000      );
  id10 -> SetBinContent( xbin,    900.99783601458057      );
  id10 -> SetBinError( xbin,    4.2331389633874510      );
   int xbin = id10->FindBin(   51.000000000000000      );
  id10 -> SetBinContent( xbin,    818.60886370257458      );
  id10 -> SetBinError( xbin,    3.9512159252863288      );
   int xbin = id10->FindBin(   53.000000000000000      );
  id10 -> SetBinContent( xbin,    733.42302695377577      );
  id10 -> SetBinError( xbin,    3.6425423366146750      );
   int xbin = id10->FindBin(   55.000000000000000      );
  id10 -> SetBinContent( xbin,    682.47018407098153      );
  id10 -> SetBinError( xbin,    3.5221328731698018      );
   int xbin = id10->FindBin(   57.000000000000000      );
  id10 -> SetBinContent( xbin,    619.98135282292014      );
  id10 -> SetBinError( xbin,    3.2363623889152842      );
   int xbin = id10->FindBin(   59.000000000000000      );
  id10 -> SetBinContent( xbin,    566.23154953184360      );
  id10 -> SetBinError( xbin,    3.0397711615331451      );
   int xbin = id10->FindBin(   61.000000000000000      );
  id10 -> SetBinContent( xbin,    514.29223488432763      );
  id10 -> SetBinError( xbin,    2.8852807051475442      );
   int xbin = id10->FindBin(   63.000000000000000      );
  id10 -> SetBinContent( xbin,    472.49019406278205      );
  id10 -> SetBinError( xbin,    2.8430235116212121      );
   int xbin = id10->FindBin(   65.000000000000000      );
  id10 -> SetBinContent( xbin,    431.98539543712559      );
  id10 -> SetBinError( xbin,    2.5628971291045395      );
   int xbin = id10->FindBin(   67.000000000000000      );
  id10 -> SetBinContent( xbin,    399.30652486225887      );
  id10 -> SetBinError( xbin,    2.4333503947219550      );
   int xbin = id10->FindBin(   69.000000000000000      );
  id10 -> SetBinContent( xbin,    366.78982463729290      );
  id10 -> SetBinError( xbin,    2.3898229052811164      );
   int xbin = id10->FindBin(   71.000000000000000      );
  id10 -> SetBinContent( xbin,    337.20658798734229      );
  id10 -> SetBinError( xbin,    2.2514102715749900      );
   int xbin = id10->FindBin(   73.000000000000000      );
  id10 -> SetBinContent( xbin,    314.72560226830922      );
  id10 -> SetBinError( xbin,    2.3840350716197358      );
   int xbin = id10->FindBin(   75.000000000000000      );
  id10 -> SetBinContent( xbin,    285.23328562771468      );
  id10 -> SetBinError( xbin,    2.0289227945475101      );
   int xbin = id10->FindBin(   77.000000000000000      );
  id10 -> SetBinContent( xbin,    266.11165766947863      );
  id10 -> SetBinError( xbin,    1.9280603705596626      );
   int xbin = id10->FindBin(   79.000000000000000      );
  id10 -> SetBinContent( xbin,    243.69964964031840      );
  id10 -> SetBinError( xbin,    1.7873759967702474      );
   int xbin = id10->FindBin(   81.000000000000000      );
  id10 -> SetBinContent( xbin,    227.61272756747158      );
  id10 -> SetBinError( xbin,    1.7186101319071410      );
   int xbin = id10->FindBin(   83.000000000000000      );
  id10 -> SetBinContent( xbin,    212.19867188642181      );
  id10 -> SetBinError( xbin,    1.6869577271560601      );
   int xbin = id10->FindBin(   85.000000000000000      );
  id10 -> SetBinContent( xbin,    195.05702133463603      );
  id10 -> SetBinError( xbin,    1.6223628254324094      );
   int xbin = id10->FindBin(   87.000000000000000      );
  id10 -> SetBinContent( xbin,    177.35818466440125      );
  id10 -> SetBinError( xbin,    1.4920023999911323      );
   int xbin = id10->FindBin(   89.000000000000000      );
  id10 -> SetBinContent( xbin,    164.51840855491392      );
  id10 -> SetBinError( xbin,    1.4072868743839986      );
   int xbin = id10->FindBin(   91.000000000000000      );
  id10 -> SetBinContent( xbin,    153.78679328849591      );
  id10 -> SetBinError( xbin,    1.3904486461816157      );
   int xbin = id10->FindBin(   93.000000000000000      );
  id10 -> SetBinContent( xbin,    144.28357329688140      );
  id10 -> SetBinError( xbin,    1.3242986819258045      );
   int xbin = id10->FindBin(   95.000000000000000      );
  id10 -> SetBinContent( xbin,    135.40397563088698      );
  id10 -> SetBinError( xbin,    1.3059441288959468      );
   int xbin = id10->FindBin(   97.000000000000000      );
  id10 -> SetBinContent( xbin,    123.86958366332995      );
  id10 -> SetBinError( xbin,    1.1880609347787601      );
   int xbin = id10->FindBin(   99.000000000000000      );
  id10 -> SetBinContent( xbin,    117.08767172149702      );
  id10 -> SetBinError( xbin,    1.1967932272145121      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id11", "m34 forward lepton", 32,   40.00000,  200.00000);

  id11 -> GetXaxis() -> SetTitle("m34 forward lepton");
  id11 -> GetYaxis() -> SetTitle(" d#sigma/dm34 forward lepton [fb]");

  id11 -> GetYaxis() -> SetTitleOffset(1.2);
  id11 -> SetStats(false);
   int xbin = id11->FindBin(   62.500000000000000      );
  id11 -> SetBinContent( xbin,    470.98246633830553      );
  id11 -> SetBinError( xbin,    5.7951458483660900      );
   int xbin = id11->FindBin(   67.500000000000000      );
  id11 -> SetBinContent( xbin,    455.58214378646136      );
  id11 -> SetBinError( xbin,    4.9429600554149511      );
   int xbin = id11->FindBin(   72.500000000000000      );
  id11 -> SetBinContent( xbin,    510.61570435326507      );
  id11 -> SetBinError( xbin,    5.9001873176310191      );
   int xbin = id11->FindBin(   77.500000000000000      );
  id11 -> SetBinContent( xbin,    790.84990521394195      );
  id11 -> SetBinError( xbin,    7.3111412451905000      );
   int xbin = id11->FindBin(   82.500000000000000      );
  id11 -> SetBinContent( xbin,    1845.4096712309183      );
  id11 -> SetBinError( xbin,    11.812903169531678      );
   int xbin = id11->FindBin(   87.500000000000000      );
  id11 -> SetBinContent( xbin,    12560.358842631367      );
  id11 -> SetBinError( xbin,    32.752912765152416      );
   int xbin = id11->FindBin(   92.500000000000000      );
  id11 -> SetBinContent( xbin,    42150.568827495903      );
  id11 -> SetBinError( xbin,    60.574327263311893      );
   int xbin = id11->FindBin(   97.500000000000000      );
  id11 -> SetBinContent( xbin,    3793.7349981674743      );
  id11 -> SetBinError( xbin,    19.238542330764659      );
   int xbin = id11->FindBin(   102.50000000000000      );
  id11 -> SetBinContent( xbin,    1130.2721838437476      );
  id11 -> SetBinError( xbin,    10.630983982220990      );
   int xbin = id11->FindBin(   107.50000000000000      );
  id11 -> SetBinContent( xbin,    544.74076114186698      );
  id11 -> SetBinError( xbin,    7.6018079150837048      );
   int xbin = id11->FindBin(   112.50000000000000      );
  id11 -> SetBinContent( xbin,    324.10964454054670      );
  id11 -> SetBinError( xbin,    5.8814743487179744      );
   int xbin = id11->FindBin(   117.50000000000000      );
  id11 -> SetBinContent( xbin,    211.16363910481729      );
  id11 -> SetBinError( xbin,    4.8073124745509102      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id12", "m34 backward lepton", 32,   40.00000,  200.00000);

  id12 -> GetXaxis() -> SetTitle("m34 backward lepton");
  id12 -> GetYaxis() -> SetTitle(" d#sigma/dm34 backward lepton [fb]");

  id12 -> GetYaxis() -> SetTitleOffset(1.2);
  id12 -> SetStats(false);
   int xbin = id12->FindBin(   62.500000000000000      );
  id12 -> SetBinContent( xbin,    756.19304973298983      );
  id12 -> SetBinError( xbin,    9.6691738668751359      );
   int xbin = id12->FindBin(   67.500000000000000      );
  id12 -> SetBinContent( xbin,    716.60581560192895      );
  id12 -> SetBinError( xbin,    8.1352400367610134      );
   int xbin = id12->FindBin(   72.500000000000000      );
  id12 -> SetBinContent( xbin,    798.79176636941600      );
  id12 -> SetBinError( xbin,    9.5614985345934613      );
   int xbin = id12->FindBin(   77.500000000000000      );
  id12 -> SetBinContent( xbin,    1100.0466377755599      );
  id12 -> SetBinError( xbin,    10.397960566026033      );
   int xbin = id12->FindBin(   82.500000000000000      );
  id12 -> SetBinContent( xbin,    2171.5881186489455      );
  id12 -> SetBinError( xbin,    14.105316877846914      );
   int xbin = id12->FindBin(   87.500000000000000      );
  id12 -> SetBinContent( xbin,    12269.217102012304      );
  id12 -> SetBinError( xbin,    31.932570504220841      );
   int xbin = id12->FindBin(   92.500000000000000      );
  id12 -> SetBinContent( xbin,    37238.696550837099      );
  id12 -> SetBinError( xbin,    53.234002375204263      );
   int xbin = id12->FindBin(   97.500000000000000      );
  id12 -> SetBinContent( xbin,    2896.9716459271585      );
  id12 -> SetBinError( xbin,    14.585587634712709      );
   int xbin = id12->FindBin(   102.50000000000000      );
  id12 -> SetBinContent( xbin,    782.90087827635284      );
  id12 -> SetBinError( xbin,    7.3011885575798248      );
   int xbin = id12->FindBin(   107.50000000000000      );
  id12 -> SetBinContent( xbin,    357.20815257334334      );
  id12 -> SetBinError( xbin,    4.8998432111922412      );
   int xbin = id12->FindBin(   112.50000000000000      );
  id12 -> SetBinContent( xbin,    202.00767445364346      );
  id12 -> SetBinError( xbin,    3.6367549521180429      );
   int xbin = id12->FindBin(   117.50000000000000      );
  id12 -> SetBinContent( xbin,    128.51423314595129      );
  id12 -> SetBinError( xbin,    2.8901418794304896      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id13", "lepton FB asymmetry", 32,   40.00000,  200.00000);

  id13 -> GetXaxis() -> SetTitle("lepton FB asymmetry");
  id13 -> GetYaxis() -> SetTitle(" d#sigma/dlepton FB asymmetry [fb]");

  id13 -> GetYaxis() -> SetTitleOffset(1.2);
  id13 -> SetStats(false);
   int xbin = id13->FindBin(   62.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.3241221786086740E-002 );
  id13 -> SetBinError( xbin,    8.0925716052825156E-006 );
   int xbin = id13->FindBin(   67.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.2268073112750725E-002 );
  id13 -> SetBinError( xbin,    7.7537221508931650E-006 );
   int xbin = id13->FindBin(   72.500000000000000      );
  id13 -> SetBinContent( xbin,   -2.2008127222391847E-002 );
  id13 -> SetBinError( xbin,    7.6632092359272456E-006 );
   int xbin = id13->FindBin(   77.500000000000000      );
  id13 -> SetBinContent( xbin,   -1.6351858789311599E-002 );
  id13 -> SetBinError( xbin,    5.6937018780652195E-006 );
   int xbin = id13->FindBin(   82.500000000000000      );
  id13 -> SetBinContent( xbin,   -8.1199558595670025E-003 );
  id13 -> SetBinError( xbin,    2.8273610066669178E-006 );
   int xbin = id13->FindBin(   87.500000000000000      );
  id13 -> SetBinContent( xbin,    1.1725602614726491E-003 );
  id13 -> SetBinError( xbin,    4.0828438215570780E-007 );
   int xbin = id13->FindBin(   92.500000000000000      );
  id13 -> SetBinContent( xbin,    6.1870735962126916E-003 );
  id13 -> SetBinError( xbin,    2.1543332173043414E-006 );
   int xbin = id13->FindBin(   97.500000000000000      );
  id13 -> SetBinContent( xbin,    1.3403118683014135E-002 );
  id13 -> SetBinError( xbin,    4.6669533415547155E-006 );
   int xbin = id13->FindBin(   102.50000000000000      );
  id13 -> SetBinContent( xbin,    1.8156815629760750E-002 );
  id13 -> SetBinError( xbin,    6.3221861552783698E-006 );
   int xbin = id13->FindBin(   107.50000000000000      );
  id13 -> SetBinContent( xbin,    2.0791932416222968E-002 );
  id13 -> SetBinError( xbin,    7.2397313462757510E-006 );
   int xbin = id13->FindBin(   112.50000000000000      );
  id13 -> SetBinContent( xbin,    2.3208125959497557E-002 );
  id13 -> SetBinError( xbin,    8.0810476695370505E-006 );
   int xbin = id13->FindBin(   117.50000000000000      );
  id13 -> SetBinContent( xbin,    2.4331701506258182E-002 );
  id13 -> SetBinError( xbin,    8.4722756200206179E-006 );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
