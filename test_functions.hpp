#pragma once

#include <cstddef>
#include <ctime>

constexpr std::size_t max_buffer_size = 2048;

namespace test_formatter {

// {:%Y}
char* test_fmt_Y(char* buffer, const std::tm& tm);
char* test_fmt_compile_Y(char* buffer, const std::tm& tm);

// {:%Y-%m-%d %H:%M:%S}
char* test_fmt_full(char* buffer, const std::tm& tm);
char* test_fmt_compile_full(char* buffer, const std::tm& tm);

// {:%F %T}
char* test_fmt_full2(char* buffer, const std::tm& tm);
char* test_fmt_compile_full2(char* buffer, const std::tm& tm);


}  // namespace test_formatter
