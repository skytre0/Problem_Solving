#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b = 64, n = 0;
    cin >> a;
    while (true) {
        if (a - b < 0)
            b /= 2;
        else if (a - b == 0) {
            n += 1;
            break;
        }
        else {
            a -= b;
            n += 1;
            b /= 2;
        }
    }
    cout << n;
    return 0;
}