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
Load Average: 1.79, 1.73, 1.69
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
FMTIostream/22                369 ns          368 ns      1953098
FMTIostreamCompile/22         385 ns          384 ns      1863938
FMTFormatter/22              75.9 ns         75.8 ns      9392947
FMTFormatterCompile/22       79.6 ns         79.5 ns      8838830
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
Load Average: 1.68, 1.71, 1.69
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
FMTIostream/22                389 ns          388 ns      1854806
FMTIostreamCompile/22         380 ns          378 ns      1794761
FMTFormatter/22              33.7 ns         33.7 ns     20944226
FMTFormatterCompile/22       16.4 ns         16.4 ns     42452029
```

