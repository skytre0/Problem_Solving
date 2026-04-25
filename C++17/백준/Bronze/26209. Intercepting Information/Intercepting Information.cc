#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 8; i++) {
        cin >> a;
        if (a > 1)  break;
    }
    a > 1 ? cout << "F" : cout << "S";
    return 0;
}