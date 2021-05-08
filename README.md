# fmt-bench/format-error_code

## here are results on my MacBookPro:

### AppleClang 11.0.0.11000033 C++11

(```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=11 ../..```)

```
Running ./fmt_test
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 6.42, 4.27, 3.24
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
FMTIostream/22                353 ns          352 ns      2010610
FMTIostreamCompile/22         355 ns          354 ns      1997141
FMTFormatter/22              34.5 ns         34.5 ns     20479154
FMTFormatterCompile/22       39.4 ns         39.4 ns     17737775
```


### AppleClang 11.0.0.11000033 C++17

(```cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_STANDARD=17 ../..```)

```
Running ./fmt_test
Run on (8 X 2700 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 256 KiB (x4)
  L3 Unified 6144 KiB (x1)
Load Average: 2.69, 3.35, 2.73
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
FMTIostream/22                352 ns          351 ns      1962676
FMTIostreamCompile/22         335 ns          334 ns      2070700
FMTFormatter/22              33.2 ns         33.1 ns     21445421
FMTFormatterCompile/22       16.6 ns         16.5 ns     42194856
```

