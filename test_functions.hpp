#pragma once

#include <cstddef>

constexpr std::size_t max_buffer_size = 2048;

namespace test_formatter {

char* test_fmt(char* buffer, double d);
char* test_fmt_compile(char* buffer, double d);

}  // namespace test_formatter
