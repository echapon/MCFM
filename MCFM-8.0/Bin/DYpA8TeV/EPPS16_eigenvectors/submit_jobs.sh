#!/bin/bash

MIN=15
MAX=600
PDF1=CT14nlo
PDF2=EPPS16nlo_CT14nlo_Pb208
SET1=0
SET2=0

# EPPS error sets
for i in `seq 0 40`; do
   SET2=${i}
   filename=input_DY${MIN}${MAX}_${PDF1}_${PDF2}_${SET1}_${SET2}.DAT
   sed 's/MMIN/'${MIN}'/g' input_DY_TEMPLATE.DAT > $filename
   sed -i 's/MMAX/'${MAX}'/g' $filename
   sed -i 's/PDF1/'${PDF1}'/g' $filename
   sed -i 's/PDF2/'${PDF2}'/g' $filename
   sed -i 's/SET1/'${SET1}'/g' $filename
   sed -i 's/SET2/'${SET2}'/g' $filename
   echo bsub -env FILE=${filename} -q 8nh batch.sh
   bsub -env FILE=${filename} -q 8nh batch.sh
done

# CT14 error sets
for i in `seq 1 56`; do
   SET1=${i}
   SET2=$(($i + 40))
   filename=input_DY${MIN}${MAX}_${PDF1}_${PDF2}_${SET1}_${SET2}.DAT
   sed 's/MMIN/'${MIN}'/g' input_DY_TEMPLATE.DAT > $filename
   sed -i 's/MMAX/'${MAX}'/g' $filename
   sed -i 's/PDF1/'${PDF1}'/g' $filename
   sed -i 's/PDF2/'${PDF2}'/g' $filename
   sed -i 's/SET1/'${SET1}'/g' $filename
   sed -i 's/SET2/'${SET2}'/g' $filename
   echo bsub -env FILE=${filename} -q 8nh batch.sh
   bsub -env FILE=${filename} -q 8nh batch.sh
done
