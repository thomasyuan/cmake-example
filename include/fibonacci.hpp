#ifndef FIBONACCI_HPP_
#define FIBONACCI_HPP_

#include <cstdint>

namespace Fibonacci {

std::uint64_t recursiveFib(std::uint64_t number);

std::uint64_t dynamicFib(std::uint64_t number);

inline constexpr std::uint64_t constexprFib(std::uint64_t number) {
    return number < 2 ? 1 : constexprFib(number - 1) + constexprFib(number - 2);
}

static constexpr std::uint64_t constexprFib2(std::uint64_t number) {
    std::uint64_t a = 1;
    std::uint64_t b = 1;
    for (std::uint64_t i = 2; i <= number; ++i) {
        std::uint64_t c = a + b;
        a = b;
        b = c;
    }
    return b;
}

} // namespace Fibonacci

#endif // FIBONACCI_HPP_