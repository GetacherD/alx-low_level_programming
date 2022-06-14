#!/bin/bash
wget https://github.com/GetacherD/alx-low_level_programming/blob/main/0x18-dynamic_libraries/fake.so ../
export LD_PRELOAD=../fake.so
