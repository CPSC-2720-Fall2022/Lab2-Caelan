cmake_minimum_required(VERSION 3.23)
project(Lab2_Caelan)
include_directories(include)
set(CMAKE_CXX_STANDARD 14)

find_package(catch2  REQUIRED)


add_executable(${PROJECT_NAME} operations.cpp tests.cpp)
add_library(operations operations.cpp)
add_library(tests tests.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain operations tests)

include(CTest)
include(Catch)

catch_discover_tests(tests)
enable_testing()