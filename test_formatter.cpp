#include "test_functions.hpp"

#ifdef FMT_OLD
    #include "fmt/format_old.h"
#else
    #include "fmt/format.h"
#endif
#include "fmt/compile.h"


namespace test_formatter {


char* test_fmt(char* buffer, double d)
{
    auto *p = buffer;
    p = fmt::format_to(p, "{:a}", d);
    p = fmt::format_to(p, "{:.10a}", d);
    return p;
}

char* test_fmt_compile(char* buffer, double d)
{
    auto *p = buffer;
    p = fmt::format_to(p, FMT_COMPILE("{:a}"), d);
    p = fmt::format_to(p, FMT_COMPILE("{:.10a}"), d);
    return p;
}


}  // namespace test_formatter
