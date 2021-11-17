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
2021-11-17T21:07:20+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.46, 1.35, 1.27
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
FMTFormatter_z               619 ns          618 ns      1181435
FMTFormatterCompile_z        637 ns          636 ns      1027116
FMTFormatter_Y               741 ns          740 ns       926294
FMTFormatterCompile_Y        766 ns          765 ns       957016
2021-11-17T21:07:23+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 1.58, 1.37, 1.28
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
FMTFormatter_z              60.0 ns         59.8 ns     11449882
FMTFormatterCompile_z       76.3 ns         76.1 ns      9223147
FMTFormatter_Y              58.9 ns         58.8 ns     12048815
FMTFormatterCompile_Y       78.0 ns         77.9 ns      9040540
```


C++17:
```
2021-11-17T21:07:30+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 2.25, 1.52, 1.33
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
FMTFormatter_z               634 ns          633 ns      1138526
FMTFormatterCompile_z        554 ns          553 ns      1297931
FMTFormatter_Y               722 ns          721 ns       953146
FMTFormatterCompile_Y        626 ns          625 ns      1126888
2021-11-17T21:07:33+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 2.15, 1.51, 1.33
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
FMTFormatter_z              63.2 ns         63.1 ns     10960105
FMTFormatterCompile_z       24.4 ns         24.4 ns     27919926
FMTFormatter_Y              62.3 ns         62.2 ns     11720778
FMTFormatterCompile_Y       24.3 ns         24.3 ns     28801488
```

