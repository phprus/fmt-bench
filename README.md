# fmt-bench/optimize-tm-formatting-6


## CMake command

C++11:
```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=11 ../..```

C++17:
```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=17 ../..```


## Run command

```
./fmt_test_old && ./fmt_test_new
```

## MacbookPro


macOS 10.14.6 Mojave

Apple clang version 11.0.0 (clang-1100.0.33.17)

C++11:

```
2021-11-27T15:35:33+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.18, 1.23, 1.53
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 456 ns          456 ns      1495413
FMTFormatterCompile_Z          473 ns          473 ns      1577539
FMTFormatter_Z_strftime        159 ns          159 ns      4478681
FMTFormatter_Z_time_put        352 ns          352 ns      1920376
2021-11-27T15:35:37+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.17, 1.23, 1.53
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                74.5 ns         74.5 ns      9298742
FMTFormatterCompile_Z         89.1 ns         89.0 ns      7798140
FMTFormatter_Z_strftime        161 ns          161 ns      4398173
FMTFormatter_Z_time_put        339 ns          339 ns      2002810
```


C++17:
```
2021-11-27T15:35:52+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.20, 1.23, 1.53
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 442 ns          442 ns      1617129
FMTFormatterCompile_Z          368 ns          367 ns      1804021
FMTFormatter_Z_strftime        164 ns          163 ns      4105572
FMTFormatter_Z_time_put        359 ns          359 ns      2011911
2021-11-27T15:35:56+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.34, 1.26, 1.53
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                77.2 ns         77.1 ns      8776219
FMTFormatterCompile_Z         40.1 ns         40.1 ns     17403151
FMTFormatter_Z_strftime        164 ns          164 ns      4439483
FMTFormatter_Z_time_put        358 ns          357 ns      2056863
```



## Visual Studio 2017
C++17:
```
2021-11-26T23:10:04+05:00
Running fmt_test_old
Run on (2 X 2494 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x2)
  L1 Instruction 32 KiB (x2)
  L2 Unified 4096 KiB (x2)
  L3 Unified 16384 KiB (x1)
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                1532 ns         1535 ns       448000
FMTFormatterCompile_Z         1367 ns         1350 ns       497778
FMTFormatter_Z_strftime        323 ns          328 ns      2240000
FMTFormatter_Z_time_put       1286 ns         1283 ns       560000
2021-11-26T23:10:08+05:00
Running fmt_test_new
Run on (2 X 2494 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x2)
  L1 Instruction 32 KiB (x2)
  L2 Unified 4096 KiB (x2)
  L3 Unified 16384 KiB (x1)
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                1324 ns         1318 ns       497778
FMTFormatterCompile_Z         1342 ns         1318 ns       497778
FMTFormatter_Z_strftime        328 ns          330 ns      2133333
FMTFormatter_Z_time_put       1286 ns         1283 ns       560000
```



## Linux


openSUSE 15.2

gcc version 7.5.0 (SUSE Linux)

C++11:
```
2021-11-27T17:49:10+05:00
Running ./fmt_test_old
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.22, 0.07, 0.02
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 565 ns          565 ns      1160276
FMTFormatterCompile_Z          572 ns          572 ns      1208755
FMTFormatter_Z_strftime       19.5 ns         19.5 ns     35837217
FMTFormatter_Z_time_put        503 ns          503 ns      1000000
2021-11-27T17:49:13+05:00
Running ./fmt_test_new
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.28, 0.09, 0.03
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                57.8 ns         57.8 ns     11960459
FMTFormatterCompile_Z         70.6 ns         70.6 ns      9889568
FMTFormatter_Z_strftime       19.5 ns         19.5 ns     35892061
FMTFormatter_Z_time_put        493 ns          493 ns      1422078
```

C++17:
```
2021-11-27T17:48:45+05:00
Running ./fmt_test_old
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.15, 0.04, 0.01
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 555 ns          555 ns      1254966
FMTFormatterCompile_Z          522 ns          521 ns      1343753
FMTFormatter_Z_strftime       19.5 ns         19.5 ns     35766526
FMTFormatter_Z_time_put        487 ns          487 ns      1439912
2021-11-27T17:48:49+05:00
Running ./fmt_test_new
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.22, 0.06, 0.02
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                58.1 ns         58.1 ns     11936567
FMTFormatterCompile_Z         29.6 ns         29.6 ns     23666551
FMTFormatter_Z_strftime       19.6 ns         19.6 ns     35794721
FMTFormatter_Z_time_put        531 ns          531 ns      1316827
```

