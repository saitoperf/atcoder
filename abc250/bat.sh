#!/bin/bash

g++ $1.cpp -o $1 -g -Wall -O0
if [ $? -eq 0 ]; then
    ./$1
fi
