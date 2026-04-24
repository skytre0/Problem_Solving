#include <iostream>

using namespace std;

int main() {
    long long int a, b = 0, c = 0, n;
    cin >> a;
    for (size_t i = 1; i < a+1; i++) {
        n = i;
        while (n%2 == 0) {
            b += 1;
            n /= 2;
        }
        n = i;
        while (n%5 == 0) {
            c += 1;
            n /= 5;
        }
    }
    cout << min(b, c);
    return 0;
}