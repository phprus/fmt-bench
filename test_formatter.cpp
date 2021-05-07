#include <benchmark/benchmark.h>

#include <system_error>

#include "fmt/compile.h"
#include "fmt/format.h"


namespace fmt {

template <>
struct formatter<std::error_code>
{
    FMT_CONSTEXPR auto parse(format_parse_context& ctx) -> decltype(ctx.begin())
    {
        // Parse the presentation format and store it in the formatter:
        auto it = ctx.begin(), end = ctx.end();

        // Check if reached the end of the range:
        if (it != end && *it != '}')
            throw format_error("invalid format");

        // Return an iterator past the end of the parsed range:
        return it;
    }

    template <typename FormatContext>
    FMT_CONSTEXPR auto format(const std::error_code& ec, FormatContext& ctx) const
      -> decltype(ctx.out())
    {
        return format_to(ctx.out(), FMT_COMPILE("{}:{}"), ec.category().name(), ec.value());
    }
};

}  // namespace fmt


namespace test_formatter {

char* test_fmt(char* buffer, std::error_code value)
{
    return fmt::format_to(buffer, "{}", value);
}
char* test_fmt_compile(char* buffer, std::error_code value)
{
    return fmt::format_to(buffer, FMT_COMPILE("{}"), value);
}

}  // namespace test_formatter
