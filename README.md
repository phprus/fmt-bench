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
2022-02-20T14:32:49+05:00
Running ./fmt_test_old
Run on (10 X 24.1212 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 2.06, 2.69, 2.65
-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
FMTFormatter_date               259 ns          259 ns      2672317
FMTFormatterCompile_date        260 ns          260 ns      2688802
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-20T14:32:52+05:00
Running ./fmt_test_new
Run on (10 X 24.121 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 1.98, 2.66, 2.64
-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
FMTFormatter_date               252 ns          252 ns      2764973
FMTFormatterCompile_date        254 ns          254 ns      2753012
```


C++17:
```
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-20T14:32:24+05:00
Running ./fmt_test_old
Run on (10 X 24.0442 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 2.61, 2.84, 2.70
-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
FMTFormatter_path               215 ns          215 ns      3180185
FMTFormatterCompile_path        213 ns          213 ns      3286647
FMTFormatter_date               259 ns          259 ns      2710783
FMTFormatterCompile_date        257 ns          257 ns      2723704
Unable to determine clock rate from sysctl: hw.cpufrequency: No such file or directory
2022-02-20T14:32:29+05:00
Running ./fmt_test_new
Run on (10 X 24.1211 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x10)
  L1 Instruction 128 KiB (x10)
  L2 Unified 4096 KiB (x5)
Load Average: 2.48, 2.81, 2.69
-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
FMTFormatter_path               207 ns          207 ns      3302323
FMTFormatterCompile_path        204 ns          204 ns      3444560
FMTFormatter_date               252 ns          252 ns      2777932
FMTFormatterCompile_date        250 ns          250 ns      2802343
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

