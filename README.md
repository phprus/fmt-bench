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
2021-11-17T20:03:15+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 2.00, 1.71, 1.53
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
FMTFormatter_z               634 ns          633 ns      1150389
FMTFormatterCompile_z        642 ns          640 ns      1152415
2021-11-17T20:03:17+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 2.00, 1.71, 1.53
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
FMTFormatter_z              62.0 ns         61.8 ns     11347610
FMTFormatterCompile_z       77.6 ns         77.4 ns      9085717
```


C++17:
```
2021-11-17T20:03:29+05:00
Running ./fmt_test_old
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 2.00, 1.73, 1.54
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
FMTFormatter_z               632 ns          630 ns      1134375
FMTFormatterCompile_z        553 ns          552 ns      1151240
2021-11-17T20:03:30+05:00
Running ./fmt_test_new
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 2.00, 1.73, 1.54
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
FMTFormatter_z              66.2 ns         66.1 ns     10503256
FMTFormatterCompile_z       26.3 ns         26.3 ns     27585772
```

