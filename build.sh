#!/bin/sh

CROSS_CC=arm-linux-gnueabi-gcc

gcc -o arm_c_benchmark benchmark.c
#gcc -O3 -o arm_c_benchmark_O3 benchmark.c
#gcc -O2 -o arm_c_benchmark_O2 benchmark.c

#cross complie

$CROSS_CC -o arm_c_benchmark_arm benchmark.c

