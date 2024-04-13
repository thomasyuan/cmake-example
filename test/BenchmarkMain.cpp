#include <iostream>

#include "benchmark/benchmark.h"
#include "benchmark/export.h"
#include "fibonacci.hpp"

namespace bm = benchmark;

namespace Fibonacci {

static void i32_addition(bm::State &state) {
    int32_t a, b, c;
    for (auto _ : state)
        c = a + b;
}

BENCHMARK(i32_addition);
}