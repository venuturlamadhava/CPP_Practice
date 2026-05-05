add_library(functions_lib
  basic_functions.cpp
  recursion.cpp
  pass_by_ref.cpp
  overloading.cpp
)
target_include_directories(functions_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(functions_main main.cpp)
target_link_libraries(functions_main functions_lib)