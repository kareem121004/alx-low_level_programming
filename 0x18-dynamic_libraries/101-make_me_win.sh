#!/bin/bash
wget -P /tmp  https://github.com/kareem121004/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_LIBRARY_PATH=/tmp/libgiga.so
