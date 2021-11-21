#pragma once

#include <cstddef>
#include <ctime>
#include <locale>

constexpr std::size_t max_buffer_size = 2048;

namespace test_formatter {

// {:%z}
char* test_fmt_z(char* buffer, const std::tm& tm);
char* test_fmt_compile_z(char* buffer, const std::tm& tm);
char* test_fmt_z_strftime(char* buffer, const std::tm& tm);
char* test_fmt_z_time_put(char* buffer, const std::tm& tm, const std::locale& loc);


// {:%EY}
char* test_fmt_Y(char* buffer, const std::tm& tm);
char* test_fmt_compile_Y(char* buffer, const std::tm& tm);
char* test_fmt_Y_strftime(char* buffer, const std::tm& tm);
char* test_fmt_Y_time_put(char* buffer, const std::tm& tm, const std::locale& loc);


}  // namespace test_formatter
