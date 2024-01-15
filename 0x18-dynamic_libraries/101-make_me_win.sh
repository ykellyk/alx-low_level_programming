#!/bin/bash
wget -P /tmp https://github.com/ykellyk/alx-low_level_programming/tree/master/0x18-dynamic_libraries/mood.so
export LD_PRELOAD=/tmp/mood.so
