cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

project(val)
set(INCLUDE include/val)
#set(INCLUDE_TEST include/val)
set(SRC src)
#set(TEST test)

# Source code
set(SOURCES 
    ${SRC}/renderer.cpp ${INCLUDE}/renderer.hpp
)

# Compile main
add_executable(val ${SRC}/main.cpp ${SOURCES})
target_include_directories(val PUBLIC ${INCLUDE})

# Compile tests
#add_executable(val_test ${TEST}/test.cpp ${SOURCES})
#target_include_directories(val PUBLIC ${INCLUDE_TEST})

# FindSDL2
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
target_link_libraries(val ${SDL2_LIBRARIES})

# Execution test suite
#enable_testing()
#add_test(NAME BinRun COMMAND val)
#set_tests_properties(BinRun
#    PROPERTIES PASS_REGULAR_EXPRESSION "SUCCESS"
#)
#add_test(NAME UnitTest COMMAND val_test)
#set_tests_properties(UnitTest
#    PROPERTIES PASS_REGULAR_EXPRESSION "All tests passed"
#)

