#include <iostream>

int main() {
    long long int a, b = 0, c = 0;
    for (size_t i = 0; i < 5; i++) {
        std::cin >> a;
        b += a * a;
    }
    std::cout << b % 10;
}