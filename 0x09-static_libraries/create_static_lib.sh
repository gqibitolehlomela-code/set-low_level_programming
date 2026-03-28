#!/bin/bash
# Create (or recreate) liball.a from all C source files in current dir
rm -f liball.a
set -e
cc -c *.c
ar -rcs liball.a *.o

# optionally cleanup object files
rm -f *.o
