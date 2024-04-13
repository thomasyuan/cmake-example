cmake_minimum_required(VERSION 3.16.0)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON) # avaliable from 3.24

find_package(GTest)
find_package(benchmark REQUIRED)

add_subdirectory(src)
add_subdirectory(test)

enable_testing()
add_test(NAME TestHelloWorld COMMAND TestHelloWorld)
