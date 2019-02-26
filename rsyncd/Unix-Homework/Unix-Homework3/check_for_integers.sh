#!/bin/bash

FOLDER=$1

for file in $(grep -Rlws '[0-9]' $FOLDER);
do
        if  [ -f $file ] && ! [ -x $file ] ; then
                touch unsorted
                echo "==========  $file  ====="
                for x in $(cat $file|grep -E "[0-9]");
                do
                        if [ "$x" -eq "$x" 2>/dev/null ]; then
                                echo $x >> unsorted;
                        fi;
                done
                sort -n unsorted
                rm unsorted;
        fi;
done

