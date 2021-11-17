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
// --------
/*
// --------
static void FMTFormatter_full(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_full(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_full);

static void FMTFormatterCompile_full(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_full(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatterCompile_full);
// --------
// --------
static void FMTFormatter_full2(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_full2(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_full2);

static void FMTFormatterCompile_full2(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_full2(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatterCompile_full2);
// --------
// --------
static void FMTFormatter_complex_1(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_complex_1(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_complex_1);

static void FMTFormatterCompile_complex_1(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_complex_1(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatterCompile_complex_1);
// --------
// --------
static void FMTFormatter_complex_2(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_complex_2(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatter_complex_2);

static void FMTFormatterCompile_complex_2(benchmark::State& state) {
  char buffer[max_buffer_size];

  std::time_t time = std::time(nullptr);
  std::tm tm = *localtime(&time);

  for (auto _ : state) {
    benchmark::DoNotOptimize(
        test_formatter::test_fmt_compile_complex_2(buffer, current_tm));
  }
}
BENCHMARK(FMTFormatterCompile_complex_2);
// --------
*/

BENCHMARK_MAIN();
