#include <iostream>
#include <string>
#include <string_view>
#include "fibonacci.hpp"


int main(int argc, char** argv) {
    using namespace std;
    cout << "Hello, World!" << endl;
    cout << "Fibonacci of 10 is " << Fibonacci::recursiveFib(10) << endl;
    cout << "Fibonacci of 10 is " << Fibonacci::dynamicFib(10) << endl;
    cout << "Fibonacci of 10 is " << Fibonacci::constexprFib(10) << endl;
    return 0;
}