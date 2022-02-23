# fmt-bench/optimize-ostream-formatting-1


## CMake command

C++11:
```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=11 ../..```

C++17:
```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=17 ../..```


## Run command

```
./fmt_test_old && ./fmt_test_new
```

## MacbookPro M1 Max


macOS 12.2.1

Apple clang version 13.0.0 (clang-1300.0.29.30)

C++11:

```
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-23T13:42:30+05:00
Running ./fmt_test_old
Run on (10 X 24.1211 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 2.05, 2.07, 2.00
-----------------------------------------------------------------------------
Benchmark                                   Time             CPU   Iterations
-----------------------------------------------------------------------------
FMTFormatter_date                         261 ns          261 ns      2650320
FMTFormatterCompile_date                  264 ns          264 ns      2654471
FMTFormatter_complex_format               180 ns          180 ns      3916259
FMTFormatterCompile_complex_format        210 ns          210 ns      3312480
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-23T13:42:35+05:00
Running ./fmt_test_new
Run on (10 X 24.0082 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 1.97, 2.05, 1.99
-----------------------------------------------------------------------------
Benchmark                                   Time             CPU   Iterations
-----------------------------------------------------------------------------
FMTFormatter_date                         254 ns          254 ns      2714662
FMTFormatterCompile_date                  255 ns          255 ns      2736449
FMTFormatter_complex_format               183 ns          183 ns      3844274
FMTFormatterCompile_complex_format        212 ns          212 ns      3300066
```


C++17:

```
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-23T13:43:37+05:00
Running ./fmt_test_old
Run on (10 X 24.1998 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 1.88, 2.04, 1.99
-----------------------------------------------------------------------------
Benchmark                                   Time             CPU   Iterations
-----------------------------------------------------------------------------
FMTFormatter_path                         218 ns          218 ns      3146973
FMTFormatterCompile_path                  215 ns          215 ns      3263190
FMTFormatter_date                         260 ns          260 ns      2694370
FMTFormatterCompile_date                  258 ns          258 ns      2710699
FMTFormatter_complex_format               182 ns          182 ns      3853586
FMTFormatterCompile_complex_format        145 ns          145 ns      4861044
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-23T13:43:44+05:00
Running ./fmt_test_new
Run on (10 X 24.0194 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 1.66, 1.98, 1.97
-----------------------------------------------------------------------------
Benchmark                                   Time             CPU   Iterations
-----------------------------------------------------------------------------
FMTFormatter_path                         206 ns          206 ns      3304927
FMTFormatterCompile_path                  206 ns          206 ns      3412503
FMTFormatter_date                         254 ns          254 ns      2757436
FMTFormatterCompile_date                  254 ns          254 ns      2757197
FMTFormatter_complex_format               185 ns          185 ns      3782843
FMTFormatterCompile_complex_format        146 ns          146 ns      4822797
```


C++20:

```
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-23T13:44:20+05:00
Running ./fmt_test_old
Run on (10 X 24.1211 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 1.77, 1.98, 1.97
-----------------------------------------------------------------------------
Benchmark                                   Time             CPU   Iterations
-----------------------------------------------------------------------------
FMTFormatter_path                         218 ns          217 ns      3139182
FMTFormatterCompile_path                  214 ns          214 ns      3266784
FMTFormatter_date                         258 ns          258 ns      2712075
FMTFormatterCompile_date                  257 ns          257 ns      2721268
FMTFormatter_complex_format               179 ns          179 ns      3896335
FMTFormatterCompile_complex_format        144 ns          144 ns      4856221
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-23T13:44:27+05:00
Running ./fmt_test_new
Run on (10 X 24.0385 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 1.70, 1.97, 1.97
-----------------------------------------------------------------------------
Benchmark                                   Time             CPU   Iterations
-----------------------------------------------------------------------------
FMTFormatter_path                         207 ns          207 ns      3283703
FMTFormatterCompile_path                  206 ns          206 ns      3404818
FMTFormatter_date                         255 ns          255 ns      2749465
FMTFormatterCompile_date                  256 ns          256 ns      2743689
FMTFormatter_complex_format               186 ns          186 ns      3771267
FMTFormatterCompile_complex_format        147 ns          147 ns      4710886
```



## Visual Studio 2019
C++17:
```

```



## Linux


openSUSE 15.2

gcc version 7.5.0 (SUSE Linux)

C++11:
```

```

C++17:
```

```

