#!/bin/bash
wget -p /tmp https://github.com/AlemsegedF/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/run/libwin.so
