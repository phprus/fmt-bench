#pragma once

#include <cstddef>
#include <ctime>
#include <locale>

constexpr std::size_t max_buffer_size = 2048;

namespace test_formatter {

// {:%Z}
char* test_fmt_Z(char* buffer, const std::tm& tm);
char* test_fmt_compile_Z(char* buffer, const std::tm& tm);
char* test_fmt_Z_strftime(char* buffer, const std::tm& tm);
char* test_fmt_Z_time_put(char* buffer, const std::tm& tm, const std::locale& loc);

}  // namespace test_formatter
