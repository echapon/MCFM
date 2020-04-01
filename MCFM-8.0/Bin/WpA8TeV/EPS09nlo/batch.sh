#!/bin/bash

export MCFMHOME=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/
export MCFM=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/Bin/mcfm
export thedir=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/Bin/WpA8TeV

FILE=$1
PDFSET2=$2

if [ -z $PDFSET2 ]; then PDFSET2=0; fi

# compute PDFSET (for CT10)
PDFSET=0
if [ $PDFSET2 -le 52 ]; then
   # CT10 variations
   PDFSET=$PDFSET2
   PDFSET2=1
else
   # EPS09 variations
   PDFSET=0
   PDFSET2=$(( $PDFSET2 - 53 ))
fi

source $MCFMHOME/setup.sh

mkdir tmpdir
cd tmpdir
cp $thedir/../*sm1 .
cp $thedir/../*dat .
cp $thedir/../nPDFset .
cp -r $thedir/../Pdfdata .
cp $thedir/../process.DAT .
cp $thedir/EPS09nlo/$FILE .
sed -i 's/PDFSET2/'${PDFSET2}'/g' $FILE
sed -i 's/PDFSET/'${PDFSET}'/g' $FILE

uname -a
date
pwd
ls
echo $LHAPDF_DATA_PATH

$MCFM $FILE
cp *C $thedir/EPS09nlo
