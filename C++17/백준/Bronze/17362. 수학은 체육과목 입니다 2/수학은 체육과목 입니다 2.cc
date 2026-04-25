#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    a %= 8;
    if (a == 0) a = 8;
    a < 6 ? cout << a : cout << abs(a - 8) + 2;
    return 0;
}