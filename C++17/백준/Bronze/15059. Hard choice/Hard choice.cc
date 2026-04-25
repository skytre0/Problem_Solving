#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, p, q, r, sum = 0;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> p >> q >> r;
    if (a < p)  sum += p - a;
    if (b < q)  sum += q - b;
    if (c < r)  sum += r - c;
    cout << sum;
    return 0;
}