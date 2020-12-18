arm_c_benchmark
===============
This simple benchmark tests single core performance of CPU and RAM. 

You can also use different compiler to build this to in order to explore diff between compilers.


Results
=======

4.2GHz Core-i5 3570K DDR3 1600 DUAL Ch VM 
-----------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 34141 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 18053 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 53089 .
    BENCHMARK: 3| float calculation in Kloops/sec: 51567 .

3.4GHz Core-i3 3320 DDR3 1650 DUAL Ch baremetal
-----------------------------------------------
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

1.86GHz ATOM D525 DDR3 800 Single Ch baremetal
--------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 5100 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 2400 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 3591 .
    BENCHMARK: 3| float calculation in Kloops/sec: 11950 .

720MHz Ti Coretex-A8 AM3359 DDR3 606 (native compiled)
------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 50 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 231 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 1276 .
    BENCHMARK: 3| float calculation in Kloops/sec: 1910 .
    
720MHz Ti Beaglebone DDR2 400 (native compiled)
------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 51 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 200 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 1272 .
    BENCHMARK: 3| float calculation in Kloops/sec: 1882 .
    
1GHz Beaglebone Black Coretex-A8 AM3359 DDR3 (native angstrom os)
-----------------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 36 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 251 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 1760 .
    BENCHMARK: 3| float calculation in Kloops/sec: 2572 .

1.7GHz Odroid-U2 Enyox 4412 (android os)
----------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 90 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 2663 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 2505 .
    BENCHMARK: 3| float calculation in Kloops/sec: 12181 .
    
1GHz Freescale i.mx6 SABRE-SDB (kernel 3.9 ubuntu 13.04) robertCNelson netinstall
---------------------------------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 37 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 800 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 1467 .
    BENCHMARK: 3| float calculation in Kloops/sec: 7135 .

1.33GHz Marvell MV78460 ubuntu 14.04
---------------------------------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 66 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 2516 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 1627 .
    BENCHMARK: 3| float calculation in Kloops/sec: 11096 .
    
NXP S32V AARCH64 
---------------------------------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 68 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 1404 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 1796 .
    BENCHMARK: 3| float calculation in Kloops/sec: 8616 .

Rockchip RK3308 (Cortex-A35 1.3GHz) 16bit 256MB DDR3 
---------------------------------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 60 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 758 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 1605 .
    BENCHMARK: 3| float calculation in Kloops/sec: 10913 .

1.1GHz Ti AM6548/DRA804M Quad Core Cortex-A53 DDR4 4GB with ECC
---------------------------------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 2525 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 1624 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 6618 .
    BENCHMARK: 3| float calculation in Kloops/sec: 6875 .

1.2GHz Ariaboard Renesas RZ/G2E Dual Core Cortex-A53 DDR3L 2GB (32bit, AARCH64 bin)
---------------------------------------------------------------------------------
    BENCHMARK: 0| malloc and free in Ktimes/sec  : 3787 .
    BENCHMARK: 1| memcpy of 256KB data in MB/s   : 832 .
    BENCHMARK: 2| int calculation in   Kloops/sec: 9904 .
    BENCHMARK: 3| float calculation in Kloops/sec: 10303 .
