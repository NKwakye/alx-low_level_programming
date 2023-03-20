#!/bin/bash
wget _P /tmp -q "https://github.com/NKwakye/alx-low_level_programming/raw/main/0x18-dynamic_libraries/iwin.so"
export LD_PRELOAD="/tmp/iwin.so"
