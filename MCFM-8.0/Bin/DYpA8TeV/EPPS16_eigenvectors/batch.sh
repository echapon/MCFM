#!/bin/bash

export MCFMHOME=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/
export MCFM=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/Bin/mcfm
export thedir=/afs/cern.ch/user/e/echapon/workspace/private/MCFM/MCFM-8.0/Bin/DYpA8TeV/EPPS16_eigenvectors

source $MCFMHOME/setup.sh

mkdir tmpdir
cd tmpdir
cp $thedir/../*sm1 .
cp $thedir/../*dat .
cp $thedir/../nPDFset .
cp -r $thedir/../Pdfdata .
cp $thedir/../process.DAT .
cp $thedir/$FILE .

uname -a
date
pwd
ls
echo $LHAPDF_DATA_PATH

$MCFMHOME/Bin/mcfm $FILE
cp *C $thedir
