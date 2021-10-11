#include <ctime>
#include <benchmark/benchmark.h>

#include "test_functions.hpp"


// --------
static void FMTFormatter_Y(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_Y(buffer, tm));
  }
}
BENCHMARK(FMTFormatter_Y)->Arg(EINVAL);

static void FMTFormatterCompile_Y(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_Y(buffer, tm));
  }
}
BENCHMARK(FMTFormatterCompile_Y)->Arg(EINVAL);
// --------
// --------
static void FMTFormatter_full(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_full(buffer, tm));
  }
}
BENCHMARK(FMTFormatter_full)->Arg(EINVAL);

static void FMTFormatterCompile_full(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_full(buffer, tm));
  }
}
BENCHMARK(FMTFormatterCompile_full)->Arg(EINVAL);
// --------
// --------
static void FMTFormatter_full2(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_full2(buffer, tm));
  }
}
BENCHMARK(FMTFormatter_full2)->Arg(EINVAL);

static void FMTFormatterCompile_full2(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_full2(buffer, tm));
  }
}
BENCHMARK(FMTFormatterCompile_full2)->Arg(EINVAL);
// --------


BENCHMARK_MAIN();
