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
Load Average: 1.37, 1.92, 1.73
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
FMTIostream/22                402 ns          401 ns      1775694
FMTIostreamCompile/22         383 ns          383 ns      1781810
FMTFormatter/22              60.5 ns         60.5 ns     11732565
FMTFormatterCompile/22       62.3 ns         62.3 ns     11168728
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
Load Average: 1.33, 1.86, 1.71
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
FMTIostream/22                364 ns          363 ns      1912579
FMTIostreamCompile/22         352 ns          352 ns      1977044
FMTFormatter/22              60.7 ns         60.7 ns     11031787
FMTFormatterCompile/22       52.9 ns         52.8 ns     11743784
```

