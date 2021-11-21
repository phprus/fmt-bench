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
static void FMTFormatter_z(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_z(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_z);

static void FMTFormatterCompile_z(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_z(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatterCompile_z);
static void FMTFormatter_z_strftime(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_z_strftime(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_z_strftime);
static void FMTFormatter_z_time_put(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);
  std::locale loc = std::locale::classic();

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_z_time_put(buffer, current_tm, loc));
  }
}
BENCHMARK(FMTFormatter_z_time_put);
// --------
// --------
static void FMTFormatter_Y(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_Y(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_Y);

static void FMTFormatterCompile_Y(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_Y(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatterCompile_Y);
static void FMTFormatter_Y_strftime(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_Y_strftime(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_Y_strftime);
static void FMTFormatter_Y_time_put(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);
  std::locale loc = std::locale::classic();

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_Y_time_put(buffer, current_tm, loc));
  }
}
BENCHMARK(FMTFormatter_Y_time_put);
// --------

BENCHMARK_MAIN();
