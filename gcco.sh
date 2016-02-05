#!/bin/sh

if [ $# -ne 1 ]; then
	echo "invalid params"
	exit 1
fi

gcc -Wall -o ${1}.exe ${1}.c
./${1}.exe

