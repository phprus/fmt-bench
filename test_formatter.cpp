#include <ctime>

#include "fmt/compile.h"
#include "fmt/format.h"

#ifdef FMT_OLD
    #include "fmt/chrono_old.h"
#else
    #include "fmt/chrono.h"
#endif


namespace test_formatter {

// {:%Y}
char* test_fmt_Y(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%Y}", tm);
}
char* test_fmt_compile_Y(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%Y}"), tm);
}

// {:%Y-%m-%d %H:%M:%S}
char* test_fmt_full(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%Y-%m-%d %H:%M:%S}", tm);
}
char* test_fmt_compile_full(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%Y-%m-%d %H:%M:%S}"), tm);
}

// {:%F %T}
char* test_fmt_full2(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%F %T}", tm);
}
char* test_fmt_compile_full2(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%F %T}"), tm);
}



}  // namespace test_formatter
