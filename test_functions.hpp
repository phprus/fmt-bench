#pragma once

#include <cstddef>
#include <ctime>

constexpr std::size_t max_buffer_size = 2048;

namespace test_formatter {

// {:%z}
char* test_fmt_z(char* buffer, const std::tm& tm);
char* test_fmt_compile_z(char* buffer, const std::tm& tm);

// {:%Y}
char* test_fmt_Y(char* buffer, const std::tm& tm);
char* test_fmt_compile_Y(char* buffer, const std::tm& tm);

// {:%Y-%m-%d %H:%M:%S}
char* test_fmt_full(char* buffer, const std::tm& tm);
char* test_fmt_compile_full(char* buffer, const std::tm& tm);

// {:%F %T}
char* test_fmt_full2(char* buffer, const std::tm& tm);
char* test_fmt_compile_full2(char* buffer, const std::tm& tm);


// {:%a %b %d %T %Y}
char* test_fmt_complex_1(char* buffer, const std::tm& tm);
char* test_fmt_compile_complex_1(char* buffer, const std::tm& tm);

// {:%a, %d %b %Y %T %z}
char* test_fmt_complex_2(char* buffer, const std::tm& tm);
char* test_fmt_compile_complex_2(char* buffer, const std::tm& tm);

}  // namespace test_formatter
