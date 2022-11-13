# fmt-bench/hexfloat-1


## CMake command

C++11:
```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=11 ../..```

C++17:
```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=17 ../..```

C++20:
```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=20 ../..```


## Run command

```
./fmt_test_old && ./fmt_test_new
```

## MacbookPro M1 Max


macOS 12.6.1

Apple clang version 14.1 (clang-1400.0.29.202)

C++11:

```
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-11-13T17:12:23+05:00
Running ./fmt_test_old
Run on (10 X 24.1222 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 5.23, 3.10, 2.47
----------------------------------------------------------------------
Benchmark                            Time             CPU   Iterations
----------------------------------------------------------------------
FMTFormatter_double1               104 ns          104 ns      6072172
FMTFormatterCompile_double1        123 ns          123 ns      5663064
FMTFormatter_double2              99.8 ns         99.8 ns      7028324
FMTFormatterCompile_double2        123 ns          123 ns      5696661
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-11-13T17:12:27+05:00
Running ./fmt_test_new
Run on (10 X 24.1211 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 5.06, 3.10, 2.47
----------------------------------------------------------------------
Benchmark                            Time             CPU   Iterations
----------------------------------------------------------------------
FMTFormatter_double1               104 ns          104 ns      6074016
FMTFormatterCompile_double1        123 ns          123 ns      5655743
FMTFormatter_double2              99.8 ns         99.8 ns      6949753
FMTFormatterCompile_double2        122 ns          122 ns      5697496
```


C++17:

```
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-11-13T17:12:35+05:00
Running ./fmt_test_old
Run on (10 X 24.0366 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 4.58, 3.06, 2.47
----------------------------------------------------------------------
Benchmark                            Time             CPU   Iterations
----------------------------------------------------------------------
FMTFormatter_double1               104 ns          104 ns      6050287
FMTFormatterCompile_double1        165 ns          165 ns      4219435
FMTFormatter_double2               100 ns          100 ns      6964758
FMTFormatterCompile_double2        161 ns          161 ns      4356621
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-11-13T17:12:39+05:00
Running ./fmt_test_new
Run on (10 X 24.1206 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 4.45, 3.06, 2.47
----------------------------------------------------------------------
Benchmark                            Time             CPU   Iterations
----------------------------------------------------------------------
FMTFormatter_double1               104 ns          104 ns      6260285
FMTFormatterCompile_double1       58.9 ns         58.9 ns     11835320
FMTFormatter_double2              99.7 ns         99.7 ns      6965729
FMTFormatterCompile_double2       57.8 ns         57.8 ns     12052964
```


C++20:

```
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-11-13T17:12:49+05:00
Running ./fmt_test_old
Run on (10 X 24.1212 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 4.18, 3.03, 2.46
----------------------------------------------------------------------
Benchmark                            Time             CPU   Iterations
----------------------------------------------------------------------
FMTFormatter_double1               104 ns          104 ns      6105911
FMTFormatterCompile_double1        165 ns          165 ns      4228049
FMTFormatter_double2               101 ns          101 ns      6926030
FMTFormatterCompile_double2        160 ns          160 ns      4366131
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-11-13T17:12:53+05:00
Running ./fmt_test_new
Run on (10 X 24.1211 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 4.00, 3.01, 2.46
----------------------------------------------------------------------
Benchmark                            Time             CPU   Iterations
----------------------------------------------------------------------
FMTFormatter_double1               102 ns          102 ns      6172622
FMTFormatterCompile_double1       58.8 ns         58.8 ns     11835120
FMTFormatter_double2              99.6 ns         99.6 ns      7025009
FMTFormatterCompile_double2       57.6 ns         57.6 ns     12047778
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

