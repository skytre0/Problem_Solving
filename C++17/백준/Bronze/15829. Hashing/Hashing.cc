#include <string>
#include <iostream>

using namespace std;

int main() {
    long int n, a;
    long int M = 1234567891;
    long int b = 1;
    string st;
    cin >> n >> st;
    a = 0;
    for (size_t i = 0; i < n; i++) {
        a += (st[i] - 96) * b;
        b = (b * 31) % M;
        a %= M;
    }
    cout << a;
    return 0;
}