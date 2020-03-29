#!/bin/bash

rm -rf bin
mkdir -p bin
gcc -o bin/basic_functions "basic_functions.c" && ./bin/basic_functions