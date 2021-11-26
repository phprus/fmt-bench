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
2021-11-22T00:37:43+05:00
????
```

