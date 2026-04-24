#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a, b, c, d, n = 0;
    cin >> a >> b >> c;
    a = pow(2, a);
    while (a != 1) {
        a /= 2;
        b -= a;
        c -= a;
        if (b < 0 && c < 0) {
            b += a;
            c += a;
        }
        else if (b < 0 && c >= 0) {
            n += a * a;
            b += a;
        }
        else if (b >= 0 && c < 0) {
            n += a * a * 2;
            c += a;
        }
        else if (b >= 0 && c >= 0) {
            n += a * a * 3;
        }
    }
    cout << n;
    return 0;
}