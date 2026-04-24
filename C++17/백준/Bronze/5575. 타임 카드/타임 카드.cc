#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, p, q, r;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int x = 3;
    while (x--) {
        cin >> a >> b >> c >> p >> q >> r;
        a = p - a;
        b = q - b;
        c = r - c;
        if (c < 0) {
            b--;
            c += 60;
        }
        if (b < 0) {
            a--;
            b += 60;
        }
        cout << a << " " << b << " " << c << "\n";

    }
    return 0;
}