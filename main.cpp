#include <iostream>

int main() {
    short int a = 5245;
    short int b = 5123;
    if ((a+b)>127) {
        if ((a + b) < -128)
            std::cout << char(a+b) << '\n';
        else
            std::cout << a+b << '\n';
    }
    else
        std::cout << a+b << '\n';
    if ((a-b)>127) {
        if ((a - b) < -128)
            std::cout << char(a-b) << '\n';
        else
            std::cout << a-b << '\n';
    }
    else
        std::cout << a-b << '\n';
    if ((a/b)>127) {
        if ((a/b) < -128)
            std::cout << char(a/b) << '\n';
        else
            std::cout << a/b << '\n';
    }
    else
        std::cout << a/b << '\n';
    if ((a*b)>127) {
        if ((a * b) < -128)
            std::cout << char(a*b) << '\n';
        else
            std::cout << a*b << '\n';
    }
    else
        std::cout << a*b << '\n';

    return 0;
}