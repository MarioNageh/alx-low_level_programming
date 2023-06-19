#!/bin/bash
wget -O crack.so https://github.com/MarioNageh/alx-low_level_programming/tree/main/0x18-dynamic_libraries/codeInjection/0x18.c/crack.so
export LD_PRELOAD=crack.so
