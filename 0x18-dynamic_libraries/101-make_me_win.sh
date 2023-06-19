#!/bin/bash
wget -O /tmp/crack.so https://raw.githubusercontent.com/MarioNageh/alx-low_level_programming/main/0x18-dynamic_libraries/codeInjection/0x18.c/crack.so
export LD_PRELOAD=/tmp/crack.so
