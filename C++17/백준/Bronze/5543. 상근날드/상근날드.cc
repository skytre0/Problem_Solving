#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, p, q;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    b = 3000;
    for (int i = 0; i < 3; i++) {
        cin >> a;
        b = min(a, b);
    }
    q = 3000;
    for (int i = 0; i < 3; i++) {
        cin >> p;
        q = min(p, q);
    }
    cout << b + q - 50;
    return 0;
}