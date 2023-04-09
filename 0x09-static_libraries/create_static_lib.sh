#!/bin/bash

#rayane

#this script creates a static library

gcc -c *.c
ar rcs liball.a *.o
rm *.o
