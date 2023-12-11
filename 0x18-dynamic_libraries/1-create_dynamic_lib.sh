#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export Ld_LIBRARY_PATH=.:$LD_LIBRARY_PATH
