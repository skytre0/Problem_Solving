#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    ll a, b;
    while (cin >> a >> b) {
        cout << b / (a + 1) << "\n";
        if (cin.eof())
            break;
    }
    return 0;
}