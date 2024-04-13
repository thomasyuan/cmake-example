add_executable(TestHelloWorld
    TestMain.cpp
    ${CMAKE_SOURCE_DIR}/src/fibonacci.cpp)

add_executable(BenchmarkHelloWorld
    BenchmarkMain.cpp
    ${CMAKE_SOURCE_DIR}/src/fibonacci.cpp)

target_include_directories(TestHelloWorld PUBLIC
    ${CMAKE_SOURCE_DIR}/include)

target_include_directories(BenchmarkHelloWorld PUBLIC
    ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(TestHelloWorld
    gtest::gtest)

target_link_libraries(BenchmarkHelloWorld
    benchmark::benchmark)
