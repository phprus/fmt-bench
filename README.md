# fmt-bench/optimize-tm-formatting-3


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
2021-11-21T23:36:43+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.71, 1.53, 1.59
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_z                 614 ns          613 ns      1104990
FMTFormatterCompile_z          641 ns          640 ns      1017753
FMTFormatter_z_strftime        276 ns          276 ns      2554968
FMTFormatter_z_time_put        486 ns          486 ns      1348280
FMTFormatter_Y                 715 ns          715 ns       975120
FMTFormatterCompile_Y          679 ns          679 ns       938225
FMTFormatter_Y_strftime        345 ns          345 ns      1972526
FMTFormatter_Y_time_put        546 ns          546 ns      1140864
2021-11-21T23:36:49+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.82, 1.56, 1.60
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_z                58.2 ns         58.1 ns     11371020
FMTFormatterCompile_z         73.3 ns         73.3 ns      8926180
FMTFormatter_z_strftime        281 ns          281 ns      2522504
FMTFormatter_z_time_put        471 ns          471 ns      1500793
FMTFormatter_Y                58.3 ns         58.2 ns     11982198
FMTFormatterCompile_Y         73.8 ns         73.8 ns      9020386
FMTFormatter_Y_strftime        343 ns          343 ns      2001641
FMTFormatter_Y_time_put        554 ns          554 ns      1154354
```


C++17:
```
2021-11-21T23:37:09+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.91, 1.60, 1.61
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_z                 597 ns          596 ns      1109526
FMTFormatterCompile_z          528 ns          527 ns      1293852
FMTFormatter_z_strftime        285 ns          285 ns      2385626
FMTFormatter_z_time_put        474 ns          474 ns      1342179
FMTFormatter_Y                 699 ns          698 ns       979734
FMTFormatterCompile_Y          593 ns          593 ns      1184173
FMTFormatter_Y_strftime        352 ns          351 ns      1938355
FMTFormatter_Y_time_put        532 ns          531 ns      1263743
2021-11-21T23:37:16+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.77, 1.58, 1.61
------------------------------------------------------------------
Benchmark                        Time             CPU   Iterations
------------------------------------------------------------------
FMTFormatter_z                60.2 ns         60.1 ns     11544868
FMTFormatterCompile_z         23.8 ns         23.8 ns     29352074
FMTFormatter_z_strftime        278 ns          278 ns      2571270
FMTFormatter_z_time_put        468 ns          467 ns      1288375
FMTFormatter_Y                57.0 ns         57.0 ns     12551326
FMTFormatterCompile_Y         23.4 ns         23.3 ns     30100406
FMTFormatter_Y_strftime        377 ns          376 ns      1888452
FMTFormatter_Y_time_put        591 ns          590 ns      1182392
```


