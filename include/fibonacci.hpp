#ifndef FIBONACCI_HPP_
#define FIBONACCI_HPP_

#include <cstdint>

namespace Fibonacci {

std::uint64_t recursiveFib(std::uint64_t number);

std::uint64_t dynamicFib(std::uint64_t number);

constexpr std::uint64_t constexprFib(std::uint64_t number) {
    return number < 2 ? 1 : constexprFib(number - 1) + constexprFib(number - 2);
}

} // namespace Fibonacci

#endif // FIBONACCI_HPP_