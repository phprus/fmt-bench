#include <ctime>
#include <benchmark/benchmark.h>

#include "test_functions.hpp"

// --------
std::tm current()
{
    std::time_t time = std::time(nullptr);
    std::tm tm = *localtime(&time);
    return tm;
}
const std::tm current_tm = current();

// --------
static void FMTFormatter_Z(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_Z(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_Z);

static void FMTFormatterCompile_Z(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_Z(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatterCompile_Z);
static void FMTFormatter_Z_strftime(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_Z_strftime(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_Z_strftime);
static void FMTFormatter_Z_time_put(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);
  std::locale loc = std::locale::classic();

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_Z_time_put(buffer, current_tm, loc));
  }
}
BENCHMARK(FMTFormatter_Z_time_put);
// --------

BENCHMARK_MAIN();
