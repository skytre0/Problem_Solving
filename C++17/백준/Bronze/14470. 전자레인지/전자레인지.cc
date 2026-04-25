#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d, e, sum = 0;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d >> e;
    if (a < 0) {
        sum += (0 - a) * c;
        a = 0;
    }
    if (a == 0) {
        sum += d;
    }
    if (a >= 0) {
        sum += (b - a) * e;
    }
    cout << sum;
    return 0;
}