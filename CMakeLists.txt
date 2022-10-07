cmake_minimum_required(VERSION 3.23)
project(Lab2_Caelan)

set(CMAKE_CXX_STANDARD 14)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)



#add_executable(${PROJECT_NAME} operations.cpp)
#
#add_library(operations operations.cpp)
#
#add_executable(test_cases tests.cpp)
#target_link_libraries(test_cases PRIVATE Catch2::Catch2WithMain operations)
#target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain operations)
add_executable(${PROJECT_NAME} operations.cpp tests.cpp)

add_library(operations operations.cpp)


target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain operations)

list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)

catch_discover_tests(${PROJECT_NAME})
