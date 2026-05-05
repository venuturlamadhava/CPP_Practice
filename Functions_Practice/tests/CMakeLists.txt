add_executable(run_tests
  test_basic_functions.cpp
  test_recursion.cpp
  test_pass_by_ref.cpp
  test_overloading.cpp
)

target_link_libraries(run_tests
  functions_lib
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(run_tests)