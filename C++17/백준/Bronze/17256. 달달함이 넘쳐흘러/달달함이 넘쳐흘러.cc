#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, p, q, r;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> p >> q >> r;
    cout << p - c << " " << q / b << " " << r - a;
    return 0;
}