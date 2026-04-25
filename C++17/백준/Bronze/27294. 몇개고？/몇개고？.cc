#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    a > 11 && a < 17 && b == 0 ? cout << 320 : cout << 280;
    return 0;
}