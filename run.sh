#!/bin/bash

rm -fR build
mkdir build
cd build
cmake ..
make
./nootrino 192.168.1.159 "select * from  cloud4.vdomain limit 10"
