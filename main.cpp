#include <ctime>
#include <benchmark/benchmark.h>

#include "test_functions.hpp"

// --------
#if __cplusplus >= 201703L

std::filesystem::path get_current_path()
{
    return std::filesystem::absolute(std::filesystem::path("."));
}
const std::filesystem::path current_path = get_current_path();

#endif

date get_current_date()
{
  return date(2022, 02, 20);
}
const date current_date = get_current_date();

// --------
#if __cplusplus >= 201703L

static void FMTFormatter_path(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_path(buffer, current_path));
  }
}
BENCHMARK(FMTFormatter_path);

static void FMTFormatterCompile_path(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_path(buffer, current_path));
  }
}
BENCHMARK(FMTFormatterCompile_path);

#endif
// --------

static void FMTFormatter_date(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_date(buffer, current_date));
  }
}
BENCHMARK(FMTFormatter_date);

static void FMTFormatterCompile_date(benchmark::State& state) {
  char buffer[max_buffer_size];
  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_date(buffer, current_date));
  }
}
BENCHMARK(FMTFormatterCompile_date);


// --------

BENCHMARK_MAIN();
