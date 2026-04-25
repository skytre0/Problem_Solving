#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, p, q, r;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> p >> q >> r;
    if (b < q)  cout << p - a;
    else if (b == q && c <= r)   cout << p - a;
    else    cout << p - a - 1;
    cout << "\n";
    cout << p - a + 1 << "\n";
    cout << p - a;
    return 0;
}