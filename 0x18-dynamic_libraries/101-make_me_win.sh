#!/bin/bash
wget -O /tmp/wind.so https://github.com/irisd13/alx-low_level_programming/raw/master/0x18-dynamic_libraries/wind.so
export LD_PRELOAD=/tmp/wind.so
