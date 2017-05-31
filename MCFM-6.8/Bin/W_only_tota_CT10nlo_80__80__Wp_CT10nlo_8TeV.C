// Cross-section is:      4476847.9745410010 +/-         1675.5988858537)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |     -157993.95749   -3.53%
//        GQB    |      -98964.44812   -2.21%
//        QG     |     -191489.37212   -4.28%
//        QBG    |     -101818.86566   -2.27%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     2699686.30238   60.30%
//        QBQ    |     2336540.28695   52.19%

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
//Wp_CT10nlo_8TeV                 [runstring]  
//           8160.0000            [sqrts]  
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
//           8160.0000            [m34max]  
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
//              0.0017            [cutoff]  
//              0.1000            [aii]  
//              0.1000            [aif]  
//              0.1000            [afi]  
//              1.0000            [aff]  
//              1.0000            [bfi]  
//              1.0000            [bff]  


  {
  TFile *mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wp_CT10nlo_8TeV.root", "recreate");
  mcfmhisto -> cd();
  TObjArray *histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *id1 = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
  int xbin = id1->FindBin(  -5.0999999999999996      );
  id1 -> SetBinContent( xbin,    1.3193856905094532E-003 );
  id1 -> SetBinError( xbin,    1.6474970167488462E-003 );
   xbin = id1->FindBin(  -4.9000000000000004      );
  id1 -> SetBinContent( xbin,   0.56793111391097806      );
  id1 -> SetBinError( xbin,    1.1565736051620077      );
   xbin = id1->FindBin(  -4.7000000000000002      );
  id1 -> SetBinContent( xbin,    40.481578738582812      );
  id1 -> SetBinError( xbin,    17.108729652555834      );
   xbin = id1->FindBin(  -4.5000000000000000      );
  id1 -> SetBinContent( xbin,    1378.2819191742728      );
  id1 -> SetBinError( xbin,    94.504607213431996      );
   xbin = id1->FindBin(  -4.2999999999999998      );
  id1 -> SetBinContent( xbin,    13112.577726522284      );
  id1 -> SetBinError( xbin,    532.86733439068735      );
   xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    47367.243028893667      );
  id1 -> SetBinError( xbin,    1401.8914565030948      );
   xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    106464.00658399142      );
  id1 -> SetBinError( xbin,    1997.1529638515356      );
   xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    185544.23249759839      );
  id1 -> SetBinError( xbin,    2548.7629381739912      );
   xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    261321.55974887684      );
  id1 -> SetBinError( xbin,    2824.2856001942168      );
   xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    329044.61521984532      );
  id1 -> SetBinError( xbin,    3095.2825237580478      );
   xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    397198.12439432956      );
  id1 -> SetBinError( xbin,    3490.5475338639631      );
   xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    448353.64475003968      );
  id1 -> SetBinError( xbin,    3525.7446693589441      );
   xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    484343.87560454966      );
  id1 -> SetBinError( xbin,    3526.5754308030919      );
   xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    520217.82216394786      );
  id1 -> SetBinError( xbin,    4156.2487450037661      );
   xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    545965.45849470724      );
  id1 -> SetBinError( xbin,    3697.7195363710648      );
   xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    563756.84391512629      );
  id1 -> SetBinError( xbin,    3591.3286445520912      );
   xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    582391.70537540852      );
  id1 -> SetBinError( xbin,    3590.7308920050186      );
   xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    594832.55368899286      );
  id1 -> SetBinError( xbin,    4228.8561594527055      );
   xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    607531.18491183920      );
  id1 -> SetBinError( xbin,    4246.8423309504005      );
   xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    617202.75798405462      );
  id1 -> SetBinError( xbin,    3658.8433916432150      );
   xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    627304.73620127549      );
  id1 -> SetBinError( xbin,    3634.3679343926651      );
   xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    634167.87789082655      );
  id1 -> SetBinError( xbin,    3688.8315202364420      );
   xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    644832.84278727020      );
  id1 -> SetBinError( xbin,    3728.1973023528417      );
   xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    659341.81919884495      );
  id1 -> SetBinError( xbin,    3751.0341963412402      );
   xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    649696.96750349517      );
  id1 -> SetBinError( xbin,    3773.3103889994022      );
   xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    667716.82405038353      );
  id1 -> SetBinError( xbin,    3828.0907299333130      );
   xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    660087.03122535406      );
  id1 -> SetBinError( xbin,    3787.8255565253048      );
   xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    659918.12726097833      );
  id1 -> SetBinError( xbin,    3803.3755000439724      );
   xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    676611.12394796568      );
  id1 -> SetBinError( xbin,    3792.9253152101824      );
   xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    671688.62450942583      );
  id1 -> SetBinError( xbin,    3820.3045355967456      );
   xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    681196.88638840104      );
  id1 -> SetBinError( xbin,    3823.5860816685840      );
   xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    676531.63144251378      );
  id1 -> SetBinError( xbin,    3822.8069081934568      );
   xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    681866.98958449531      );
  id1 -> SetBinError( xbin,    3881.2940550363201      );
   xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    689709.98014069314      );
  id1 -> SetBinError( xbin,    3901.4075811650514      );
   xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    690458.78840289044      );
  id1 -> SetBinError( xbin,    3881.3912229045877      );
   xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    686876.74195742304      );
  id1 -> SetBinError( xbin,    3894.0888257686611      );
   xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    685468.62426952424      );
  id1 -> SetBinError( xbin,    3978.5575860045728      );
   xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    681486.10260283318      );
  id1 -> SetBinError( xbin,    3999.0737000648578      );
   xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    680242.06982340058      );
  id1 -> SetBinError( xbin,    4198.7291600474064      );
   xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    653853.83707468957      );
  id1 -> SetBinError( xbin,    4029.6340791451507      );
   xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    626146.07345444395      );
  id1 -> SetBinError( xbin,    4057.4793144120940      );
   xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    579376.83717765997      );
  id1 -> SetBinError( xbin,    4008.4257412311663      );
   xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    496447.63419164933      );
  id1 -> SetBinError( xbin,    3770.7274328199583      );
   xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    413170.38030830101      );
  id1 -> SetBinError( xbin,    3510.0995825784971      );
   xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    304864.01332423015      );
  id1 -> SetBinError( xbin,    3053.1275342332719      );
   xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    187458.17230720280      );
  id1 -> SetBinError( xbin,    2965.8175140618000      );
   xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    85001.317017174253      );
  id1 -> SetBinError( xbin,    2194.4570783174850      );
   xbin = id1->FindBin(   4.3000000000000007      );
  id1 -> SetBinContent( xbin,    22843.704779246396      );
  id1 -> SetBinError( xbin,    872.35708656399709      );
   xbin = id1->FindBin(   4.5000000000000000      );
  id1 -> SetBinContent( xbin,    2215.3073666319415      );
  id1 -> SetBinError( xbin,    189.29290206714489      );
   xbin = id1->FindBin(   4.7000000000000011      );
  id1 -> SetBinContent( xbin,    42.977975385443017      );
  id1 -> SetBinError( xbin,    20.924765669391437      );
   xbin = id1->FindBin(   4.9000000000000004      );
  id1 -> SetBinContent( xbin,    6.5092795352618795      );
  id1 -> SetBinError( xbin,    3.1452724384309709      );
   xbin = id1->FindBin(   5.1000000000000014      );
  id1 -> SetBinContent( xbin,    3.4217594543321534E-004 );
  id1 -> SetBinError( xbin,    2.3875837495867849E-004 );
  histos -> Add(id1); 
 
 

  mcfmhisto -> cd();
  TH1F *id2 = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1503099.9639240592      );
  id2 -> SetBinError( xbin,    15729.777829292636      );
   xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    1455979.7470826118      );
  id2 -> SetBinError( xbin,    15276.078837409346      );
   xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1366666.9139194966      );
  id2 -> SetBinError( xbin,    13446.609288481222      );
   xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    1306744.6151602957      );
  id2 -> SetBinError( xbin,    11551.644798696245      );
   xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    1220805.3948647908      );
  id2 -> SetBinError( xbin,    9840.1691151588238      );
   xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    1158075.4173820235      );
  id2 -> SetBinError( xbin,    9847.1106951055863      );
   xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    1094486.4682682168      );
  id2 -> SetBinError( xbin,    9214.5043774658807      );
   xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    1031915.6804036500      );
  id2 -> SetBinError( xbin,    8480.1970130594782      );
   xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    953269.09549774940      );
  id2 -> SetBinError( xbin,    7007.5655182172522      );
   xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    885194.46668582002      );
  id2 -> SetBinError( xbin,    6475.4093198875753      );
   xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    831889.16853807459      );
  id2 -> SetBinError( xbin,    6361.0005371232255      );
   xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    764337.21006265562      );
  id2 -> SetBinError( xbin,    6267.2270264189856      );
   xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    704296.99621118512      );
  id2 -> SetBinError( xbin,    4909.1791080004386      );
   xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    643980.62858458865      );
  id2 -> SetBinError( xbin,    5378.2745621819140      );
   xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    595126.87950956530      );
  id2 -> SetBinError( xbin,    4630.4157265497643      );
   xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    534848.47937399475      );
  id2 -> SetBinError( xbin,    4207.8927579297224      );
   xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    491643.36625274224      );
  id2 -> SetBinError( xbin,    6731.6823079919186      );
   xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    437165.28969743889      );
  id2 -> SetBinError( xbin,    3490.4039604205700      );
   xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    392358.55098399625      );
  id2 -> SetBinError( xbin,    3990.7542997715923      );
   xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    349286.77282264380      );
  id2 -> SetBinError( xbin,    2711.8455157185258      );
   xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    308630.69105953741      );
  id2 -> SetBinError( xbin,    2607.9221479064695      );
   xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    272757.35743000777      );
  id2 -> SetBinError( xbin,    2396.2393277773158      );
   xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    237244.86579522505      );
  id2 -> SetBinError( xbin,    2044.3868152834186      );
   xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    215062.60333145305      );
  id2 -> SetBinError( xbin,    2257.7592348115068      );
   xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    181199.97819996273      );
  id2 -> SetBinError( xbin,    1837.2823226760677      );
   xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    164269.98890279472      );
  id2 -> SetBinError( xbin,    1632.0285468704733      );
   xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    148975.45732903629      );
  id2 -> SetBinError( xbin,    1619.9980546067993      );
   xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    136559.86572707570      );
  id2 -> SetBinError( xbin,    2190.0792630478186      );
   xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    128947.61737228365      );
  id2 -> SetBinError( xbin,    1317.1474776437617      );
   xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    126614.04256706483      );
  id2 -> SetBinError( xbin,    1417.8724621172428      );
   xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    126187.68664744725      );
  id2 -> SetBinError( xbin,    1393.3115304225198      );
   xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    128738.68162548344      );
  id2 -> SetBinError( xbin,    1299.9771467433409      );
   xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    137099.24222310859      );
  id2 -> SetBinError( xbin,    1309.6879136835839      );
   xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    152276.12865795655      );
  id2 -> SetBinError( xbin,    1770.2875515230928      );
   xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    171936.02715884789      );
  id2 -> SetBinError( xbin,    2012.6194544273908      );
   xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    190138.25780074298      );
  id2 -> SetBinError( xbin,    1925.8142562134467      );
   xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    215361.38379811100      );
  id2 -> SetBinError( xbin,    1896.2080818073341      );
   xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    249621.81538921353      );
  id2 -> SetBinError( xbin,    2493.1842551623104      );
   xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    281372.17909876397      );
  id2 -> SetBinError( xbin,    2363.8178375835514      );
   xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    320247.96317065897      );
  id2 -> SetBinError( xbin,    2761.7378437725220      );
   xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    361666.06973839190      );
  id2 -> SetBinError( xbin,    2700.6201140630660      );
   xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    408356.66182433598      );
  id2 -> SetBinError( xbin,    3089.1109469056537      );
   xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    463288.66606373276      );
  id2 -> SetBinError( xbin,    3734.5903358476203      );
   xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    524446.97000308067      );
  id2 -> SetBinError( xbin,    6370.9760107758048      );
   xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    582726.72486172919      );
  id2 -> SetBinError( xbin,    4450.8208933872074      );
   xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    641021.93081179261      );
  id2 -> SetBinError( xbin,    4646.6820002478289      );
   xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    715292.53675618954      );
  id2 -> SetBinError( xbin,    6054.3702313641206      );
   xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    764941.01887238072      );
  id2 -> SetBinError( xbin,    5290.1429569465472      );
   xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    853757.11685375893      );
  id2 -> SetBinError( xbin,    7740.4410295594180      );
   xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    920676.57167803776      );
  id2 -> SetBinError( xbin,    6767.6898541520632      );
   xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    1000549.2046284939      );
  id2 -> SetBinError( xbin,    8345.6767488790720      );
   xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    1077293.4701727738      );
  id2 -> SetBinError( xbin,    7469.2154319862648      );
   xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    1153162.9310913011      );
  id2 -> SetBinError( xbin,    10086.934680365233      );
   xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    1207126.5711323142      );
  id2 -> SetBinError( xbin,    8359.5042311625493      );
   xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    1308835.6298841815      );
  id2 -> SetBinError( xbin,    10514.780481540554      );
   xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    1391766.7664615430      );
  id2 -> SetBinError( xbin,    11396.459298589742      );
   xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    1484175.3054018461      );
  id2 -> SetBinError( xbin,    12240.584971845345      );
   xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    1658986.3853269694      );
  id2 -> SetBinError( xbin,    86293.037401439273      );
   xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    1637534.6005500548      );
  id2 -> SetBinError( xbin,    14526.621500758358      );
   xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    1706046.0034500004      );
  id2 -> SetBinError( xbin,    15375.572487273732      );
  histos -> Add(id2); 
 
 

  mcfmhisto -> cd();
  TH1F *id3 = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   xbin = id3->FindBin(  -5.7000000000000002      );
  id3 -> SetBinContent( xbin,    2.4561314589930227E-003 );
  id3 -> SetBinError( xbin,    3.4559395332393341E-003 );
   xbin = id3->FindBin(  -5.5000000000000000      );
  id3 -> SetBinContent( xbin,    1.5254134019927990      );
  id3 -> SetBinError( xbin,   0.37102311897421125      );
   xbin = id3->FindBin(  -5.2999999999999998      );
  id3 -> SetBinContent( xbin,    31.470787684139040      );
  id3 -> SetBinError( xbin,    4.1222989623168438      );
   xbin = id3->FindBin(  -5.0999999999999996      );
  id3 -> SetBinContent( xbin,    261.00305281729300      );
  id3 -> SetBinError( xbin,    20.651586308074091      );
   xbin = id3->FindBin(  -4.9000000000000004      );
  id3 -> SetBinContent( xbin,    1097.8665034906830      );
  id3 -> SetBinError( xbin,    71.347708108129382      );
   xbin = id3->FindBin(  -4.7000000000000002      );
  id3 -> SetBinContent( xbin,    3656.9367858181413      );
  id3 -> SetBinError( xbin,    125.42374347817452      );
   xbin = id3->FindBin(  -4.5000000000000000      );
  id3 -> SetBinContent( xbin,    9066.9485156832252      );
  id3 -> SetBinError( xbin,    242.20141060002965      );
   xbin = id3->FindBin(  -4.2999999999999998      );
  id3 -> SetBinContent( xbin,    20885.136242476721      );
  id3 -> SetBinError( xbin,    678.65097609916734      );
   xbin = id3->FindBin(  -4.0999999999999996      );
  id3 -> SetBinContent( xbin,    39160.772945099110      );
  id3 -> SetBinError( xbin,    848.33903848570174      );
   xbin = id3->FindBin(  -3.8999999999999999      );
  id3 -> SetBinContent( xbin,    72250.129644937420      );
  id3 -> SetBinError( xbin,    1078.0140105278469      );
   xbin = id3->FindBin(  -3.6999999999999997      );
  id3 -> SetBinContent( xbin,    118909.31823099189      );
  id3 -> SetBinError( xbin,    1554.2120680090111      );
   xbin = id3->FindBin(  -3.5000000000000000      );
  id3 -> SetBinContent( xbin,    173814.92360929144      );
  id3 -> SetBinError( xbin,    1963.2175782265720      );
   xbin = id3->FindBin(  -3.2999999999999998      );
  id3 -> SetBinContent( xbin,    244873.43529101615      );
  id3 -> SetBinError( xbin,    2485.9596531743455      );
   xbin = id3->FindBin(  -3.0999999999999996      );
  id3 -> SetBinContent( xbin,    318927.56936587545      );
  id3 -> SetBinError( xbin,    3054.2923978952936      );
   xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    399215.68487168284      );
  id3 -> SetBinError( xbin,    3576.1826392550215      );
   xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    462079.75858903257      );
  id3 -> SetBinError( xbin,    3783.5348767421210      );
   xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    514027.73230047035      );
  id3 -> SetBinError( xbin,    3970.2484233816608      );
   xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    555110.63552911568      );
  id3 -> SetBinError( xbin,    4103.5323139973943      );
   xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    589324.72251896141      );
  id3 -> SetBinError( xbin,    4195.3074532722012      );
   xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    627201.67179892294      );
  id3 -> SetBinError( xbin,    4446.3281107432049      );
   xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    645270.08861794684      );
  id3 -> SetBinError( xbin,    4456.7063114850653      );
   xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    652226.84118431562      );
  id3 -> SetBinError( xbin,    4690.7296808753754      );
   xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    665459.48939277255      );
  id3 -> SetBinError( xbin,    4501.5038663466667      );
   xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    669543.70520711341      );
  id3 -> SetBinError( xbin,    4715.5850945221828      );
   xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    681353.35655791720      );
  id3 -> SetBinError( xbin,    4550.5785058232404      );
   xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    686787.40591622854      );
  id3 -> SetBinError( xbin,    4332.9934548262545      );
   xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    689120.83503524133      );
  id3 -> SetBinError( xbin,    4311.8914842357926      );
   xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    689303.80353090819      );
  id3 -> SetBinError( xbin,    4501.1328605501485      );
   xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    703617.08371971990      );
  id3 -> SetBinError( xbin,    4532.3059098126578      );
   xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    698583.89848629385      );
  id3 -> SetBinError( xbin,    4366.7922589355312      );
   xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    710456.25170158176      );
  id3 -> SetBinError( xbin,    4375.6114815797509      );
   xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    718088.34776037838      );
  id3 -> SetBinError( xbin,    4461.1836573135251      );
   xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    725965.94319827319      );
  id3 -> SetBinError( xbin,    4651.5982634035936      );
   xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    729093.38021730934      );
  id3 -> SetBinError( xbin,    4568.4392473576081      );
   xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    738810.19496550597      );
  id3 -> SetBinError( xbin,    4578.4794936095886      );
   xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    743436.76572500053      );
  id3 -> SetBinError( xbin,    4651.9229064938736      );
   xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    760139.78873208503      );
  id3 -> SetBinError( xbin,    4696.3437562427134      );
   xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    753817.25683846173      );
  id3 -> SetBinError( xbin,    4650.5330458540229      );
   xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    753910.51061965292      );
  id3 -> SetBinError( xbin,    4705.7567911138885      );
   xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    742970.70323548745      );
  id3 -> SetBinError( xbin,    4851.1959166916495      );
   xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    729541.08717351034      );
  id3 -> SetBinError( xbin,    5332.5674859208430      );
   xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    678821.89929578360      );
  id3 -> SetBinError( xbin,    5061.5580719826994      );
   xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    634290.31009335583      );
  id3 -> SetBinError( xbin,    4415.8371538940073      );
   xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    554928.45143307874      );
  id3 -> SetBinError( xbin,    4134.3098852303310      );
   xbin = id3->FindBin(   3.0999999999999996      );
  id3 -> SetBinContent( xbin,    469492.37713447679      );
  id3 -> SetBinError( xbin,    3676.3723756847512      );
   xbin = id3->FindBin(   3.3000000000000007      );
  id3 -> SetBinContent( xbin,    352817.96518646949      );
  id3 -> SetBinError( xbin,    3070.5663684623587      );
   xbin = id3->FindBin(   3.5000000000000000      );
  id3 -> SetBinContent( xbin,    258627.20472138465      );
  id3 -> SetBinError( xbin,    2725.9962681393422      );
   xbin = id3->FindBin(   3.7000000000000011      );
  id3 -> SetBinContent( xbin,    176537.50918035628      );
  id3 -> SetBinError( xbin,    1977.4056633114562      );
   xbin = id3->FindBin(   3.9000000000000004      );
  id3 -> SetBinContent( xbin,    109426.76778661595      );
  id3 -> SetBinError( xbin,    1431.2232159561713      );
   xbin = id3->FindBin(   4.1000000000000014      );
  id3 -> SetBinContent( xbin,    58748.061897234853      );
  id3 -> SetBinError( xbin,    1037.7290493978537      );
   xbin = id3->FindBin(   4.3000000000000007      );
  id3 -> SetBinContent( xbin,    30573.812607842225      );
  id3 -> SetBinError( xbin,    590.24430746274311      );
   xbin = id3->FindBin(   4.5000000000000000      );
  id3 -> SetBinContent( xbin,    13803.728463755222      );
  id3 -> SetBinError( xbin,    305.88520137353873      );
   xbin = id3->FindBin(   4.7000000000000011      );
  id3 -> SetBinContent( xbin,    5119.8025836809575      );
  id3 -> SetBinError( xbin,    155.36376445325709      );
   xbin = id3->FindBin(   4.9000000000000004      );
  id3 -> SetBinContent( xbin,    1655.1571245627533      );
  id3 -> SetBinError( xbin,    70.530314166965510      );
   xbin = id3->FindBin(   5.1000000000000014      );
  id3 -> SetBinContent( xbin,    402.99972359219794      );
  id3 -> SetBinError( xbin,    29.365647093807734      );
   xbin = id3->FindBin(   5.3000000000000007      );
  id3 -> SetBinContent( xbin,    55.777615593387011      );
  id3 -> SetBinError( xbin,    6.1114755967291199      );
   xbin = id3->FindBin(   5.5000000000000000      );
  id3 -> SetBinContent( xbin,    2.2768684260728662      );
  id3 -> SetBinError( xbin,   0.74728713617091191      );
   xbin = id3->FindBin(   5.7000000000000011      );
  id3 -> SetBinContent( xbin,    8.6386247889570066E-003 );
  id3 -> SetBinError( xbin,    3.6767934203310055E-003 );
  histos -> Add(id3); 
 
 

  mcfmhisto -> cd();
  TH1F *id4 = new TH1F( "id4", "etalab(lep)", 100,   -5.00000,    5.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   xbin = id4->FindBin(  -4.9500000000000002      );
  id4 -> SetBinContent( xbin,    3.2055965426272510      );
  id4 -> SetBinError( xbin,    1.4073826241648402      );
   xbin = id4->FindBin(  -4.8499999999999996      );
  id4 -> SetBinContent( xbin,    30.406605504987176      );
  id4 -> SetBinError( xbin,    5.1873159596855567      );
   xbin = id4->FindBin(  -4.7500000000000000      );
  id4 -> SetBinContent( xbin,    65.208609122132643      );
  id4 -> SetBinError( xbin,    9.7687755085521850      );
   xbin = id4->FindBin(  -4.6500000000000004      );
  id4 -> SetBinContent( xbin,    200.44057819886473      );
  id4 -> SetBinError( xbin,    22.341779679659403      );
   xbin = id4->FindBin(  -4.5499999999999998      );
  id4 -> SetBinContent( xbin,    559.20694308435282      );
  id4 -> SetBinError( xbin,    49.059401240732662      );
   xbin = id4->FindBin(  -4.4500000000000002      );
  id4 -> SetBinContent( xbin,    986.81810407587238      );
  id4 -> SetBinError( xbin,    68.745963315884225      );
   xbin = id4->FindBin(  -4.3499999999999996      );
  id4 -> SetBinContent( xbin,    1620.1009628272100      );
  id4 -> SetBinError( xbin,    140.44653442409464      );
   xbin = id4->FindBin(  -4.2500000000000000      );
  id4 -> SetBinContent( xbin,    3292.2797221328847      );
  id4 -> SetBinError( xbin,    167.65732366485483      );
   xbin = id4->FindBin(  -4.1500000000000004      );
  id4 -> SetBinContent( xbin,    5684.9208440548755      );
  id4 -> SetBinError( xbin,    265.10801116774115      );
   xbin = id4->FindBin(  -4.0499999999999998      );
  id4 -> SetBinContent( xbin,    8208.4709754131582      );
  id4 -> SetBinError( xbin,    352.34226176490967      );
   xbin = id4->FindBin(  -3.9500000000000002      );
  id4 -> SetBinContent( xbin,    12531.163661725130      );
  id4 -> SetBinError( xbin,    461.73001468527463      );
   xbin = id4->FindBin(  -3.8499999999999996      );
  id4 -> SetBinContent( xbin,    19051.012246082326      );
  id4 -> SetBinError( xbin,    633.73613780520702      );
   xbin = id4->FindBin(  -3.7500000000000000      );
  id4 -> SetBinContent( xbin,    25759.868781510220      );
  id4 -> SetBinError( xbin,    778.99635998090241      );
   xbin = id4->FindBin(  -3.6499999999999999      );
  id4 -> SetBinContent( xbin,    38339.585622029474      );
  id4 -> SetBinError( xbin,    1005.6560563723438      );
   xbin = id4->FindBin(  -3.5499999999999998      );
  id4 -> SetBinContent( xbin,    49180.577426970282      );
  id4 -> SetBinError( xbin,    1263.6382484831038      );
   xbin = id4->FindBin(  -3.4500000000000002      );
  id4 -> SetBinContent( xbin,    70994.388634663337      );
  id4 -> SetBinError( xbin,    1584.9316857849653      );
   xbin = id4->FindBin(  -3.3499999999999996      );
  id4 -> SetBinContent( xbin,    90131.448628567872      );
  id4 -> SetBinError( xbin,    1994.9807189295213      );
   xbin = id4->FindBin(  -3.2500000000000000      );
  id4 -> SetBinContent( xbin,    117690.63014222677      );
  id4 -> SetBinError( xbin,    2300.1353218912659      );
   xbin = id4->FindBin(  -3.1499999999999999      );
  id4 -> SetBinContent( xbin,    140630.00864868847      );
  id4 -> SetBinError( xbin,    3044.6070220842566      );
   xbin = id4->FindBin(  -3.0499999999999998      );
  id4 -> SetBinContent( xbin,    172694.35151340647      );
  id4 -> SetBinError( xbin,    3488.2589516838530      );
   xbin = id4->FindBin(  -2.9499999999999997      );
  id4 -> SetBinContent( xbin,    197262.44863392340      );
  id4 -> SetBinError( xbin,    3520.4594321014929      );
   xbin = id4->FindBin(  -2.8500000000000001      );
  id4 -> SetBinContent( xbin,    229495.81601134874      );
  id4 -> SetBinError( xbin,    6428.5053562666371      );
   xbin = id4->FindBin(  -2.7500000000000000      );
  id4 -> SetBinContent( xbin,    280046.84257782198      );
  id4 -> SetBinError( xbin,    6649.8108251850699      );
   xbin = id4->FindBin(  -2.6499999999999999      );
  id4 -> SetBinContent( xbin,    318397.70426418958      );
  id4 -> SetBinError( xbin,    4669.4074713361779      );
   xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    359886.24510513857      );
  id4 -> SetBinError( xbin,    5607.1786701163246      );
   xbin = id4->FindBin(  -2.4499999999999997      );
  id4 -> SetBinContent( xbin,    381122.56153813144      );
  id4 -> SetBinError( xbin,    5925.1880756098972      );
   xbin = id4->FindBin(  -2.3499999999999996      );
  id4 -> SetBinContent( xbin,    429439.62539827061      );
  id4 -> SetBinError( xbin,    6078.1743017276303      );
   xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    457639.22914380342      );
  id4 -> SetBinError( xbin,    6501.6946842122234      );
   xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    485773.00662456290      );
  id4 -> SetBinError( xbin,    6273.9029375590144      );
   xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    515866.49633104866      );
  id4 -> SetBinError( xbin,    6263.1420662881683      );
   xbin = id4->FindBin(  -1.9499999999999997      );
  id4 -> SetBinContent( xbin,    522750.86855176394      );
  id4 -> SetBinError( xbin,    13600.917686134177      );
   xbin = id4->FindBin(  -1.8499999999999996      );
  id4 -> SetBinContent( xbin,    560552.61005135335      );
  id4 -> SetBinError( xbin,    13696.332760578440      );
   xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    582865.10725803801      );
  id4 -> SetBinError( xbin,    6832.3448858995498      );
   xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    577841.59349999472      );
  id4 -> SetBinError( xbin,    7970.4258333011530      );
   xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    604927.54000745004      );
  id4 -> SetBinError( xbin,    8069.5523769441361      );
   xbin = id4->FindBin(  -1.4499999999999997      );
  id4 -> SetBinContent( xbin,    619314.54548290488      );
  id4 -> SetBinError( xbin,    7043.1681780104336      );
   xbin = id4->FindBin(  -1.3499999999999996      );
  id4 -> SetBinContent( xbin,    642463.41854079824      );
  id4 -> SetBinError( xbin,    7035.2376993010912      );
   xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    639005.17791969702      );
  id4 -> SetBinError( xbin,    7003.5007174724979      );
   xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    657562.67814686534      );
  id4 -> SetBinError( xbin,    7528.7441713564413      );
   xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    665966.85182533273      );
  id4 -> SetBinError( xbin,    7729.1842255706924      );
   xbin = id4->FindBin( -0.95000000000000018      );
  id4 -> SetBinContent( xbin,    639626.04092662362      );
  id4 -> SetBinError( xbin,    8315.5991866394597      );
   xbin = id4->FindBin( -0.84999999999999964      );
  id4 -> SetBinContent( xbin,    667079.49702242017      );
  id4 -> SetBinError( xbin,    7239.9993595675878      );
   xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    660167.74275645940      );
  id4 -> SetBinError( xbin,    7344.5635845909273      );
   xbin = id4->FindBin( -0.64999999999999947      );
  id4 -> SetBinContent( xbin,    676598.18594686023      );
  id4 -> SetBinError( xbin,    7729.1172057830663      );
   xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    676999.48968587327      );
  id4 -> SetBinError( xbin,    7903.6044730028934      );
   xbin = id4->FindBin( -0.45000000000000018      );
  id4 -> SetBinContent( xbin,    680476.95697747858      );
  id4 -> SetBinError( xbin,    7636.2933501971966      );
   xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    684749.13852908136      );
  id4 -> SetBinError( xbin,    7151.4002231558961      );
   xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    683869.99404407665      );
  id4 -> SetBinError( xbin,    6991.9198495038290      );
   xbin = id4->FindBin( -0.14999999999999947      );
  id4 -> SetBinContent( xbin,    689230.73883042019      );
  id4 -> SetBinError( xbin,    7237.2558950355042      );
   xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    679767.01526255091      );
  id4 -> SetBinError( xbin,    7096.6565868440957      );
   xbin = id4->FindBin(   5.0000000000000711E-002 );
  id4 -> SetBinContent( xbin,    696122.35648725217      );
  id4 -> SetBinError( xbin,    7028.5399551213040      );
   xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    689202.72905826860      );
  id4 -> SetBinError( xbin,    7308.5674178304253      );
   xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    690029.66192118125      );
  id4 -> SetBinError( xbin,    11516.954146644372      );
   xbin = id4->FindBin(  0.35000000000000053      );
  id4 -> SetBinContent( xbin,    700300.01395427017      );
  id4 -> SetBinError( xbin,    11909.917304421599      );
   xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    712849.70246655319      );
  id4 -> SetBinError( xbin,    9046.2219813378761      );
   xbin = id4->FindBin(  0.55000000000000071      );
  id4 -> SetBinContent( xbin,    688612.75441490009      );
  id4 -> SetBinError( xbin,    8378.4824263529099      );
   xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    708712.28480290982      );
  id4 -> SetBinError( xbin,    7100.8267460221423      );
   xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    713799.63890490972      );
  id4 -> SetBinError( xbin,    7105.8626204156790      );
   xbin = id4->FindBin(  0.85000000000000053      );
  id4 -> SetBinContent( xbin,    703333.29002142244      );
  id4 -> SetBinError( xbin,    7595.3265285679690      );
   xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    732124.52247818327      );
  id4 -> SetBinError( xbin,    8248.2530659510267      );
   xbin = id4->FindBin(   1.0500000000000007      );
  id4 -> SetBinContent( xbin,    700369.68099028897      );
  id4 -> SetBinError( xbin,    7915.8879008644990      );
   xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    735857.21824959479      );
  id4 -> SetBinError( xbin,    7494.7783521763886      );
   xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    712463.43088377104      );
  id4 -> SetBinError( xbin,    7431.5026566857268      );
   xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    739463.63490014337      );
  id4 -> SetBinError( xbin,    7440.1680756918586      );
   xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    747065.34515534528      );
  id4 -> SetBinError( xbin,    7469.7941136986256      );
   xbin = id4->FindBin(   1.5500000000000007      );
  id4 -> SetBinContent( xbin,    735691.27396105835      );
  id4 -> SetBinError( xbin,    7528.3385628566384      );
   xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    738524.44493385265      );
  id4 -> SetBinError( xbin,    7548.9422228867297      );
   xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    739304.20505691716      );
  id4 -> SetBinError( xbin,    7494.9737980283853      );
   xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    742581.25683768734      );
  id4 -> SetBinError( xbin,    7866.8352625331272      );
   xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    775354.94327415922      );
  id4 -> SetBinError( xbin,    8230.6867747349916      );
   xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    748380.99342467892      );
  id4 -> SetBinError( xbin,    8951.5160240830573      );
   xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    758681.82139302196      );
  id4 -> SetBinError( xbin,    8911.8592879313164      );
   xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    753928.93245141883      );
  id4 -> SetBinError( xbin,    7743.4574813260642      );
   xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    748164.62798706873      );
  id4 -> SetBinError( xbin,    7703.6184980175003      );
   xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    759754.81748892087      );
  id4 -> SetBinError( xbin,    7855.6968201493373      );
   xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    698322.40335755527      );
  id4 -> SetBinError( xbin,    49475.682695291624      );
   xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    785283.95178435312      );
  id4 -> SetBinError( xbin,    49432.660674800012      );
   xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    720101.43787767005      );
  id4 -> SetBinError( xbin,    7783.7496976766042      );
   xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    704334.37833010161      );
  id4 -> SetBinError( xbin,    8876.8176848642524      );
   xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    701230.94743012742      );
  id4 -> SetBinError( xbin,    8758.2644911183233      );
   xbin = id4->FindBin(   3.0500000000000007      );
  id4 -> SetBinContent( xbin,    660268.63394297590      );
  id4 -> SetBinError( xbin,    7522.0305217216819      );
   xbin = id4->FindBin(   3.1500000000000004      );
  id4 -> SetBinContent( xbin,    645604.09294859099      );
  id4 -> SetBinError( xbin,    7238.7019233663541      );
   xbin = id4->FindBin(   3.2500000000000000      );
  id4 -> SetBinContent( xbin,    604487.91679096047      );
  id4 -> SetBinError( xbin,    6990.4176249758129      );
   xbin = id4->FindBin(   3.3499999999999996      );
  id4 -> SetBinContent( xbin,    556698.69880522683      );
  id4 -> SetBinError( xbin,    6611.3900680153019      );
   xbin = id4->FindBin(   3.4500000000000011      );
  id4 -> SetBinContent( xbin,    512057.89423165098      );
  id4 -> SetBinError( xbin,    6383.5077992825327      );
   xbin = id4->FindBin(   3.5500000000000007      );
  id4 -> SetBinContent( xbin,    481094.03033822053      );
  id4 -> SetBinError( xbin,    6107.0852232629168      );
   xbin = id4->FindBin(   3.6500000000000004      );
  id4 -> SetBinContent( xbin,    419311.08420207893      );
  id4 -> SetBinError( xbin,    5673.4680156180257      );
   xbin = id4->FindBin(   3.7500000000000000      );
  id4 -> SetBinContent( xbin,    366933.83671813674      );
  id4 -> SetBinError( xbin,    5164.9030878670628      );
   xbin = id4->FindBin(   3.8499999999999996      );
  id4 -> SetBinContent( xbin,    311460.14017476811      );
  id4 -> SetBinError( xbin,    5232.6807012576128      );
   xbin = id4->FindBin(   3.9500000000000011      );
  id4 -> SetBinContent( xbin,    261565.43101907510      );
  id4 -> SetBinError( xbin,    4393.8494375081264      );
   xbin = id4->FindBin(   4.0500000000000007      );
  id4 -> SetBinContent( xbin,    223933.38243143648      );
  id4 -> SetBinError( xbin,    3892.7652212049738      );
   xbin = id4->FindBin(   4.1500000000000004      );
  id4 -> SetBinContent( xbin,    184084.86871706750      );
  id4 -> SetBinError( xbin,    3144.2843731714652      );
   xbin = id4->FindBin(   4.2500000000000000      );
  id4 -> SetBinContent( xbin,    142486.37871581313      );
  id4 -> SetBinError( xbin,    2652.3926530483891      );
   xbin = id4->FindBin(   4.3499999999999996      );
  id4 -> SetBinContent( xbin,    110386.29221735039      );
  id4 -> SetBinError( xbin,    2103.6803139791659      );
   xbin = id4->FindBin(   4.4500000000000011      );
  id4 -> SetBinContent( xbin,    86883.122830437351      );
  id4 -> SetBinError( xbin,    1762.2221428570167      );
   xbin = id4->FindBin(   4.5500000000000007      );
  id4 -> SetBinContent( xbin,    59562.642763560070      );
  id4 -> SetBinError( xbin,    1462.2575910287851      );
   xbin = id4->FindBin(   4.6500000000000004      );
  id4 -> SetBinContent( xbin,    44362.385738800098      );
  id4 -> SetBinError( xbin,    1124.5065869791647      );
   xbin = id4->FindBin(   4.7500000000000000      );
  id4 -> SetBinContent( xbin,    32085.416333683606      );
  id4 -> SetBinError( xbin,    850.83066368373295      );
   xbin = id4->FindBin(   4.8500000000000014      );
  id4 -> SetBinContent( xbin,    22904.777981523668      );
  id4 -> SetBinError( xbin,    690.93625492957392      );
   xbin = id4->FindBin(   4.9500000000000011      );
  id4 -> SetBinContent( xbin,    13909.606324690785      );
  id4 -> SetBinError( xbin,    480.33695799909060      );
  histos -> Add(id4); 
 
 

  mcfmhisto -> cd();
  TH1F *id5 = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    79650.088778936668      );
  id5 -> SetBinError( xbin,    788.61823654527871      );
   xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    170756.59438108726      );
  id5 -> SetBinError( xbin,    1072.0821520853258      );
   xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    185894.78150645946      );
  id5 -> SetBinError( xbin,    1318.3013273460017      );
   xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    202159.82290179899      );
  id5 -> SetBinError( xbin,    1444.0181122519036      );
   xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    224467.63322672650      );
  id5 -> SetBinError( xbin,    1480.6297113378478      );
   xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    254764.89086182031      );
  id5 -> SetBinError( xbin,    1654.4426433174494      );
   xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    278113.29712480702      );
  id5 -> SetBinError( xbin,    1831.5588959410561      );
   xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    262639.90875725832      );
  id5 -> SetBinError( xbin,    2175.0641502321523      );
   xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    221436.45227488058      );
  id5 -> SetBinError( xbin,    1748.4465574826909      );
   xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    114100.46861304679      );
  id5 -> SetBinError( xbin,    570.61489033233647      );
   xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    61587.340009654559      );
  id5 -> SetBinError( xbin,    334.60646724953182      );
   xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    38957.914687246397      );
  id5 -> SetBinError( xbin,    230.24226514973745      );
   xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    27211.066327439756      );
  id5 -> SetBinError( xbin,    182.66777811697727      );
   xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    20124.102838932147      );
  id5 -> SetBinError( xbin,    146.08151211001470      );
   xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    15461.939063810572      );
  id5 -> SetBinError( xbin,    126.33337629092870      );
   xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    12239.467546254780      );
  id5 -> SetBinError( xbin,    116.32553482557476      );
   xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    9632.8394549613695      );
  id5 -> SetBinError( xbin,    93.609265056801362      );
   xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    8000.2015175661063      );
  id5 -> SetBinError( xbin,    92.962081739749294      );
   xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    6679.0585024066449      );
  id5 -> SetBinError( xbin,    104.03026111860656      );
   xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    5414.2057370964603      );
  id5 -> SetBinError( xbin,    150.28384912009682      );
   xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    4393.2618742076365      );
  id5 -> SetBinError( xbin,    140.95743500897674      );
   xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    4150.4202559607193      );
  id5 -> SetBinError( xbin,    167.77490973589127      );
   xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    3078.7844400357872      );
  id5 -> SetBinError( xbin,    196.11870460307145      );
   xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    2952.8023882575890      );
  id5 -> SetBinError( xbin,    120.05788662328713      );
   xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    2508.6644758770522      );
  id5 -> SetBinError( xbin,    45.199897323673007      );
   xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    2202.9787924666275      );
  id5 -> SetBinError( xbin,    41.131676968598171      );
   xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    1849.0064568282637      );
  id5 -> SetBinError( xbin,    46.254451068828622      );
   xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    1707.2532896288792      );
  id5 -> SetBinError( xbin,    44.098877923653923      );
   xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    1488.9224168636822      );
  id5 -> SetBinError( xbin,    33.313793043845948      );
   xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    1331.4936464585953      );
  id5 -> SetBinError( xbin,    37.206353659205583      );
   xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    1263.8064397968744      );
  id5 -> SetBinError( xbin,    64.427531290107495      );
   xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    992.76555183506707      );
  id5 -> SetBinError( xbin,    62.258891272235509      );
   xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    878.76065043114238      );
  id5 -> SetBinError( xbin,    32.833880752334856      );
   xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    842.58603382920796      );
  id5 -> SetBinError( xbin,    31.375327440293180      );
   xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    729.85556770647474      );
  id5 -> SetBinError( xbin,    24.560878753289657      );
   xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    691.33833362391488      );
  id5 -> SetBinError( xbin,    24.735886241608739      );
   xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    605.82281279626147      );
  id5 -> SetBinError( xbin,    17.960363644516061      );
   xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    572.91128353393822      );
  id5 -> SetBinError( xbin,    17.539140630571666      );
  histos -> Add(id5); 
 
 

  mcfmhisto -> cd();
  TH1F *id6 = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    5873.3876843093931      );
  id6 -> SetBinError( xbin,    109.20733457193479      );
   xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    19294.193525938623      );
  id6 -> SetBinError( xbin,    205.71817102133335      );
   xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    39349.674791201593      );
  id6 -> SetBinError( xbin,    297.26538076359691      );
   xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    69720.859473711040      );
  id6 -> SetBinError( xbin,    394.39961958244800      );
   xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    115434.29286281399      );
  id6 -> SetBinError( xbin,    489.54784967899968      );
   xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    182449.09231090723      );
  id6 -> SetBinError( xbin,    582.27927952752191      );
   xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    281853.20086549752      );
  id6 -> SetBinError( xbin,    700.55183750704919      );
   xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    404842.38106484682      );
  id6 -> SetBinError( xbin,    848.90026932053786      );
   xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    171306.91121543347      );
  id6 -> SetBinError( xbin,    620.43583146244850      );
   xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    65031.627953586838      );
  id6 -> SetBinError( xbin,    426.94274815621361      );
   xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    27939.939806219332      );
  id6 -> SetBinError( xbin,    303.93670539146177      );
   xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    12233.819104226268      );
  id6 -> SetBinError( xbin,    212.37650101582835      );
  histos -> Add(id6); 
 
 

  mcfmhisto -> cd();
  TH1F *id7 = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    35101.666109872000      );
  id7 -> SetBinError( xbin,    342.30929792924530      );
   xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    41865.790560281501      );
  id7 -> SetBinError( xbin,    377.26633233184498      );
   xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    50121.770881365977      );
  id7 -> SetBinError( xbin,    419.88722511960026      );
   xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    57240.904138466823      );
  id7 -> SetBinError( xbin,    457.74828732961203      );
   xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    64910.554688884949      );
  id7 -> SetBinError( xbin,    502.25074638894381      );
   xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    72008.915496019676      );
  id7 -> SetBinError( xbin,    530.94218390728281      );
   xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    77893.309403071718      );
  id7 -> SetBinError( xbin,    555.26135724965297      );
   xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    84968.295143951924      );
  id7 -> SetBinError( xbin,    588.26028170593850      );
   xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    89680.930822915077      );
  id7 -> SetBinError( xbin,    610.02246007790563      );
   xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    95871.304574398659      );
  id7 -> SetBinError( xbin,    648.11932649252356      );
   xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    100308.44198669749      );
  id7 -> SetBinError( xbin,    671.21744777340984      );
   xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    104033.76884719514      );
  id7 -> SetBinError( xbin,    681.27839492556598      );
   xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    107951.09134149582      );
  id7 -> SetBinError( xbin,    695.60070284326014      );
   xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    110139.06097548726      );
  id7 -> SetBinError( xbin,    711.64808373321432      );
   xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    111474.34615785694      );
  id7 -> SetBinError( xbin,    715.79799132069536      );
   xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    113518.09250516257      );
  id7 -> SetBinError( xbin,    725.30219493825462      );
   xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    114174.86926478095      );
  id7 -> SetBinError( xbin,    727.59153677655888      );
   xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    113212.95077542486      );
  id7 -> SetBinError( xbin,    713.26238683935617      );
   xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    111176.03490223765      );
  id7 -> SetBinError( xbin,    706.11533323731112      );
   xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    109206.12253808015      );
  id7 -> SetBinError( xbin,    686.64865306614502      );
   xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    107574.17683008948      );
  id7 -> SetBinError( xbin,    679.58591210162558      );
   xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    103447.92522883175      );
  id7 -> SetBinError( xbin,    655.67303576595248      );
   xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    97464.360168177474      );
  id7 -> SetBinError( xbin,    630.95397578169400      );
   xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    92230.721474321530      );
  id7 -> SetBinError( xbin,    600.81943319222228      );
   xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    86346.326475725102      );
  id7 -> SetBinError( xbin,    573.39814714009856      );
   xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    80689.307232237072      );
  id7 -> SetBinError( xbin,    540.19569684533985      );
   xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    72511.449303808258      );
  id7 -> SetBinError( xbin,    507.19212091006307      );
   xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    64151.702350781197      );
  id7 -> SetBinError( xbin,    464.81029149350644      );
   xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    55904.752970812951      );
  id7 -> SetBinError( xbin,    430.14584673911503      );
   xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    47806.349528108491      );
  id7 -> SetBinError( xbin,    397.41880558384702      );
  histos -> Add(id7); 
 
 

  mcfmhisto -> cd();
  TH1F *id8 = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    15507.086209367080      );
  id8 -> SetBinError( xbin,    89.936135563086793      );
   xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    27957.123834526126      );
  id8 -> SetBinError( xbin,    119.64788786382364      );
   xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    24046.748085123862      );
  id8 -> SetBinError( xbin,    108.43629782554736      );
   xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    21077.806018313495      );
  id8 -> SetBinError( xbin,    100.49810457616407      );
   xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    18496.238991001504      );
  id8 -> SetBinError( xbin,    92.279889110166891      );
   xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    16384.661408989181      );
  id8 -> SetBinError( xbin,    85.617707227981498      );
   xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    14533.623090374485      );
  id8 -> SetBinError( xbin,    79.605458030285718      );
   xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    12573.505776591621      );
  id8 -> SetBinError( xbin,    72.000059048451035      );
   xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    11398.264967144576      );
  id8 -> SetBinError( xbin,    68.397270638945585      );
   xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    10081.433998466166      );
  id8 -> SetBinError( xbin,    63.595809478569322      );
   xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    8979.8971367601189      );
  id8 -> SetBinError( xbin,    58.596805135210502      );
   xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    7958.9731496406166      );
  id8 -> SetBinError( xbin,    54.676935009624643      );
   xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    7343.9061427522283      );
  id8 -> SetBinError( xbin,    52.340802248554745      );
   xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    6441.6312377217882      );
  id8 -> SetBinError( xbin,    47.702083097297432      );
   xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    5868.6542593929671      );
  id8 -> SetBinError( xbin,    45.030567754293365      );
   xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    5348.7261191839698      );
  id8 -> SetBinError( xbin,    42.100902425635432      );
   xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    4950.0547673583133      );
  id8 -> SetBinError( xbin,    40.860783646412337      );
   xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    4420.6353678291880      );
  id8 -> SetBinError( xbin,    37.477874731559716      );
   xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    4088.3332785361572      );
  id8 -> SetBinError( xbin,    36.046677007928309      );
   xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    3734.7723262712384      );
  id8 -> SetBinError( xbin,    34.100223660836988      );
   xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    3413.2419564871948      );
  id8 -> SetBinError( xbin,    33.190117494863905      );
   xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    3098.2527212055070      );
  id8 -> SetBinError( xbin,    30.165644229035475      );
   xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    2922.8870773442577      );
  id8 -> SetBinError( xbin,    29.645531223359757      );
   xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    2616.7632242654563      );
  id8 -> SetBinError( xbin,    27.212970932648783      );
   xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    2463.8629331600623      );
  id8 -> SetBinError( xbin,    26.814304746227183      );
   xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    2286.2595307944766      );
  id8 -> SetBinError( xbin,    25.175282026753546      );
   xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    2096.9829153602022      );
  id8 -> SetBinError( xbin,    23.909771386500061      );
   xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    1932.5606654449073      );
  id8 -> SetBinError( xbin,    22.748879368378894      );
  histos -> Add(id8); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 )  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
