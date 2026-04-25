#include <string>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    string a = "";
    int p, q;
    int x;
    string y;
    cin >> a;
    q = a.length();
    for (size_t i = 0; i < 3; i++) {
        x = 0;
        y = "";
        for (size_t j = 0; j <= i; j++) {
            x *= 10;
            x += a[j] - '0';
        }
        while (y.length() < q) {
            y += to_string(x);
            x += 1;
        }
        if (y == a) {
            x--;
            p = x;
            break;
        }
    }
    while (q != 0) {
        q -= to_string(x).length();
        x--;
    }
    cout << ++x << " " << p;
    return 0;
}