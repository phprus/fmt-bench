#include <ctime>
#include <sstream>

#include "test_functions.hpp"

#include "fmt/compile.h"
#include "fmt/format.h"

#ifdef FMT_OLD
    #include "fmt/ostream_old.h"
#else
    #include "fmt/ostream.h"
#endif


std::ostream& operator<<(std::ostream& os, const date& d) {
  os << d.year() << '-' << d.month() << '-' << d.day();
  return os;
}

namespace fmt {
template <> struct formatter<date> : ostream_formatter {};
#if __cplusplus >= 201703L
template <> struct formatter<std::filesystem::path> : ostream_formatter {};
#endif
}

namespace test_formatter {

#if __cplusplus >= 201703L
char* test_fmt_path(char* buffer, const std::filesystem::path& p)
{
    return fmt::format_to(buffer, "{}", p);
}
char* test_fmt_compile_path(char* buffer, const std::filesystem::path& p)
{
    return fmt::format_to(buffer, FMT_COMPILE("{}"), p);
}
#endif

char* test_fmt_date(char* buffer, const date& d)
{
    return fmt::format_to(buffer, "{}", d);
}
char* test_fmt_compile_date(char* buffer, const date& d)
{
    return fmt::format_to(buffer, FMT_COMPILE("{}"), d);
}


}  // namespace test_formatter
