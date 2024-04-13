#include <iostream>

#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "fibonacci.hpp"

namespace Fibonacci {

TEST_CASE("Benchmark Fibonacci") {
    // BENCHMARK_ADVANCED("dynamicFib 30")(Catch::Benchmark::Chronometer meter) {
    //     while (meter.runs() < 100) {
    //         dynamicFib(30);
    //     }
    // };
    BENCHMARK( "dynamicFib" ) {
        return dynamicFib(40);
    };
    // BENCHMARK( "recursiveFib 20" ) {
    //     return recursiveFib(30);
    // };

    BENCHMARK( "constexprFib" ) {
        return constexprFib(40);
    };

    BENCHMARK( "constexprFib2" ) {
        return constexprFib2(40);
    };
}
}