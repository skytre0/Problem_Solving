#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c, n;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> a >> b;
    if (n == 3) {
        if (a == 2 && b == 2)
            cout << 1;
        else
            cout << 4;
    }
    else {
        if (n%2 == 0)
            cout << (n * n + 1) / 2;
        else {
            if ((a+b)%2 == 0)
                cout << ((ll)(n * n) + 1) / 2;
            else
                cout << (ll)(n * n) / 2;
        }
    }
    return 0;
}
