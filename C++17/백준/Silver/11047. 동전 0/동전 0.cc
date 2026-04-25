#include <iostream>

using namespace std;

int main () {
    int a[10];
    int b, c, d;
    d = 0;
    cin >> b >> c;
    for (size_t i = 0; i < b; i++) {
        cin >> a[i];
    }
    for (size_t i = b-1; i >= 0; i--) {
        if (c >= a[i]) {
            d += c/a[i];
            c -= (c/a[i])*a[i];
        }
        if (c == 0) {
            cout << d;
            break;
        }
    }
    return 0;
}