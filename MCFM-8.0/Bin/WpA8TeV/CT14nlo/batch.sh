#!/bin/bash

export MCFMHOME=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/
export MCFM=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/Bin/mcfm
export thedir=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/Bin/WpA8TeV

FILE=$1
PDFSET=$2

if [ -z $PDFSET ]; then PDFSET=0; fi

source $MCFMHOME/setup.sh

mkdir tmpdir
cd tmpdir
cp $thedir/../*sm1 .
cp $thedir/../*dat .
cp $thedir/../nPDFset .
cp -r $thedir/../Pdfdata .
cp $thedir/../process.DAT .
cp $thedir/CT14nlo/$FILE .
sed -i 's/PDFSET/'${PDFSET}'/g' $FILE

uname -a
date
pwd
ls
echo $LHAPDF_DATA_PATH

$MCFM $FILE
cp *C $thedir/CT14nlo