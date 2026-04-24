#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (a < 11) cout << -1;
    else if (a == 11 && b < 11)    cout << -1;
    else if (a == 11 && b == 11 && c < 11)    cout << -1;
    else    cout << (((a - 11) * 24) + (b - 11)) * 60 + (c - 11);
    return 0;
}