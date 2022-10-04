#!/bin/bash
wget -P /tmp https://github.com/EndrisMoh/alx-low_level_programming/raw/master/0x188888888c_libraries/liball.so
export LD_PRELOAD=/tmp/liball.so
