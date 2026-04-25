#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, a, b;

int remain(int n) {
    return n * (n + 1) / 2;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    cin >> a >> b;
    if (a > ((2*m-n+1) * n / 2) || ((n-1) * n / 2) > a || m < n - 1) {
        cout << "-1";
        return 0;
    }
    int check;
    int save = m + 1;
    for (int i = n; i > 0; i--) {
        check = save;
        save = 0;
        for (int j = 1; j <= m; j++) {
            if (a > remain(i - 2) && j < check) {
                cout << "1 ";
                a--;
                save++;
            }
            else {
                cout << "9 ";
            }
        }
        cout << "\n";
    }

    return 0;
}