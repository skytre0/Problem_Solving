#include <bits/stdc++.h>
#define ll long long

using namespace std;

double a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    (a * b / c) > (a / b * c) ? cout << (int)(a * b / c) : cout << (int)(a / b * c);
    return 0;
}