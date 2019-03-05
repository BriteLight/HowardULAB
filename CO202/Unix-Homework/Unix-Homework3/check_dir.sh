#!/bin/bash

TESTPATH=$1
DIRNUM=0
FILNUM=0


for file in $(find $TESTPATH -name "*");
do
  if [ -f "${file}" ]; then
        FILNUM=`expr $FILNUM + 1`;
  elif [ -d "${file}" ]; then
        DIRNUM=`expr $DIRNUM + 1`;
  fi;
done
echo "Number of folders in $TESTPATH is $DIRNUM"
echo "Number of files   in $TESTPATH is $FILNUM"

