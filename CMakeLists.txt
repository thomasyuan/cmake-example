cmake_minimum_required(VERSION 3.16.0)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON) # avaliable from 3.24
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# set(CMAKE_CXX_FLAGS_RELEASE "-O3")
find_package(GTest)
find_package(benchmark REQUIRED)
find_package(Catch2 REQUIRED)

add_subdirectory(src)
add_subdirectory(test)

enable_testing()
add_test(NAME TestHelloWorld COMMAND TestHelloWorld)
