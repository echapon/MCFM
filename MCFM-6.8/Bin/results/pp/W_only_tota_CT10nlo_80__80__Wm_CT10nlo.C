// Cross-section is:      1919512.4852785787 +/-          829.4777934053)

 // Contribution from parton sub-processes:
//        GG     |           0.00000    0.00%
//        GQ     |      -53021.35491   -2.76%
//        GQB    |      -45354.67537   -2.36%
//        QG     |      -50824.99038   -2.65%
//        QBG    |      -43548.00914   -2.27%
//        QQ     |           0.00000    0.00%
//        QBQB   |           0.00000    0.00%
//        QQB    |      974940.02421   50.79%
//        QBQ    |     1145755.13111   59.69%

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
//Wm_CT10nlo                      [runstring]  
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
  mcfmhisto = new TFile("W_only_tota_CT10nlo_80__80__Wm_CT10nlo.root", "recreate");
  mcfmhisto -> cd();
  histos = new TObjArray(0);


  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id1", "W rapidity", 60,   -6.00000,    6.00000);

  id1 -> GetXaxis() -> SetTitle("W rapidity");
  id1 -> GetYaxis() -> SetTitle(" d#sigma/dW rapidity [fb]");

  id1 -> GetYaxis() -> SetTitleOffset(1.2);
  id1 -> SetStats(false);
   int xbin = id1->FindBin(  -4.0999999999999996      );
  id1 -> SetBinContent( xbin,    4.4366013602753088E-003 );
  id1 -> SetBinError( xbin,    1.5661005010397841E-002 );
   int xbin = id1->FindBin(  -3.8999999999999999      );
  id1 -> SetBinContent( xbin,    14.850701493715219      );
  id1 -> SetBinError( xbin,    3.7279228384981309      );
   int xbin = id1->FindBin(  -3.6999999999999997      );
  id1 -> SetBinContent( xbin,    332.04048875850521      );
  id1 -> SetBinError( xbin,    44.341501760546073      );
   int xbin = id1->FindBin(  -3.5000000000000000      );
  id1 -> SetBinContent( xbin,    2575.4363942548480      );
  id1 -> SetBinError( xbin,    157.25004088767238      );
   int xbin = id1->FindBin(  -3.2999999999999998      );
  id1 -> SetBinContent( xbin,    9700.0468314682203      );
  id1 -> SetBinError( xbin,    433.73845981055518      );
   int xbin = id1->FindBin(  -3.0999999999999996      );
  id1 -> SetBinContent( xbin,    31510.524492132921      );
  id1 -> SetBinError( xbin,    720.68278530838052      );
   int xbin = id1->FindBin(  -2.8999999999999999      );
  id1 -> SetBinContent( xbin,    71006.078212454551      );
  id1 -> SetBinError( xbin,    1150.3846097021139      );
   int xbin = id1->FindBin(  -2.6999999999999997      );
  id1 -> SetBinContent( xbin,    136678.22086305308      );
  id1 -> SetBinError( xbin,    1358.2393941499356      );
   int xbin = id1->FindBin(  -2.5000000000000000      );
  id1 -> SetBinContent( xbin,    207912.67335839116      );
  id1 -> SetBinError( xbin,    1577.6214781832134      );
   int xbin = id1->FindBin(  -2.2999999999999998      );
  id1 -> SetBinContent( xbin,    287629.12051794602      );
  id1 -> SetBinError( xbin,    1920.2736219744647      );
   int xbin = id1->FindBin(  -2.0999999999999996      );
  id1 -> SetBinContent( xbin,    354525.74759820360      );
  id1 -> SetBinError( xbin,    2046.4066121404453      );
   int xbin = id1->FindBin(  -1.8999999999999995      );
  id1 -> SetBinContent( xbin,    396023.69900184707      );
  id1 -> SetBinError( xbin,    1993.0694361326862      );
   int xbin = id1->FindBin(  -1.7000000000000002      );
  id1 -> SetBinContent( xbin,    410466.82049510279      );
  id1 -> SetBinError( xbin,    2017.2598778091419      );
   int xbin = id1->FindBin(  -1.5000000000000000      );
  id1 -> SetBinContent( xbin,    414042.61954465479      );
  id1 -> SetBinError( xbin,    2019.2761339903436      );
   int xbin = id1->FindBin(  -1.2999999999999998      );
  id1 -> SetBinContent( xbin,    417756.53843847115      );
  id1 -> SetBinError( xbin,    1990.8392472812773      );
   int xbin = id1->FindBin(  -1.0999999999999996      );
  id1 -> SetBinContent( xbin,    416261.50130464102      );
  id1 -> SetBinError( xbin,    1976.2267802354559      );
   int xbin = id1->FindBin( -0.89999999999999947      );
  id1 -> SetBinContent( xbin,    419507.36175992846      );
  id1 -> SetBinError( xbin,    1950.5467696337412      );
   int xbin = id1->FindBin( -0.69999999999999929      );
  id1 -> SetBinContent( xbin,    418415.73093105282      );
  id1 -> SetBinError( xbin,    2287.0575261491672      );
   int xbin = id1->FindBin( -0.50000000000000000      );
  id1 -> SetBinContent( xbin,    415480.64801503770      );
  id1 -> SetBinError( xbin,    2199.2517327547616      );
   int xbin = id1->FindBin( -0.29999999999999982      );
  id1 -> SetBinContent( xbin,    407052.44213776285      );
  id1 -> SetBinError( xbin,    1966.1457894906703      );
   int xbin = id1->FindBin(  -9.9999999999999645E-002 );
  id1 -> SetBinContent( xbin,    410978.08159264293      );
  id1 -> SetBinError( xbin,    1925.9693959987244      );
   int xbin = id1->FindBin(  0.10000000000000053      );
  id1 -> SetBinContent( xbin,    403016.37815757003      );
  id1 -> SetBinError( xbin,    1905.4069553087106      );
   int xbin = id1->FindBin(  0.30000000000000071      );
  id1 -> SetBinContent( xbin,    398290.24125883204      );
  id1 -> SetBinError( xbin,    1892.5063927298270      );
   int xbin = id1->FindBin(  0.50000000000000000      );
  id1 -> SetBinContent( xbin,    392283.60443042044      );
  id1 -> SetBinError( xbin,    1892.6058321516250      );
   int xbin = id1->FindBin(  0.70000000000000018      );
  id1 -> SetBinContent( xbin,    385157.41436258610      );
  id1 -> SetBinError( xbin,    1898.9944444729770      );
   int xbin = id1->FindBin(  0.90000000000000036      );
  id1 -> SetBinContent( xbin,    372677.12303598260      );
  id1 -> SetBinError( xbin,    1867.0115809349361      );
   int xbin = id1->FindBin(   1.1000000000000005      );
  id1 -> SetBinContent( xbin,    364597.33190743148      );
  id1 -> SetBinError( xbin,    1879.3838061634322      );
   int xbin = id1->FindBin(   1.3000000000000007      );
  id1 -> SetBinContent( xbin,    354862.75475042639      );
  id1 -> SetBinError( xbin,    1861.6312840115254      );
   int xbin = id1->FindBin(   1.5000000000000000      );
  id1 -> SetBinContent( xbin,    340799.37006859347      );
  id1 -> SetBinError( xbin,    1824.6209754519937      );
   int xbin = id1->FindBin(   1.7000000000000002      );
  id1 -> SetBinContent( xbin,    320524.53165320453      );
  id1 -> SetBinError( xbin,    1792.6981239571628      );
   int xbin = id1->FindBin(   1.9000000000000004      );
  id1 -> SetBinContent( xbin,    300260.04747100698      );
  id1 -> SetBinError( xbin,    1776.3711341713595      );
   int xbin = id1->FindBin(   2.0999999999999996      );
  id1 -> SetBinContent( xbin,    252386.31512365706      );
  id1 -> SetBinError( xbin,    1663.0420950523896      );
   int xbin = id1->FindBin(   2.3000000000000007      );
  id1 -> SetBinContent( xbin,    194587.75401953814      );
  id1 -> SetBinError( xbin,    1497.0306177932346      );
   int xbin = id1->FindBin(   2.5000000000000000      );
  id1 -> SetBinContent( xbin,    138391.24919353615      );
  id1 -> SetBinError( xbin,    1291.7486724757841      );
   int xbin = id1->FindBin(   2.7000000000000011      );
  id1 -> SetBinContent( xbin,    84155.864382461936      );
  id1 -> SetBinError( xbin,    1144.6076111626971      );
   int xbin = id1->FindBin(   2.9000000000000004      );
  id1 -> SetBinContent( xbin,    43625.600700408046      );
  id1 -> SetBinError( xbin,    880.53061301031266      );
   int xbin = id1->FindBin(   3.0999999999999996      );
  id1 -> SetBinContent( xbin,    18233.938136279026      );
  id1 -> SetBinError( xbin,    557.46270713704610      );
   int xbin = id1->FindBin(   3.3000000000000007      );
  id1 -> SetBinContent( xbin,    5413.5518131906101      );
  id1 -> SetBinError( xbin,    268.70058071400246      );
   int xbin = id1->FindBin(   3.5000000000000000      );
  id1 -> SetBinContent( xbin,    1234.1291895047209      );
  id1 -> SetBinError( xbin,    85.508682382588930      );
   int xbin = id1->FindBin(   3.7000000000000011      );
  id1 -> SetBinContent( xbin,    148.23333171697010      );
  id1 -> SetBinError( xbin,    13.936729913613251      );
   int xbin = id1->FindBin(   3.9000000000000004      );
  id1 -> SetBinContent( xbin,    12.032144643810598      );
  id1 -> SetBinError( xbin,    4.5283473393525231      );
   int xbin = id1->FindBin(   4.1000000000000014      );
  id1 -> SetBinContent( xbin,    6.1610563342618004E-003 );
  id1 -> SetBinError( xbin,    1.1092865779782130E-002 );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id2", "W ps-rap", 60,   -6.00000,    6.00000);

  id2 -> GetXaxis() -> SetTitle("W ps-rap");
  id2 -> GetYaxis() -> SetTitle(" d#sigma/dW ps-rap [fb]");

  id2 -> GetYaxis() -> SetTitleOffset(1.2);
  id2 -> SetStats(false);
   int xbin = id2->FindBin(  -5.9000000000000004      );
  id2 -> SetBinContent( xbin,    827311.51058055018      );
  id2 -> SetBinError( xbin,    8903.8974181779377      );
   int xbin = id2->FindBin(  -5.7000000000000002      );
  id2 -> SetBinContent( xbin,    785320.73850199650      );
  id2 -> SetBinError( xbin,    6693.0879690340562      );
   int xbin = id2->FindBin(  -5.5000000000000000      );
  id2 -> SetBinContent( xbin,    750760.36425650283      );
  id2 -> SetBinError( xbin,    7008.6240850149343      );
   int xbin = id2->FindBin(  -5.2999999999999998      );
  id2 -> SetBinContent( xbin,    717132.65026341740      );
  id2 -> SetBinError( xbin,    6167.1712934917377      );
   int xbin = id2->FindBin(  -5.0999999999999996      );
  id2 -> SetBinContent( xbin,    687337.06889686338      );
  id2 -> SetBinError( xbin,    5687.0459373702452      );
   int xbin = id2->FindBin(  -4.9000000000000004      );
  id2 -> SetBinContent( xbin,    649752.44309388613      );
  id2 -> SetBinError( xbin,    5780.1345326893106      );
   int xbin = id2->FindBin(  -4.7000000000000002      );
  id2 -> SetBinContent( xbin,    612639.28934259468      );
  id2 -> SetBinError( xbin,    4751.4512856632109      );
   int xbin = id2->FindBin(  -4.5000000000000000      );
  id2 -> SetBinContent( xbin,    574201.32999160117      );
  id2 -> SetBinError( xbin,    3917.1051163187003      );
   int xbin = id2->FindBin(  -4.2999999999999998      );
  id2 -> SetBinContent( xbin,    541724.91077981435      );
  id2 -> SetBinError( xbin,    3994.0667248450304      );
   int xbin = id2->FindBin(  -4.0999999999999996      );
  id2 -> SetBinContent( xbin,    510893.20153404749      );
  id2 -> SetBinError( xbin,    3604.8592429244650      );
   int xbin = id2->FindBin(  -3.8999999999999999      );
  id2 -> SetBinContent( xbin,    470607.31120122189      );
  id2 -> SetBinError( xbin,    2752.2025804200443      );
   int xbin = id2->FindBin(  -3.6999999999999997      );
  id2 -> SetBinContent( xbin,    440645.47160821653      );
  id2 -> SetBinError( xbin,    2979.9765015106132      );
   int xbin = id2->FindBin(  -3.5000000000000000      );
  id2 -> SetBinContent( xbin,    407949.86396824382      );
  id2 -> SetBinError( xbin,    2558.3726069138975      );
   int xbin = id2->FindBin(  -3.2999999999999998      );
  id2 -> SetBinContent( xbin,    378227.60606088926      );
  id2 -> SetBinError( xbin,    2543.9752750559082      );
   int xbin = id2->FindBin(  -3.0999999999999996      );
  id2 -> SetBinContent( xbin,    344254.74164608400      );
  id2 -> SetBinError( xbin,    1901.6501705470489      );
   int xbin = id2->FindBin(  -2.8999999999999999      );
  id2 -> SetBinContent( xbin,    320253.39559938083      );
  id2 -> SetBinError( xbin,    2679.2216073334489      );
   int xbin = id2->FindBin(  -2.6999999999999997      );
  id2 -> SetBinContent( xbin,    281884.52923674427      );
  id2 -> SetBinError( xbin,    1621.8765295121786      );
   int xbin = id2->FindBin(  -2.5000000000000000      );
  id2 -> SetBinContent( xbin,    254950.71368148120      );
  id2 -> SetBinError( xbin,    1582.7939947311611      );
   int xbin = id2->FindBin(  -2.2999999999999998      );
  id2 -> SetBinContent( xbin,    226854.77407867729      );
  id2 -> SetBinError( xbin,    1366.0604510332994      );
   int xbin = id2->FindBin(  -2.0999999999999996      );
  id2 -> SetBinContent( xbin,    202436.31544195814      );
  id2 -> SetBinError( xbin,    1252.1173324801043      );
   int xbin = id2->FindBin(  -1.8999999999999995      );
  id2 -> SetBinContent( xbin,    175479.72315593538      );
  id2 -> SetBinError( xbin,    1149.2489041935169      );
   int xbin = id2->FindBin(  -1.7000000000000002      );
  id2 -> SetBinContent( xbin,    154852.84622030077      );
  id2 -> SetBinError( xbin,    1171.9413129902086      );
   int xbin = id2->FindBin(  -1.5000000000000000      );
  id2 -> SetBinContent( xbin,    135950.88026824276      );
  id2 -> SetBinError( xbin,    922.28735155157847      );
   int xbin = id2->FindBin(  -1.2999999999999998      );
  id2 -> SetBinContent( xbin,    119124.92955326936      );
  id2 -> SetBinError( xbin,    1060.1759010321098      );
   int xbin = id2->FindBin(  -1.0999999999999996      );
  id2 -> SetBinContent( xbin,    104362.51831726458      );
  id2 -> SetBinError( xbin,    786.05414418408282      );
   int xbin = id2->FindBin( -0.89999999999999947      );
  id2 -> SetBinContent( xbin,    92220.221641618758      );
  id2 -> SetBinError( xbin,    717.10380047879494      );
   int xbin = id2->FindBin( -0.69999999999999929      );
  id2 -> SetBinContent( xbin,    82157.929179573257      );
  id2 -> SetBinError( xbin,    673.75417380013118      );
   int xbin = id2->FindBin( -0.50000000000000000      );
  id2 -> SetBinContent( xbin,    74379.963305313388      );
  id2 -> SetBinError( xbin,    672.88500023860797      );
   int xbin = id2->FindBin( -0.29999999999999982      );
  id2 -> SetBinContent( xbin,    68735.601263420409      );
  id2 -> SetBinError( xbin,    631.63654798468440      );
   int xbin = id2->FindBin(  -9.9999999999999645E-002 );
  id2 -> SetBinContent( xbin,    66964.742733960826      );
  id2 -> SetBinError( xbin,    634.16631236889771      );
   int xbin = id2->FindBin(  0.10000000000000053      );
  id2 -> SetBinContent( xbin,    66109.159458526614      );
  id2 -> SetBinError( xbin,    550.08744268751411      );
   int xbin = id2->FindBin(  0.30000000000000071      );
  id2 -> SetBinContent( xbin,    68925.151068680672      );
  id2 -> SetBinError( xbin,    615.51262954653077      );
   int xbin = id2->FindBin(  0.50000000000000000      );
  id2 -> SetBinContent( xbin,    71883.485506354686      );
  id2 -> SetBinError( xbin,    626.81461556386796      );
   int xbin = id2->FindBin(  0.70000000000000018      );
  id2 -> SetBinContent( xbin,    79086.131790444939      );
  id2 -> SetBinError( xbin,    708.83378112761523      );
   int xbin = id2->FindBin(  0.90000000000000036      );
  id2 -> SetBinContent( xbin,    88399.204758021850      );
  id2 -> SetBinError( xbin,    729.71902719579907      );
   int xbin = id2->FindBin(   1.1000000000000005      );
  id2 -> SetBinContent( xbin,    98927.688094006255      );
  id2 -> SetBinError( xbin,    817.75859635915890      );
   int xbin = id2->FindBin(   1.3000000000000007      );
  id2 -> SetBinContent( xbin,    112054.52136042854      );
  id2 -> SetBinError( xbin,    880.64843150615013      );
   int xbin = id2->FindBin(   1.5000000000000000      );
  id2 -> SetBinContent( xbin,    126523.55459748615      );
  id2 -> SetBinError( xbin,    990.27591757721325      );
   int xbin = id2->FindBin(   1.7000000000000002      );
  id2 -> SetBinContent( xbin,    143742.34479443636      );
  id2 -> SetBinError( xbin,    959.73744864469063      );
   int xbin = id2->FindBin(   1.9000000000000004      );
  id2 -> SetBinContent( xbin,    163627.93571437857      );
  id2 -> SetBinError( xbin,    1250.7716985984964      );
   int xbin = id2->FindBin(   2.0999999999999996      );
  id2 -> SetBinContent( xbin,    185022.66982995876      );
  id2 -> SetBinError( xbin,    1233.3835298289446      );
   int xbin = id2->FindBin(   2.3000000000000007      );
  id2 -> SetBinContent( xbin,    206114.79049568716      );
  id2 -> SetBinError( xbin,    1327.6195789664609      );
   int xbin = id2->FindBin(   2.5000000000000000      );
  id2 -> SetBinContent( xbin,    230033.84403300635      );
  id2 -> SetBinError( xbin,    1601.8327782945103      );
   int xbin = id2->FindBin(   2.7000000000000011      );
  id2 -> SetBinContent( xbin,    258500.02551784395      );
  id2 -> SetBinError( xbin,    1667.3093133565844      );
   int xbin = id2->FindBin(   2.9000000000000004      );
  id2 -> SetBinContent( xbin,    286515.02952585195      );
  id2 -> SetBinError( xbin,    3350.5809307030590      );
   int xbin = id2->FindBin(   3.0999999999999996      );
  id2 -> SetBinContent( xbin,    308609.80252646480      );
  id2 -> SetBinError( xbin,    1999.5671857704544      );
   int xbin = id2->FindBin(   3.3000000000000007      );
  id2 -> SetBinContent( xbin,    332855.20773632382      );
  id2 -> SetBinError( xbin,    2323.1657558518468      );
   int xbin = id2->FindBin(   3.5000000000000000      );
  id2 -> SetBinContent( xbin,    363276.51425686537      );
  id2 -> SetBinError( xbin,    2507.0230385710124      );
   int xbin = id2->FindBin(   3.7000000000000011      );
  id2 -> SetBinContent( xbin,    395844.48763381876      );
  id2 -> SetBinError( xbin,    3158.3512341972719      );
   int xbin = id2->FindBin(   3.9000000000000004      );
  id2 -> SetBinContent( xbin,    421255.27679382428      );
  id2 -> SetBinError( xbin,    2958.4085057354750      );
   int xbin = id2->FindBin(   4.1000000000000014      );
  id2 -> SetBinContent( xbin,    446482.53262824035      );
  id2 -> SetBinError( xbin,    3216.2811546869339      );
   int xbin = id2->FindBin(   4.3000000000000007      );
  id2 -> SetBinContent( xbin,    480220.74308780156      );
  id2 -> SetBinError( xbin,    4024.9388433385643      );
   int xbin = id2->FindBin(   4.5000000000000000      );
  id2 -> SetBinContent( xbin,    510025.92077535391      );
  id2 -> SetBinError( xbin,    5391.9429800500038      );
   int xbin = id2->FindBin(   4.7000000000000011      );
  id2 -> SetBinContent( xbin,    532224.91991184547      );
  id2 -> SetBinError( xbin,    3932.9776354651003      );
   int xbin = id2->FindBin(   4.9000000000000004      );
  id2 -> SetBinContent( xbin,    570578.31118560571      );
  id2 -> SetBinError( xbin,    5132.6048693182793      );
   int xbin = id2->FindBin(   5.1000000000000014      );
  id2 -> SetBinContent( xbin,    592631.75592578202      );
  id2 -> SetBinError( xbin,    6213.9785034933693      );
   int xbin = id2->FindBin(   5.3000000000000007      );
  id2 -> SetBinContent( xbin,    623628.56773544243      );
  id2 -> SetBinError( xbin,    5998.9406070530422      );
   int xbin = id2->FindBin(   5.5000000000000000      );
  id2 -> SetBinContent( xbin,    658743.36636190233      );
  id2 -> SetBinError( xbin,    8434.9276526531048      );
   int xbin = id2->FindBin(   5.7000000000000011      );
  id2 -> SetBinContent( xbin,    680439.94645074662      );
  id2 -> SetBinError( xbin,    6679.2658282985140      );
   int xbin = id2->FindBin(   5.9000000000000004      );
  id2 -> SetBinContent( xbin,    708006.63891421212      );
  id2 -> SetBinError( xbin,    9658.5893837822641      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id3", "y(lep)", 60,   -6.00000,    6.00000);

  id3 -> GetXaxis() -> SetTitle("y(lep)");
  id3 -> GetYaxis() -> SetTitle(" d#sigma/dy(lep) [fb]");

  id3 -> GetYaxis() -> SetTitleOffset(1.2);
  id3 -> SetStats(false);
   int xbin = id3->FindBin(  -2.8999999999999999      );
  id3 -> SetBinContent( xbin,    284338.12899518461      );
  id3 -> SetBinError( xbin,    2406.3595648519427      );
   int xbin = id3->FindBin(  -2.6999999999999997      );
  id3 -> SetBinContent( xbin,    311525.49372135772      );
  id3 -> SetBinError( xbin,    2264.8924740561288      );
   int xbin = id3->FindBin(  -2.5000000000000000      );
  id3 -> SetBinContent( xbin,    329010.19711702381      );
  id3 -> SetBinError( xbin,    2188.3770023615471      );
   int xbin = id3->FindBin(  -2.2999999999999998      );
  id3 -> SetBinContent( xbin,    336753.66829146049      );
  id3 -> SetBinError( xbin,    2120.0587002648272      );
   int xbin = id3->FindBin(  -2.0999999999999996      );
  id3 -> SetBinContent( xbin,    348682.61759342276      );
  id3 -> SetBinError( xbin,    2003.0244933797251      );
   int xbin = id3->FindBin(  -1.8999999999999995      );
  id3 -> SetBinContent( xbin,    350957.80924967024      );
  id3 -> SetBinError( xbin,    1949.9147573930923      );
   int xbin = id3->FindBin(  -1.7000000000000002      );
  id3 -> SetBinContent( xbin,    356838.41753050697      );
  id3 -> SetBinError( xbin,    1947.0954422770999      );
   int xbin = id3->FindBin(  -1.5000000000000000      );
  id3 -> SetBinContent( xbin,    363929.77621186449      );
  id3 -> SetBinError( xbin,    1938.5308462159840      );
   int xbin = id3->FindBin(  -1.2999999999999998      );
  id3 -> SetBinContent( xbin,    362927.99325894704      );
  id3 -> SetBinError( xbin,    1917.9044606964801      );
   int xbin = id3->FindBin(  -1.0999999999999996      );
  id3 -> SetBinContent( xbin,    367121.25453046302      );
  id3 -> SetBinError( xbin,    1806.9876225416328      );
   int xbin = id3->FindBin( -0.89999999999999947      );
  id3 -> SetBinContent( xbin,    367124.84936651227      );
  id3 -> SetBinError( xbin,    1907.0772935552054      );
   int xbin = id3->FindBin( -0.69999999999999929      );
  id3 -> SetBinContent( xbin,    365855.51091996580      );
  id3 -> SetBinError( xbin,    1927.0213501675235      );
   int xbin = id3->FindBin( -0.50000000000000000      );
  id3 -> SetBinContent( xbin,    363914.69675960758      );
  id3 -> SetBinError( xbin,    1951.2337098325215      );
   int xbin = id3->FindBin( -0.29999999999999982      );
  id3 -> SetBinContent( xbin,    362815.69069286180      );
  id3 -> SetBinError( xbin,    1803.7107956683706      );
   int xbin = id3->FindBin(  -9.9999999999999645E-002 );
  id3 -> SetBinContent( xbin,    360197.13066233695      );
  id3 -> SetBinError( xbin,    1866.8782618173341      );
   int xbin = id3->FindBin(  0.10000000000000053      );
  id3 -> SetBinContent( xbin,    357825.82137384615      );
  id3 -> SetBinError( xbin,    1865.6439435256445      );
   int xbin = id3->FindBin(  0.30000000000000071      );
  id3 -> SetBinContent( xbin,    352486.00383974082      );
  id3 -> SetBinError( xbin,    1747.2633429487055      );
   int xbin = id3->FindBin(  0.50000000000000000      );
  id3 -> SetBinContent( xbin,    345501.89107172925      );
  id3 -> SetBinError( xbin,    1763.5334740555390      );
   int xbin = id3->FindBin(  0.70000000000000018      );
  id3 -> SetBinContent( xbin,    341322.19449657679      );
  id3 -> SetBinError( xbin,    1793.6307977377569      );
   int xbin = id3->FindBin(  0.90000000000000036      );
  id3 -> SetBinContent( xbin,    335047.70520977781      );
  id3 -> SetBinError( xbin,    2100.5041100949156      );
   int xbin = id3->FindBin(   1.1000000000000005      );
  id3 -> SetBinContent( xbin,    320807.37122921576      );
  id3 -> SetBinError( xbin,    2098.0134539345131      );
   int xbin = id3->FindBin(   1.3000000000000007      );
  id3 -> SetBinContent( xbin,    312808.41591918276      );
  id3 -> SetBinError( xbin,    1818.4543767238913      );
   int xbin = id3->FindBin(   1.5000000000000000      );
  id3 -> SetBinContent( xbin,    303134.65772018261      );
  id3 -> SetBinError( xbin,    1807.8821320308664      );
   int xbin = id3->FindBin(   1.7000000000000002      );
  id3 -> SetBinContent( xbin,    286982.63683120086      );
  id3 -> SetBinError( xbin,    1846.3628601293155      );
   int xbin = id3->FindBin(   1.9000000000000004      );
  id3 -> SetBinContent( xbin,    279215.20784849959      );
  id3 -> SetBinError( xbin,    1835.8904147213627      );
   int xbin = id3->FindBin(   2.0999999999999996      );
  id3 -> SetBinContent( xbin,    267851.50066574587      );
  id3 -> SetBinError( xbin,    1801.2726438876186      );
   int xbin = id3->FindBin(   2.3000000000000007      );
  id3 -> SetBinContent( xbin,    249854.97296540305      );
  id3 -> SetBinError( xbin,    1860.2089991874202      );
   int xbin = id3->FindBin(   2.5000000000000000      );
  id3 -> SetBinContent( xbin,    227108.75129070692      );
  id3 -> SetBinError( xbin,    1866.2809913779663      );
   int xbin = id3->FindBin(   2.7000000000000011      );
  id3 -> SetBinContent( xbin,    203963.36667154764      );
  id3 -> SetBinError( xbin,    1882.9180196966711      );
   int xbin = id3->FindBin(   2.9000000000000004      );
  id3 -> SetBinContent( xbin,    182623.92637345853      );
  id3 -> SetBinError( xbin,    2008.4748045545925      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id4", "etalab(lep)", 60,   -3.00000,    3.00000);

  id4 -> GetXaxis() -> SetTitle("etalab(lep)");
  id4 -> GetYaxis() -> SetTitle(" d#sigma/detalab(lep) [fb]");

  id4 -> GetYaxis() -> SetTitleOffset(1.2);
  id4 -> SetStats(false);
   int xbin = id4->FindBin(  -2.5499999999999998      );
  id4 -> SetBinContent( xbin,    94062.500530815814      );
  id4 -> SetBinError( xbin,    2821.0806951136719      );
   int xbin = id4->FindBin(  -2.4500000000000002      );
  id4 -> SetBinContent( xbin,    288066.01404609112      );
  id4 -> SetBinError( xbin,    3847.5038733770557      );
   int xbin = id4->FindBin(  -2.3500000000000001      );
  id4 -> SetBinContent( xbin,    294327.91167006403      );
  id4 -> SetBinError( xbin,    3994.8075641307823      );
   int xbin = id4->FindBin(  -2.2500000000000000      );
  id4 -> SetBinContent( xbin,    312651.36574818566      );
  id4 -> SetBinError( xbin,    4505.8556456758670      );
   int xbin = id4->FindBin(  -2.1499999999999999      );
  id4 -> SetBinContent( xbin,    318526.62456099410      );
  id4 -> SetBinError( xbin,    4221.7832145741186      );
   int xbin = id4->FindBin(  -2.0499999999999998      );
  id4 -> SetBinContent( xbin,    321693.17802027799      );
  id4 -> SetBinError( xbin,    3442.4541273026171      );
   int xbin = id4->FindBin(  -1.9500000000000000      );
  id4 -> SetBinContent( xbin,    334933.04241123673      );
  id4 -> SetBinError( xbin,    3488.7335197652492      );
   int xbin = id4->FindBin(  -1.8499999999999999      );
  id4 -> SetBinContent( xbin,    335759.45152447693      );
  id4 -> SetBinError( xbin,    4212.3359630328787      );
   int xbin = id4->FindBin(  -1.7500000000000000      );
  id4 -> SetBinContent( xbin,    344256.53891270730      );
  id4 -> SetBinError( xbin,    4178.3089655779568      );
   int xbin = id4->FindBin(  -1.6499999999999999      );
  id4 -> SetBinContent( xbin,    342965.38014084887      );
  id4 -> SetBinError( xbin,    3555.8480475878832      );
   int xbin = id4->FindBin(  -1.5499999999999998      );
  id4 -> SetBinContent( xbin,    355660.96973412950      );
  id4 -> SetBinError( xbin,    3424.4311102149413      );
   int xbin = id4->FindBin(  -1.4500000000000000      );
  id4 -> SetBinContent( xbin,    351973.04513453710      );
  id4 -> SetBinError( xbin,    3113.3942378367715      );
   int xbin = id4->FindBin(  -1.3499999999999999      );
  id4 -> SetBinContent( xbin,    353943.80415090476      );
  id4 -> SetBinError( xbin,    3157.1961571140819      );
   int xbin = id4->FindBin(  -1.2500000000000000      );
  id4 -> SetBinContent( xbin,    355936.54636508483      );
  id4 -> SetBinError( xbin,    3111.2191943882431      );
   int xbin = id4->FindBin(  -1.1499999999999999      );
  id4 -> SetBinContent( xbin,    357218.09197350807      );
  id4 -> SetBinError( xbin,    3124.6857525463497      );
   int xbin = id4->FindBin(  -1.0499999999999998      );
  id4 -> SetBinContent( xbin,    363042.07647178340      );
  id4 -> SetBinError( xbin,    3011.4940478254680      );
   int xbin = id4->FindBin( -0.94999999999999973      );
  id4 -> SetBinContent( xbin,    364148.57259855792      );
  id4 -> SetBinError( xbin,    2918.6648909709825      );
   int xbin = id4->FindBin( -0.85000000000000009      );
  id4 -> SetBinContent( xbin,    362377.91781566350      );
  id4 -> SetBinError( xbin,    2908.6612378802897      );
   int xbin = id4->FindBin( -0.75000000000000000      );
  id4 -> SetBinContent( xbin,    366984.69975457550      );
  id4 -> SetBinError( xbin,    2923.8412887930936      );
   int xbin = id4->FindBin( -0.64999999999999991      );
  id4 -> SetBinContent( xbin,    365875.11083751649      );
  id4 -> SetBinError( xbin,    2874.3046649003563      );
   int xbin = id4->FindBin( -0.54999999999999982      );
  id4 -> SetBinContent( xbin,    367309.78259101836      );
  id4 -> SetBinError( xbin,    3171.5549488791817      );
   int xbin = id4->FindBin( -0.44999999999999973      );
  id4 -> SetBinContent( xbin,    372791.14866566495      );
  id4 -> SetBinError( xbin,    4095.3547029867236      );
   int xbin = id4->FindBin( -0.34999999999999964      );
  id4 -> SetBinContent( xbin,    357837.52713193238      );
  id4 -> SetBinError( xbin,    5469.9458308208868      );
   int xbin = id4->FindBin( -0.25000000000000000      );
  id4 -> SetBinContent( xbin,    368565.67005181982      );
  id4 -> SetBinError( xbin,    4610.8446353087820      );
   int xbin = id4->FindBin( -0.14999999999999991      );
  id4 -> SetBinContent( xbin,    365395.04427348467      );
  id4 -> SetBinError( xbin,    2841.5446982407075      );
   int xbin = id4->FindBin(  -4.9999999999999822E-002 );
  id4 -> SetBinContent( xbin,    362805.28819324425      );
  id4 -> SetBinError( xbin,    2814.2043682238295      );
   int xbin = id4->FindBin(   5.0000000000000266E-002 );
  id4 -> SetBinContent( xbin,    367121.84870787186      );
  id4 -> SetBinError( xbin,    2836.4389669618195      );
   int xbin = id4->FindBin(  0.15000000000000036      );
  id4 -> SetBinContent( xbin,    363046.59567958023      );
  id4 -> SetBinError( xbin,    2783.9351885053088      );
   int xbin = id4->FindBin(  0.25000000000000000      );
  id4 -> SetBinContent( xbin,    359306.33255319815      );
  id4 -> SetBinError( xbin,    2758.8220284240165      );
   int xbin = id4->FindBin(  0.35000000000000009      );
  id4 -> SetBinContent( xbin,    358903.01134256145      );
  id4 -> SetBinError( xbin,    2802.6254312995702      );
   int xbin = id4->FindBin(  0.45000000000000018      );
  id4 -> SetBinContent( xbin,    365722.16020472971      );
  id4 -> SetBinError( xbin,    2870.7122732261787      );
   int xbin = id4->FindBin(  0.55000000000000027      );
  id4 -> SetBinContent( xbin,    356964.46690782905      );
  id4 -> SetBinError( xbin,    2983.6308844482382      );
   int xbin = id4->FindBin(  0.65000000000000036      );
  id4 -> SetBinContent( xbin,    354268.54282565648      );
  id4 -> SetBinError( xbin,    2986.1378510992540      );
   int xbin = id4->FindBin(  0.75000000000000000      );
  id4 -> SetBinContent( xbin,    351995.92445651564      );
  id4 -> SetBinError( xbin,    2921.1105618173979      );
   int xbin = id4->FindBin(  0.85000000000000009      );
  id4 -> SetBinContent( xbin,    351033.74566438061      );
  id4 -> SetBinError( xbin,    3017.6713590581048      );
   int xbin = id4->FindBin(  0.95000000000000018      );
  id4 -> SetBinContent( xbin,    347336.79438029911      );
  id4 -> SetBinError( xbin,    3024.8258165522748      );
   int xbin = id4->FindBin(   1.0499999999999998      );
  id4 -> SetBinContent( xbin,    341443.54480834049      );
  id4 -> SetBinError( xbin,    2865.1843510767021      );
   int xbin = id4->FindBin(   1.1500000000000004      );
  id4 -> SetBinContent( xbin,    339474.14335663314      );
  id4 -> SetBinError( xbin,    2985.2992829030477      );
   int xbin = id4->FindBin(   1.2500000000000000      );
  id4 -> SetBinContent( xbin,    341984.35988801287      );
  id4 -> SetBinError( xbin,    3001.3189345667847      );
   int xbin = id4->FindBin(   1.3500000000000005      );
  id4 -> SetBinContent( xbin,    331905.03064689843      );
  id4 -> SetBinError( xbin,    2814.0576968190167      );
   int xbin = id4->FindBin(   1.4500000000000002      );
  id4 -> SetBinContent( xbin,    329464.96181973483      );
  id4 -> SetBinError( xbin,    2837.4778589389643      );
   int xbin = id4->FindBin(   1.5499999999999998      );
  id4 -> SetBinContent( xbin,    319580.09536533454      );
  id4 -> SetBinError( xbin,    2824.8622404797725      );
   int xbin = id4->FindBin(   1.6500000000000004      );
  id4 -> SetBinContent( xbin,    319877.93354970432      );
  id4 -> SetBinError( xbin,    2815.1255806670933      );
   int xbin = id4->FindBin(   1.7500000000000000      );
  id4 -> SetBinContent( xbin,    316471.34068862651      );
  id4 -> SetBinError( xbin,    2773.1084484927592      );
   int xbin = id4->FindBin(   1.8500000000000005      );
  id4 -> SetBinContent( xbin,    308571.58736648492      );
  id4 -> SetBinError( xbin,    2825.5718529946375      );
   int xbin = id4->FindBin(   1.9500000000000002      );
  id4 -> SetBinContent( xbin,    302972.38677740551      );
  id4 -> SetBinError( xbin,    2897.7152448748720      );
   int xbin = id4->FindBin(   2.0500000000000007      );
  id4 -> SetBinContent( xbin,    297869.86483871704      );
  id4 -> SetBinError( xbin,    2961.0471191428524      );
   int xbin = id4->FindBin(   2.1500000000000004      );
  id4 -> SetBinContent( xbin,    290058.34229491046      );
  id4 -> SetBinError( xbin,    2868.5919589707860      );
   int xbin = id4->FindBin(   2.2500000000000000      );
  id4 -> SetBinContent( xbin,    284227.23724327364      );
  id4 -> SetBinError( xbin,    2812.3863737980923      );
   int xbin = id4->FindBin(   2.3500000000000005      );
  id4 -> SetBinContent( xbin,    279754.45853412658      );
  id4 -> SetBinError( xbin,    2808.9536569206161      );
   int xbin = id4->FindBin(   2.4500000000000002      );
  id4 -> SetBinContent( xbin,    275458.74395984173      );
  id4 -> SetBinError( xbin,    2823.2627831615123      );
   int xbin = id4->FindBin(   2.5500000000000007      );
  id4 -> SetBinContent( xbin,    266956.25775480713      );
  id4 -> SetBinError( xbin,    2910.3315718132753      );
   int xbin = id4->FindBin(   2.6500000000000004      );
  id4 -> SetBinContent( xbin,    251645.90083192335      );
  id4 -> SetBinError( xbin,    4303.1127346602298      );
   int xbin = id4->FindBin(   2.7500000000000000      );
  id4 -> SetBinContent( xbin,    256796.40420681928      );
  id4 -> SetBinError( xbin,    4304.2150691630577      );
   int xbin = id4->FindBin(   2.8500000000000005      );
  id4 -> SetBinContent( xbin,    241633.42121028449      );
  id4 -> SetBinError( xbin,    2976.0772543580451      );
   int xbin = id4->FindBin(   2.9500000000000002      );
  id4 -> SetBinContent( xbin,    227289.12893653332      );
  id4 -> SetBinError( xbin,    4218.3696551201901      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id5", "pt(lep)", 50,    0.00000,  100.00000);

  id5 -> GetXaxis() -> SetTitle("pt(lep)");
  id5 -> GetYaxis() -> SetTitle(" d#sigma/dpt(lep) [fb]");

  id5 -> GetYaxis() -> SetTitleOffset(1.2);
  id5 -> SetStats(false);
   int xbin = id5->FindBin(   25.000000000000000      );
  id5 -> SetBinContent( xbin,    28625.619258833551      );
  id5 -> SetBinError( xbin,    331.19910524948875      );
   int xbin = id5->FindBin(   27.000000000000000      );
  id5 -> SetBinContent( xbin,    62499.460726085912      );
  id5 -> SetBinError( xbin,    435.41244139381826      );
   int xbin = id5->FindBin(   29.000000000000000      );
  id5 -> SetBinContent( xbin,    71382.072935881195      );
  id5 -> SetBinError( xbin,    538.03941281244670      );
   int xbin = id5->FindBin(   31.000000000000000      );
  id5 -> SetBinContent( xbin,    81600.002158133546      );
  id5 -> SetBinError( xbin,    591.76351775496141      );
   int xbin = id5->FindBin(   33.000000000000000      );
  id5 -> SetBinContent( xbin,    91828.107800859216      );
  id5 -> SetBinError( xbin,    656.34033333439447      );
   int xbin = id5->FindBin(   35.000000000000000      );
  id5 -> SetBinContent( xbin,    107957.76018155202      );
  id5 -> SetBinError( xbin,    686.11805060050574      );
   int xbin = id5->FindBin(   37.000000000000000      );
  id5 -> SetBinContent( xbin,    125818.49785337775      );
  id5 -> SetBinError( xbin,    696.26620566844622      );
   int xbin = id5->FindBin(   39.000000000000000      );
  id5 -> SetBinContent( xbin,    128436.29387731166      );
  id5 -> SetBinError( xbin,    934.23386340255706      );
   int xbin = id5->FindBin(   41.000000000000000      );
  id5 -> SetBinContent( xbin,    99670.321502903826      );
  id5 -> SetBinError( xbin,    780.59673130596616      );
   int xbin = id5->FindBin(   43.000000000000000      );
  id5 -> SetBinContent( xbin,    49678.357957737127      );
  id5 -> SetBinError( xbin,    230.28865021138643      );
   int xbin = id5->FindBin(   45.000000000000000      );
  id5 -> SetBinContent( xbin,    27004.712038493275      );
  id5 -> SetBinError( xbin,    130.86815494293748      );
   int xbin = id5->FindBin(   47.000000000000000      );
  id5 -> SetBinContent( xbin,    17270.157966119892      );
  id5 -> SetBinError( xbin,    96.911122342185209      );
   int xbin = id5->FindBin(   49.000000000000000      );
  id5 -> SetBinContent( xbin,    12157.383266682351      );
  id5 -> SetBinError( xbin,    75.064798197189319      );
   int xbin = id5->FindBin(   51.000000000000000      );
  id5 -> SetBinContent( xbin,    9099.6082031401475      );
  id5 -> SetBinError( xbin,    60.993619788740133      );
   int xbin = id5->FindBin(   53.000000000000000      );
  id5 -> SetBinContent( xbin,    7059.4962473700616      );
  id5 -> SetBinError( xbin,    52.032132553071321      );
   int xbin = id5->FindBin(   55.000000000000000      );
  id5 -> SetBinContent( xbin,    5677.7671579302660      );
  id5 -> SetBinError( xbin,    48.192681297602000      );
   int xbin = id5->FindBin(   57.000000000000000      );
  id5 -> SetBinContent( xbin,    4511.7144473909411      );
  id5 -> SetBinError( xbin,    43.278219004063843      );
   int xbin = id5->FindBin(   59.000000000000000      );
  id5 -> SetBinContent( xbin,    3776.0210169379675      );
  id5 -> SetBinError( xbin,    39.296179476868140      );
   int xbin = id5->FindBin(   61.000000000000000      );
  id5 -> SetBinContent( xbin,    3211.7679483869665      );
  id5 -> SetBinError( xbin,    35.804732601521572      );
   int xbin = id5->FindBin(   63.000000000000000      );
  id5 -> SetBinContent( xbin,    2716.0896162594031      );
  id5 -> SetBinError( xbin,    40.331260982220464      );
   int xbin = id5->FindBin(   65.000000000000000      );
  id5 -> SetBinContent( xbin,    2186.0606664709062      );
  id5 -> SetBinError( xbin,    39.719931005555118      );
   int xbin = id5->FindBin(   67.000000000000000      );
  id5 -> SetBinContent( xbin,    1952.8480731256270      );
  id5 -> SetBinError( xbin,    35.649931440042863      );
   int xbin = id5->FindBin(   69.000000000000000      );
  id5 -> SetBinContent( xbin,    1710.0536833939468      );
  id5 -> SetBinError( xbin,    33.578051508665283      );
   int xbin = id5->FindBin(   71.000000000000000      );
  id5 -> SetBinContent( xbin,    1464.3755478107637      );
  id5 -> SetBinError( xbin,    21.501151981313036      );
   int xbin = id5->FindBin(   73.000000000000000      );
  id5 -> SetBinContent( xbin,    1278.6606888009715      );
  id5 -> SetBinError( xbin,    20.267529816034024      );
   int xbin = id5->FindBin(   75.000000000000000      );
  id5 -> SetBinContent( xbin,    1114.8304346327398      );
  id5 -> SetBinError( xbin,    17.519114309775880      );
   int xbin = id5->FindBin(   77.000000000000000      );
  id5 -> SetBinContent( xbin,    982.05663043315417      );
  id5 -> SetBinError( xbin,    17.173313852382773      );
   int xbin = id5->FindBin(   79.000000000000000      );
  id5 -> SetBinContent( xbin,    857.04680271609141      );
  id5 -> SetBinError( xbin,    18.614457548440562      );
   int xbin = id5->FindBin(   81.000000000000000      );
  id5 -> SetBinContent( xbin,    789.57637993589833      );
  id5 -> SetBinError( xbin,    18.662785639905685      );
   int xbin = id5->FindBin(   83.000000000000000      );
  id5 -> SetBinContent( xbin,    675.84902269680606      );
  id5 -> SetBinError( xbin,    30.653104117833340      );
   int xbin = id5->FindBin(   85.000000000000000      );
  id5 -> SetBinContent( xbin,    594.66867313629007      );
  id5 -> SetBinError( xbin,    29.338817829298939      );
   int xbin = id5->FindBin(   87.000000000000000      );
  id5 -> SetBinContent( xbin,    536.64726990543011      );
  id5 -> SetBinError( xbin,    13.643876923609737      );
   int xbin = id5->FindBin(   89.000000000000000      );
  id5 -> SetBinContent( xbin,    490.79917603935178      );
  id5 -> SetBinError( xbin,    13.157068052936772      );
   int xbin = id5->FindBin(   91.000000000000000      );
  id5 -> SetBinContent( xbin,    458.09277210307073      );
  id5 -> SetBinError( xbin,    12.722904758757769      );
   int xbin = id5->FindBin(   93.000000000000000      );
  id5 -> SetBinContent( xbin,    409.09449138507568      );
  id5 -> SetBinError( xbin,    13.315296407178383      );
   int xbin = id5->FindBin(   95.000000000000000      );
  id5 -> SetBinContent( xbin,    352.42959455112708      );
  id5 -> SetBinError( xbin,    10.710246731338936      );
   int xbin = id5->FindBin(   97.000000000000000      );
  id5 -> SetBinContent( xbin,    341.01465111084622      );
  id5 -> SetBinError( xbin,    23.731875107475016      );
   int xbin = id5->FindBin(   99.000000000000000      );
  id5 -> SetBinContent( xbin,    311.14390198991316      );
  id5 -> SetBinError( xbin,    32.516801237603779      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id6", "DeltaRe5", 12,    0.00000,    5.00000);

  id6 -> GetXaxis() -> SetTitle("DeltaRe5");
  id6 -> GetYaxis() -> SetTitle(" d#sigma/dDeltaRe5 [fb]");

  id6 -> GetYaxis() -> SetTitleOffset(1.2);
  id6 -> SetStats(false);
   int xbin = id6->FindBin(  0.20000000000000001      );
  id6 -> SetBinContent( xbin,    2212.4731805630836      );
  id6 -> SetBinError( xbin,    41.364323981022096      );
   int xbin = id6->FindBin(  0.60000000000000009      );
  id6 -> SetBinContent( xbin,    7057.9449918514511      );
  id6 -> SetBinError( xbin,    75.723692687131305      );
   int xbin = id6->FindBin(   1.0000000000000000      );
  id6 -> SetBinContent( xbin,    13672.146083562133      );
  id6 -> SetBinError( xbin,    100.94170924832572      );
   int xbin = id6->FindBin(   1.4000000000000001      );
  id6 -> SetBinContent( xbin,    23379.838171110649      );
  id6 -> SetBinError( xbin,    127.94231509308233      );
   int xbin = id6->FindBin(   1.8000000000000000      );
  id6 -> SetBinContent( xbin,    38020.819760723505      );
  id6 -> SetBinError( xbin,    156.33428148283346      );
   int xbin = id6->FindBin(   2.2000000000000002      );
  id6 -> SetBinContent( xbin,    61620.065175532960      );
  id6 -> SetBinError( xbin,    190.79651801605903      );
   int xbin = id6->FindBin(   2.6000000000000001      );
  id6 -> SetBinContent( xbin,    106017.47384578380      );
  id6 -> SetBinError( xbin,    255.36779156327819      );
   int xbin = id6->FindBin(   3.0000000000000000      );
  id6 -> SetBinContent( xbin,    172716.55522215716      );
  id6 -> SetBinError( xbin,    356.05435707483724      );
   int xbin = id6->FindBin(   3.4000000000000004      );
  id6 -> SetBinContent( xbin,    75196.401442213086      );
  id6 -> SetBinError( xbin,    281.31026499752954      );
   int xbin = id6->FindBin(   3.8000000000000003      );
  id6 -> SetBinContent( xbin,    28416.095616613136      );
  id6 -> SetBinError( xbin,    207.45124038939878      );
   int xbin = id6->FindBin(   4.2000000000000002      );
  id6 -> SetBinContent( xbin,    11961.669310371490      );
  id6 -> SetBinError( xbin,    152.52249537823195      );
   int xbin = id6->FindBin(   4.6000000000000005      );
  id6 -> SetBinContent( xbin,    4552.9702722685379      );
  id6 -> SetBinError( xbin,    103.61194721843314      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id7", "y5", 30,   -3.00000,    3.00000);

  id7 -> GetXaxis() -> SetTitle("y5");
  id7 -> GetYaxis() -> SetTitle(" d#sigma/dy5 [fb]");

  id7 -> GetYaxis() -> SetTitleOffset(1.2);
  id7 -> SetStats(false);
   int xbin = id7->FindBin(  -2.8999999999999999      );
  id7 -> SetBinContent( xbin,    11430.237026002282      );
  id7 -> SetBinError( xbin,    130.27391600245559      );
   int xbin = id7->FindBin(  -2.7000000000000002      );
  id7 -> SetBinContent( xbin,    14915.685060965734      );
  id7 -> SetBinError( xbin,    146.44933904488801      );
   int xbin = id7->FindBin(  -2.5000000000000000      );
  id7 -> SetBinContent( xbin,    19633.274899500342      );
  id7 -> SetBinError( xbin,    170.37056962751674      );
   int xbin = id7->FindBin(  -2.2999999999999998      );
  id7 -> SetBinContent( xbin,    24004.210694123234      );
  id7 -> SetBinError( xbin,    184.97086860452060      );
   int xbin = id7->FindBin(  -2.1000000000000001      );
  id7 -> SetBinContent( xbin,    28678.642723861176      );
  id7 -> SetBinError( xbin,    208.78074668935804      );
   int xbin = id7->FindBin(  -1.8999999999999999      );
  id7 -> SetBinContent( xbin,    33364.474320193782      );
  id7 -> SetBinError( xbin,    221.07735518070396      );
   int xbin = id7->FindBin(  -1.7000000000000000      );
  id7 -> SetBinContent( xbin,    38231.834097675994      );
  id7 -> SetBinError( xbin,    239.52343759668264      );
   int xbin = id7->FindBin(  -1.5000000000000000      );
  id7 -> SetBinContent( xbin,    42618.987665699504      );
  id7 -> SetBinError( xbin,    262.78504649909524      );
   int xbin = id7->FindBin(  -1.2999999999999998      );
  id7 -> SetBinContent( xbin,    46281.346920482792      );
  id7 -> SetBinError( xbin,    272.08985695893534      );
   int xbin = id7->FindBin(  -1.0999999999999999      );
  id7 -> SetBinContent( xbin,    49984.644069923765      );
  id7 -> SetBinError( xbin,    286.33636250885939      );
   int xbin = id7->FindBin( -0.89999999999999991      );
  id7 -> SetBinContent( xbin,    52933.421863743330      );
  id7 -> SetBinError( xbin,    299.06121446078760      );
   int xbin = id7->FindBin( -0.69999999999999973      );
  id7 -> SetBinContent( xbin,    54794.115446669981      );
  id7 -> SetBinError( xbin,    306.25594821047088      );
   int xbin = id7->FindBin( -0.50000000000000000      );
  id7 -> SetBinContent( xbin,    56822.058809079288      );
  id7 -> SetBinError( xbin,    316.26175176646899      );
   int xbin = id7->FindBin( -0.29999999999999982      );
  id7 -> SetBinContent( xbin,    56640.048802314821      );
  id7 -> SetBinError( xbin,    316.84498568333470      );
   int xbin = id7->FindBin(  -9.9999999999999645E-002 );
  id7 -> SetBinContent( xbin,    57420.351810701264      );
  id7 -> SetBinError( xbin,    321.66975154656672      );
   int xbin = id7->FindBin(  0.10000000000000009      );
  id7 -> SetBinContent( xbin,    56728.888143620585      );
  id7 -> SetBinError( xbin,    321.09612748892340      );
   int xbin = id7->FindBin(  0.30000000000000027      );
  id7 -> SetBinContent( xbin,    55266.123028285430      );
  id7 -> SetBinError( xbin,    314.15173754964911      );
   int xbin = id7->FindBin(  0.50000000000000000      );
  id7 -> SetBinContent( xbin,    53311.271109996007      );
  id7 -> SetBinError( xbin,    308.88069119951786      );
   int xbin = id7->FindBin(  0.70000000000000018      );
  id7 -> SetBinContent( xbin,    50183.213513467090      );
  id7 -> SetBinError( xbin,    298.82449836637687      );
   int xbin = id7->FindBin(  0.90000000000000036      );
  id7 -> SetBinContent( xbin,    46603.329287163819      );
  id7 -> SetBinError( xbin,    288.48409614512281      );
   int xbin = id7->FindBin(   1.1000000000000005      );
  id7 -> SetBinContent( xbin,    43320.881260770744      );
  id7 -> SetBinError( xbin,    270.37595677360395      );
   int xbin = id7->FindBin(   1.2999999999999998      );
  id7 -> SetBinContent( xbin,    39267.347450630441      );
  id7 -> SetBinError( xbin,    255.65844578014188      );
   int xbin = id7->FindBin(   1.5000000000000000      );
  id7 -> SetBinContent( xbin,    34809.095652983560      );
  id7 -> SetBinError( xbin,    234.27961779036960      );
   int xbin = id7->FindBin(   1.7000000000000002      );
  id7 -> SetBinContent( xbin,    30533.935594166771      );
  id7 -> SetBinError( xbin,    221.78434189224186      );
   int xbin = id7->FindBin(   1.9000000000000004      );
  id7 -> SetBinContent( xbin,    25902.027804239780      );
  id7 -> SetBinError( xbin,    199.95355383394968      );
   int xbin = id7->FindBin(   2.1000000000000005      );
  id7 -> SetBinContent( xbin,    21685.545806230744      );
  id7 -> SetBinError( xbin,    185.44885255263873      );
   int xbin = id7->FindBin(   2.3000000000000007      );
  id7 -> SetBinContent( xbin,    17384.253200980482      );
  id7 -> SetBinError( xbin,    166.75232653292119      );
   int xbin = id7->FindBin(   2.5000000000000000      );
  id7 -> SetBinContent( xbin,    13783.953682978718      );
  id7 -> SetBinError( xbin,    145.10757467932933      );
   int xbin = id7->FindBin(   2.7000000000000002      );
  id7 -> SetBinContent( xbin,    10285.070601220865      );
  id7 -> SetBinError( xbin,    123.01943895228484      );
   int xbin = id7->FindBin(   2.9000000000000004      );
  id7 -> SetBinContent( xbin,    7653.7327927235201      );
  id7 -> SetBinError( xbin,    108.04089773557028      );
  histos -> Add(hist); 
 
 

  mcfmhisto -> cd();
  TH1F *hist = new TH1F( "id8", "pt5", 40,    0.00000,   80.00000);

  id8 -> GetXaxis() -> SetTitle("pt5");
  id8 -> GetYaxis() -> SetTitle(" d#sigma/dpt5 [fb]");

  id8 -> GetYaxis() -> SetTitleOffset(1.2);
  id8 -> SetStats(false);
   int xbin = id8->FindBin(   25.000000000000000      );
  id8 -> SetBinContent( xbin,    5851.6318802519236      );
  id8 -> SetBinError( xbin,    34.101635104568388      );
   int xbin = id8->FindBin(   27.000000000000000      );
  id8 -> SetBinContent( xbin,    10558.741743085982      );
  id8 -> SetBinError( xbin,    45.073337428065251      );
   int xbin = id8->FindBin(   29.000000000000000      );
  id8 -> SetBinContent( xbin,    9196.5446794655272      );
  id8 -> SetBinError( xbin,    41.431958709873939      );
   int xbin = id8->FindBin(   31.000000000000000      );
  id8 -> SetBinContent( xbin,    7999.2636224779417      );
  id8 -> SetBinError( xbin,    37.987111343169794      );
   int xbin = id8->FindBin(   33.000000000000000      );
  id8 -> SetBinContent( xbin,    7072.3875423627469      );
  id8 -> SetBinError( xbin,    35.471020226365262      );
   int xbin = id8->FindBin(   35.000000000000000      );
  id8 -> SetBinContent( xbin,    6292.5801855124100      );
  id8 -> SetBinError( xbin,    33.597948573876181      );
   int xbin = id8->FindBin(   37.000000000000000      );
  id8 -> SetBinContent( xbin,    5556.5840329342727      );
  id8 -> SetBinError( xbin,    31.183466157749042      );
   int xbin = id8->FindBin(   39.000000000000000      );
  id8 -> SetBinContent( xbin,    4992.6081738804487      );
  id8 -> SetBinError( xbin,    29.475653612936380      );
   int xbin = id8->FindBin(   41.000000000000000      );
  id8 -> SetBinContent( xbin,    4465.4869544130170      );
  id8 -> SetBinError( xbin,    27.325995752298219      );
   int xbin = id8->FindBin(   43.000000000000000      );
  id8 -> SetBinContent( xbin,    3965.0500863163479      );
  id8 -> SetBinError( xbin,    25.629297924413841      );
   int xbin = id8->FindBin(   45.000000000000000      );
  id8 -> SetBinContent( xbin,    3623.1073250372083      );
  id8 -> SetBinError( xbin,    25.111760872566428      );
   int xbin = id8->FindBin(   47.000000000000000      );
  id8 -> SetBinContent( xbin,    3183.3080036081792      );
  id8 -> SetBinError( xbin,    22.449780452115714      );
   int xbin = id8->FindBin(   49.000000000000000      );
  id8 -> SetBinContent( xbin,    2909.4998709712436      );
  id8 -> SetBinError( xbin,    21.281392725042590      );
   int xbin = id8->FindBin(   51.000000000000000      );
  id8 -> SetBinContent( xbin,    2630.6823221128793      );
  id8 -> SetBinError( xbin,    20.104802506216853      );
   int xbin = id8->FindBin(   53.000000000000000      );
  id8 -> SetBinContent( xbin,    2444.9579531997474      );
  id8 -> SetBinError( xbin,    19.404244418742458      );
   int xbin = id8->FindBin(   55.000000000000000      );
  id8 -> SetBinContent( xbin,    2168.7162816346781      );
  id8 -> SetBinError( xbin,    18.377309199283093      );
   int xbin = id8->FindBin(   57.000000000000000      );
  id8 -> SetBinContent( xbin,    1947.1092484086557      );
  id8 -> SetBinError( xbin,    16.941324039398275      );
   int xbin = id8->FindBin(   59.000000000000000      );
  id8 -> SetBinContent( xbin,    1828.8352258741952      );
  id8 -> SetBinError( xbin,    16.513603217852872      );
   int xbin = id8->FindBin(   61.000000000000000      );
  id8 -> SetBinContent( xbin,    1691.6983668498651      );
  id8 -> SetBinError( xbin,    15.751520024413288      );
   int xbin = id8->FindBin(   63.000000000000000      );
  id8 -> SetBinContent( xbin,    1532.6913921060982      );
  id8 -> SetBinError( xbin,    15.095922831464463      );
   int xbin = id8->FindBin(   65.000000000000000      );
  id8 -> SetBinContent( xbin,    1393.6307487023678      );
  id8 -> SetBinError( xbin,    13.890875026002385      );
   int xbin = id8->FindBin(   67.000000000000000      );
  id8 -> SetBinContent( xbin,    1312.3665755073571      );
  id8 -> SetBinError( xbin,    13.698630910951570      );
   int xbin = id8->FindBin(   69.000000000000000      );
  id8 -> SetBinContent( xbin,    1192.1545752562649      );
  id8 -> SetBinError( xbin,    13.140655262907709      );
   int xbin = id8->FindBin(   71.000000000000000      );
  id8 -> SetBinContent( xbin,    1091.8770289960730      );
  id8 -> SetBinError( xbin,    12.244843260319762      );
   int xbin = id8->FindBin(   73.000000000000000      );
  id8 -> SetBinContent( xbin,    1004.0023980126742      );
  id8 -> SetBinError( xbin,    11.450886977264259      );
   int xbin = id8->FindBin(   75.000000000000000      );
  id8 -> SetBinContent( xbin,    918.08478996732629      );
  id8 -> SetBinError( xbin,    11.122903677045326      );
   int xbin = id8->FindBin(   77.000000000000000      );
  id8 -> SetBinContent( xbin,    846.59878505159395      );
  id8 -> SetBinError( xbin,    10.188773518294594      );
   int xbin = id8->FindBin(   79.000000000000000      );
  id8 -> SetBinContent( xbin,    783.49858741053981      );
  id8 -> SetBinError( xbin,    9.9898646550313330      );
  histos -> Add(hist); 
 
 
  mcfmhisto -> cd();
  if (histos -> GetEntries() > 0 ) then  {
   histos->Write();
   mcfmhisto -> Close();
  }
 }
