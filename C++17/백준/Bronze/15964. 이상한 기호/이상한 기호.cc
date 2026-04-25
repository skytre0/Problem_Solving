#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    cout << (a + b) * (a - b);
    return 0;
}