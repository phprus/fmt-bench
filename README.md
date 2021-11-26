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
2021-11-26T22:43:04+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.96, 1.90, 2.12
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 454 ns          454 ns      1586161
FMTFormatterCompile_Z          458 ns          458 ns      1573932
FMTFormatter_Z_strftime        157 ns          156 ns      4310531
FMTFormatter_Z_time_put        347 ns          347 ns      2008366
2021-11-26T22:43:09+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.96, 1.90, 2.12
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 401 ns          400 ns      1764491
FMTFormatterCompile_Z          426 ns          426 ns      1661749
FMTFormatter_Z_strftime        160 ns          160 ns      4402599
FMTFormatter_Z_time_put        339 ns          339 ns      2036974
```


C++17:
```
2021-11-26T22:43:16+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.89, 1.89, 2.12
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 469 ns          468 ns      1465343
FMTFormatterCompile_Z          413 ns          412 ns      1754047
FMTFormatter_Z_strftime        165 ns          165 ns      4187279
FMTFormatter_Z_time_put        365 ns          364 ns      1934038
2021-11-26T22:43:20+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.89, 1.89, 2.12
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 405 ns          405 ns      1716742
FMTFormatterCompile_Z          373 ns          373 ns      1865428
FMTFormatter_Z_strftime        158 ns          158 ns      4296429
FMTFormatter_Z_time_put        343 ns          343 ns      2014719
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
2021-11-26T23:39:34+05:00
Running ./fmt_test_old
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.07, 0.03, 0.00
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 599 ns          599 ns      1156092
FMTFormatterCompile_Z          607 ns          607 ns      1152875
FMTFormatter_Z_strftime       19.6 ns         19.6 ns     35651997
FMTFormatter_Z_time_put        540 ns          540 ns      1301585
2021-11-26T23:39:37+05:00
Running ./fmt_test_new
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.07, 0.03, 0.00
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 474 ns          474 ns      1476641
FMTFormatterCompile_Z          482 ns          482 ns      1452504
FMTFormatter_Z_strftime       19.5 ns         19.5 ns     35854726
FMTFormatter_Z_time_put        497 ns          497 ns      1406291
```

C++17:
```
2021-11-26T23:39:44+05:00
Running ./fmt_test_old
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.14, 0.04, 0.01
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 635 ns          635 ns      1095353
FMTFormatterCompile_Z          596 ns          596 ns      1175556
FMTFormatter_Z_strftime       19.6 ns         19.6 ns     35792170
FMTFormatter_Z_time_put        581 ns          581 ns      1206007
2021-11-26T23:39:47+05:00
Running ./fmt_test_new
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.14, 0.04, 0.01
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_Z                 388 ns          388 ns      1814902
FMTFormatterCompile_Z          345 ns          345 ns      2030729
FMTFormatter_Z_strftime       19.5 ns         19.5 ns     35782731
FMTFormatter_Z_time_put        486 ns          486 ns      1432844
```

