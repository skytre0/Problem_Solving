#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    a < b / 2 + c ? cout << a : cout << b / 2 + c;
    return 0;
}