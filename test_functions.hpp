#pragma once

#include <cstddef>
#include <ctime>
#include <locale>

#if __cplusplus >= 201703L
#include <filesystem>
#endif


constexpr std::size_t max_buffer_size = 2048;


class date {
  int year_, month_, day_;

 public:
  date(int year, int month, int day) : year_(year), month_(month), day_(day) {}

  int year() const { return year_; }
  int month() const { return month_; }
  int day() const { return day_; }
};


namespace test_formatter {

#if __cplusplus >= 201703L
char* test_fmt_path(char* buffer, const std::filesystem::path& p);
char* test_fmt_compile_path(char* buffer, const std::filesystem::path& p);
#endif
char* test_fmt_date(char* buffer, const date& d);
char* test_fmt_compile_date(char* buffer, const date& d);

}  // namespace test_formatter
