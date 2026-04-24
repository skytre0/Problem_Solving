#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c;
    while (c > 0) {
        a %= b;
        a *= 10;
        d = a / b;
        c--;
    }
    cout << d;
    return 0;
}