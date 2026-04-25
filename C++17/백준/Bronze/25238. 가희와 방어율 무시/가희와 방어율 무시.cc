#include <bits/stdc++.h>
#define ll long long

using namespace std;

double a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    a -= (a * b / 100);
    a >= 100 ? cout << 0 : cout << 1;
    return 0;
}