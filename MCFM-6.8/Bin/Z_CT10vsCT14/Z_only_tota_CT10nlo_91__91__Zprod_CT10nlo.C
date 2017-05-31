// Cross-section is:       620046.1291448979 +/-           93.9076060069)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -25244.59918   -4.07%
//        GQB    |      -13200.82404   -2.13%
//        QG     |      -24520.97173   -3.95%
//        QBG    |      -13687.76267   -2.21%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      331641.55981   53.49%
//        QBQ    |      367160.83734   59.22%

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
//Zprod_CT10nlo                   [runstring]  
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


void macro()  {
  mcfmhisto = new TFile("Z_only_tota_CT10nlo_91__91__Zprod_CT10nlo.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "y3", 60,   -6.00000,    6.00000);

  hist -> GetXaxis() -> SetTitle("y3");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dy3 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   int xbin = hist->FindBin(  -5.9000000000000004      );
  hist -> SetBinContent( xbin,    927.19232822929519      );
  hist -> SetBinError( xbin,    172.51956237767155      );
   xbin = hist->FindBin(  -5.7000000000000002      );
  hist -> SetBinContent( xbin,    605.09302148535414      );
  hist -> SetBinError( xbin,    151.47575280789388      );
   xbin = hist->FindBin(  -5.5000000000000000      );
  hist -> SetBinContent( xbin,    1335.4938974713502      );
  hist -> SetBinError( xbin,    161.96332140721074      );
   xbin = hist->FindBin(  -5.2999999999999998      );
  hist -> SetBinContent( xbin,    2782.5065495232348      );
  hist -> SetBinError( xbin,    675.18081196328581      );
   xbin = hist->FindBin(  -5.0999999999999996      );
  hist -> SetBinContent( xbin,    2255.9450992946345      );
  hist -> SetBinError( xbin,    697.16708661386565      );
   xbin = hist->FindBin(  -4.9000000000000004      );
  hist -> SetBinContent( xbin,    4268.9563845662351      );
  hist -> SetBinError( xbin,    292.97556263409814      );
   xbin = hist->FindBin(  -4.7000000000000002      );
  hist -> SetBinContent( xbin,    6156.3688452833039      );
  hist -> SetBinError( xbin,    287.10551867334391      );
   xbin = hist->FindBin(  -4.5000000000000000      );
  hist -> SetBinContent( xbin,    8330.3457803308702      );
  hist -> SetBinError( xbin,    394.39162726923263      );
   xbin = hist->FindBin(  -4.2999999999999998      );
  hist -> SetBinContent( xbin,    11724.125719403592      );
  hist -> SetBinError( xbin,    491.86898242861224      );
   xbin = hist->FindBin(  -4.0999999999999996      );
  hist -> SetBinContent( xbin,    16639.230073094044      );
  hist -> SetBinError( xbin,    491.75303034232945      );
   xbin = hist->FindBin(  -3.8999999999999999      );
  hist -> SetBinContent( xbin,    21520.942087242634      );
  hist -> SetBinError( xbin,    459.47370480203352      );
   xbin = hist->FindBin(  -3.6999999999999997      );
  hist -> SetBinContent( xbin,    26856.058601687397      );
  hist -> SetBinError( xbin,    493.40786016688281      );
   xbin = hist->FindBin(  -3.5000000000000000      );
  hist -> SetBinContent( xbin,    34175.082398864957      );
  hist -> SetBinError( xbin,    539.16522766758487      );
   xbin = hist->FindBin(  -3.2999999999999998      );
  hist -> SetBinContent( xbin,    41184.159295151294      );
  hist -> SetBinError( xbin,    745.19615928769451      );
   xbin = hist->FindBin(  -3.0999999999999996      );
  hist -> SetBinContent( xbin,    50419.077629811625      );
  hist -> SetBinError( xbin,    768.62406931064311      );
   xbin = hist->FindBin(  -2.8999999999999999      );
  hist -> SetBinContent( xbin,    56475.921799977979      );
  hist -> SetBinError( xbin,    694.30504887891084      );
   xbin = hist->FindBin(  -2.6999999999999997      );
  hist -> SetBinContent( xbin,    66298.858910993484      );
  hist -> SetBinError( xbin,    834.14966802141726      );
   xbin = hist->FindBin(  -2.5000000000000000      );
  hist -> SetBinContent( xbin,    72717.037331014872      );
  hist -> SetBinError( xbin,    810.18635577117641      );
   xbin = hist->FindBin(  -2.2999999999999998      );
  hist -> SetBinContent( xbin,    80282.290835580628      );
  hist -> SetBinError( xbin,    671.23252392048073      );
   xbin = hist->FindBin(  -2.0999999999999996      );
  hist -> SetBinContent( xbin,    85624.922371432069      );
  hist -> SetBinError( xbin,    685.71527273163474      );
   xbin = hist->FindBin(  -1.8999999999999995      );
  hist -> SetBinContent( xbin,    91007.007198873907      );
  hist -> SetBinError( xbin,    726.90411850246926      );
   xbin = hist->FindBin(  -1.7000000000000002      );
  hist -> SetBinContent( xbin,    97726.701592834259      );
  hist -> SetBinError( xbin,    839.77583138647628      );
   xbin = hist->FindBin(  -1.5000000000000000      );
  hist -> SetBinContent( xbin,    99855.626393132115      );
  hist -> SetBinError( xbin,    868.03220368034226      );
   xbin = hist->FindBin(  -1.2999999999999998      );
  hist -> SetBinContent( xbin,    103206.32231849406      );
  hist -> SetBinError( xbin,    785.87533367063554      );
   xbin = hist->FindBin(  -1.0999999999999996      );
  hist -> SetBinContent( xbin,    106008.07141655521      );
  hist -> SetBinError( xbin,    773.39345122542250      );
   xbin = hist->FindBin( -0.89999999999999947      );
  hist -> SetBinContent( xbin,    106612.91011972593      );
  hist -> SetBinError( xbin,    756.89182127226161      );
   xbin = hist->FindBin( -0.69999999999999929      );
  hist -> SetBinContent( xbin,    108621.95909104597      );
  hist -> SetBinError( xbin,    1044.9125005789444      );
   xbin = hist->FindBin( -0.50000000000000000      );
  hist -> SetBinContent( xbin,    108657.09043135516      );
  hist -> SetBinError( xbin,    1055.8227895414816      );
   xbin = hist->FindBin( -0.29999999999999982      );
  hist -> SetBinContent( xbin,    107146.44438418020      );
  hist -> SetBinError( xbin,    961.46087887633905      );
   xbin = hist->FindBin(  -9.9999999999999645E-002 );
  hist -> SetBinContent( xbin,    114171.28844864751      );
  hist -> SetBinError( xbin,    7133.5293112505906      );
   xbin = hist->FindBin(  0.10000000000000053      );
  hist -> SetBinContent( xbin,    101958.96092140971      );
  hist -> SetBinError( xbin,    7196.0314092871331      );
   xbin = hist->FindBin(  0.30000000000000071      );
  hist -> SetBinContent( xbin,    105165.86993948277      );
  hist -> SetBinError( xbin,    1398.7055410164912      );
   xbin = hist->FindBin(  0.50000000000000000      );
  hist -> SetBinContent( xbin,    103041.79091347987      );
  hist -> SetBinError( xbin,    898.02902651004945      );
   xbin = hist->FindBin(  0.70000000000000018      );
  hist -> SetBinContent( xbin,    102314.27321870853      );
  hist -> SetBinError( xbin,    875.00360198517592      );
   xbin = hist->FindBin(  0.90000000000000036      );
  hist -> SetBinContent( xbin,    99273.973763855087      );
  hist -> SetBinError( xbin,    851.86111539333717      );
   xbin = hist->FindBin(   1.1000000000000005      );
  hist -> SetBinContent( xbin,    96797.144241597736      );
  hist -> SetBinError( xbin,    794.59553541691537      );
   xbin = hist->FindBin(   1.3000000000000007      );
  hist -> SetBinContent( xbin,    92100.792632223311      );
  hist -> SetBinError( xbin,    2612.5539831508031      );
   xbin = hist->FindBin(   1.5000000000000000      );
  hist -> SetBinContent( xbin,    93376.028644268532      );
  hist -> SetBinError( xbin,    2855.6265057466890      );
   xbin = hist->FindBin(   1.7000000000000002      );
  hist -> SetBinContent( xbin,    84718.315102933091      );
  hist -> SetBinError( xbin,    1338.8701265190375      );
   xbin = hist->FindBin(   1.9000000000000004      );
  hist -> SetBinContent( xbin,    80023.701076675454      );
  hist -> SetBinError( xbin,    895.06328887108714      );
   xbin = hist->FindBin(   2.0999999999999996      );
  hist -> SetBinContent( xbin,    75910.629792153079      );
  hist -> SetBinError( xbin,    907.89180808847857      );
   xbin = hist->FindBin(   2.3000000000000007      );
  hist -> SetBinContent( xbin,    70151.818086167681      );
  hist -> SetBinError( xbin,    927.07060504601418      );
   xbin = hist->FindBin(   2.5000000000000000      );
  hist -> SetBinContent( xbin,    60894.120351517042      );
  hist -> SetBinError( xbin,    1284.1549055567937      );
   xbin = hist->FindBin(   2.7000000000000011      );
  hist -> SetBinContent( xbin,    56311.065825416954      );
  hist -> SetBinError( xbin,    1298.6471428318414      );
   xbin = hist->FindBin(   2.9000000000000004      );
  hist -> SetBinContent( xbin,    50123.855724720430      );
  hist -> SetBinError( xbin,    911.21384547722448      );
   xbin = hist->FindBin(   3.0999999999999996      );
  hist -> SetBinContent( xbin,    40825.868621905123      );
  hist -> SetBinError( xbin,    1147.0810250538646      );
   xbin = hist->FindBin(   3.3000000000000007      );
  hist -> SetBinContent( xbin,    36130.830814259876      );
  hist -> SetBinError( xbin,    1178.9938477435433      );
   xbin = hist->FindBin(   3.5000000000000000      );
  hist -> SetBinContent( xbin,    28730.804472560041      );
  hist -> SetBinError( xbin,    649.14215953912526      );
   xbin = hist->FindBin(   3.7000000000000011      );
  hist -> SetBinContent( xbin,    22578.836161771367      );
  hist -> SetBinError( xbin,    505.39795588805617      );
   xbin = hist->FindBin(   3.9000000000000004      );
  hist -> SetBinContent( xbin,    17851.403643405352      );
  hist -> SetBinError( xbin,    413.34342931974248      );
   xbin = hist->FindBin(   4.1000000000000014      );
  hist -> SetBinContent( xbin,    13180.163590646856      );
  hist -> SetBinError( xbin,    497.56514201829992      );
   xbin = hist->FindBin(   4.3000000000000007      );
  hist -> SetBinContent( xbin,    10497.590117868545      );
  hist -> SetBinError( xbin,    464.13107614493333      );
   xbin = hist->FindBin(   4.5000000000000000      );
  hist -> SetBinContent( xbin,    7320.2444076371221      );
  hist -> SetBinError( xbin,    310.29844689526340      );
   xbin = hist->FindBin(   4.7000000000000011      );
  hist -> SetBinContent( xbin,    5433.5810419119307      );
  hist -> SetBinError( xbin,    299.95469124929161      );
   xbin = hist->FindBin(   4.9000000000000004      );
  hist -> SetBinContent( xbin,    2961.3133386852287      );
  hist -> SetBinError( xbin,    322.62631283871934      );
   xbin = hist->FindBin(   5.1000000000000014      );
  hist -> SetBinContent( xbin,    2537.7994317202479      );
  hist -> SetBinError( xbin,    279.10548620444735      );
   xbin = hist->FindBin(   5.3000000000000007      );
  hist -> SetBinContent( xbin,    1731.3900056385276      );
  hist -> SetBinError( xbin,    237.96727869464078      );
   xbin = hist->FindBin(   5.5000000000000000      );
  hist -> SetBinContent( xbin,    1205.4109160620380      );
  hist -> SetBinError( xbin,    186.90999938947138      );
   xbin = hist->FindBin(   5.7000000000000011      );
  hist -> SetBinContent( xbin,    985.78763507223198      );
  hist -> SetBinError( xbin,    235.29603534661874      );
   xbin = hist->FindBin(   5.9000000000000004      );
  hist -> SetBinContent( xbin,    398.09516503068420      );
  hist -> SetBinError( xbin,    233.85604356244474      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id2", "y4", 60,   -6.00000,    6.00000);

  hist -> GetXaxis() -> SetTitle("y4");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dy4 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(  -5.9000000000000004      );
  hist -> SetBinContent( xbin,    534.52665905882475      );
  hist -> SetBinError( xbin,    139.47034363670986      );
   xbin = hist->FindBin(  -5.7000000000000002      );
  hist -> SetBinContent( xbin,    752.34601467704670      );
  hist -> SetBinError( xbin,    184.32127113711266      );
   xbin = hist->FindBin(  -5.5000000000000000      );
  hist -> SetBinContent( xbin,    1085.0535712322223      );
  hist -> SetBinError( xbin,    161.61304437709276      );
   xbin = hist->FindBin(  -5.2999999999999998      );
  hist -> SetBinContent( xbin,    1635.0552174507459      );
  hist -> SetBinError( xbin,    200.50569930906090      );
   xbin = hist->FindBin(  -5.0999999999999996      );
  hist -> SetBinContent( xbin,    2302.2311034805152      );
  hist -> SetBinError( xbin,    247.72221607479534      );
   xbin = hist->FindBin(  -4.9000000000000004      );
  hist -> SetBinContent( xbin,    3246.0658445316476      );
  hist -> SetBinError( xbin,    266.23801694461849      );
   xbin = hist->FindBin(  -4.7000000000000002      );
  hist -> SetBinContent( xbin,    5115.0288269302546      );
  hist -> SetBinError( xbin,    316.44844135445555      );
   xbin = hist->FindBin(  -4.5000000000000000      );
  hist -> SetBinContent( xbin,    7264.4899589321958      );
  hist -> SetBinError( xbin,    301.84524778302654      );
   xbin = hist->FindBin(  -4.2999999999999998      );
  hist -> SetBinContent( xbin,    9654.8727446788726      );
  hist -> SetBinError( xbin,    304.20775970989513      );
   xbin = hist->FindBin(  -4.0999999999999996      );
  hist -> SetBinContent( xbin,    12725.826994624120      );
  hist -> SetBinError( xbin,    345.04727056058027      );
   xbin = hist->FindBin(  -3.8999999999999999      );
  hist -> SetBinContent( xbin,    17742.357134361115      );
  hist -> SetBinError( xbin,    567.85237381314460      );
   xbin = hist->FindBin(  -3.6999999999999997      );
  hist -> SetBinContent( xbin,    23814.193458060305      );
  hist -> SetBinError( xbin,    1610.6243560115404      );
   xbin = hist->FindBin(  -3.5000000000000000      );
  hist -> SetBinContent( xbin,    27488.815670384400      );
  hist -> SetBinError( xbin,    1575.1984855160022      );
   xbin = hist->FindBin(  -3.2999999999999998      );
  hist -> SetBinContent( xbin,    34802.586562371929      );
  hist -> SetBinError( xbin,    963.90231607881140      );
   xbin = hist->FindBin(  -3.0999999999999996      );
  hist -> SetBinContent( xbin,    44795.613478602303      );
  hist -> SetBinError( xbin,    971.31120568375945      );
   xbin = hist->FindBin(  -2.8999999999999999      );
  hist -> SetBinContent( xbin,    50836.432154106064      );
  hist -> SetBinError( xbin,    575.38942207783407      );
   xbin = hist->FindBin(  -2.6999999999999997      );
  hist -> SetBinContent( xbin,    59859.858757293900      );
  hist -> SetBinError( xbin,    581.38087944116216      );
   xbin = hist->FindBin(  -2.5000000000000000      );
  hist -> SetBinContent( xbin,    68960.429079604015      );
  hist -> SetBinError( xbin,    624.53324670354959      );
   xbin = hist->FindBin(  -2.2999999999999998      );
  hist -> SetBinContent( xbin,    77605.705538301147      );
  hist -> SetBinError( xbin,    663.07782110130051      );
   xbin = hist->FindBin(  -2.0999999999999996      );
  hist -> SetBinContent( xbin,    86441.179685692230      );
  hist -> SetBinError( xbin,    655.35584546779842      );
   xbin = hist->FindBin(  -1.8999999999999995      );
  hist -> SetBinContent( xbin,    92188.614271251616      );
  hist -> SetBinError( xbin,    888.58343802519516      );
   xbin = hist->FindBin(  -1.7000000000000002      );
  hist -> SetBinContent( xbin,    97940.061972553027      );
  hist -> SetBinError( xbin,    944.76925902401467      );
   xbin = hist->FindBin(  -1.5000000000000000      );
  hist -> SetBinContent( xbin,    104234.99619654407      );
  hist -> SetBinError( xbin,    991.94129809033564      );
   xbin = hist->FindBin(  -1.2999999999999998      );
  hist -> SetBinContent( xbin,    108323.68516667462      );
  hist -> SetBinError( xbin,    993.84778407523743      );
   xbin = hist->FindBin(  -1.0999999999999996      );
  hist -> SetBinContent( xbin,    111365.49574554333      );
  hist -> SetBinError( xbin,    1011.0800349496059      );
   xbin = hist->FindBin( -0.89999999999999947      );
  hist -> SetBinContent( xbin,    113620.39358416124      );
  hist -> SetBinError( xbin,    1033.7349083717068      );
   xbin = hist->FindBin( -0.69999999999999929      );
  hist -> SetBinContent( xbin,    113108.76824340856      );
  hist -> SetBinError( xbin,    849.94565461039451      );
   xbin = hist->FindBin( -0.50000000000000000      );
  hist -> SetBinContent( xbin,    116181.17534242778      );
  hist -> SetBinError( xbin,    1231.5979397265849      );
   xbin = hist->FindBin( -0.29999999999999982      );
  hist -> SetBinContent( xbin,    113531.78241065194      );
  hist -> SetBinError( xbin,    1204.7229784512758      );
   xbin = hist->FindBin(  -9.9999999999999645E-002 );
  hist -> SetBinContent( xbin,    115070.00891130176      );
  hist -> SetBinError( xbin,    754.74974959242184      );
   xbin = hist->FindBin(  0.10000000000000053      );
  hist -> SetBinContent( xbin,    115527.69522107858      );
  hist -> SetBinError( xbin,    1601.6710150747851      );
   xbin = hist->FindBin(  0.30000000000000071      );
  hist -> SetBinContent( xbin,    109826.13096808005      );
  hist -> SetBinError( xbin,    1655.0925309664854      );
   xbin = hist->FindBin(  0.50000000000000000      );
  hist -> SetBinContent( xbin,    109831.57046602643      );
  hist -> SetBinError( xbin,    951.37123513788640      );
   xbin = hist->FindBin(  0.70000000000000018      );
  hist -> SetBinContent( xbin,    108650.13695052842      );
  hist -> SetBinError( xbin,    1337.4897054003125      );
   xbin = hist->FindBin(  0.90000000000000036      );
  hist -> SetBinContent( xbin,    103682.39223821054      );
  hist -> SetBinError( xbin,    1321.2133847814373      );
   xbin = hist->FindBin(   1.1000000000000005      );
  hist -> SetBinContent( xbin,    102352.02074106288      );
  hist -> SetBinError( xbin,    915.12751444157504      );
   xbin = hist->FindBin(   1.3000000000000007      );
  hist -> SetBinContent( xbin,    97194.921192881884      );
  hist -> SetBinError( xbin,    917.18893609914812      );
   xbin = hist->FindBin(   1.5000000000000000      );
  hist -> SetBinContent( xbin,    94244.882363959696      );
  hist -> SetBinError( xbin,    839.18210777099330      );
   xbin = hist->FindBin(   1.7000000000000002      );
  hist -> SetBinContent( xbin,    86738.367811730772      );
  hist -> SetBinError( xbin,    832.49384162384251      );
   xbin = hist->FindBin(   1.9000000000000004      );
  hist -> SetBinContent( xbin,    80417.528027750959      );
  hist -> SetBinError( xbin,    1435.7655181928967      );
   xbin = hist->FindBin(   2.0999999999999996      );
  hist -> SetBinContent( xbin,    76055.701929740113      );
  hist -> SetBinError( xbin,    1456.6569196129353      );
   xbin = hist->FindBin(   2.3000000000000007      );
  hist -> SetBinContent( xbin,    68171.808651169413      );
  hist -> SetBinError( xbin,    830.30185643441177      );
   xbin = hist->FindBin(   2.5000000000000000      );
  hist -> SetBinContent( xbin,    60808.875690863642      );
  hist -> SetBinError( xbin,    608.12164571375388      );
   xbin = hist->FindBin(   2.7000000000000011      );
  hist -> SetBinContent( xbin,    50623.536273805868      );
  hist -> SetBinError( xbin,    561.02419922714319      );
   xbin = hist->FindBin(   2.9000000000000004      );
  hist -> SetBinContent( xbin,    44751.053967377637      );
  hist -> SetBinError( xbin,    696.87072889961803      );
   xbin = hist->FindBin(   3.0999999999999996      );
  hist -> SetBinContent( xbin,    37905.317875532310      );
  hist -> SetBinError( xbin,    659.10269393721035      );
   xbin = hist->FindBin(   3.3000000000000007      );
  hist -> SetBinContent( xbin,    30400.870486177140      );
  hist -> SetBinError( xbin,    487.86898394030010      );
   xbin = hist->FindBin(   3.5000000000000000      );
  hist -> SetBinContent( xbin,    26634.196886643571      );
  hist -> SetBinError( xbin,    827.04594189600584      );
   xbin = hist->FindBin(   3.7000000000000011      );
  hist -> SetBinContent( xbin,    17791.440278865313      );
  hist -> SetBinError( xbin,    865.56353611619545      );
   xbin = hist->FindBin(   3.9000000000000004      );
  hist -> SetBinContent( xbin,    15378.949094850175      );
  hist -> SetBinError( xbin,    573.63761475323656      );
   xbin = hist->FindBin(   4.1000000000000014      );
  hist -> SetBinContent( xbin,    11874.294179237215      );
  hist -> SetBinError( xbin,    466.44739493670289      );
   xbin = hist->FindBin(   4.3000000000000007      );
  hist -> SetBinContent( xbin,    8372.8397800157236      );
  hist -> SetBinError( xbin,    523.70098767075115      );
   xbin = hist->FindBin(   4.5000000000000000      );
  hist -> SetBinContent( xbin,    6059.5383114701490      );
  hist -> SetBinError( xbin,    516.17899796180347      );
   xbin = hist->FindBin(   4.7000000000000011      );
  hist -> SetBinContent( xbin,    4693.0594415176220      );
  hist -> SetBinError( xbin,    357.89641313069717      );
   xbin = hist->FindBin(   4.9000000000000004      );
  hist -> SetBinContent( xbin,    2931.2078930316256      );
  hist -> SetBinError( xbin,    279.72493282835774      );
   xbin = hist->FindBin(   5.1000000000000014      );
  hist -> SetBinContent( xbin,    2311.4404143253059      );
  hist -> SetBinError( xbin,    388.07201775544013      );
   xbin = hist->FindBin(   5.3000000000000007      );
  hist -> SetBinContent( xbin,    877.17970158896969      );
  hist -> SetBinError( xbin,    383.25908264400579      );
   xbin = hist->FindBin(   5.5000000000000000      );
  hist -> SetBinContent( xbin,    1060.9855248237398      );
  hist -> SetBinError( xbin,    153.23681594923929      );
   xbin = hist->FindBin(   5.7000000000000011      );
  hist -> SetBinContent( xbin,    614.17030188251920      );
  hist -> SetBinError( xbin,    122.95177769385458      );
   xbin = hist->FindBin(   5.9000000000000004      );
  hist -> SetBinContent( xbin,    67.973177961043120      );
  hist -> SetBinError( xbin,    164.09813783922175      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id3", "y34", 60,   -6.00000,    6.00000);

  hist -> GetXaxis() -> SetTitle("y34");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dy34 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(  -4.5000000000000000      );
  hist -> SetBinContent( xbin,   -5.5714109825741866E-005 );
  hist -> SetBinError( xbin,    5.4758199596700780E-005 );
   xbin = hist->FindBin(  -4.2999999999999998      );
  hist -> SetBinContent( xbin,    1.6837716556618898      );
  hist -> SetBinError( xbin,   0.74190635639988300      );
   xbin = hist->FindBin(  -4.0999999999999996      );
  hist -> SetBinContent( xbin,    28.189096269890520      );
  hist -> SetBinError( xbin,    7.3938927873357105      );
   xbin = hist->FindBin(  -3.8999999999999999      );
  hist -> SetBinContent( xbin,    389.56331802017559      );
  hist -> SetBinError( xbin,    28.916766588915603      );
   xbin = hist->FindBin(  -3.6999999999999997      );
  hist -> SetBinContent( xbin,    2931.2236687666568      );
  hist -> SetBinError( xbin,    89.507189326555846      );
   xbin = hist->FindBin(  -3.5000000000000000      );
  hist -> SetBinContent( xbin,    10132.182371480218      );
  hist -> SetBinError( xbin,    257.19246978136545      );
   xbin = hist->FindBin(  -3.2999999999999998      );
  hist -> SetBinContent( xbin,    22952.925188204114      );
  hist -> SetBinError( xbin,    326.93786103150796      );
   xbin = hist->FindBin(  -3.0999999999999996      );
  hist -> SetBinContent( xbin,    39540.045991943232      );
  hist -> SetBinError( xbin,    443.07749533235017      );
   xbin = hist->FindBin(  -2.8999999999999999      );
  hist -> SetBinContent( xbin,    55176.522436823900      );
  hist -> SetBinError( xbin,    513.18223760828823      );
   xbin = hist->FindBin(  -2.6999999999999997      );
  hist -> SetBinContent( xbin,    70983.592874207170      );
  hist -> SetBinError( xbin,    528.73133686944072      );
   xbin = hist->FindBin(  -2.5000000000000000      );
  hist -> SetBinContent( xbin,    85658.202972088926      );
  hist -> SetBinError( xbin,    741.03651817224124      );
   xbin = hist->FindBin(  -2.2999999999999998      );
  hist -> SetBinContent( xbin,    94436.895419297798      );
  hist -> SetBinError( xbin,    726.89959624480423      );
   xbin = hist->FindBin(  -2.0999999999999996      );
  hist -> SetBinContent( xbin,    103046.80046562455      );
  hist -> SetBinError( xbin,    551.49550159683724      );
   xbin = hist->FindBin(  -1.8999999999999995      );
  hist -> SetBinContent( xbin,    108694.67425364582      );
  hist -> SetBinError( xbin,    567.75957433085489      );
   xbin = hist->FindBin(  -1.7000000000000002      );
  hist -> SetBinContent( xbin,    113240.98351278035      );
  hist -> SetBinError( xbin,    563.37468186882154      );
   xbin = hist->FindBin(  -1.5000000000000000      );
  hist -> SetBinContent( xbin,    115249.99185339834      );
  hist -> SetBinError( xbin,    561.94291623555137      );
   xbin = hist->FindBin(  -1.2999999999999998      );
  hist -> SetBinContent( xbin,    116433.43540261859      );
  hist -> SetBinError( xbin,    589.75244045770376      );
   xbin = hist->FindBin(  -1.0999999999999996      );
  hist -> SetBinContent( xbin,    117664.27751220948      );
  hist -> SetBinError( xbin,    584.99800595152556      );
   xbin = hist->FindBin( -0.89999999999999947      );
  hist -> SetBinContent( xbin,    118434.10762937828      );
  hist -> SetBinError( xbin,    580.73318814577078      );
   xbin = hist->FindBin( -0.69999999999999929      );
  hist -> SetBinContent( xbin,    117338.25801992184      );
  hist -> SetBinError( xbin,    580.60494056988603      );
   xbin = hist->FindBin( -0.50000000000000000      );
  hist -> SetBinContent( xbin,    117004.70521395252      );
  hist -> SetBinError( xbin,    562.88226399788743      );
   xbin = hist->FindBin( -0.29999999999999982      );
  hist -> SetBinContent( xbin,    114717.91775646381      );
  hist -> SetBinError( xbin,    604.43945876583541      );
   xbin = hist->FindBin(  -9.9999999999999645E-002 );
  hist -> SetBinContent( xbin,    115267.93454086120      );
  hist -> SetBinError( xbin,    595.77089680645577      );
   xbin = hist->FindBin(  0.10000000000000053      );
  hist -> SetBinContent( xbin,    113591.02742274900      );
  hist -> SetBinError( xbin,    556.00063251104314      );
   xbin = hist->FindBin(  0.30000000000000071      );
  hist -> SetBinContent( xbin,    112134.03911928121      );
  hist -> SetBinError( xbin,    548.62688714968590      );
   xbin = hist->FindBin(  0.50000000000000000      );
  hist -> SetBinContent( xbin,    110022.08169448118      );
  hist -> SetBinError( xbin,    528.47282032944076      );
   xbin = hist->FindBin(  0.70000000000000018      );
  hist -> SetBinContent( xbin,    109602.35634562038      );
  hist -> SetBinError( xbin,    531.96593050241961      );
   xbin = hist->FindBin(  0.90000000000000036      );
  hist -> SetBinContent( xbin,    107560.00700214217      );
  hist -> SetBinError( xbin,    537.44841331550936      );
   xbin = hist->FindBin(   1.1000000000000005      );
  hist -> SetBinContent( xbin,    104418.85191719526      );
  hist -> SetBinError( xbin,    539.11721099639669      );
   xbin = hist->FindBin(   1.3000000000000007      );
  hist -> SetBinContent( xbin,    102917.16812802332      );
  hist -> SetBinError( xbin,    650.18325002667984      );
   xbin = hist->FindBin(   1.5000000000000000      );
  hist -> SetBinContent( xbin,    100398.58732198292      );
  hist -> SetBinError( xbin,    648.02117060623391      );
   xbin = hist->FindBin(   1.7000000000000002      );
  hist -> SetBinContent( xbin,    97340.716291607154      );
  hist -> SetBinError( xbin,    525.74620332393772      );
   xbin = hist->FindBin(   1.9000000000000004      );
  hist -> SetBinContent( xbin,    91880.412735896054      );
  hist -> SetBinError( xbin,    532.36849975977407      );
   xbin = hist->FindBin(   2.0999999999999996      );
  hist -> SetBinContent( xbin,    87265.251682809612      );
  hist -> SetBinError( xbin,    516.97397954057249      );
   xbin = hist->FindBin(   2.3000000000000007      );
  hist -> SetBinContent( xbin,    80094.311911887562      );
  hist -> SetBinError( xbin,    469.18100096940441      );
   xbin = hist->FindBin(   2.5000000000000000      );
  hist -> SetBinContent( xbin,    71540.303099640631      );
  hist -> SetBinError( xbin,    460.16337204030589      );
   xbin = hist->FindBin(   2.7000000000000011      );
  hist -> SetBinContent( xbin,    59675.266946147458      );
  hist -> SetBinError( xbin,    436.50447755983225      );
   xbin = hist->FindBin(   2.9000000000000004      );
  hist -> SetBinContent( xbin,    47719.003841044607      );
  hist -> SetBinError( xbin,    409.53653956580536      );
   xbin = hist->FindBin(   3.0999999999999996      );
  hist -> SetBinContent( xbin,    33492.856858930951      );
  hist -> SetBinError( xbin,    358.30193666283259      );
   xbin = hist->FindBin(   3.3000000000000007      );
  hist -> SetBinContent( xbin,    19942.661619906561      );
  hist -> SetBinError( xbin,    280.15137270197613      );
   xbin = hist->FindBin(   3.5000000000000000      );
  hist -> SetBinContent( xbin,    8449.3002368790076      );
  hist -> SetBinError( xbin,    187.68486236813004      );
   xbin = hist->FindBin(   3.7000000000000011      );
  hist -> SetBinContent( xbin,    2446.4829834081015      );
  hist -> SetBinError( xbin,    76.800283256984784      );
   xbin = hist->FindBin(   3.9000000000000004      );
  hist -> SetBinContent( xbin,    355.24898771813514      );
  hist -> SetBinError( xbin,    31.212184705364493      );
   xbin = hist->FindBin(   4.1000000000000014      );
  hist -> SetBinContent( xbin,    34.130004497453221      );
  hist -> SetBinError( xbin,    8.1268452488122129      );
   xbin = hist->FindBin(   4.3000000000000007      );
  hist -> SetBinContent( xbin,   0.71075286578137531      );
  hist -> SetBinError( xbin,   0.31832507238106500      );
   xbin = hist->FindBin(   4.5000000000000000      );
  hist -> SetBinContent( xbin,    1.1386809449040957E-004 );
  hist -> SetBinError( xbin,    1.1386808831991703E-004 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id4", "pt3", 40,    0.00000,   80.00000);

  hist -> GetXaxis() -> SetTitle("pt3");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dpt3 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   1.0000000000000000      );
  hist -> SetBinContent( xbin,    319.62959590761943      );
  hist -> SetBinError( xbin,    91.268165980946549      );
   xbin = hist->FindBin(   3.0000000000000000      );
  hist -> SetBinContent( xbin,    1497.6035707771680      );
  hist -> SetBinError( xbin,    103.05953398176310      );
   xbin = hist->FindBin(   5.0000000000000000      );
  hist -> SetBinContent( xbin,    2094.6213595098411      );
  hist -> SetBinError( xbin,    84.190640881821963      );
   xbin = hist->FindBin(   7.0000000000000000      );
  hist -> SetBinContent( xbin,    3172.2744654141452      );
  hist -> SetBinError( xbin,    92.209282215020011      );
   xbin = hist->FindBin(   9.0000000000000000      );
  hist -> SetBinContent( xbin,    4058.7433609216068      );
  hist -> SetBinError( xbin,    139.58548672904405      );
   xbin = hist->FindBin(   11.000000000000000      );
  hist -> SetBinContent( xbin,    4933.5523811484272      );
  hist -> SetBinError( xbin,    185.07157834200603      );
   xbin = hist->FindBin(   13.000000000000000      );
  hist -> SetBinContent( xbin,    5893.1703197692595      );
  hist -> SetBinError( xbin,    259.00591368388461      );
   xbin = hist->FindBin(   15.000000000000000      );
  hist -> SetBinContent( xbin,    6579.5395303716978      );
  hist -> SetBinError( xbin,    241.22097957961267      );
   xbin = hist->FindBin(   17.000000000000000      );
  hist -> SetBinContent( xbin,    7151.6421832055103      );
  hist -> SetBinError( xbin,    153.03786349606591      );
   xbin = hist->FindBin(   19.000000000000000      );
  hist -> SetBinContent( xbin,    9188.0936995530847      );
  hist -> SetBinError( xbin,    184.51949386125327      );
   xbin = hist->FindBin(   21.000000000000000      );
  hist -> SetBinContent( xbin,    9588.7710757703153      );
  hist -> SetBinError( xbin,    188.79178840978773      );
   xbin = hist->FindBin(   23.000000000000000      );
  hist -> SetBinContent( xbin,    10485.824341898529      );
  hist -> SetBinError( xbin,    183.82924414123880      );
   xbin = hist->FindBin(   25.000000000000000      );
  hist -> SetBinContent( xbin,    11514.873830839184      );
  hist -> SetBinError( xbin,    224.47787801680329      );
   xbin = hist->FindBin(   27.000000000000000      );
  hist -> SetBinContent( xbin,    12993.990149935185      );
  hist -> SetBinError( xbin,    289.91492319054151      );
   xbin = hist->FindBin(   29.000000000000000      );
  hist -> SetBinContent( xbin,    13643.687727146917      );
  hist -> SetBinError( xbin,    313.46743804660213      );
   xbin = hist->FindBin(   31.000000000000000      );
  hist -> SetBinContent( xbin,    14993.198435029757      );
  hist -> SetBinError( xbin,    261.01957023790317      );
   xbin = hist->FindBin(   33.000000000000000      );
  hist -> SetBinContent( xbin,    16631.166574157196      );
  hist -> SetBinError( xbin,    320.41318034272808      );
   xbin = hist->FindBin(   35.000000000000000      );
  hist -> SetBinContent( xbin,    17841.646121788403      );
  hist -> SetBinError( xbin,    492.22471115269218      );
   xbin = hist->FindBin(   37.000000000000000      );
  hist -> SetBinContent( xbin,    18817.344287032844      );
  hist -> SetBinError( xbin,    449.43733199235606      );
   xbin = hist->FindBin(   39.000000000000000      );
  hist -> SetBinContent( xbin,    21128.824618907787      );
  hist -> SetBinError( xbin,    452.45186299904310      );
   xbin = hist->FindBin(   41.000000000000000      );
  hist -> SetBinContent( xbin,    22968.805935227210      );
  hist -> SetBinError( xbin,    453.84611371916503      );
   xbin = hist->FindBin(   43.000000000000000      );
  hist -> SetBinContent( xbin,    26763.458943373578      );
  hist -> SetBinError( xbin,    319.90806111293648      );
   xbin = hist->FindBin(   45.000000000000000      );
  hist -> SetBinContent( xbin,    21032.231317328609      );
  hist -> SetBinError( xbin,    352.83100780227130      );
   xbin = hist->FindBin(   47.000000000000000      );
  hist -> SetBinContent( xbin,    18265.654586069504      );
  hist -> SetBinError( xbin,    256.89294607775452      );
   xbin = hist->FindBin(   49.000000000000000      );
  hist -> SetBinContent( xbin,    8465.2682812002859      );
  hist -> SetBinError( xbin,    84.128992448267695      );
   xbin = hist->FindBin(   51.000000000000000      );
  hist -> SetBinContent( xbin,    4738.4854134959942      );
  hist -> SetBinError( xbin,    41.920691691164826      );
   xbin = hist->FindBin(   53.000000000000000      );
  hist -> SetBinContent( xbin,    3175.1950803861050      );
  hist -> SetBinError( xbin,    27.774765827062801      );
   xbin = hist->FindBin(   55.000000000000000      );
  hist -> SetBinContent( xbin,    2255.8632868429563      );
  hist -> SetBinError( xbin,    23.158754728812646      );
   xbin = hist->FindBin(   57.000000000000000      );
  hist -> SetBinContent( xbin,    1703.5660055191038      );
  hist -> SetBinError( xbin,    19.157802841829628      );
   xbin = hist->FindBin(   59.000000000000000      );
  hist -> SetBinContent( xbin,    1257.1578974419131      );
  hist -> SetBinError( xbin,    14.690056421703087      );
   xbin = hist->FindBin(   61.000000000000000      );
  hist -> SetBinContent( xbin,    994.44447820829873      );
  hist -> SetBinError( xbin,    6.0951896171775743      );
   xbin = hist->FindBin(   63.000000000000000      );
  hist -> SetBinContent( xbin,    789.14245416711492      );
  hist -> SetBinError( xbin,    4.5792442190053242      );
   xbin = hist->FindBin(   65.000000000000000      );
  hist -> SetBinContent( xbin,    643.34801046052326      );
  hist -> SetBinError( xbin,    3.7387915213783391      );
   xbin = hist->FindBin(   67.000000000000000      );
  hist -> SetBinContent( xbin,    539.03188182354177      );
  hist -> SetBinError( xbin,    3.3792089461155630      );
   xbin = hist->FindBin(   69.000000000000000      );
  hist -> SetBinContent( xbin,    457.97458371737548      );
  hist -> SetBinError( xbin,    3.1785397020535520      );
   xbin = hist->FindBin(   71.000000000000000      );
  hist -> SetBinContent( xbin,    382.41668406115969      );
  hist -> SetBinError( xbin,    2.7106685664184034      );
   xbin = hist->FindBin(   73.000000000000000      );
  hist -> SetBinContent( xbin,    332.78317729446485      );
  hist -> SetBinError( xbin,    2.4776528466209160      );
   xbin = hist->FindBin(   75.000000000000000      );
  hist -> SetBinContent( xbin,    291.78367924756174      );
  hist -> SetBinError( xbin,    2.3645681338695370      );
   xbin = hist->FindBin(   77.000000000000000      );
  hist -> SetBinContent( xbin,    248.69507936465644      );
  hist -> SetBinError( xbin,    2.0817660431828542      );
   xbin = hist->FindBin(   79.000000000000000      );
  hist -> SetBinContent( xbin,    220.48350974833403      );
  hist -> SetBinError( xbin,    1.9647133155600118      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id5", "pt4", 40,    0.00000,   80.00000);

  hist -> GetXaxis() -> SetTitle("pt4");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dpt4 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   1.0000000000000000      );
  hist -> SetBinContent( xbin,    444.17123964148777      );
  hist -> SetBinError( xbin,    24.001062802388908      );
   xbin = hist->FindBin(   3.0000000000000000      );
  hist -> SetBinContent( xbin,    1247.3737909496640      );
  hist -> SetBinError( xbin,    96.270192495795484      );
   xbin = hist->FindBin(   5.0000000000000000      );
  hist -> SetBinContent( xbin,    2426.6431683269579      );
  hist -> SetBinError( xbin,    149.37438385772487      );
   xbin = hist->FindBin(   7.0000000000000000      );
  hist -> SetBinContent( xbin,    2898.7358734110312      );
  hist -> SetBinError( xbin,    134.36045580889243      );
   xbin = hist->FindBin(   9.0000000000000000      );
  hist -> SetBinContent( xbin,    3954.7271228609593      );
  hist -> SetBinError( xbin,    105.14955111844013      );
   xbin = hist->FindBin(   11.000000000000000      );
  hist -> SetBinContent( xbin,    5047.3270525148155      );
  hist -> SetBinError( xbin,    110.10687510680032      );
   xbin = hist->FindBin(   13.000000000000000      );
  hist -> SetBinContent( xbin,    5712.4795990378498      );
  hist -> SetBinError( xbin,    118.83565402087473      );
   xbin = hist->FindBin(   15.000000000000000      );
  hist -> SetBinContent( xbin,    6852.0121477999637      );
  hist -> SetBinError( xbin,    145.09157088733483      );
   xbin = hist->FindBin(   17.000000000000000      );
  hist -> SetBinContent( xbin,    7676.4729794604345      );
  hist -> SetBinError( xbin,    150.01560877097472      );
   xbin = hist->FindBin(   19.000000000000000      );
  hist -> SetBinContent( xbin,    8714.1696888868446      );
  hist -> SetBinError( xbin,    260.66830842227591      );
   xbin = hist->FindBin(   21.000000000000000      );
  hist -> SetBinContent( xbin,    11499.429399015724      );
  hist -> SetBinError( xbin,    1985.3767155676023      );
   xbin = hist->FindBin(   23.000000000000000      );
  hist -> SetBinContent( xbin,    7633.3583238970041      );
  hist -> SetBinError( xbin,    2168.9057492989668      );
   xbin = hist->FindBin(   25.000000000000000      );
  hist -> SetBinContent( xbin,    12923.221673883381      );
  hist -> SetBinError( xbin,    954.76832270578313      );
   xbin = hist->FindBin(   27.000000000000000      );
  hist -> SetBinContent( xbin,    12777.590371506605      );
  hist -> SetBinError( xbin,    564.88058856932150      );
   xbin = hist->FindBin(   29.000000000000000      );
  hist -> SetBinContent( xbin,    13728.860800960172      );
  hist -> SetBinError( xbin,    506.64054627069436      );
   xbin = hist->FindBin(   31.000000000000000      );
  hist -> SetBinContent( xbin,    14923.632941463540      );
  hist -> SetBinError( xbin,    290.52315364030011      );
   xbin = hist->FindBin(   33.000000000000000      );
  hist -> SetBinContent( xbin,    16731.098069195617      );
  hist -> SetBinError( xbin,    312.30719749508893      );
   xbin = hist->FindBin(   35.000000000000000      );
  hist -> SetBinContent( xbin,    17295.850791953344      );
  hist -> SetBinError( xbin,    254.52266890632842      );
   xbin = hist->FindBin(   37.000000000000000      );
  hist -> SetBinContent( xbin,    19073.770044058143      );
  hist -> SetBinError( xbin,    228.22831197923688      );
   xbin = hist->FindBin(   39.000000000000000      );
  hist -> SetBinContent( xbin,    21430.640960713998      );
  hist -> SetBinError( xbin,    360.07078391994537      );
   xbin = hist->FindBin(   41.000000000000000      );
  hist -> SetBinContent( xbin,    23022.312962207467      );
  hist -> SetBinError( xbin,    375.55561570199740      );
   xbin = hist->FindBin(   43.000000000000000      );
  hist -> SetBinContent( xbin,    26503.988277603046      );
  hist -> SetBinError( xbin,    346.08975851853194      );
   xbin = hist->FindBin(   45.000000000000000      );
  hist -> SetBinContent( xbin,    21740.523563275390      );
  hist -> SetBinError( xbin,    411.32523203177061      );
   xbin = hist->FindBin(   47.000000000000000      );
  hist -> SetBinContent( xbin,    17801.042646226739      );
  hist -> SetBinError( xbin,    300.42018156134623      );
   xbin = hist->FindBin(   49.000000000000000      );
  hist -> SetBinContent( xbin,    8419.2275383638425      );
  hist -> SetBinError( xbin,    78.887066604809320      );
   xbin = hist->FindBin(   51.000000000000000      );
  hist -> SetBinContent( xbin,    4721.1928911887662      );
  hist -> SetBinError( xbin,    61.073724169424885      );
   xbin = hist->FindBin(   53.000000000000000      );
  hist -> SetBinContent( xbin,    3145.9005086304851      );
  hist -> SetBinError( xbin,    37.708258980623476      );
   xbin = hist->FindBin(   55.000000000000000      );
  hist -> SetBinContent( xbin,    2249.8511885042726      );
  hist -> SetBinError( xbin,    22.843537095417485      );
   xbin = hist->FindBin(   57.000000000000000      );
  hist -> SetBinContent( xbin,    1623.4541944922703      );
  hist -> SetBinError( xbin,    19.175907335542036      );
   xbin = hist->FindBin(   59.000000000000000      );
  hist -> SetBinContent( xbin,    1255.2958554852412      );
  hist -> SetBinError( xbin,    12.707724676027691      );
   xbin = hist->FindBin(   61.000000000000000      );
  hist -> SetBinContent( xbin,    961.52390452247278      );
  hist -> SetBinError( xbin,    5.4132994050402514      );
   xbin = hist->FindBin(   63.000000000000000      );
  hist -> SetBinContent( xbin,    767.87050658444252      );
  hist -> SetBinError( xbin,    4.2401567588660658      );
   xbin = hist->FindBin(   65.000000000000000      );
  hist -> SetBinContent( xbin,    627.74941594223401      );
  hist -> SetBinError( xbin,    3.5861128744618944      );
   xbin = hist->FindBin(   67.000000000000000      );
  hist -> SetBinContent( xbin,    518.06560630080230      );
  hist -> SetBinError( xbin,    3.1202808353403615      );
   xbin = hist->FindBin(   69.000000000000000      );
  hist -> SetBinContent( xbin,    440.60885737845069      );
  hist -> SetBinError( xbin,    2.8986765319632730      );
   xbin = hist->FindBin(   71.000000000000000      );
  hist -> SetBinContent( xbin,    374.37448105338052      );
  hist -> SetBinError( xbin,    2.5512468344690071      );
   xbin = hist->FindBin(   73.000000000000000      );
  hist -> SetBinContent( xbin,    319.13869867483902      );
  hist -> SetBinError( xbin,    2.2923176532184453      );
   xbin = hist->FindBin(   75.000000000000000      );
  hist -> SetBinContent( xbin,    271.71559634619825      );
  hist -> SetBinError( xbin,    2.0453114549577167      );
   xbin = hist->FindBin(   77.000000000000000      );
  hist -> SetBinContent( xbin,    237.68058726091604      );
  hist -> SetBinError( xbin,    1.8959071281422191      );
   xbin = hist->FindBin(   79.000000000000000      );
  hist -> SetBinContent( xbin,    205.00073677332767      );
  hist -> SetBinError( xbin,    1.7118582855340552      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id6", "pt34", 25,    0.00000,   50.00000);

  hist -> GetXaxis() -> SetTitle("pt34");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dpt34 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   1.0000000000000000      );
  hist -> SetBinContent( xbin,   -20519.115167678072      );
  hist -> SetBinError( xbin,    370.62705687835222      );
   xbin = hist->FindBin(   3.0000000000000000      );
  hist -> SetBinContent( xbin,    114774.02742409900      );
  hist -> SetBinError( xbin,    229.17623533438802      );
   xbin = hist->FindBin(   5.0000000000000000      );
  hist -> SetBinContent( xbin,    54923.421923679969      );
  hist -> SetBinError( xbin,    102.97626960634322      );
   xbin = hist->FindBin(   7.0000000000000000      );
  hist -> SetBinContent( xbin,    33707.517842309026      );
  hist -> SetBinError( xbin,    63.480719663995636      );
   xbin = hist->FindBin(   9.0000000000000000      );
  hist -> SetBinContent( xbin,    23069.072206379344      );
  hist -> SetBinError( xbin,    45.082279932111092      );
   xbin = hist->FindBin(   11.000000000000000      );
  hist -> SetBinContent( xbin,    16908.292794482219      );
  hist -> SetBinError( xbin,    34.548191765360393      );
   xbin = hist->FindBin(   13.000000000000000      );
  hist -> SetBinContent( xbin,    12966.933633152046      );
  hist -> SetBinError( xbin,    27.781193719348401      );
   xbin = hist->FindBin(   15.000000000000000      );
  hist -> SetBinContent( xbin,    10205.304650463004      );
  hist -> SetBinError( xbin,    23.018498582294196      );
   xbin = hist->FindBin(   17.000000000000000      );
  hist -> SetBinContent( xbin,    8239.6142039343504      );
  hist -> SetBinError( xbin,    19.444638799003762      );
   xbin = hist->FindBin(   19.000000000000000      );
  hist -> SetBinContent( xbin,    6809.2320748693674      );
  hist -> SetBinError( xbin,    16.769713670134408      );
   xbin = hist->FindBin(   21.000000000000000      );
  hist -> SetBinContent( xbin,    5702.3277793044399      );
  hist -> SetBinError( xbin,    14.768280842008364      );
   xbin = hist->FindBin(   23.000000000000000      );
  hist -> SetBinContent( xbin,    4821.1385974669511      );
  hist -> SetBinError( xbin,    13.029709711618937      );
   xbin = hist->FindBin(   25.000000000000000      );
  hist -> SetBinContent( xbin,    4108.0996824524100      );
  hist -> SetBinError( xbin,    11.585363860070824      );
   xbin = hist->FindBin(   27.000000000000000      );
  hist -> SetBinContent( xbin,    3553.7914216937857      );
  hist -> SetBinError( xbin,    10.490026788202314      );
   xbin = hist->FindBin(   29.000000000000000      );
  hist -> SetBinContent( xbin,    3094.1401603796148      );
  hist -> SetBinError( xbin,    9.4167971227419400      );
   xbin = hist->FindBin(   31.000000000000000      );
  hist -> SetBinContent( xbin,    2702.5389048046500      );
  hist -> SetBinError( xbin,    8.5686668410722664      );
   xbin = hist->FindBin(   33.000000000000000      );
  hist -> SetBinContent( xbin,    2382.5021081120099      );
  hist -> SetBinError( xbin,    7.9117926054539778      );
   xbin = hist->FindBin(   35.000000000000000      );
  hist -> SetBinContent( xbin,    2088.1965733551106      );
  hist -> SetBinError( xbin,    7.1478750960778665      );
   xbin = hist->FindBin(   37.000000000000000      );
  hist -> SetBinContent( xbin,    1861.2996352670075      );
  hist -> SetBinError( xbin,    6.5953118237130450      );
   xbin = hist->FindBin(   39.000000000000000      );
  hist -> SetBinContent( xbin,    1663.3670233992225      );
  hist -> SetBinError( xbin,    6.0995648980106951      );
   xbin = hist->FindBin(   41.000000000000000      );
  hist -> SetBinContent( xbin,    1487.0418089248979      );
  hist -> SetBinError( xbin,    5.7610108648139251      );
   xbin = hist->FindBin(   43.000000000000000      );
  hist -> SetBinContent( xbin,    1329.1807718068076      );
  hist -> SetBinError( xbin,    5.1885491628678135      );
   xbin = hist->FindBin(   45.000000000000000      );
  hist -> SetBinContent( xbin,    1191.5637743760897      );
  hist -> SetBinError( xbin,    4.8149144740952954      );
   xbin = hist->FindBin(   47.000000000000000      );
  hist -> SetBinContent( xbin,    1074.1642601589401      );
  hist -> SetBinError( xbin,    4.5448496246865817      );
   xbin = hist->FindBin(   49.000000000000000      );
  hist -> SetBinContent( xbin,    964.60344154036397      );
  hist -> SetBinError( xbin,    4.1900132678934101      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id7", "m34", 80,   70.00000,  110.00000);

  hist -> GetXaxis() -> SetTitle("m34");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dm34 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   70.250000000000000      );
  hist -> SetBinContent( xbin,    1172.0925376378491      );
  hist -> SetBinError( xbin,    36.433057921768068      );
   xbin = hist->FindBin(   70.750000000000000      );
  hist -> SetBinContent( xbin,    1268.5354379423088      );
  hist -> SetBinError( xbin,    36.814835908688266      );
   xbin = hist->FindBin(   71.250000000000000      );
  hist -> SetBinContent( xbin,    1229.5184327250640      );
  hist -> SetBinError( xbin,    35.732188991772460      );
   xbin = hist->FindBin(   71.750000000000000      );
  hist -> SetBinContent( xbin,    1256.3626116081214      );
  hist -> SetBinError( xbin,    35.730084637405724      );
   xbin = hist->FindBin(   72.250000000000000      );
  hist -> SetBinContent( xbin,    1263.3903982669710      );
  hist -> SetBinError( xbin,    35.375508844582427      );
   xbin = hist->FindBin(   72.750000000000000      );
  hist -> SetBinContent( xbin,    1326.8113814709786      );
  hist -> SetBinError( xbin,    36.199404481682308      );
   xbin = hist->FindBin(   73.250000000000000      );
  hist -> SetBinContent( xbin,    1336.3947953565021      );
  hist -> SetBinError( xbin,    34.717537971338835      );
   xbin = hist->FindBin(   73.750000000000000      );
  hist -> SetBinContent( xbin,    1408.6161658877427      );
  hist -> SetBinError( xbin,    35.015733177032502      );
   xbin = hist->FindBin(   74.250000000000000      );
  hist -> SetBinContent( xbin,    1393.3633929402286      );
  hist -> SetBinError( xbin,    34.208500542662691      );
   xbin = hist->FindBin(   74.750000000000000      );
  hist -> SetBinContent( xbin,    1425.3995067210719      );
  hist -> SetBinError( xbin,    35.020657426546848      );
   xbin = hist->FindBin(   75.250000000000000      );
  hist -> SetBinContent( xbin,    1514.7867144258726      );
  hist -> SetBinError( xbin,    36.700457494452777      );
   xbin = hist->FindBin(   75.750000000000000      );
  hist -> SetBinContent( xbin,    1492.0001555060771      );
  hist -> SetBinError( xbin,    36.111366458496356      );
   xbin = hist->FindBin(   76.250000000000000      );
  hist -> SetBinContent( xbin,    1667.2837803178832      );
  hist -> SetBinError( xbin,    37.633471447279256      );
   xbin = hist->FindBin(   76.750000000000000      );
  hist -> SetBinContent( xbin,    1702.0422608446186      );
  hist -> SetBinError( xbin,    37.321611003594413      );
   xbin = hist->FindBin(   77.250000000000000      );
  hist -> SetBinContent( xbin,    1772.6764782307096      );
  hist -> SetBinError( xbin,    37.955357054020610      );
   xbin = hist->FindBin(   77.750000000000000      );
  hist -> SetBinContent( xbin,    1925.7616397508152      );
  hist -> SetBinError( xbin,    38.900529238891913      );
   xbin = hist->FindBin(   78.250000000000000      );
  hist -> SetBinContent( xbin,    1979.3145229995866      );
  hist -> SetBinError( xbin,    40.787409305488524      );
   xbin = hist->FindBin(   78.750000000000000      );
  hist -> SetBinContent( xbin,    2109.4408226891751      );
  hist -> SetBinError( xbin,    43.893370367481836      );
   xbin = hist->FindBin(   79.250000000000000      );
  hist -> SetBinContent( xbin,    2304.3577610344014      );
  hist -> SetBinError( xbin,    45.162260119168600      );
   xbin = hist->FindBin(   79.750000000000000      );
  hist -> SetBinContent( xbin,    2434.5080955947510      );
  hist -> SetBinError( xbin,    46.054045652477477      );
   xbin = hist->FindBin(   80.250000000000000      );
  hist -> SetBinContent( xbin,    2594.5045462220223      );
  hist -> SetBinError( xbin,    46.906680860824025      );
   xbin = hist->FindBin(   80.750000000000000      );
  hist -> SetBinContent( xbin,    2778.8809541807836      );
  hist -> SetBinError( xbin,    48.381177929218467      );
   xbin = hist->FindBin(   81.250000000000000      );
  hist -> SetBinContent( xbin,    2916.6533968447798      );
  hist -> SetBinError( xbin,    50.128201706170856      );
   xbin = hist->FindBin(   81.750000000000000      );
  hist -> SetBinContent( xbin,    3221.5999031269971      );
  hist -> SetBinError( xbin,    52.787605211111014      );
   xbin = hist->FindBin(   82.250000000000000      );
  hist -> SetBinContent( xbin,    3579.0706017570883      );
  hist -> SetBinError( xbin,    54.821839873563775      );
   xbin = hist->FindBin(   82.750000000000000      );
  hist -> SetBinContent( xbin,    3848.0092552471451      );
  hist -> SetBinError( xbin,    56.647772051879180      );
   xbin = hist->FindBin(   83.250000000000000      );
  hist -> SetBinContent( xbin,    4342.1686118746002      );
  hist -> SetBinError( xbin,    60.272683595090534      );
   xbin = hist->FindBin(   83.750000000000000      );
  hist -> SetBinContent( xbin,    4967.6685416395612      );
  hist -> SetBinError( xbin,    64.143969890272928      );
   xbin = hist->FindBin(   84.250000000000000      );
  hist -> SetBinContent( xbin,    5499.6812082630950      );
  hist -> SetBinError( xbin,    68.234653790174946      );
   xbin = hist->FindBin(   84.750000000000000      );
  hist -> SetBinContent( xbin,    6403.9647830481990      );
  hist -> SetBinError( xbin,    74.331582377929507      );
   xbin = hist->FindBin(   85.250000000000000      );
  hist -> SetBinContent( xbin,    7281.1849303924309      );
  hist -> SetBinError( xbin,    78.204951165516334      );
   xbin = hist->FindBin(   85.750000000000000      );
  hist -> SetBinContent( xbin,    8619.9018103956751      );
  hist -> SetBinError( xbin,    84.890525076685108      );
   xbin = hist->FindBin(   86.250000000000000      );
  hist -> SetBinContent( xbin,    10214.493296870278      );
  hist -> SetBinError( xbin,    94.049576094488643      );
   xbin = hist->FindBin(   86.750000000000000      );
  hist -> SetBinContent( xbin,    12163.408944110473      );
  hist -> SetBinError( xbin,    100.27873845120152      );
   xbin = hist->FindBin(   87.250000000000000      );
  hist -> SetBinContent( xbin,    15355.134369569043      );
  hist -> SetBinError( xbin,    114.80390059380126      );
   xbin = hist->FindBin(   87.750000000000000      );
  hist -> SetBinContent( xbin,    19224.090613086588      );
  hist -> SetBinError( xbin,    127.34472609504611      );
   xbin = hist->FindBin(   88.250000000000000      );
  hist -> SetBinContent( xbin,    24971.622778020905      );
  hist -> SetBinError( xbin,    145.04469686909130      );
   xbin = hist->FindBin(   88.750000000000000      );
  hist -> SetBinContent( xbin,    33656.889758649202      );
  hist -> SetBinError( xbin,    168.86098705263549      );
   xbin = hist->FindBin(   89.250000000000000      );
  hist -> SetBinContent( xbin,    47388.619530238830      );
  hist -> SetBinError( xbin,    200.10399119056618      );
   xbin = hist->FindBin(   89.750000000000000      );
  hist -> SetBinContent( xbin,    69130.763057009346      );
  hist -> SetBinError( xbin,    241.55368810087489      );
   xbin = hist->FindBin(   90.250000000000000      );
  hist -> SetBinContent( xbin,    101799.23382289406      );
  hist -> SetBinError( xbin,    292.13532290320137      );
   xbin = hist->FindBin(   90.750000000000000      );
  hist -> SetBinContent( xbin,    139840.33740253642      );
  hist -> SetBinError( xbin,    341.84890598375068      );
   xbin = hist->FindBin(   91.250000000000000      );
  hist -> SetBinContent( xbin,    155716.74560557897      );
  hist -> SetBinError( xbin,    360.81390636195380      );
   xbin = hist->FindBin(   91.750000000000000      );
  hist -> SetBinContent( xbin,    130527.29974988439      );
  hist -> SetBinError( xbin,    331.16038047165057      );
   xbin = hist->FindBin(   92.250000000000000      );
  hist -> SetBinContent( xbin,    91805.094134879415      );
  hist -> SetBinError( xbin,    278.62988820577380      );
   xbin = hist->FindBin(   92.750000000000000      );
  hist -> SetBinContent( xbin,    61724.620415536599      );
  hist -> SetBinError( xbin,    229.02271911043292      );
   xbin = hist->FindBin(   93.250000000000000      );
  hist -> SetBinContent( xbin,    42340.394980243203      );
  hist -> SetBinError( xbin,    189.59482932805165      );
   xbin = hist->FindBin(   93.750000000000000      );
  hist -> SetBinContent( xbin,    29831.236238511963      );
  hist -> SetBinError( xbin,    159.74708027226541      );
   xbin = hist->FindBin(   94.250000000000000      );
  hist -> SetBinContent( xbin,    22182.425619674861      );
  hist -> SetBinError( xbin,    138.10058102937009      );
   xbin = hist->FindBin(   94.750000000000000      );
  hist -> SetBinContent( xbin,    16915.912540625333      );
  hist -> SetBinError( xbin,    120.59666053203451      );
   xbin = hist->FindBin(   95.250000000000000      );
  hist -> SetBinContent( xbin,    13228.957080326896      );
  hist -> SetBinError( xbin,    106.97435485677967      );
   xbin = hist->FindBin(   95.750000000000000      );
  hist -> SetBinContent( xbin,    10611.812356452880      );
  hist -> SetBinError( xbin,    95.673443287370333      );
   xbin = hist->FindBin(   96.250000000000000      );
  hist -> SetBinContent( xbin,    8842.3060089785922      );
  hist -> SetBinError( xbin,    86.801678536323124      );
   xbin = hist->FindBin(   96.750000000000000      );
  hist -> SetBinContent( xbin,    7366.9146860881710      );
  hist -> SetBinError( xbin,    81.456800761850374      );
   xbin = hist->FindBin(   97.250000000000000      );
  hist -> SetBinContent( xbin,    6248.2436021766534      );
  hist -> SetBinError( xbin,    73.848086675806243      );
   xbin = hist->FindBin(   97.750000000000000      );
  hist -> SetBinContent( xbin,    5285.0145216987403      );
  hist -> SetBinError( xbin,    66.854744596890740      );
   xbin = hist->FindBin(   98.250000000000000      );
  hist -> SetBinContent( xbin,    4532.2605148077046      );
  hist -> SetBinError( xbin,    62.103733553524251      );
   xbin = hist->FindBin(   98.750000000000000      );
  hist -> SetBinContent( xbin,    3955.0074068159615      );
  hist -> SetBinError( xbin,    59.877203243747950      );
   xbin = hist->FindBin(   99.250000000000000      );
  hist -> SetBinContent( xbin,    3559.5006999385050      );
  hist -> SetBinError( xbin,    57.184363758634142      );
   xbin = hist->FindBin(   99.750000000000000      );
  hist -> SetBinContent( xbin,    3110.3647099476361      );
  hist -> SetBinError( xbin,    53.004344642998376      );
   xbin = hist->FindBin(   100.25000000000000      );
  hist -> SetBinContent( xbin,    2872.4403675766534      );
  hist -> SetBinError( xbin,    50.339739526454991      );
   xbin = hist->FindBin(   100.75000000000000      );
  hist -> SetBinContent( xbin,    2548.3314081014391      );
  hist -> SetBinError( xbin,    46.774863235805235      );
   xbin = hist->FindBin(   101.25000000000000      );
  hist -> SetBinContent( xbin,    2238.2968710031660      );
  hist -> SetBinError( xbin,    43.619798816833971      );
   xbin = hist->FindBin(   101.75000000000000      );
  hist -> SetBinContent( xbin,    2113.6615854413017      );
  hist -> SetBinError( xbin,    42.468972615029720      );
   xbin = hist->FindBin(   102.25000000000000      );
  hist -> SetBinContent( xbin,    1922.7006333866004      );
  hist -> SetBinError( xbin,    40.670605119152206      );
   xbin = hist->FindBin(   102.75000000000000      );
  hist -> SetBinContent( xbin,    1678.2929661925664      );
  hist -> SetBinError( xbin,    37.801839632192575      );
   xbin = hist->FindBin(   103.25000000000000      );
  hist -> SetBinContent( xbin,    1604.5424872154879      );
  hist -> SetBinError( xbin,    37.928808303934133      );
   xbin = hist->FindBin(   103.75000000000000      );
  hist -> SetBinContent( xbin,    1453.5574282809678      );
  hist -> SetBinError( xbin,    35.903140076031796      );
   xbin = hist->FindBin(   104.25000000000000      );
  hist -> SetBinContent( xbin,    1393.1869478687915      );
  hist -> SetBinError( xbin,    35.960278502574234      );
   xbin = hist->FindBin(   104.75000000000000      );
  hist -> SetBinContent( xbin,    1241.3496250029630      );
  hist -> SetBinError( xbin,    33.233388705685648      );
   xbin = hist->FindBin(   105.25000000000000      );
  hist -> SetBinContent( xbin,    1165.7489390865535      );
  hist -> SetBinError( xbin,    33.333444804032155      );
   xbin = hist->FindBin(   105.75000000000000      );
  hist -> SetBinContent( xbin,    1119.0188659645605      );
  hist -> SetBinError( xbin,    31.929971831237996      );
   xbin = hist->FindBin(   106.25000000000000      );
  hist -> SetBinContent( xbin,    1032.4685053518413      );
  hist -> SetBinError( xbin,    30.594890521806342      );
   xbin = hist->FindBin(   106.75000000000000      );
  hist -> SetBinContent( xbin,    942.62083155228197      );
  hist -> SetBinError( xbin,    29.295161705111571      );
   xbin = hist->FindBin(   107.25000000000000      );
  hist -> SetBinContent( xbin,    902.33472945557514      );
  hist -> SetBinError( xbin,    28.891622147041360      );
   xbin = hist->FindBin(   107.75000000000000      );
  hist -> SetBinContent( xbin,    908.52230760755469      );
  hist -> SetBinError( xbin,    29.066616281091814      );
   xbin = hist->FindBin(   108.25000000000000      );
  hist -> SetBinContent( xbin,    792.41140751430021      );
  hist -> SetBinError( xbin,    26.371382269308686      );
   xbin = hist->FindBin(   108.75000000000000      );
  hist -> SetBinContent( xbin,    764.70815976332131      );
  hist -> SetBinError( xbin,    26.277619054386733      );
   xbin = hist->FindBin(   109.25000000000000      );
  hist -> SetBinContent( xbin,    673.37589046249252      );
  hist -> SetBinError( xbin,    24.395364097077884      );
   xbin = hist->FindBin(   109.75000000000000      );
  hist -> SetBinContent( xbin,    670.14179975760123      );
  hist -> SetBinError( xbin,    24.381396867883993      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id8", "DeltaR35", 50,    0.00000,    5.00000);

  hist -> GetXaxis() -> SetTitle("DeltaR35");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dDeltaR35 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   5.0000000000000003E-002 );
  hist -> SetBinContent( xbin,    580.84003432904706      );
  hist -> SetBinError( xbin,    13.518048254324766      );
   xbin = hist->FindBin(  0.15000000000000002      );
  hist -> SetBinContent( xbin,    1740.0132949946515      );
  hist -> SetBinError( xbin,    23.175651836752618      );
   xbin = hist->FindBin(  0.25000000000000000      );
  hist -> SetBinContent( xbin,    2935.7701396859375      );
  hist -> SetBinError( xbin,    30.608437220472943      );
   xbin = hist->FindBin(  0.35000000000000003      );
  hist -> SetBinContent( xbin,    3969.1815078844297      );
  hist -> SetBinError( xbin,    35.154403745978122      );
   xbin = hist->FindBin(  0.45000000000000001      );
  hist -> SetBinContent( xbin,    5265.2057834996185      );
  hist -> SetBinError( xbin,    41.585289364024156      );
   xbin = hist->FindBin(  0.55000000000000004      );
  hist -> SetBinContent( xbin,    6234.3993905768803      );
  hist -> SetBinError( xbin,    44.898749882765976      );
   xbin = hist->FindBin(  0.65000000000000002      );
  hist -> SetBinContent( xbin,    7286.9994358392960      );
  hist -> SetBinError( xbin,    48.877488561229306      );
   xbin = hist->FindBin(  0.75000000000000000      );
  hist -> SetBinContent( xbin,    8459.5342855754116      );
  hist -> SetBinError( xbin,    53.308920955581762      );
   xbin = hist->FindBin(  0.85000000000000009      );
  hist -> SetBinContent( xbin,    9693.0995952397516      );
  hist -> SetBinError( xbin,    57.347545668846998      );
   xbin = hist->FindBin(  0.95000000000000007      );
  hist -> SetBinContent( xbin,    10785.608029777677      );
  hist -> SetBinError( xbin,    60.298676661056440      );
   xbin = hist->FindBin(   1.0500000000000000      );
  hist -> SetBinContent( xbin,    11904.097174089289      );
  hist -> SetBinError( xbin,    64.535273621023194      );
   xbin = hist->FindBin(   1.1500000000000001      );
  hist -> SetBinContent( xbin,    12918.712119819444      );
  hist -> SetBinError( xbin,    67.299145174869338      );
   xbin = hist->FindBin(   1.2500000000000000      );
  hist -> SetBinContent( xbin,    14054.042810331550      );
  hist -> SetBinError( xbin,    70.554244933633086      );
   xbin = hist->FindBin(   1.3500000000000001      );
  hist -> SetBinContent( xbin,    15147.923219667027      );
  hist -> SetBinError( xbin,    73.901073996925234      );
   xbin = hist->FindBin(   1.4500000000000002      );
  hist -> SetBinContent( xbin,    16210.555202600066      );
  hist -> SetBinError( xbin,    75.971070618573336      );
   xbin = hist->FindBin(   1.5500000000000000      );
  hist -> SetBinContent( xbin,    17464.346310344870      );
  hist -> SetBinError( xbin,    80.517371845168000      );
   xbin = hist->FindBin(   1.6500000000000001      );
  hist -> SetBinContent( xbin,    18626.614684458906      );
  hist -> SetBinError( xbin,    82.208802603271479      );
   xbin = hist->FindBin(   1.7500000000000000      );
  hist -> SetBinContent( xbin,    19746.525970946448      );
  hist -> SetBinError( xbin,    85.268363840341351      );
   xbin = hist->FindBin(   1.8500000000000001      );
  hist -> SetBinContent( xbin,    21199.244955247941      );
  hist -> SetBinError( xbin,    89.495592462395223      );
   xbin = hist->FindBin(   1.9500000000000002      );
  hist -> SetBinContent( xbin,    22702.887514153455      );
  hist -> SetBinError( xbin,    92.184761939598516      );
   xbin = hist->FindBin(   2.0500000000000003      );
  hist -> SetBinContent( xbin,    24276.628996130014      );
  hist -> SetBinError( xbin,    96.167250880604399      );
   xbin = hist->FindBin(   2.1499999999999999      );
  hist -> SetBinContent( xbin,    25941.420889427136      );
  hist -> SetBinError( xbin,    99.217774173463269      );
   xbin = hist->FindBin(   2.2500000000000000      );
  hist -> SetBinContent( xbin,    27969.782889482969      );
  hist -> SetBinError( xbin,    103.18640657322499      );
   xbin = hist->FindBin(   2.3500000000000001      );
  hist -> SetBinContent( xbin,    29963.345696642187      );
  hist -> SetBinError( xbin,    105.45962176330646      );
   xbin = hist->FindBin(   2.4500000000000002      );
  hist -> SetBinContent( xbin,    32502.067627368258      );
  hist -> SetBinError( xbin,    111.05500464071727      );
   xbin = hist->FindBin(   2.5500000000000003      );
  hist -> SetBinContent( xbin,    35369.532675211703      );
  hist -> SetBinError( xbin,    114.55623108439443      );
   xbin = hist->FindBin(   2.6500000000000004      );
  hist -> SetBinContent( xbin,    38470.170822792817      );
  hist -> SetBinError( xbin,    119.90749410736134      );
   xbin = hist->FindBin(   2.7500000000000000      );
  hist -> SetBinContent( xbin,    42068.513919505989      );
  hist -> SetBinError( xbin,    125.46749182428536      );
   xbin = hist->FindBin(   2.8500000000000001      );
  hist -> SetBinContent( xbin,    45400.864918206251      );
  hist -> SetBinError( xbin,    129.86700236746753      );
   xbin = hist->FindBin(   2.9500000000000002      );
  hist -> SetBinContent( xbin,    49412.188535399531      );
  hist -> SetBinError( xbin,    136.06151179133303      );
   xbin = hist->FindBin(   3.0500000000000003      );
  hist -> SetBinContent( xbin,    52886.852560785803      );
  hist -> SetBinError( xbin,    140.87927612869160      );
   xbin = hist->FindBin(   3.1500000000000004      );
  hist -> SetBinContent( xbin,    48213.497170841263      );
  hist -> SetBinError( xbin,    140.04013134395015      );
   xbin = hist->FindBin(   3.2500000000000000      );
  hist -> SetBinContent( xbin,    32177.209475535692      );
  hist -> SetBinError( xbin,    129.11179011023705      );
   xbin = hist->FindBin(   3.3500000000000001      );
  hist -> SetBinContent( xbin,    25087.775547755406      );
  hist -> SetBinError( xbin,    126.11365202835451      );
   xbin = hist->FindBin(   3.4500000000000002      );
  hist -> SetBinContent( xbin,    20259.145007735468      );
  hist -> SetBinError( xbin,    121.24306267156564      );
   xbin = hist->FindBin(   3.5500000000000003      );
  hist -> SetBinContent( xbin,    16565.500275563689      );
  hist -> SetBinError( xbin,    118.53252241546450      );
   xbin = hist->FindBin(   3.6500000000000004      );
  hist -> SetBinContent( xbin,    13571.147660190598      );
  hist -> SetBinError( xbin,    114.30532980285500      );
   xbin = hist->FindBin(   3.7500000000000000      );
  hist -> SetBinContent( xbin,    11395.132849974487      );
  hist -> SetBinError( xbin,    110.67267118444629      );
   xbin = hist->FindBin(   3.8500000000000001      );
  hist -> SetBinContent( xbin,    9428.5800533502461      );
  hist -> SetBinError( xbin,    106.44383019242490      );
   xbin = hist->FindBin(   3.9500000000000002      );
  hist -> SetBinContent( xbin,    7958.5193092213058      );
  hist -> SetBinError( xbin,    103.40709032287009      );
   xbin = hist->FindBin(   4.0499999999999998      );
  hist -> SetBinContent( xbin,    6610.9749618542428      );
  hist -> SetBinError( xbin,    95.983393802900579      );
   xbin = hist->FindBin(   4.1500000000000004      );
  hist -> SetBinContent( xbin,    5593.2676063100262      );
  hist -> SetBinError( xbin,    92.857896154202450      );
   xbin = hist->FindBin(   4.2500000000000000      );
  hist -> SetBinContent( xbin,    4667.6655175198130      );
  hist -> SetBinError( xbin,    88.168615462726180      );
   xbin = hist->FindBin(   4.3500000000000005      );
  hist -> SetBinContent( xbin,    3816.1124814235272      );
  hist -> SetBinError( xbin,    82.379550370206800      );
   xbin = hist->FindBin(   4.4500000000000002      );
  hist -> SetBinContent( xbin,    3242.6217509335684      );
  hist -> SetBinError( xbin,    79.556299383224527      );
   xbin = hist->FindBin(   4.5499999999999998      );
  hist -> SetBinContent( xbin,    2788.9464447471514      );
  hist -> SetBinError( xbin,    77.555012655102260      );
   xbin = hist->FindBin(   4.6500000000000004      );
  hist -> SetBinContent( xbin,    2312.5827337751857      );
  hist -> SetBinError( xbin,    72.506166057617790      );
   xbin = hist->FindBin(   4.7500000000000000      );
  hist -> SetBinContent( xbin,    1914.2330516332122      );
  hist -> SetBinError( xbin,    68.117910581720366      );
   xbin = hist->FindBin(   4.8500000000000005      );
  hist -> SetBinContent( xbin,    1726.7263931277312      );
  hist -> SetBinError( xbin,    70.534084887902580      );
   xbin = hist->FindBin(   4.9500000000000002      );
  hist -> SetBinContent( xbin,    1428.5360458694295      );
  hist -> SetBinError( xbin,    61.683368537232312      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id9", "y5", 12,   -3.20000,    3.20000);

  hist -> GetXaxis() -> SetTitle("y5");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(  -2.4500000000000002      );
  hist -> SetBinContent( xbin,    4140.6433229017011      );
  hist -> SetBinError( xbin,    20.217029208292143      );
   xbin = hist->FindBin(  -1.9500000000000002      );
  hist -> SetBinContent( xbin,    13436.908787916889      );
  hist -> SetBinError( xbin,    35.812876131285464      );
   xbin = hist->FindBin(  -1.4500000000000002      );
  hist -> SetBinContent( xbin,    17565.978033713985      );
  hist -> SetBinError( xbin,    41.721448967874458      );
   xbin = hist->FindBin( -0.95000000000000018      );
  hist -> SetBinContent( xbin,    20760.665933521552      );
  hist -> SetBinError( xbin,    45.548023473828323      );
   xbin = hist->FindBin( -0.45000000000000018      );
  hist -> SetBinContent( xbin,    22559.625695585881      );
  hist -> SetBinError( xbin,    48.475319354808143      );
   xbin = hist->FindBin(   4.9999999999999822E-002 );
  hist -> SetBinContent( xbin,    22862.329462642654      );
  hist -> SetBinError( xbin,    49.260151984932293      );
   xbin = hist->FindBin(  0.54999999999999982      );
  hist -> SetBinContent( xbin,    21630.587320235525      );
  hist -> SetBinError( xbin,    47.652880286949362      );
   xbin = hist->FindBin(   1.0499999999999998      );
  hist -> SetBinContent( xbin,    19230.927662501937      );
  hist -> SetBinError( xbin,    45.032424872889443      );
   xbin = hist->FindBin(   1.5499999999999998      );
  hist -> SetBinContent( xbin,    15746.588918019857      );
  hist -> SetBinError( xbin,    40.213637536295955      );
   xbin = hist->FindBin(   2.0499999999999998      );
  hist -> SetBinContent( xbin,    11514.525268632300      );
  hist -> SetBinError( xbin,    34.158612233629334      );
   xbin = hist->FindBin(   2.5499999999999998      );
  hist -> SetBinContent( xbin,    1808.8489773074464      );
  hist -> SetBinError( xbin,    13.275094956398123      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id10", "pt5", 50,    0.00000,  100.00000);

  hist -> GetXaxis() -> SetTitle("pt5");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   21.000000000000000      );
  hist -> SetBinContent( xbin,    4735.4588794640467      );
  hist -> SetBinError( xbin,    13.514314000912284      );
   xbin = hist->FindBin(   23.000000000000000      );
  hist -> SetBinContent( xbin,    4043.1402102938914      );
  hist -> SetBinError( xbin,    11.999015665683839      );
   xbin = hist->FindBin(   25.000000000000000      );
  hist -> SetBinContent( xbin,    3465.5221464770075      );
  hist -> SetBinError( xbin,    10.696550970590778      );
   xbin = hist->FindBin(   27.000000000000000      );
  hist -> SetBinContent( xbin,    3015.2681193354006      );
  hist -> SetBinError( xbin,    9.7140064073398111      );
   xbin = hist->FindBin(   29.000000000000000      );
  hist -> SetBinContent( xbin,    2647.6820047532747      );
  hist -> SetBinError( xbin,    8.7803603692334917      );
   xbin = hist->FindBin(   31.000000000000000      );
  hist -> SetBinContent( xbin,    2329.4717246754594      );
  hist -> SetBinError( xbin,    8.0155269178018607      );
   xbin = hist->FindBin(   33.000000000000000      );
  hist -> SetBinContent( xbin,    2064.8252047737801      );
  hist -> SetBinError( xbin,    7.4350721848798385      );
   xbin = hist->FindBin(   35.000000000000000      );
  hist -> SetBinContent( xbin,    1826.2635390332723      );
  hist -> SetBinError( xbin,    6.7476385165402917      );
   xbin = hist->FindBin(   37.000000000000000      );
  hist -> SetBinContent( xbin,    1630.3075016669302      );
  hist -> SetBinError( xbin,    6.2263570615474482      );
   xbin = hist->FindBin(   39.000000000000000      );
  hist -> SetBinContent( xbin,    1463.6324816895260      );
  hist -> SetBinError( xbin,    5.7811908791922466      );
   xbin = hist->FindBin(   41.000000000000000      );
  hist -> SetBinContent( xbin,    1318.0247583461360      );
  hist -> SetBinError( xbin,    5.4774563605066273      );
   xbin = hist->FindBin(   43.000000000000000      );
  hist -> SetBinContent( xbin,    1183.4534645047322      );
  hist -> SetBinError( xbin,    4.9542011955205263      );
   xbin = hist->FindBin(   45.000000000000000      );
  hist -> SetBinContent( xbin,    1063.1299583358200      );
  hist -> SetBinError( xbin,    4.5814366408462792      );
   xbin = hist->FindBin(   47.000000000000000      );
  hist -> SetBinContent( xbin,    961.65628424260126      );
  hist -> SetBinError( xbin,    4.3327149928035862      );
   xbin = hist->FindBin(   49.000000000000000      );
  hist -> SetBinContent( xbin,    867.55874791675785      );
  hist -> SetBinError( xbin,    3.9956341846756871      );
   xbin = hist->FindBin(   51.000000000000000      );
  hist -> SetBinContent( xbin,    795.18812626938268      );
  hist -> SetBinError( xbin,    3.8566472011216200      );
   xbin = hist->FindBin(   53.000000000000000      );
  hist -> SetBinContent( xbin,    721.88870892852174      );
  hist -> SetBinError( xbin,    3.6288657346745206      );
   xbin = hist->FindBin(   55.000000000000000      );
  hist -> SetBinContent( xbin,    655.57153121045405      );
  hist -> SetBinError( xbin,    3.3507043109978460      );
   xbin = hist->FindBin(   57.000000000000000      );
  hist -> SetBinContent( xbin,    605.08701275535225      );
  hist -> SetBinError( xbin,    3.2137921600854775      );
   xbin = hist->FindBin(   59.000000000000000      );
  hist -> SetBinContent( xbin,    551.53208978815201      );
  hist -> SetBinError( xbin,    3.0072800043737486      );
   xbin = hist->FindBin(   61.000000000000000      );
  hist -> SetBinContent( xbin,    501.80851512575509      );
  hist -> SetBinError( xbin,    2.8319520683712418      );
   xbin = hist->FindBin(   63.000000000000000      );
  hist -> SetBinContent( xbin,    460.45140591641507      );
  hist -> SetBinError( xbin,    2.6992948144231530      );
   xbin = hist->FindBin(   65.000000000000000      );
  hist -> SetBinContent( xbin,    421.49544641181933      );
  hist -> SetBinError( xbin,    2.5395905585782672      );
   xbin = hist->FindBin(   67.000000000000000      );
  hist -> SetBinContent( xbin,    388.02425786450328      );
  hist -> SetBinError( xbin,    2.3766167610444802      );
   xbin = hist->FindBin(   69.000000000000000      );
  hist -> SetBinContent( xbin,    356.63635891711914      );
  hist -> SetBinError( xbin,    2.2774405932951960      );
   xbin = hist->FindBin(   71.000000000000000      );
  hist -> SetBinContent( xbin,    326.63755306396553      );
  hist -> SetBinError( xbin,    2.1961973716167353      );
   xbin = hist->FindBin(   73.000000000000000      );
  hist -> SetBinContent( xbin,    302.87467506419057      );
  hist -> SetBinError( xbin,    2.0484905477426572      );
   xbin = hist->FindBin(   75.000000000000000      );
  hist -> SetBinContent( xbin,    279.43776884858102      );
  hist -> SetBinError( xbin,    1.9855705303590838      );
   xbin = hist->FindBin(   77.000000000000000      );
  hist -> SetBinContent( xbin,    259.02070203584384      );
  hist -> SetBinError( xbin,    1.8839940100491686      );
   xbin = hist->FindBin(   79.000000000000000      );
  hist -> SetBinContent( xbin,    237.25923987550701      );
  hist -> SetBinError( xbin,    1.7914855700341747      );
   xbin = hist->FindBin(   81.000000000000000      );
  hist -> SetBinContent( xbin,    220.61730479673335      );
  hist -> SetBinError( xbin,    1.7012112318686072      );
   xbin = hist->FindBin(   83.000000000000000      );
  hist -> SetBinContent( xbin,    205.46558716274367      );
  hist -> SetBinError( xbin,    1.6430892558337808      );
   xbin = hist->FindBin(   85.000000000000000      );
  hist -> SetBinContent( xbin,    188.40575854417222      );
  hist -> SetBinError( xbin,    1.5267896365049209      );
   xbin = hist->FindBin(   87.000000000000000      );
  hist -> SetBinContent( xbin,    173.88333755285788      );
  hist -> SetBinError( xbin,    1.4713701444127312      );
   xbin = hist->FindBin(   89.000000000000000      );
  hist -> SetBinContent( xbin,    159.04631452797128      );
  hist -> SetBinError( xbin,    1.4071269806690272      );
   xbin = hist->FindBin(   91.000000000000000      );
  hist -> SetBinContent( xbin,    150.42491153950743      );
  hist -> SetBinError( xbin,    1.3783491813804680      );
   xbin = hist->FindBin(   93.000000000000000      );
  hist -> SetBinContent( xbin,    138.84045514979343      );
  hist -> SetBinError( xbin,    1.2993360243764620      );
   xbin = hist->FindBin(   95.000000000000000      );
  hist -> SetBinContent( xbin,    130.81534169574999      );
  hist -> SetBinError( xbin,    1.2604594039095187      );
   xbin = hist->FindBin(   97.000000000000000      );
  hist -> SetBinContent( xbin,    119.12067662894495      );
  hist -> SetBinError( xbin,    1.1388810173329140      );
   xbin = hist->FindBin(   99.000000000000000      );
  hist -> SetBinContent( xbin,    113.85914756262994      );
  hist -> SetBinError( xbin,    1.1470324026186409      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id11", "m34 forward lepton", 32,   40.00000,  200.00000);

  hist -> GetXaxis() -> SetTitle("m34 forward lepton");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dm34 forward lepton [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   62.500000000000000      );
  hist -> SetBinContent( xbin,    464.03831046539483      );
  hist -> SetBinError( xbin,    5.7173715677715586      );
   xbin = hist->FindBin(   67.500000000000000      );
  hist -> SetBinContent( xbin,    447.41776135739184      );
  hist -> SetBinError( xbin,    4.9199603522243001      );
   xbin = hist->FindBin(   72.500000000000000      );
  hist -> SetBinContent( xbin,    505.92062807957910      );
  hist -> SetBinError( xbin,    5.8558061869781461      );
   xbin = hist->FindBin(   77.500000000000000      );
  hist -> SetBinContent( xbin,    786.43502998306201      );
  hist -> SetBinError( xbin,    7.2938328162087904      );
   xbin = hist->FindBin(   82.500000000000000      );
  hist -> SetBinContent( xbin,    1839.5594559335348      );
  hist -> SetBinError( xbin,    11.816582474285394      );
   xbin = hist->FindBin(   87.500000000000000      );
  hist -> SetBinContent( xbin,    12548.056215695920      );
  hist -> SetBinError( xbin,    32.794782427337637      );
   xbin = hist->FindBin(   92.500000000000000      );
  hist -> SetBinContent( xbin,    42166.911171758380      );
  hist -> SetBinError( xbin,    60.590805049705878      );
   xbin = hist->FindBin(   97.500000000000000      );
  hist -> SetBinContent( xbin,    3800.3913885204333      );
  hist -> SetBinError( xbin,    19.311245313816094      );
   xbin = hist->FindBin(   102.50000000000000      );
  hist -> SetBinContent( xbin,    1130.5138618815197      );
  hist -> SetBinError( xbin,    10.691945282300143      );
   xbin = hist->FindBin(   107.50000000000000      );
  hist -> SetBinContent( xbin,    544.91568555930508      );
  hist -> SetBinError( xbin,    7.6487911240706792      );
   xbin = hist->FindBin(   112.50000000000000      );
  hist -> SetBinContent( xbin,    324.19275392604669      );
  hist -> SetBinError( xbin,    5.9280449357161134      );
   xbin = hist->FindBin(   117.50000000000000      );
  hist -> SetBinContent( xbin,    210.67998025724035      );
  hist -> SetBinError( xbin,    4.8341132053978022      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id12", "m34 backward lepton", 32,   40.00000,  200.00000);

  hist -> GetXaxis() -> SetTitle("m34 backward lepton");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dm34 backward lepton [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   62.500000000000000      );
  hist -> SetBinContent( xbin,    757.26350420555275      );
  hist -> SetBinError( xbin,    9.7031073082672261      );
   xbin = hist->FindBin(   67.500000000000000      );
  hist -> SetBinContent( xbin,    720.46250525656842      );
  hist -> SetBinError( xbin,    8.2074259704579298      );
   xbin = hist->FindBin(   72.500000000000000      );
  hist -> SetBinContent( xbin,    802.12783797609097      );
  hist -> SetBinError( xbin,    9.6059213478825232      );
   xbin = hist->FindBin(   77.500000000000000      );
  hist -> SetBinContent( xbin,    1103.7821931563344      );
  hist -> SetBinError( xbin,    10.447817517077565      );
   xbin = hist->FindBin(   82.500000000000000      );
  hist -> SetBinContent( xbin,    2175.6607242868827      );
  hist -> SetBinError( xbin,    14.167316318573612      );
   xbin = hist->FindBin(   87.500000000000000      );
  hist -> SetBinContent( xbin,    12252.554693137587      );
  hist -> SetBinError( xbin,    31.952220615999209      );
   xbin = hist->FindBin(   92.500000000000000      );
  hist -> SetBinContent( xbin,    37101.418879277961      );
  hist -> SetBinError( xbin,    52.982388435348284      );
   xbin = hist->FindBin(   97.500000000000000      );
  hist -> SetBinContent( xbin,    2873.6467702026066      );
  hist -> SetBinError( xbin,    14.510266393417941      );
   xbin = hist->FindBin(   102.50000000000000      );
  hist -> SetBinContent( xbin,    776.12217012547080      );
  hist -> SetBinError( xbin,    7.2658194070539954      );
   xbin = hist->FindBin(   107.50000000000000      );
  hist -> SetBinContent( xbin,    352.21945809230033      );
  hist -> SetBinError( xbin,    4.8588445570520546      );
   xbin = hist->FindBin(   112.50000000000000      );
  hist -> SetBinContent( xbin,    197.61371212287577      );
  hist -> SetBinError( xbin,    3.6128664086900808      );
   xbin = hist->FindBin(   117.50000000000000      );
  hist -> SetBinContent( xbin,    126.29091803989868      );
  hist -> SetBinError( xbin,    2.8516262754457551      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  hist = new TH1F( "id13", "lepton FB asymmetry", 32,   40.00000,  200.00000);

  hist -> GetXaxis() -> SetTitle("lepton FB asymmetry");
  hist -> GetYaxis() -> SetTitle(" d#sigma/dlepton FB asymmetry [fb]");

  hist -> GetYaxis() -> SetTitleOffset(1.2);
  hist -> SetStats(false);
   xbin = hist->FindBin(   62.500000000000000      );
  hist -> SetBinContent( xbin,   -2.4009232625201733E-002 );
  hist -> SetBinError( xbin,    8.3620926953679073E-006 );
   xbin = hist->FindBin(   67.500000000000000      );
  hist -> SetBinContent( xbin,   -2.3379515152766154E-002 );
  hist -> SetBinError( xbin,    8.1427705721413712E-006 );
   xbin = hist->FindBin(   72.500000000000000      );
  hist -> SetBinContent( xbin,   -2.2644972077350028E-002 );
  hist -> SetBinError( xbin,    7.8869391017543143E-006 );
   xbin = hist->FindBin(   77.500000000000000      );
  hist -> SetBinContent( xbin,   -1.6788925594816109E-002 );
  hist -> SetBinError( xbin,    5.8473569010332955E-006 );
   xbin = hist->FindBin(   82.500000000000000      );
  hist -> SetBinContent( xbin,   -8.3706808909019201E-003 );
  hist -> SetBinError( xbin,    2.9153955324500320E-006 );
   xbin = hist->FindBin(   87.500000000000000      );
  hist -> SetBinContent( xbin,    1.1915090464690139E-003 );
  hist -> SetBinError( xbin,    4.1498656993663938E-007 );
   xbin = hist->FindBin(   92.500000000000000      );
  hist -> SetBinContent( xbin,    6.3903103371191266E-003 );
  hist -> SetBinError( xbin,    2.2256591131141533E-006 );
   xbin = hist->FindBin(   97.500000000000000      );
  hist -> SetBinContent( xbin,    1.3885815398081919E-002 );
  hist -> SetBinError( xbin,    4.8362426788953820E-006 );
   xbin = hist->FindBin(   102.50000000000000      );
  hist -> SetBinContent( xbin,    1.8587275484508916E-002 );
  hist -> SetBinError( xbin,    6.4736979720315835E-006 );
   xbin = hist->FindBin(   107.50000000000000      );
  hist -> SetBinContent( xbin,    2.1479063531350932E-002 );
  hist -> SetBinError( xbin,    7.4808688416939239E-006 );
   xbin = hist->FindBin(   112.50000000000000      );
  hist -> SetBinContent( xbin,    2.4257852295625517E-002 );
  hist -> SetBinError( xbin,    8.4486835815669646E-006 );
   xbin = hist->FindBin(   117.50000000000000      );
  hist -> SetBinContent( xbin,    2.5043427383134982E-002 );
  hist -> SetBinError( xbin,    8.7222888151649166E-006 );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 )  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
