#include "fibonacci.hpp"
#include <vector>

namespace Fibonacci {

std::uint64_t recursiveFib(std::uint64_t number) {
    return number < 2 ? 1 : recursiveFib(number - 1) + recursiveFib(number - 2);
}

std::uint64_t dynamicFib(std::uint64_t number) {
    std::vector<uint64_t> fbs(2, 1);
    for (size_t i = 2; i <= number; ++i) {
        fbs.push_back(fbs[i - 1] + fbs[i - 2]);
    }
    return fbs[number];
}

} // namespace Fibonacci