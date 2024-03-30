#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Angela-Nyaka/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgm_fucn.so
export LD_PRELOAD="$PWD/../libgm_fcn.so"
