#include <bits/stdc++.h>

using namespace std;

int a, b;
string s;
int arr[65][65];

void solve(int x, int y, int z) {
    b = 0;
    for (size_t i = x; i < x + z; i++) {
        for (size_t j = y; j < y + z; j++) {
            b += arr[i][j];
        }
    }
    if (b == 0)
        cout << 0;
    else if (b == z * z)
        cout << 1;
    else {
        cout << "(";
        solve(x, y, z/2);
        solve(x, y + z/2, z/2);
        solve(x + z/2, y, z/2);
        solve(x + z/2, y + z/2, z/2);
        cout << ")";
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> s;
        for (size_t j = 0; j < a; j++)
            arr[i][j] = s[j] - '0';
    }
    solve(0, 0, a);
    return 0;
}