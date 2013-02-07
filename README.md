arm_c_benchmark
===============
This simple benchmark tests single core performance of CPU and RAM


Results
=======

4.2GHz Core-i5 3570K DDR31600 VM 
---------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 34141 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 18053 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 53089 .
    BENCHMARK: 3| float calculation in Kloops/sec: 51567 .


3.4GHz Core-i3 3320 DDR3 1650 baremetal
---------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 28457 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 19493 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 44216 .
    BENCHMARK: 3| float calculation in Kloops/sec: 43504 .
    
    
2.26GHz Xeon L5520 * 2 DDR3 1333 ECC DUAL Ch baremetal
------------------------------------------------------

    BENCHMARK: 0| malloc and free in Ktimes/sec  : 18372 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 12597 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 23383 .
    BENCHMARK: 3| float calculation in Kloops/sec: 32948 .
