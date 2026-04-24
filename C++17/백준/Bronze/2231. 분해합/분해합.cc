#include <iostream>

int digit(size_t a) {
    int digit = 0;
    while (a){
        digit += a%10;
        a /= 10;
    }
    return digit;
}

int main() {
    using namespace std;
    int a;
    int b = 0;
    cin >> a;
    for (size_t i = a/2; i <= a; i++) {
        if (digit(i) + i == a) {
            cout << i;
            b = 1;
            break;
        }
    }
    if (b == 0)
        cout << b;
    return 0;
}