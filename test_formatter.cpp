#include <ctime>

#include "fmt/compile.h"
#include "fmt/format.h"

#ifdef FMT_OLD
    #include "fmt/chrono_old.h"
#else
    #include "fmt/chrono.h"
#endif


namespace test_formatter {


// {:%z}
char* test_fmt_z(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%z}", tm);
}
char* test_fmt_compile_z(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%z}"), tm);
}

// {:%Y}
char* test_fmt_Y(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%EY}", tm);
}
char* test_fmt_compile_Y(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%EY}"), tm);
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


// {:%a %b %d %T %Y}
char* test_fmt_complex_1(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%a %b %d %T %Y}", tm);
}
char* test_fmt_compile_complex_1(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%a %b %d %T %Y}"), tm);
}


// {:%a, %d %b %Y %T %z}
char* test_fmt_complex_2(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%a, %d %b %Y %T %z}", tm);
}
char* test_fmt_compile_complex_2(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%a, %d %b %Y %T %z}"), tm);
}


}  // namespace test_formatter
