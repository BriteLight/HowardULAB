#!/bin/bash

for word in $(man look | sed 's/,/ /g');
do
	if [ `echo $word | wc -c` == 4 ]; then
		echo $word >> 3_letter-words_file
		echo $word;
	fi
done
