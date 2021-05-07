#include <benchmark/benchmark.h>

#include "fmt/format.h"
#include "fmt/compile.h"
#include "fmt/ostream.h"

namespace test_iostream {

char* test_fmt(char* buffer, std::error_code value)
{
    return fmt::format_to(buffer, "{}", value);
}

char* test_fmt_compile(char* buffer, std::error_code value)
{
    return fmt::format_to(buffer, FMT_COMPILE("{}"), value);
}

}  // namespace test_iostream
