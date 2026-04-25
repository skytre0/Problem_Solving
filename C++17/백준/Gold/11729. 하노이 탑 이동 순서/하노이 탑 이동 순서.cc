#include <bits/stdc++.h>

using namespace std;

int a;

void solve(int num, int x, int y, int z) {
    if (num == 1)
        cout << x << " " << z << "\n";
    else {
        solve(num-1, x, z, y);
        cout << x << " " << z << "\n";
        solve(num-1, y, x, z);
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    cout << (1 << a) - 1 << "\n";
    solve(a, 1, 2, 3);
    return 0;
}