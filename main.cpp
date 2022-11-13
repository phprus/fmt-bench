#include <ctime>
#include <benchmark/benchmark.h>

#include "test_functions.hpp"

// --------

double d1 = -42.0;
double d2 = 16.0;

// --------
static void FMTFormatter_double1(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt(buffer, d1));
  }
}
BENCHMARK(FMTFormatter_double1);

static void FMTFormatterCompile_double1(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile(buffer, d1));
  }
}
BENCHMARK(FMTFormatterCompile_double1);
// --------

// --------
static void FMTFormatter_double2(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt(buffer, d2));
  }
}
BENCHMARK(FMTFormatter_double2);

static void FMTFormatterCompile_double2(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile(buffer, d2));
  }
}
BENCHMARK(FMTFormatterCompile_double2);
// --------


BENCHMARK_MAIN();
