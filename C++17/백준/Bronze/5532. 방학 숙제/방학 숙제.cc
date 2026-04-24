#include <bits/stdc++.h>
#define ll long long

using namespace std;

int l, a, b, c, d;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> l >> a >> b >> c >> d;
    cout << l - max((a / c) + (a % c > 0 ? 1 : 0), (b / d) + (b % d > 0 ? 1 : 0)); 
}