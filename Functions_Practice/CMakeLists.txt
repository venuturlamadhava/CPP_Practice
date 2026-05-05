cmake_minimum_required(VERSION 3.14)
project(FUNCTIONS_PRACTICE)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(src/03-functions)
add_subdirectory(tests)