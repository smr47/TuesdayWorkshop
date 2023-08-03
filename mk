#!/bin/bash

# mk - simple (minded) make
#      compiles & links each *.c *.cpp file to an executable
#      assumes echo *.c *.cpp file is complete (all includes are defaults)
#      only builds *.c *.cpp files that are older that their source files

ls *.c | while read src; do
    exe=${src%%.c}
    if [[ ! -e $exe || $exe -ot $src ]]; then
	echo building $src
	clang -o ${src%%.c} $src
    fi
done

ls *.cpp | while read src; do
    exe=${src%%.cpp}
    if [[ ! -e $exe || $exe -ot $src ]]; then
	echo building $src
	clang++ -o $exe $src
    fi
done
