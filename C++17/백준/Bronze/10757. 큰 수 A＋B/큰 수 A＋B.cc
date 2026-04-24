#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string a, b, sum = "";
    cin >> a >> b;
    ll m = max(a.size(), b.size()), carry = 0;
    while (a.size() < m)
        a = "0" + a;
    while (b.size() < m)
        b = "0" + b;
    for (ll i = m - 1; i >= 0; i--) {
        sum = to_string((a[i] + b[i] - (2 * '0') + carry) % 10) + sum;
        carry = (a[i] + b[i] - (2 * '0') + carry) / 10;
    }
    if (carry)
        cout << carry << sum;
    else
        cout << sum;
    return 0;
}