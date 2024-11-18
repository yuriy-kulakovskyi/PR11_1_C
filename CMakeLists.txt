cmake_minimum_required(VERSION 3.14)
project(PR11_1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/googletest)

add_executable(PR11_1
        src/h.c
        src/main.c
)

add_executable(PR11_1_tests
        src/h.c
        tests/test_h.cpp
)

target_link_libraries(PR11_1_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR11_1_tests)