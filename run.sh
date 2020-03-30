#!/bin/bash

rm -rf bin
mkdir -p bin
filename=$1
gcc -o bin/$filename "$filename.c" && ./bin/$filename