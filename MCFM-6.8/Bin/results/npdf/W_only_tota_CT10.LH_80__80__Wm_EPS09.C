// Cross-section is:      1869506.5071150772 +/-          806.9160360196)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -53391.76495   -2.86%
//        GQB    |      -44712.21586   -2.39%
//        QG     |      -51211.45156   -2.74%
//        QBG    |      -44988.86534   -2.41%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      928102.36260   49.64%
//        QBQ    |     1144763.13850   61.23%

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
//Wm_EPS09                        [runstring]  
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
//CT10.LHpdf                      [LHAPDF group 1]  
//                   0            [LHAPDF set 1]  
//CT10.LHpdf                      [LHAPDF group 2]  
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
  mcfmhisto = new TFile("W_only_tota_CT10.LH_80__80__Wm_EPS09.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    3.6954661743947910E-002 );
  id1 -> SetBinError( xbin,    5.5145603136336097E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    16.075476282275858      );
  id1 -> SetBinError( xbin,    3.0617881806265781      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    271.81668217655505      );
  id1 -> SetBinError( xbin,    40.125823473104631      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2089.0495169798878      );
  id1 -> SetBinError( xbin,    142.30138073429757      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    8722.1471958332713      );
  id1 -> SetBinError( xbin,    406.86135008463759      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    29139.273475931459      );
  id1 -> SetBinError( xbin,    701.17305772629174      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    69028.712914960153      );
  id1 -> SetBinError( xbin,    1115.7165292944060      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    132393.34346972028      );
  id1 -> SetBinError( xbin,    1307.2025184166532      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    207121.06688538511      );
  id1 -> SetBinError( xbin,    1561.6603365299782      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    293505.07700369105      );
  id1 -> SetBinError( xbin,    1784.7328267161531      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    359121.30538337212      );
  id1 -> SetBinError( xbin,    1943.7095447362367      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    408447.20527179685      );
  id1 -> SetBinError( xbin,    2022.1467368655051      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    427979.99010748928      );
  id1 -> SetBinError( xbin,    2023.3879614460741      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    434913.43400211894      );
  id1 -> SetBinError( xbin,    2004.7483076668789      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    435708.45255407435      );
  id1 -> SetBinError( xbin,    1986.3104012124809      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    436167.44993258530      );
  id1 -> SetBinError( xbin,    1969.7789713103962      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    432846.87638332276      );
  id1 -> SetBinError( xbin,    1962.6986548318125      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    430269.17801348254      );
  id1 -> SetBinError( xbin,    1969.6464052642527      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    416536.31048528547      );
  id1 -> SetBinError( xbin,    1919.5306919000959      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    413518.81252201059      );
  id1 -> SetBinError( xbin,    1913.0329183358108      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    401860.34086515516      );
  id1 -> SetBinError( xbin,    1893.7049198612003      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    389348.00704301294      );
  id1 -> SetBinError( xbin,    1863.4368441592587      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    382444.90491623327      );
  id1 -> SetBinError( xbin,    1859.0741138455376      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    371303.65759386797      );
  id1 -> SetBinError( xbin,    1781.1170268599112      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    356216.37654808105      );
  id1 -> SetBinError( xbin,    1839.7986063423075      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    346861.55626435264      );
  id1 -> SetBinError( xbin,    1888.5980232669151      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    333356.57542631926      );
  id1 -> SetBinError( xbin,    1818.3756960894448      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    322730.63560104964      );
  id1 -> SetBinError( xbin,    1768.7285877268632      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    303785.54396875406      );
  id1 -> SetBinError( xbin,    1711.3453154317974      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    288521.63650372130      );
  id1 -> SetBinError( xbin,    1723.9299080522703      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    264498.82231096079      );
  id1 -> SetBinError( xbin,    1674.9436792880226      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    223768.20486112378      );
  id1 -> SetBinError( xbin,    1565.9658371127753      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    173233.98856313206      );
  id1 -> SetBinError( xbin,    1428.8674470298695      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    120096.66991006081      );
  id1 -> SetBinError( xbin,    1208.8642481660609      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    72552.005886926068      );
  id1 -> SetBinError( xbin,    1048.1242754961281      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    38536.484600681448      );
  id1 -> SetBinError( xbin,    758.78521328023760      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    15310.949080296064      );
  id1 -> SetBinError( xbin,    544.72961254078621      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    4884.9948520914259      );
  id1 -> SetBinError( xbin,    231.04514767748125      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1076.6279454716077      );
  id1 -> SetBinError( xbin,    77.668232730473349      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    141.31865912234653      );
  id1 -> SetBinError( xbin,    14.935815807775542      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    4.7716778053130815      );
  id1 -> SetBinError( xbin,    1.6193683271543617      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   -5.9182041844893733E-003 );
  id1 -> SetBinError( xbin,    1.4805693296596249E-002 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    847826.76351860282      );
  id2 -> SetBinError( xbin,    6899.4539959101612      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    803775.48882809724      );
  id2 -> SetBinError( xbin,    6457.5911879393534      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    768272.33037369244      );
  id2 -> SetBinError( xbin,    5814.8113732219053      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    739901.83638640807      );
  id2 -> SetBinError( xbin,    6502.8886639292041      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    701525.53369411442      );
  id2 -> SetBinError( xbin,    6344.7782573721142      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    664656.12680981704      );
  id2 -> SetBinError( xbin,    4824.7072649836082      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    635560.80934786878      );
  id2 -> SetBinError( xbin,    5978.6226110501302      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    600019.90223517211      );
  id2 -> SetBinError( xbin,    5792.8129660613058      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    547584.43455651740      );
  id2 -> SetBinError( xbin,    3133.3777241188945      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    519776.32372851158      );
  id2 -> SetBinError( xbin,    3478.6346302282250      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    491148.22218881943      );
  id2 -> SetBinError( xbin,    2964.4900180786240      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    452843.84661642928      );
  id2 -> SetBinError( xbin,    2641.2385675910041      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    421475.10904624959      );
  id2 -> SetBinError( xbin,    2932.3461036941649      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    386381.28177122562      );
  id2 -> SetBinError( xbin,    3076.0700588453969      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    354197.93752411380      );
  id2 -> SetBinError( xbin,    1947.9337247577566      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    320612.54739706736      );
  id2 -> SetBinError( xbin,    1809.6346958816114      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    295859.58861432085      );
  id2 -> SetBinError( xbin,    1800.3668005893608      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    264957.64111017220      );
  id2 -> SetBinError( xbin,    2000.7090803917613      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    231452.11861540322      );
  id2 -> SetBinError( xbin,    1309.0263287938292      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    205145.61605931001      );
  id2 -> SetBinError( xbin,    1180.2385919829678      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    180817.72798422808      );
  id2 -> SetBinError( xbin,    1109.2962589469328      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    159469.18117020864      );
  id2 -> SetBinError( xbin,    993.46171180197211      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    137525.92269520668      );
  id2 -> SetBinError( xbin,    853.47463010472507      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    121734.25425770742      );
  id2 -> SetBinError( xbin,    899.85392473758873      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    109485.61159591787      );
  id2 -> SetBinError( xbin,    2880.2468820708950      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    95795.940083458132      );
  id2 -> SetBinError( xbin,    848.42862159664128      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    83316.629922378372      );
  id2 -> SetBinError( xbin,    669.61694693409675      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    75641.255895955168      );
  id2 -> SetBinError( xbin,    594.46706745469271      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    70899.949223905904      );
  id2 -> SetBinError( xbin,    615.19104417384983      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    68652.527687440263      );
  id2 -> SetBinError( xbin,    619.21074293153254      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    67494.871654272123      );
  id2 -> SetBinError( xbin,    721.55544248636397      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    69689.672271959294      );
  id2 -> SetBinError( xbin,    597.26602939603140      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    74236.986730206918      );
  id2 -> SetBinError( xbin,    646.03322544165474      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    79303.784433051318      );
  id2 -> SetBinError( xbin,    643.09919084335127      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    89379.760255814792      );
  id2 -> SetBinError( xbin,    717.07979089142020      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    99528.458433398613      );
  id2 -> SetBinError( xbin,    735.85279424085593      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    112028.02670791508      );
  id2 -> SetBinError( xbin,    856.49782028687173      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    127974.24939231570      );
  id2 -> SetBinError( xbin,    1259.5415612399172      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    144113.70429415835      );
  id2 -> SetBinError( xbin,    955.72049678648000      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    163217.00057159341      );
  id2 -> SetBinError( xbin,    1203.5888396781893      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    180981.81464654196      );
  id2 -> SetBinError( xbin,    1127.6396901715930      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    207884.15983451135      );
  id2 -> SetBinError( xbin,    2338.3865856730863      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    225661.57130142293      );
  id2 -> SetBinError( xbin,    1547.7494982265509      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    251711.92521979671      );
  id2 -> SetBinError( xbin,    1595.4170635684261      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    273262.54525494279      );
  id2 -> SetBinError( xbin,    1892.4859807414189      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    303869.50162245176      );
  id2 -> SetBinError( xbin,    2047.4320163421160      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    325270.50764590089      );
  id2 -> SetBinError( xbin,    2551.1431731254556      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    351163.54639547691      );
  id2 -> SetBinError( xbin,    2311.8442404198527      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    374651.60870055575      );
  id2 -> SetBinError( xbin,    2702.4431077185923      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    405010.49009038333      );
  id2 -> SetBinError( xbin,    3143.6377882693278      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    428908.84426755842      );
  id2 -> SetBinError( xbin,    3010.4702761365388      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    453868.57404887065      );
  id2 -> SetBinError( xbin,    3111.7493643927287      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    494797.66916032549      );
  id2 -> SetBinError( xbin,    4912.6005580791552      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    511133.20051243226      );
  id2 -> SetBinError( xbin,    4319.8103645482379      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    540829.21612090711      );
  id2 -> SetBinError( xbin,    4265.4757213863504      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    560635.02803263080      );
  id2 -> SetBinError( xbin,    4358.8661284975205      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    588183.13902058604      );
  id2 -> SetBinError( xbin,    5238.4682041501374      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    617770.19535621849      );
  id2 -> SetBinError( xbin,    5874.1289261510910      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    663283.40275773348      );
  id2 -> SetBinError( xbin,    9639.7100909661876      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    657886.06278181402      );
  id2 -> SetBinError( xbin,    6272.4272825750359      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    288503.30852058803      );
  id3 -> SetBinError( xbin,    2381.2186749297239      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    314637.75583748054      );
  id3 -> SetBinError( xbin,    2238.1855589769302      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    332828.51773056475      );
  id3 -> SetBinError( xbin,    2186.1059111892600      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    347489.52721034666      );
  id3 -> SetBinError( xbin,    2169.1337280536750      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    359981.48822764796      );
  id3 -> SetBinError( xbin,    2048.3306722268835      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    363731.42991125904      );
  id3 -> SetBinError( xbin,    1962.2061914697426      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    369502.03232434526      );
  id3 -> SetBinError( xbin,    2002.5019953313463      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    372929.55700051563      );
  id3 -> SetBinError( xbin,    2021.4532941447810      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    375078.31261771906      );
  id3 -> SetBinError( xbin,    1927.0534467767652      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    375332.00413781655      );
  id3 -> SetBinError( xbin,    1874.9558582985751      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    372725.85816863360      );
  id3 -> SetBinError( xbin,    1855.5673221426175      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    369020.19204629899      );
  id3 -> SetBinError( xbin,    1781.2742750072248      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    366817.25135017658      );
  id3 -> SetBinError( xbin,    1771.3083363195601      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    360749.70081605104      );
  id3 -> SetBinError( xbin,    1753.6817376082051      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    353488.89663639502      );
  id3 -> SetBinError( xbin,    1737.2580149366979      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    348073.77804326179      );
  id3 -> SetBinError( xbin,    1733.3598230108753      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    340335.61219105235      );
  id3 -> SetBinError( xbin,    1821.5447670756587      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    331092.65822448872      );
  id3 -> SetBinError( xbin,    1765.4940200116871      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    321820.40934973425      );
  id3 -> SetBinError( xbin,    1867.5631224260508      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    309039.74916576693      );
  id3 -> SetBinError( xbin,    1807.5658875772535      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    307384.90992205398      );
  id3 -> SetBinError( xbin,    8622.6622774015104      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    278692.70281386655      );
  id3 -> SetBinError( xbin,    8640.8153460065860      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    276207.67091953941      );
  id3 -> SetBinError( xbin,    1683.7680230438230      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    261744.27341950894      );
  id3 -> SetBinError( xbin,    1649.6560016421547      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    252605.86119714144      );
  id3 -> SetBinError( xbin,    1662.0036732330441      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    236298.45523044060      );
  id3 -> SetBinError( xbin,    1666.7097895769357      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    224492.50002023357      );
  id3 -> SetBinError( xbin,    2013.3519579425624      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    199059.02080177437      );
  id3 -> SetBinError( xbin,    2075.8291609922785      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    179888.44891543288      );
  id3 -> SetBinError( xbin,    1800.9583874853759      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    158777.79864107646      );
  id3 -> SetBinError( xbin,    1842.2354060154973      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    99775.386287065980      );
  id4 -> SetBinError( xbin,    2914.1183168948246      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    279910.75012196408      );
  id4 -> SetBinError( xbin,    3934.4315581424453      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    300905.33753277245      );
  id4 -> SetBinError( xbin,    3890.9711227939024      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    314541.37346974126      );
  id4 -> SetBinError( xbin,    3698.1505936012327      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    326609.42949890788      );
  id4 -> SetBinError( xbin,    3441.8132355703442      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    330801.97401869454      );
  id4 -> SetBinError( xbin,    3372.1839433787600      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    340193.60957306752      );
  id4 -> SetBinError( xbin,    3517.9792128598051      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    345326.39588099491      );
  id4 -> SetBinError( xbin,    3449.7788947901981      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    346082.39912960108      );
  id4 -> SetBinError( xbin,    9510.6461677685747      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    365939.60702029022      );
  id4 -> SetBinError( xbin,    9603.5096672229847      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    363418.53200797236      );
  id4 -> SetBinError( xbin,    4375.7055787857707      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    361548.31533550768      );
  id4 -> SetBinError( xbin,    4360.9864083879447      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    364604.56634365348      );
  id4 -> SetBinError( xbin,    3472.2320078563293      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    368048.84983481490      );
  id4 -> SetBinError( xbin,    3076.3730536382513      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    372574.80700185441      );
  id4 -> SetBinError( xbin,    3166.1309396422002      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    377258.96328144433      );
  id4 -> SetBinError( xbin,    3136.4233720820553      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    373650.26114616968      );
  id4 -> SetBinError( xbin,    2942.6347023397038      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    373277.18936767202      );
  id4 -> SetBinError( xbin,    2933.4152085616433      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    376321.43899762677      );
  id4 -> SetBinError( xbin,    2999.2846319008677      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    378411.77164139133      );
  id4 -> SetBinError( xbin,    3484.3843188185051      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    375859.52086633834      );
  id4 -> SetBinError( xbin,    4060.5134121000056      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    370439.51506201929      );
  id4 -> SetBinError( xbin,    3633.1487515612821      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    369821.29313585721      );
  id4 -> SetBinError( xbin,    2869.3485552893439      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    370858.41983161494      );
  id4 -> SetBinError( xbin,    3023.4939017632532      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    364165.41992206161      );
  id4 -> SetBinError( xbin,    2974.9020019108830      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    369322.31065683934      );
  id4 -> SetBinError( xbin,    2799.4372247164724      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    364484.71256837231      );
  id4 -> SetBinError( xbin,    2874.9922025614205      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    357424.13244705275      );
  id4 -> SetBinError( xbin,    2941.4825895827626      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    361718.46922211465      );
  id4 -> SetBinError( xbin,    2884.4187092462912      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    355001.15948844241      );
  id4 -> SetBinError( xbin,    3316.0614732546592      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    353577.74572371203      );
  id4 -> SetBinError( xbin,    3439.5127456946193      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    346257.80279536702      );
  id4 -> SetBinError( xbin,    2919.3296211558381      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    344215.74775223964      );
  id4 -> SetBinError( xbin,    2796.9539015177188      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    343919.36274306220      );
  id4 -> SetBinError( xbin,    2932.9569964324678      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    331945.48213148222      );
  id4 -> SetBinError( xbin,    2903.4886671137292      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    330874.62481738679      );
  id4 -> SetBinError( xbin,    2827.4100027156642      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    330869.35655882215      );
  id4 -> SetBinError( xbin,    2804.7016678334571      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    322852.50086043723      );
  id4 -> SetBinError( xbin,    2954.2687908662056      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    317947.72652183461      );
  id4 -> SetBinError( xbin,    2831.5907211538520      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    307532.44115230482      );
  id4 -> SetBinError( xbin,    2666.3502901946958      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    306710.14418344910      );
  id4 -> SetBinError( xbin,    2710.6680672415041      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    300070.95918710239      );
  id4 -> SetBinError( xbin,    2693.9313526517153      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    298243.84054963681      );
  id4 -> SetBinError( xbin,    2722.0453887981016      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    281651.91588291398      );
  id4 -> SetBinError( xbin,    2851.9684039155627      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    282560.49770418805      );
  id4 -> SetBinError( xbin,    2881.1458925022894      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    279142.10364155011      );
  id4 -> SetBinError( xbin,    2730.6046318153763      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    268738.86941941694      );
  id4 -> SetBinError( xbin,    2727.5261508828316      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    262964.33691156231      );
  id4 -> SetBinError( xbin,    2694.9341177392353      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    257853.41676755052      );
  id4 -> SetBinError( xbin,    2652.9170176865655      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    253715.52104121220      );
  id4 -> SetBinError( xbin,    2662.1271355648660      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    247434.50692842031      );
  id4 -> SetBinError( xbin,    5940.7607023365345      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    234360.47793365089      );
  id4 -> SetBinError( xbin,    6018.2751501932698      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    230897.63565527948      );
  id4 -> SetBinError( xbin,    2902.9774132484863      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    220375.68000563933      );
  id4 -> SetBinError( xbin,    3311.9267807921306      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    217717.58622677845      );
  id4 -> SetBinError( xbin,    3495.6245411244872      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    204366.01174662885      );
  id4 -> SetBinError( xbin,    3116.3838578343789      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    28153.915128826229      );
  id5 -> SetBinError( xbin,    325.28769189179093      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    60572.731004242392      );
  id5 -> SetBinError( xbin,    416.70356902424845      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    70044.775087332207      );
  id5 -> SetBinError( xbin,    462.05373640060611      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    78029.254752694673      );
  id5 -> SetBinError( xbin,    534.74239191339564      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    90893.422238707411      );
  id5 -> SetBinError( xbin,    588.31638230272699      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    102777.88669144128      );
  id5 -> SetBinError( xbin,    661.51631420399917      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    122290.43764690538      );
  id5 -> SetBinError( xbin,    734.80652976906742      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    122040.65506565872      );
  id5 -> SetBinError( xbin,    889.37608856749307      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    97417.646877453531      );
  id5 -> SetBinError( xbin,    718.01669179414921      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    49828.310555206408      );
  id5 -> SetBinError( xbin,    259.39120127284707      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    26653.044944581605      );
  id5 -> SetBinError( xbin,    185.20066045578841      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17375.420565456647      );
  id5 -> SetBinError( xbin,    117.00350159449404      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12194.374677645903      );
  id5 -> SetBinError( xbin,    100.46354815479428      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9251.5482124019527      );
  id5 -> SetBinError( xbin,    68.005869267092294      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7078.0472401171537      );
  id5 -> SetBinError( xbin,    57.898701978858028      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5649.8657264100048      );
  id5 -> SetBinError( xbin,    46.145894708624539      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4599.8600085275730      );
  id5 -> SetBinError( xbin,    39.601885659895011      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3759.1730347876860      );
  id5 -> SetBinError( xbin,    40.163221840556510      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3224.3267854421160      );
  id5 -> SetBinError( xbin,    37.789554712635223      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2738.6536924097682      );
  id5 -> SetBinError( xbin,    31.369046906287149      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2287.9576195544319      );
  id5 -> SetBinError( xbin,    28.243474028902746      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1931.8947118341487      );
  id5 -> SetBinError( xbin,    26.085743604341872      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1723.6670954197227      );
  id5 -> SetBinError( xbin,    29.541127729242103      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1495.3270272325217      );
  id5 -> SetBinError( xbin,    28.392258495586127      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1267.4136656250719      );
  id5 -> SetBinError( xbin,    22.022705216184267      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1160.2687096428729      );
  id5 -> SetBinError( xbin,    17.663482741065145      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    996.61236908450417      );
  id5 -> SetBinError( xbin,    19.591425339409941      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    893.94817400313059      );
  id5 -> SetBinError( xbin,    19.890293707649661      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    765.56920129578339      );
  id5 -> SetBinError( xbin,    16.309154558022207      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    725.61550922752826      );
  id5 -> SetBinError( xbin,    16.201916596207891      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    652.40300154196814      );
  id5 -> SetBinError( xbin,    28.558245252954713      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    518.35233818828465      );
  id5 -> SetBinError( xbin,    27.888722528542299      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    503.78562877936866      );
  id5 -> SetBinError( xbin,    12.502091604277556      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    461.62327595799354      );
  id5 -> SetBinError( xbin,    12.808792421307309      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    412.71189895630232      );
  id5 -> SetBinError( xbin,    13.240301733544815      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    354.59006001777249      );
  id5 -> SetBinError( xbin,    13.520720018774114      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    331.36882023326916      );
  id5 -> SetBinError( xbin,    15.177279094318918      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    311.63488231420166      );
  id5 -> SetBinError( xbin,    13.428465970236944      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2220.4454166852570      );
  id6 -> SetBinError( xbin,    42.625404363138756      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    7021.5217683352212      );
  id6 -> SetBinError( xbin,    73.483773766372337      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13729.866637834619      );
  id6 -> SetBinError( xbin,    102.54956705355318      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    23786.639715574580      );
  id6 -> SetBinError( xbin,    130.52358006187416      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    38754.223102994743      );
  id6 -> SetBinError( xbin,    159.44391721474400      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    62360.350522341745      );
  id6 -> SetBinError( xbin,    193.36583007111670      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    107834.02200475079      );
  id6 -> SetBinError( xbin,    258.44392899054606      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    175578.15618924610      );
  id6 -> SetBinError( xbin,    358.55158310882786      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    76964.131369095805      );
  id6 -> SetBinError( xbin,    287.34539681664404      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    29325.631798326423      );
  id6 -> SetBinError( xbin,    211.57069874855566      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    12042.436096237087      );
  id6 -> SetBinError( xbin,    154.56425103358237      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4909.4862459287033      );
  id6 -> SetBinError( xbin,    112.04515092073562      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11053.890370342266      );
  id7 -> SetBinError( xbin,    126.09904878838319      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    14679.870342625984      );
  id7 -> SetBinError( xbin,    143.70368471155001      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19363.981432616703      );
  id7 -> SetBinError( xbin,    166.60304060640362      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    23866.928834641803      );
  id7 -> SetBinError( xbin,    186.37003257111908      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28679.703151804701      );
  id7 -> SetBinError( xbin,    202.29431893562082      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    34160.353276953087      );
  id7 -> SetBinError( xbin,    222.10160760586146      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    39288.395922083677      );
  id7 -> SetBinError( xbin,    241.56310999870055      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    44211.440799901291      );
  id7 -> SetBinError( xbin,    261.81004880022368      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    48244.406546533217      );
  id7 -> SetBinError( xbin,    279.11846851987889      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    51698.455840352071      );
  id7 -> SetBinError( xbin,    291.82661032686013      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    55188.644341385552      );
  id7 -> SetBinError( xbin,    308.03225879462309      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    57625.737745114755      );
  id7 -> SetBinError( xbin,    319.21298998726388      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    58963.533726452421      );
  id7 -> SetBinError( xbin,    321.23700198756609      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    59332.941957900061      );
  id7 -> SetBinError( xbin,    325.82953150992739      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    59638.670394874818      );
  id7 -> SetBinError( xbin,    332.04304979324041      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    58069.780729623839      );
  id7 -> SetBinError( xbin,    326.92394259928835      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    57541.128884331883      );
  id7 -> SetBinError( xbin,    324.44266153463451      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    53927.901372262771      );
  id7 -> SetBinError( xbin,    312.94868784581865      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    50770.184338442494      );
  id7 -> SetBinError( xbin,    302.86438059184547      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    47362.235125475367      );
  id7 -> SetBinError( xbin,    290.30748343340247      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    43313.360809997896      );
  id7 -> SetBinError( xbin,    273.93266577812528      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    39402.097687029920      );
  id7 -> SetBinError( xbin,    261.92467470304399      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    34497.428849578137      );
  id7 -> SetBinError( xbin,    237.55108194583005      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    29894.803408103005      );
  id7 -> SetBinError( xbin,    224.81292518093093      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    25274.201042634271      );
  id7 -> SetBinError( xbin,    199.50940307792669      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    20986.597312465055      );
  id7 -> SetBinError( xbin,    181.65693860525826      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17249.853539449738      );
  id7 -> SetBinError( xbin,    166.15222054356136      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    12920.609123524187      );
  id7 -> SetBinError( xbin,    142.33536056388073      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    9831.1684364143803      );
  id7 -> SetBinError( xbin,    128.38366924117312      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7398.2545951472493      );
  id7 -> SetBinError( xbin,    112.34908122248585      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5929.1371722726790      );
  id8 -> SetBinError( xbin,    34.519115512715338      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10666.081877266688      );
  id8 -> SetBinError( xbin,    45.851309371704147      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9362.5409891235777      );
  id8 -> SetBinError( xbin,    42.273616251064411      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    8124.0377775850902      );
  id8 -> SetBinError( xbin,    38.909407038592654      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7184.1678080417250      );
  id8 -> SetBinError( xbin,    36.286369185383023      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6461.1052433980485      );
  id8 -> SetBinError( xbin,    34.027804381045684      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5630.0262180683967      );
  id8 -> SetBinError( xbin,    31.609615952653751      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    5068.2454411936906      );
  id8 -> SetBinError( xbin,    29.889695501294110      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4497.1382485074955      );
  id8 -> SetBinError( xbin,    27.496744239089129      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    4046.8822108848176      );
  id8 -> SetBinError( xbin,    25.896514752879835      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3656.4390992472854      );
  id8 -> SetBinError( xbin,    24.316323407601928      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3257.2854445802241      );
  id8 -> SetBinError( xbin,    22.738248022286086      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2961.4441211569901      );
  id8 -> SetBinError( xbin,    21.728929145045328      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2693.3827995493011      );
  id8 -> SetBinError( xbin,    20.518739267182390      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2462.9964059090776      );
  id8 -> SetBinError( xbin,    19.477774728913069      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2250.3004390458259      );
  id8 -> SetBinError( xbin,    18.701762873649237      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    2013.0420504890819      );
  id8 -> SetBinError( xbin,    17.702145497987235      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1843.5084009283401      );
  id8 -> SetBinError( xbin,    16.531293995183606      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1718.8551984553408      );
  id8 -> SetBinError( xbin,    15.870944625721526      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1589.8001282007835      );
  id8 -> SetBinError( xbin,    15.354351157109489      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1435.2488906866270      );
  id8 -> SetBinError( xbin,    14.391846624503236      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1319.1732655011151      );
  id8 -> SetBinError( xbin,    13.550933773258720      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1222.5160584884095      );
  id8 -> SetBinError( xbin,    13.311927501031782      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1138.1869134475344      );
  id8 -> SetBinError( xbin,    12.717456766343162      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1037.0638967441753      );
  id8 -> SetBinError( xbin,    12.025285949885324      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    940.85647413361096      );
  id8 -> SetBinError( xbin,    11.391765588579757      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    863.10339923148479      );
  id8 -> SetBinError( xbin,    10.751017742034723      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    828.16230566777529      );
  id8 -> SetBinError( xbin,    10.489507102470498      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
