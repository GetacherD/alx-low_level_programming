#!/bin/bash
wget https://github.com/GetacherD/alx-low_level_programming/raw/main/0x18-dynamic_libraries/fake.so -P ../
export LD_PRELOAD=../fake.so
