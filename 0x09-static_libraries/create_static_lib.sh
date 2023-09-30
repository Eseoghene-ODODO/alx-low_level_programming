#!/bin/bash

# Compile each .c file and create corresponding .o files
gcc -c *.c

# Create the static library (liball.a) from all .o files
ar rc liball.a *.o

# Index the static library
ranlib liball.a
