#include <ctime>

#include "test_functions.hpp"

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
char* test_fmt_z_strftime(char* buffer, const std::tm& tm)
{
    strftime(buffer, max_buffer_size, "%z", &tm);
    return buffer;
}
char* test_fmt_z_time_put(char* buffer, const std::tm& tm, const std::locale& loc)
{
    auto&& os = std::basic_ostringstream<char>();
    os.imbue(loc);
    using iterator = std::ostreambuf_iterator<char>;
    const auto& facet = std::use_facet<std::time_put<char, iterator>>(loc);
    auto end = facet.put(os, os, ' ', &tm, 'z', 0);

    const auto &s = os.str();
    std::memcpy(buffer, s.c_str(), s.size() + 1);

    return buffer;
}

// {:%EY}
char* test_fmt_Y(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%EY}", tm);
}
char* test_fmt_compile_Y(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%EY}"), tm);
}
char* test_fmt_Y_strftime(char* buffer, const std::tm& tm)
{
    strftime(buffer, max_buffer_size, "%EY", &tm);
    return buffer;
}
char* test_fmt_Y_time_put(char* buffer, const std::tm& tm, const std::locale& loc)
{
    auto&& os = std::basic_ostringstream<char>();
    os.imbue(loc);
    using iterator = std::ostreambuf_iterator<char>;
    const auto& facet = std::use_facet<std::time_put<char, iterator>>(loc);
    auto end = facet.put(os, os, ' ', &tm, 'Y', 'E');

    const auto &s = os.str();
    std::memcpy(buffer, s.c_str(), s.size() + 1);

    return buffer;
}

}  // namespace test_formatter
