#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d;
    (b / d) * (c / d) > a ? cout << a : cout << (b / d) * (c / d);
    return 0;
}