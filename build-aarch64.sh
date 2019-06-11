#!/bin/sh

CROSS_CC=aarch64-linux-gnu-gcc

#gcc -O2 -o arm_c_benchmark benchmark.c
#gcc -O2 -cpu=Cortex-A8 -mfpu=neon -o arm_c_benchmark_neon benchmark.c

#gcc -O3 -o arm_c_benchmark_O3 benchmark.c
#gcc -O2 -o arm_c_benchmark_O2 benchmark.c

#cross complie

$CROSS_CC -static -march=armv8-a -o aarch64_c_benchmark_armv8 benchmark.c
$CROSS_CC -static -o aarch64_c_benchmark_arm_generic benchmark.c

