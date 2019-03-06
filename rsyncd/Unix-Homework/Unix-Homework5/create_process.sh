#!/bin/bash

RERUN=`expr $RANDOM \* 15 \/ 1024 \/ 16`
echo $RERUN

if [ `echo $RAND | wc -c` == 2 ]; then RAND=1$RAND; fi

ps -elf |head -1 > process.txt

while [ "$RERUN" -ge 1 ]
do
       nice --adjustment=`expr $RANDOM  \* 20 \/ 1024 \/ 16 - 20`  tail -f /dev/null &
       ps -elf |grep " `jobs -l |tail -1|awk '{print $2}'` " |grep -v grep >> process.txt
RERUN=`expr $RERUN - 1`
done
wc -l process.txt
