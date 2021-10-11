cmake_minimum_required(VERSION 3.14)
project(fmt_test)

add_subdirectory(benchmark)
add_subdirectory(fmt)


include_directories(include)

add_executable(fmt_test_old
    main.cpp
    test_formatter.cpp
)
target_link_libraries(fmt_test_old PRIVATE fmt::fmt benchmark::benchmark)
target_compile_definitions(fmt_test_old PUBLIC FMT_OLD)


add_executable(fmt_test_new
    main.cpp
    test_formatter.cpp
)
target_link_libraries(fmt_test_new PRIVATE fmt::fmt benchmark::benchmark)
