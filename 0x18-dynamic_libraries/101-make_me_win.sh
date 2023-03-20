#!/bin/bash
wget _P /tmp -q "https://github.com/NKwakye/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmmw.so"
export LD_PRELOAD="/tmp/libmmw.so"
