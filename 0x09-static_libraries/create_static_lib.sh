#!/bin/bash

source_file=(find . -type -f -name *.c)

for  file in $source_file; do
gcc -c "$source_file" -o "$source_file.o"
done

ar rcs liball.a *.o
