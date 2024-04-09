cmake_minimum_required(VERSION 3.25)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

add_executable(HelloWorld src/main.cpp)
