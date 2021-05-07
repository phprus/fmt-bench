#pragma once

#include <cstddef>
#include <system_error>

constexpr std::size_t max_buffer_size = 1024;

namespace test_iostream {
char* test_fmt(char* buffer, std::error_code value);
char* test_fmt_compile(char* buffer, std::error_code value);
}  // namespace test_iostream

namespace test_formatter {
char* test_fmt(char* buffer, std::error_code value);
char* test_fmt_compile(char* buffer, std::error_code value);
}  // namespace test_formatter
