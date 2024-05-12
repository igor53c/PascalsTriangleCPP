cmake_minimum_required(VERSION 3.5)
project(PascalsTriangle LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(extern/googletest)

add_library(pascals_lib STATIC PascalsTriangle.cpp)

add_executable(PascalsTriangle main.cpp)
target_link_libraries(PascalsTriangle PRIVATE pascals_lib)

add_executable(PascalsTriangleTests tests.cpp)
target_link_libraries(PascalsTriangleTests PRIVATE pascals_lib gtest_main gtest)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PascalsTriangleTests)

include(GNUInstallDirs)
install(TARGETS PascalsTriangle PascalsTriangleTests
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})
