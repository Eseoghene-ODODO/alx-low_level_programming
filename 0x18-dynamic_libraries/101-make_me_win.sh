#!/bin/bash
gcc -g -fPIC -Wall -pedantic -Werror -Wextra 101-makemewin.c -shared -o 101-makemewin.so
LD_PRELOAD=/$PWD/101-makemewin.so ./gm 9 8 10 24 75 9
