#!/bin/bash

for file in $(grep -Rlws '[0-9]' $2/);
do
	if [ -f $2 && ! [ -x $2 ] ]; then
		touch unsorted
		echo "==========  $2  ====="
		for x in $(cat $2);
		do
			if [ "$x" -eq "$x" 2>/dev/null]; then
				echo $x >> unsorted;
			fi;
		done
		sort -n unsorted
		rm unsorted;
	fi;
done

