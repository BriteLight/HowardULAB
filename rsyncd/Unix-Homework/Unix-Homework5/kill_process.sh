#!/bin/bash

for proc in `ps -elf |grep -w tail |grep -v grep |awk '{print $4}'`;
do
	if [ `expr $proc % 2` == 0 ]; then
		kill $proc
	else
		renice `expr $(ps -elf|grep -w $proc|grep -v grep |awk '{print $8}') + 3` $proc
	fi
done
