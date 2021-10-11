# fmt-bench/optimize-tm-formatting-3


## CMake command

```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=11 ../..```
```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=17 ../..```

## Run command

```
./fmt_test_old && ./fmt_test_new
```


## here are results on my Desktop:

### gcc version 7.5.0 (SUSE Linux) C++11

```
2021-10-11T13:43:20+05:00
Running ./fmt_test_old
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.83, 0.62, 0.58
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
-----------------------------------------------------------------------
Benchmark                             Time             CPU   Iterations
-----------------------------------------------------------------------
FMTFormatter_Y/22                  69.1 ns         68.9 ns      9940967
FMTFormatterCompile_Y/22           84.6 ns         84.5 ns      8340635
FMTFormatter_full/22                222 ns          222 ns      3146540
FMTFormatterCompile_full/22         241 ns          240 ns      2914328
FMTFormatter_full2/22               368 ns          366 ns      1912118
FMTFormatterCompile_full2/22        372 ns          370 ns      1891532
2021-10-11T13:43:25+05:00
Running ./fmt_test_new
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.84, 0.63, 0.58
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
-----------------------------------------------------------------------
Benchmark                             Time             CPU   Iterations
-----------------------------------------------------------------------
FMTFormatter_Y/22                  42.6 ns         42.6 ns     16415689
FMTFormatterCompile_Y/22           55.3 ns         55.1 ns     12715033
FMTFormatter_full/22                109 ns          109 ns      6401246
FMTFormatterCompile_full/22         135 ns          135 ns      5189735
FMTFormatter_full2/22              69.8 ns         69.4 ns     10202609
FMTFormatterCompile_full2/22       84.3 ns         83.9 ns      8370654
```

Table:

```
-------------------------------------------------------------------------------------------------------------------
Benchmark                         OLD Time             CPU   Iterations   :   NEW Time             CPU   Iterations
-------------------------------------------------------------------------------------------------------------------
FMTFormatter_Y/22                  42.6 ns         42.6 ns     16415689   :    69.1 ns         68.9 ns      9940967
FMTFormatterCompile_Y/22           55.3 ns         55.1 ns     12715033   :    84.6 ns         84.5 ns      8340635
FMTFormatter_full/22                109 ns          109 ns      6401246   :     222 ns          222 ns      3146540
FMTFormatterCompile_full/22         135 ns          135 ns      5189735   :     241 ns          240 ns      2914328
FMTFormatter_full2/22              69.8 ns         69.4 ns     10202609   :     368 ns          366 ns      1912118
FMTFormatterCompile_full2/22       84.3 ns         83.9 ns      8370654   :     372 ns          370 ns      1891532
```



### gcc version 7.5.0 (SUSE Linux) C++17

```
2021-10-11T13:43:49+05:00
Running ./fmt_test_old
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.61, 0.59, 0.57
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
-----------------------------------------------------------------------
Benchmark                             Time             CPU   Iterations
-----------------------------------------------------------------------
FMTFormatter_Y/22                  69.7 ns         69.5 ns      9115903
FMTFormatterCompile_Y/22           44.8 ns         44.5 ns     13162459
FMTFormatter_full/22                225 ns          224 ns      3122661
FMTFormatterCompile_full/22         161 ns          161 ns      4366749
FMTFormatter_full2/22               364 ns          364 ns      1930605
FMTFormatterCompile_full2/22        322 ns          320 ns      2192324
2021-10-11T13:43:54+05:00
Running ./fmt_test_new
Run on (8 X 3800 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.64, 0.60, 0.58
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
-----------------------------------------------------------------------
Benchmark                             Time             CPU   Iterations
-----------------------------------------------------------------------
FMTFormatter_Y/22                  41.4 ns         41.2 ns     16954812
FMTFormatterCompile_Y/22           8.91 ns         8.91 ns     76261609
FMTFormatter_full/22                110 ns          110 ns      6349266
FMTFormatterCompile_full/22        85.1 ns         84.6 ns      8280728
FMTFormatter_full2/22              71.7 ns         71.7 ns      9756717
FMTFormatterCompile_full2/22       23.9 ns         23.9 ns     29198270
```


Table:

```
-------------------------------------------------------------------------------------------------------------------
Benchmark                         OLD Time             CPU   Iterations   :   NEW Time             CPU   Iterations
-------------------------------------------------------------------------------------------------------------------
FMTFormatter_Y/22                  69.7 ns         69.5 ns      9115903   :    41.4 ns         41.2 ns     16954812
FMTFormatterCompile_Y/22           44.8 ns         44.5 ns     13162459   :    8.91 ns         8.91 ns     76261609
FMTFormatter_full/22                225 ns          224 ns      3122661   :     110 ns          110 ns      6349266
FMTFormatterCompile_full/22         161 ns          161 ns      4366749   :    85.1 ns         84.6 ns      8280728
FMTFormatter_full2/22               364 ns          364 ns      1930605   :    71.7 ns         71.7 ns      9756717
FMTFormatterCompile_full2/22        322 ns          320 ns      2192324   :    23.9 ns         23.9 ns     29198270
```
