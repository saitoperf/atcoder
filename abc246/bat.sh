#!/bin/bash

g++ $1.cpp -o $1 -g
if [ $? -eq 0 ]; then
    ./$1
fi
