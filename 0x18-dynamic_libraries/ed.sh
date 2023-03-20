#!/bin/bash
gcc -c -fPIC *.c
gcc -shared *.o -o libdynamic.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
