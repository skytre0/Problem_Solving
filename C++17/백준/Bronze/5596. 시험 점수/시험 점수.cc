#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, sum;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    c = 2;
    while (c--) {
        b = 0;
        for (int i = 0; i < 4; i++) {
            cin >> a;
            b += a;
        }
        if (!c)   break;
        sum = b;
    }
    cout << max(b, sum);
}