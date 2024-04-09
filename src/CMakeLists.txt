add_executable(HelloWorld main.cpp fibonacci.cpp)

target_include_directories(HelloWorld PUBLIC
    ${CMAKE_SOURCE_DIR}/include)
