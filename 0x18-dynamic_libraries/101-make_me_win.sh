#!/bin/bash
gcc -fPIC -c 101-makemewin.c
LD_PRELOAD=/$PWD/101-makemewin.so ./gm 9 8 10 24 75 9
