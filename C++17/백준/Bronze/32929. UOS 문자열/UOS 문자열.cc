#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    a %= 3;
    if (a == 1) cout << "U";
    if (a == 2) cout << "O";
    if (a == 0) cout << "S";
    return 0;
}