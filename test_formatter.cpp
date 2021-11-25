#include <ctime>
#include <sstream>

#include "test_functions.hpp"

#include "fmt/compile.h"
#include "fmt/format.h"

#ifdef FMT_OLD
    #include "fmt/chrono_old.h"
#else
    #include "fmt/chrono.h"
#endif


namespace test_formatter {


// {:%Z}
char* test_fmt_Z(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, "{:%Z}", tm);
}
char* test_fmt_compile_Z(char* buffer, const std::tm& tm)
{
    return fmt::format_to(buffer, FMT_COMPILE("{:%Z}"), tm);
}
char* test_fmt_Z_strftime(char* buffer, const std::tm& tm)
{
    strftime(buffer, max_buffer_size, "%Z", &tm);
    return buffer;
}
char* test_fmt_Z_time_put(char* buffer, const std::tm& tm, const std::locale& loc)
{
    auto&& os = std::basic_ostringstream<char>();
    os.imbue(loc);
    using iterator = std::ostreambuf_iterator<char>;
    const auto& facet = std::use_facet<std::time_put<char, iterator>>(loc);
    auto end = facet.put(os, os, ' ', &tm, 'Z', 0);

    const auto &s = os.str();
    std::memcpy(buffer, s.c_str(), s.size() + 1);

    return buffer;
}

}  // namespace test_formatter
