#include <benchmark/benchmark.h>

#include "test_functions.hpp"

static void FMTIostream(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_iostream::test_fmt(buffer, std::error_code(static_cast<int>(state.range(0)), std::generic_category())));
  }
}
BENCHMARK(FMTIostream)->Arg(EINVAL);

static void FMTIostreamCompile(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_iostream::test_fmt_compile(buffer, std::error_code(static_cast<int>(state.range(0)), std::generic_category())));
  }
}
BENCHMARK(FMTIostreamCompile)->Arg(EINVAL);

static void FMTFormatter(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt(buffer, std::error_code(static_cast<int>(state.range(0)), std::generic_category())));
  }
}
BENCHMARK(FMTFormatter)->Arg(EINVAL);

static void FMTFormatterCompile(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile(buffer, std::error_code(static_cast<int>(state.range(0)), std::generic_category())));
  }
}
BENCHMARK(FMTFormatterCompile)->Arg(EINVAL);


BENCHMARK_MAIN();
