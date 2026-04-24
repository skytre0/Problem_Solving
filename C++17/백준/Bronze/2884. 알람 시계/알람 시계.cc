#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    if (b >= 45) {
        cout << a << " " << b - 45;
    }
    else if (a == 0) {
        cout << "23 " << b + 15;
    }
    else {
        cout << a - 1 << " " << b + 15;
    }
    return 0;
}