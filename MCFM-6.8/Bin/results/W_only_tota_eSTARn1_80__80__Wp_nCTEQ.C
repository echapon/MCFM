// Cross-section is:      1972948.7056222055 +/-          739.8001189018)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -48669.01766   -2.47%
//        GQB    |      -25779.27438   -1.31%
//        QG     |      -54817.62583   -2.78%
//        QBG    |      -26612.23588   -1.35%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |     1110886.15718   56.31%
//        QBQ    |     1021255.58636   51.76%

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
//             eSTARn1            [pdlabel]  
//                   4            [NGROUP]  
//                  46            [NSET]  
//eSTARn11_207_103.LHg            [LHAPDF group]  
//                   0            [LHAPDF set]  

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
  mcfmhisto = new TFile("W_only_tota_eSTARn1_80__80__Wp_nCTEQ.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,   0.68995172854593023      );
  id1 -> SetBinError( xbin,   0.38105149076522354      );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    287.95495035282659      );
  id1 -> SetBinError( xbin,    39.717196785122539      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    3537.8743447133938      );
  id1 -> SetBinError( xbin,    231.77896596247601      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    17847.878720904300      );
  id1 -> SetBinError( xbin,    748.06977768338845      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    44814.751035452195      );
  id1 -> SetBinError( xbin,    1017.6861294183655      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    89376.112305879185      );
  id1 -> SetBinError( xbin,    1228.0362338999166      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    134243.24210613800      );
  id1 -> SetBinError( xbin,    1431.5124311236752      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    176320.35568328612      );
  id1 -> SetBinError( xbin,    1545.7379986395256      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    219016.73359593243      );
  id1 -> SetBinError( xbin,    1654.5641637037800      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    246040.00002771636      );
  id1 -> SetBinError( xbin,    1724.9371397025816      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    276463.82291005889      );
  id1 -> SetBinError( xbin,    1766.5469080859982      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    295514.77099414985      );
  id1 -> SetBinError( xbin,    1794.0896496728687      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    313022.74887475267      );
  id1 -> SetBinError( xbin,    1817.1197776354143      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    328588.44448941282      );
  id1 -> SetBinError( xbin,    1828.2191864436925      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    339193.14191306976      );
  id1 -> SetBinError( xbin,    1848.7997686647104      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    351385.99842374504      );
  id1 -> SetBinError( xbin,    1864.5411208356954      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    363039.80041761126      );
  id1 -> SetBinError( xbin,    1888.6347923221808      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    376348.14588735066      );
  id1 -> SetBinError( xbin,    1907.6898226158783      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    386207.92517693597      );
  id1 -> SetBinError( xbin,    1918.6946770942279      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    396279.89314997452      );
  id1 -> SetBinError( xbin,    2044.0465034068727      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    395208.76224719320      );
  id1 -> SetBinError( xbin,    1968.6069105480153      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    401435.39498745464      );
  id1 -> SetBinError( xbin,    1964.7267092224283      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    403183.62008394842      );
  id1 -> SetBinError( xbin,    1966.7199588405631      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    406826.44635443459      );
  id1 -> SetBinError( xbin,    1979.9472903700282      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    397981.90503352211      );
  id1 -> SetBinError( xbin,    1986.9283912753970      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    396729.12354173337      );
  id1 -> SetBinError( xbin,    1968.9889764152445      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    391630.17475240561      );
  id1 -> SetBinError( xbin,    1984.4618569128043      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    377495.17090681271      );
  id1 -> SetBinError( xbin,    1968.3226875061760      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    364598.13865460083      );
  id1 -> SetBinError( xbin,    1943.3876981553922      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    357040.75970560778      );
  id1 -> SetBinError( xbin,    1911.4262757859613      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    334030.57325042685      );
  id1 -> SetBinError( xbin,    1882.1338283051321      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    304847.43119075487      );
  id1 -> SetBinError( xbin,    1867.4243668456443      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    269805.58487574500      );
  id1 -> SetBinError( xbin,    1792.2745625128664      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    228093.19698205171      );
  id1 -> SetBinError( xbin,    1673.4974758997237      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    182291.11452354505      );
  id1 -> SetBinError( xbin,    1566.8674828198461      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    138083.86558761253      );
  id1 -> SetBinError( xbin,    1426.4757514493936      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    89663.559935718193      );
  id1 -> SetBinError( xbin,    1211.6645877671988      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    47122.245677308856      );
  id1 -> SetBinError( xbin,    1005.5803511597853      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    16965.384610552162      );
  id1 -> SetBinError( xbin,    715.65677363843042      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    4127.1358246510272      );
  id1 -> SetBinError( xbin,    282.10763842775140      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    390.32327207314114      );
  id1 -> SetBinError( xbin,    46.699811020971552      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,   0.18131562021023448      );
  id1 -> SetBinError( xbin,   0.57931903327412260      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    500824.50389872427      );
  id2 -> SetBinError( xbin,    6045.2793781502742      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    468390.49139409227      );
  id2 -> SetBinError( xbin,    4027.7781530747366      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    450115.04116616474      );
  id2 -> SetBinError( xbin,    4032.7043264944377      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    426588.86466769531      );
  id2 -> SetBinError( xbin,    3545.5527121306095      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    414093.79105993744      );
  id2 -> SetBinError( xbin,    3553.8763154455892      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    395440.88403652306      );
  id2 -> SetBinError( xbin,    3348.1035399386592      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    366520.12534337625      );
  id2 -> SetBinError( xbin,    2738.5196779746370      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    349609.35104319028      );
  id2 -> SetBinError( xbin,    3140.6889814579959      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    329429.16100659705      );
  id2 -> SetBinError( xbin,    2508.4838992093260      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    309272.82660318899      );
  id2 -> SetBinError( xbin,    2444.5486122864158      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    287152.56876931473      );
  id2 -> SetBinError( xbin,    3197.1595504961870      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    266765.78464913362      );
  id2 -> SetBinError( xbin,    1719.6315839103675      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    247437.69840296061      );
  id2 -> SetBinError( xbin,    1804.6983441778746      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    226501.49808238368      );
  id2 -> SetBinError( xbin,    1445.2906421631499      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    208517.66474881378      );
  id2 -> SetBinError( xbin,    1320.6582963809878      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    188680.78425814913      );
  id2 -> SetBinError( xbin,    1215.8409231997118      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    175562.14300239785      );
  id2 -> SetBinError( xbin,    1623.6064515004832      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    156584.90160845887      );
  id2 -> SetBinError( xbin,    996.85209484264533      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    140622.27786076747      );
  id2 -> SetBinError( xbin,    1033.8363043734660      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    126655.48949352671      );
  id2 -> SetBinError( xbin,    994.48059404043693      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    111110.35140599716      );
  id2 -> SetBinError( xbin,    774.24314809702162      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    102199.91944608669      );
  id2 -> SetBinError( xbin,    3386.4933815278814      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    87864.080690168426      );
  id2 -> SetBinError( xbin,    667.51049104165406      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    78111.189893151590      );
  id2 -> SetBinError( xbin,    578.69515528089471      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    68426.169294595675      );
  id2 -> SetBinError( xbin,    568.45235526990109      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    61955.052780915183      );
  id2 -> SetBinError( xbin,    579.62763344870382      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    55288.896065719557      );
  id2 -> SetBinError( xbin,    505.36293045288011      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    50897.359903938632      );
  id2 -> SetBinError( xbin,    446.73738585732542      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    48665.453133281269      );
  id2 -> SetBinError( xbin,    510.86910588942061      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    46293.699305643582      );
  id2 -> SetBinError( xbin,    398.94701202626658      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    47170.582507449602      );
  id2 -> SetBinError( xbin,    424.37240350463793      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    48342.025997841447      );
  id2 -> SetBinError( xbin,    461.61147357177390      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    51892.785307823120      );
  id2 -> SetBinError( xbin,    473.76293777272548      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    56885.939895959978      );
  id2 -> SetBinError( xbin,    563.93253581414865      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    61890.740339813492      );
  id2 -> SetBinError( xbin,    474.86293849540300      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    71267.927812621114      );
  id2 -> SetBinError( xbin,    688.51410548660783      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    79051.363013475420      );
  id2 -> SetBinError( xbin,    572.64501523255092      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    90592.047730115679      );
  id2 -> SetBinError( xbin,    632.06788306189071      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    103183.01869534707      );
  id2 -> SetBinError( xbin,    883.53712823149192      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    117548.73281404551      );
  id2 -> SetBinError( xbin,    838.95242149466992      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    131681.43504762553      );
  id2 -> SetBinError( xbin,    961.41108477618479      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    145540.76975635948      );
  id2 -> SetBinError( xbin,    905.27700073088477      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    164538.22954485629      );
  id2 -> SetBinError( xbin,    1083.2056250939345      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    183387.26487126254      );
  id2 -> SetBinError( xbin,    1316.2758244050194      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    199330.79241105865      );
  id2 -> SetBinError( xbin,    1319.9099921621500      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    219585.48689359962      );
  id2 -> SetBinError( xbin,    1386.6794779759371      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    241174.28298206200      );
  id2 -> SetBinError( xbin,    1513.6739734448099      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    262361.63582700671      );
  id2 -> SetBinError( xbin,    1921.2720430074221      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    287602.12056124286      );
  id2 -> SetBinError( xbin,    3272.0160377727702      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    307470.03858296730      );
  id2 -> SetBinError( xbin,    2230.8387659635841      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    326428.17083428096      );
  id2 -> SetBinError( xbin,    2141.4279899423486      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    348336.07041960099      );
  id2 -> SetBinError( xbin,    2738.7032668785055      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    370059.15873895545      );
  id2 -> SetBinError( xbin,    3833.8931074173452      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    396793.04075190338      );
  id2 -> SetBinError( xbin,    2915.5691557045930      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    416730.58263962623      );
  id2 -> SetBinError( xbin,    4080.5151314169188      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    431791.25638407079      );
  id2 -> SetBinError( xbin,    3211.2155663090480      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    456752.61662360723      );
  id2 -> SetBinError( xbin,    3598.8909824125631      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    483223.29378008621      );
  id2 -> SetBinError( xbin,    4150.9276835840665      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    506183.15420933609      );
  id2 -> SetBinError( xbin,    5069.2623558723608      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    537247.77691656956      );
  id2 -> SetBinError( xbin,    6242.7342506021860      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    112900.67750088878      );
  id3 -> SetBinError( xbin,    1074.1334903639865      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    154239.54889610433      );
  id3 -> SetBinError( xbin,    1315.8060421092453      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    200632.05554618206      );
  id3 -> SetBinError( xbin,    1555.4434334136977      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    241926.32121791178      );
  id3 -> SetBinError( xbin,    1737.4463877903306      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    277267.09202008910      );
  id3 -> SetBinError( xbin,    1854.4963807501044      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    305707.59120719269      );
  id3 -> SetBinError( xbin,    1961.2298844119196      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    333947.63482559804      );
  id3 -> SetBinError( xbin,    2001.1325596882709      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    356456.44993122399      );
  id3 -> SetBinError( xbin,    2072.3825349939661      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    376317.74136155390      );
  id3 -> SetBinError( xbin,    2123.4176844149129      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    385401.27779775177      );
  id3 -> SetBinError( xbin,    2157.7005360409094      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    397304.92114778701      );
  id3 -> SetBinError( xbin,    2216.6776970314986      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    409406.79533696349      );
  id3 -> SetBinError( xbin,    2204.2909761353053      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    415357.47078820632      );
  id3 -> SetBinError( xbin,    2278.7487250879999      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    423654.82460461085      );
  id3 -> SetBinError( xbin,    2229.2600183005402      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    423567.24676357984      );
  id3 -> SetBinError( xbin,    2257.6774295594842      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    430358.12527035020      );
  id3 -> SetBinError( xbin,    2284.1344146389843      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    430671.37395149417      );
  id3 -> SetBinError( xbin,    2248.3997308033399      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    432590.45124880830      );
  id3 -> SetBinError( xbin,    2218.5669308794277      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    425937.75674940814      );
  id3 -> SetBinError( xbin,    2228.1783255916225      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    418045.28671321331      );
  id3 -> SetBinError( xbin,    2263.0494399301119      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    412485.66309959692      );
  id3 -> SetBinError( xbin,    2198.0044941557048      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    396474.49711400596      );
  id3 -> SetBinError( xbin,    2166.7116013655886      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    381666.68850099645      );
  id3 -> SetBinError( xbin,    2121.3632825182390      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    352300.19475359400      );
  id3 -> SetBinError( xbin,    2018.7918103446414      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    330967.79335883801      );
  id3 -> SetBinError( xbin,    1955.8006538115092      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    295276.14098665823      );
  id3 -> SetBinError( xbin,    1842.0813155279802      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    253655.79462853482      );
  id3 -> SetBinError( xbin,    1729.3359315656414      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    209483.04612893146      );
  id3 -> SetBinError( xbin,    1558.3235819334413      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    161832.26065124970      );
  id3 -> SetBinError( xbin,    1341.3359353582794      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    119247.65617163404      );
  id3 -> SetBinError( xbin,    1126.5610023473068      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    36786.710337795637      );
  id4 -> SetBinError( xbin,    1006.3601036005997      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    108491.85238536407      );
  id4 -> SetBinError( xbin,    1578.3925188333910      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    129404.08440790736      );
  id4 -> SetBinError( xbin,    1769.3783882981984      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    151166.42522996798      );
  id4 -> SetBinError( xbin,    2016.0260726974489      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    173258.44832709653      );
  id4 -> SetBinError( xbin,    2148.5532039326508      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    195832.88855966879      );
  id4 -> SetBinError( xbin,    2264.7968190665192      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    220054.39243972415      );
  id4 -> SetBinError( xbin,    2442.4227899110206      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    242410.79033972105      );
  id4 -> SetBinError( xbin,    2568.6524962278540      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    256786.17331796075      );
  id4 -> SetBinError( xbin,    2610.0038994331367      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    271970.80010734027      );
  id4 -> SetBinError( xbin,    2700.6957230329272      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    291443.26523127477      );
  id4 -> SetBinError( xbin,    2797.4493312495124      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    301637.40821960755      );
  id4 -> SetBinError( xbin,    2854.6767480125309      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    316710.36283472116      );
  id4 -> SetBinError( xbin,    3090.3498146994361      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    335449.59220620920      );
  id4 -> SetBinError( xbin,    3247.4329159374656      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    347258.72342252493      );
  id4 -> SetBinError( xbin,    3202.0439463418493      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    353936.08856817457      );
  id4 -> SetBinError( xbin,    3150.4748927626870      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    365294.59777057252      );
  id4 -> SetBinError( xbin,    3257.0396409994823      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    372043.90771308506      );
  id4 -> SetBinError( xbin,    3309.0182688907057      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    380831.10591003648      );
  id4 -> SetBinError( xbin,    3234.3612444990258      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    380415.93376851967      );
  id4 -> SetBinError( xbin,    3278.7291099515519      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    397968.60912096221      );
  id4 -> SetBinError( xbin,    3348.3347572215484      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    395130.42362047324      );
  id4 -> SetBinError( xbin,    3322.9001795989598      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    404185.85959012166      );
  id4 -> SetBinError( xbin,    3288.7601390065770      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    408347.85810477188      );
  id4 -> SetBinError( xbin,    3282.1788352960752      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    411804.02744821692      );
  id4 -> SetBinError( xbin,    3349.6980296101510      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    415018.46440519620      );
  id4 -> SetBinError( xbin,    4101.6388623402581      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    421448.95898797887      );
  id4 -> SetBinError( xbin,    3868.7828390516479      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    418136.72613569017      );
  id4 -> SetBinError( xbin,    3400.9952769181546      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    423178.01059089752      );
  id4 -> SetBinError( xbin,    3441.6222928848597      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    422759.15973051585      );
  id4 -> SetBinError( xbin,    3351.8625364846694      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    429104.41800864518      );
  id4 -> SetBinError( xbin,    3383.8226974845102      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    433041.49894358992      );
  id4 -> SetBinError( xbin,    3437.3613308159256      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    430516.64786272164      );
  id4 -> SetBinError( xbin,    3673.0979268371093      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    430471.19053777831      );
  id4 -> SetBinError( xbin,    3780.1446425536874      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    431222.70225673914      );
  id4 -> SetBinError( xbin,    3539.8310668742429      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    432324.71638304798      );
  id4 -> SetBinError( xbin,    3355.2724251446439      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    436276.08741749614      );
  id4 -> SetBinError( xbin,    7892.6881139956286      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    414462.13875039422      );
  id4 -> SetBinError( xbin,    8604.4905695913185      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    428511.97251376044      );
  id4 -> SetBinError( xbin,    4835.6112711006690      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    420392.60091448168      );
  id4 -> SetBinError( xbin,    3484.9237513589046      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    417618.52224724059      );
  id4 -> SetBinError( xbin,    3489.5704330312283      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    412253.03799581452      );
  id4 -> SetBinError( xbin,    3369.7681236517642      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    404231.29577795800      );
  id4 -> SetBinError( xbin,    3345.0466877483213      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    399991.61490954837      );
  id4 -> SetBinError( xbin,    3292.4816998818164      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    385575.15512888826      );
  id4 -> SetBinError( xbin,    3249.7775333945215      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    384380.26438521757      );
  id4 -> SetBinError( xbin,    3204.0282505356663      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    372239.12438798737      );
  id4 -> SetBinError( xbin,    3304.7893487311881      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    356985.66427334107      );
  id4 -> SetBinError( xbin,    3201.1932965041983      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    343525.59674668597      );
  id4 -> SetBinError( xbin,    3105.1495237964346      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    333646.04598461511      );
  id4 -> SetBinError( xbin,    3041.8110751328572      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    314986.93905878853      );
  id4 -> SetBinError( xbin,    2901.9928605442951      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    297254.59958783671      );
  id4 -> SetBinError( xbin,    3075.7871962581148      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    277609.13105214032      );
  id4 -> SetBinError( xbin,    2978.0433176115844      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    255252.18978499237      );
  id4 -> SetBinError( xbin,    2583.5585394341283      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    238646.90003007068      );
  id4 -> SetBinError( xbin,    2509.2219670453028      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    212186.45746319939      );
  id4 -> SetBinError( xbin,    2378.1101322790259      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    35156.632903705751      );
  id5 -> SetBinError( xbin,    309.88747422344380      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    75197.917299321547      );
  id5 -> SetBinError( xbin,    404.27476949513499      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    83069.123974935748      );
  id5 -> SetBinError( xbin,    439.34125041500852      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    90191.712429825217      );
  id5 -> SetBinError( xbin,    465.18377645877177      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    100452.21081305452      );
  id5 -> SetBinError( xbin,    529.45622129561707      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    113506.37424569653      );
  id5 -> SetBinError( xbin,    570.26563838730112      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    131694.50768540899      );
  id5 -> SetBinError( xbin,    618.87979487698215      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    151555.00092782496      );
  id5 -> SetBinError( xbin,    727.46902817630348      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    95872.623085911386      );
  id5 -> SetBinError( xbin,    540.01061804780727      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    36856.614808009159      );
  id5 -> SetBinError( xbin,    170.98272448436586      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    19116.201411640432      );
  id5 -> SetBinError( xbin,    102.08072862514997      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    11911.535644015778      );
  id5 -> SetBinError( xbin,    77.174106917170633      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    8184.0803013674758      );
  id5 -> SetBinError( xbin,    64.872064830709149      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    6101.6067037106141      );
  id5 -> SetBinError( xbin,    55.616378712210341      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    4557.0896104642043      );
  id5 -> SetBinError( xbin,    40.147016378784080      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    3569.4625472334264      );
  id5 -> SetBinError( xbin,    46.493048713636945      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    2938.2983591240395      );
  id5 -> SetBinError( xbin,    42.981264200494046      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    2343.5127823534335      );
  id5 -> SetBinError( xbin,    25.948030607866471      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    1909.1709864726065      );
  id5 -> SetBinError( xbin,    23.607904425104863      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    1555.6484493141252      );
  id5 -> SetBinError( xbin,    22.621078179445583      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    1342.3474379549389      );
  id5 -> SetBinError( xbin,    21.394718412167983      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1136.0459005521416      );
  id5 -> SetBinError( xbin,    17.419752400094620      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    928.87097358340361      );
  id5 -> SetBinError( xbin,    18.124883572879781      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    827.94313911296399      );
  id5 -> SetBinError( xbin,    23.675053505915042      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    701.70951960453658      );
  id5 -> SetBinError( xbin,    25.419176265500973      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    618.27428477830290      );
  id5 -> SetBinError( xbin,    18.613994353918546      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    545.18294576162168      );
  id5 -> SetBinError( xbin,    11.356525300041254      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    478.86575267804449      );
  id5 -> SetBinError( xbin,    16.472797608544340      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    403.61671853883627      );
  id5 -> SetBinError( xbin,    17.738622893683615      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    358.30795509749350      );
  id5 -> SetBinError( xbin,    12.713085193430986      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    325.01785487717001      );
  id5 -> SetBinError( xbin,    11.638914441412847      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    291.67184763129029      );
  id5 -> SetBinError( xbin,    9.3914336247970116      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    254.60007951233175      );
  id5 -> SetBinError( xbin,    8.4056384638038519      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    202.16423762951669      );
  id5 -> SetBinError( xbin,    14.876006466429342      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    214.22804104868925      );
  id5 -> SetBinError( xbin,    14.031046257860405      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    176.59123446861585      );
  id5 -> SetBinError( xbin,    7.2897812385987724      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    157.58839245400847      );
  id5 -> SetBinError( xbin,    7.7360445743376642      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    156.85914157944239      );
  id5 -> SetBinError( xbin,    6.7023343296456890      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    1676.2384581944411      );
  id6 -> SetBinError( xbin,    31.364666458063933      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    5519.5919925272956      );
  id6 -> SetBinError( xbin,    58.644197209445217      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    11081.868489501763      );
  id6 -> SetBinError( xbin,    85.709009912454647      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    19695.635584016080      );
  id6 -> SetBinError( xbin,    114.31704085662997      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    32464.815151888932      );
  id6 -> SetBinError( xbin,    142.69179505875994      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    50441.794036049127      );
  id6 -> SetBinError( xbin,    167.92265992909910      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    77664.799342194121      );
  id6 -> SetBinError( xbin,    202.83123735052831      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    108879.70277282898      );
  id6 -> SetBinError( xbin,    242.95569393102241      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    43044.998445248988      );
  id6 -> SetBinError( xbin,    171.89122976203595      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    14929.710134336885      );
  id6 -> SetBinError( xbin,    114.21092645444250      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    5685.2726693737386      );
  id6 -> SetBinError( xbin,    75.802806276986971      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    2116.1850042126621      );
  id6 -> SetBinError( xbin,    48.563523551261682      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    6451.8741690703237      );
  id7 -> SetBinError( xbin,    78.876401794452747      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    8693.5163289534994      );
  id7 -> SetBinError( xbin,    92.435072302135424      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    11227.346344038004      );
  id7 -> SetBinError( xbin,    107.61032166260048      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    13814.623279184118      );
  id7 -> SetBinError( xbin,    120.56160521861250      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    16796.876334695811      );
  id7 -> SetBinError( xbin,    136.25916364066356      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    19829.414295624894      );
  id7 -> SetBinError( xbin,    149.35765055575456      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    22646.656392934077      );
  id7 -> SetBinError( xbin,    161.80494011923744      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    25747.644964685645      );
  id7 -> SetBinError( xbin,    176.12049362159587      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    28920.501384398100      );
  id7 -> SetBinError( xbin,    188.99755851176670      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    31369.654636718049      );
  id7 -> SetBinError( xbin,    198.36921417749895      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    33856.801222366856      );
  id7 -> SetBinError( xbin,    209.52795541235892      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    35397.554452057389      );
  id7 -> SetBinError( xbin,    214.64704726815668      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    37239.137029745958      );
  id7 -> SetBinError( xbin,    221.01262119394644      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    38674.213260319018      );
  id7 -> SetBinError( xbin,    225.06028429848661      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    39187.096465727656      );
  id7 -> SetBinError( xbin,    226.44017751128203      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    39063.683235178571      );
  id7 -> SetBinError( xbin,    224.26065374807186      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    39249.844403537507      );
  id7 -> SetBinError( xbin,    225.42377520759160      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    37711.556891579727      );
  id7 -> SetBinError( xbin,    219.77814075962081      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    36769.104632012000      );
  id7 -> SetBinError( xbin,    217.98757660766279      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    34434.273832092651      );
  id7 -> SetBinError( xbin,    206.96233892279861      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    32163.512731919556      );
  id7 -> SetBinError( xbin,    198.44162111506046      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    29858.242816832790      );
  id7 -> SetBinError( xbin,    190.03962076677297      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    26535.565989351740      );
  id7 -> SetBinError( xbin,    174.55824374541348      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    23731.564282225390      );
  id7 -> SetBinError( xbin,    164.46766608227279      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    20599.033007379283      );
  id7 -> SetBinError( xbin,    150.68694121349492      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    17214.014426041467      );
  id7 -> SetBinError( xbin,    136.53560775337073      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    14238.474470639547      );
  id7 -> SetBinError( xbin,    121.88830061209647      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    11531.383869875563      );
  id7 -> SetBinError( xbin,    107.15061269887437      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    8902.1012726213012      );
  id7 -> SetBinError( xbin,    93.958229374734898      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    6674.1800760809201      );
  id7 -> SetBinError( xbin,    79.777705218314409      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    4171.5016815846966      );
  id8 -> SetBinError( xbin,    25.302070878678787      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    7406.8554063695328      );
  id8 -> SetBinError( xbin,    33.191593773670022      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    6471.9154096075526      );
  id8 -> SetBinError( xbin,    30.666701585871674      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    5682.5832435598622      );
  id8 -> SetBinError( xbin,    28.106422921808605      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    5014.6477810644501      );
  id8 -> SetBinError( xbin,    26.161896608769791      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    4399.1545766778954      );
  id8 -> SetBinError( xbin,    24.184553656520894      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    3870.1792221935548      );
  id8 -> SetBinError( xbin,    22.529628352997836      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    3434.5597970829804      );
  id8 -> SetBinError( xbin,    20.821871773311262      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    3061.1221608394976      );
  id8 -> SetBinError( xbin,    19.284326358500529      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    2696.0484826044176      );
  id8 -> SetBinError( xbin,    17.780456201250146      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    2385.8017567835445      );
  id8 -> SetBinError( xbin,    16.444292629281588      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    2167.1662656761764      );
  id8 -> SetBinError( xbin,    15.533209542861842      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    1930.5144523710835      );
  id8 -> SetBinError( xbin,    14.463560195372116      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    1755.9900757224348      );
  id8 -> SetBinError( xbin,    13.655073165164092      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    1595.6508716465171      );
  id8 -> SetBinError( xbin,    12.932810913152549      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    1440.1084493623357      );
  id8 -> SetBinError( xbin,    12.029988208255331      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1326.7759919521941      );
  id8 -> SetBinError( xbin,    11.647395371796803      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1195.2271735676632      );
  id8 -> SetBinError( xbin,    10.984795229515061      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1083.8040138600272      );
  id8 -> SetBinError( xbin,    10.201629159790491      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1020.6303703655194      );
  id8 -> SetBinError( xbin,    10.024964726867413      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    914.50106360111499      );
  id8 -> SetBinError( xbin,    9.4476866520158449      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    849.68152508971730      );
  id8 -> SetBinError( xbin,    8.8966344156267780      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    780.95845932363056      );
  id8 -> SetBinError( xbin,    8.5367477214728638      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    709.37947726756556      );
  id8 -> SetBinError( xbin,    8.0187527665543321      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    668.65185218598185      );
  id8 -> SetBinError( xbin,    7.7142142733968386      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    589.31310403510349      );
  id8 -> SetBinError( xbin,    7.2112607579807024      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    553.62233025027126      );
  id8 -> SetBinError( xbin,    6.8718458294702094      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    513.44398610263158      );
  id8 -> SetBinError( xbin,    6.6165770171246701      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
