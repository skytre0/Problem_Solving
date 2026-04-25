#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (a + b >= 2 * c) cout << a + b - 2 * c;
    else cout << a + b;
    return 0;
}