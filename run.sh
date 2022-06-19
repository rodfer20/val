#!/bin/sh
[ -d "build/" ] && rm -rf "build/"
mkdir build  &&\
    cd build  &&\
    cmake ..  &&\
    cmake --build .  &&\
    cd .. &&\
    build/val 