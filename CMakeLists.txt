cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
project(val)

set(SOURCE src)
set(INCLUDE include/val)

set(TEST test)
set(INCLUDE_TEST include/catch2)

set(HEADERS ${SOURCE}/renderer.cpp ${INCLUDE}/renderer.hpp)

add_executable(val_test ${TEST}/test.cpp ${HEADERS})

add_executable(val ${SOURCE}/main.cpp ${HEADERS})
target_include_directories(val PUBLIC ${INCLUDE})

enable_testing()
add_test(NAME BinRun COMMAND val)
set_tests_properties(BinRun
    PROPERTIES PASS_REGULAR_EXPRESSION "SUCCESS"
)
add_test(NAME UnitTest COMMAND val_test)
set_tests_properties(UnitTest
    PROPERTIES PASS_REGULAR_EXPRESSION "All tests passed"
  )

