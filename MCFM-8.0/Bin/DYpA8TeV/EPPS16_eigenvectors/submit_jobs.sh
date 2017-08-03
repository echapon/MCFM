#!/bin/bash

for i in `seq 0 32`; do
   sed 's/NPDFSET/'${i}'/g' input_DY10600_TEMPLATE.DAT > input_DY10600_${i}.DAT
   # bsub -env FILE=input_DY10600_${i}.DAT -q 1nd batch.sh
done
