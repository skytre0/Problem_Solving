#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d, e, f;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d >> e >> f;
    a = (3 * a + 2 * b + c);
    d = (3 * d + 2 * e + f);
    a > d ? cout << "A" : d > a ? cout << "B" : cout << "T";
    return 0;
}