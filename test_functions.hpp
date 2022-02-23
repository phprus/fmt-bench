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


template <typename Char> class basic_test_string {
 private:
  std::basic_string<Char> value_;

  static const Char empty[];

 public:
  explicit basic_test_string(const Char* value = empty) : value_(value) {}

  const std::basic_string<Char>& value() const { return value_; }
};

template <typename Char> const Char basic_test_string<Char>::empty[] = {0};

typedef basic_test_string<char> test_string;
typedef basic_test_string<wchar_t> test_wstring;

template <typename Char>
std::basic_ostream<Char>& operator<<(std::basic_ostream<Char>& os,
                                     const basic_test_string<Char>& s) {
  os << s.value();
  return os;
}


namespace test_formatter {

#if __cplusplus >= 201703L
char* test_fmt_path(char* buffer, const std::filesystem::path& p);
char* test_fmt_compile_path(char* buffer, const std::filesystem::path& p);
#endif
char* test_fmt_date(char* buffer, const date& d);
char* test_fmt_compile_date(char* buffer, const date& d);


char* test_fmt_complex_format(char* buffer, const test_string& s);
char* test_fmt_compile_complex_format(char* buffer, const test_string& s);

}  // namespace test_formatter
