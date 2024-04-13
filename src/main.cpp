#include <iostream>
#include <string>
#include <string_view>
#include "fibonacci.hpp"


void test() {
    std::string a = "abcdefg";
    std::string_view b = a;
    //a = "123";
    std::cout << b << std::endl;

    a = "this is a very long string that is going to be used to test the string_view";
    std::cout << b << std::endl;
}

int main(int argc, char** argv) {
    using namespace std;
    cout << "Hello, World!" << endl;
    cout << "Fibonacci of 10 is " << Fibonacci::recursiveFib(10) << endl;
    cout << "Fibonacci of 10 is " << Fibonacci::dynamicFib(10) << endl;
    cout << "Fibonacci of 10 is " << Fibonacci::constexprFib(10) << endl;
    test();
    return 0;
}