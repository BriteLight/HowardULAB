#!/bin/bash

for word in $(man look | sed 's/,/ /g');
do
	if [ `echo $word | wc -c` == 5 ]; then
		echo $word >> 4_letter-words_file
		echo $word;
	fi
done
