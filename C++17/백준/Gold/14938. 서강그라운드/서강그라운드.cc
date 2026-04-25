#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c;
ll x, y, z;
ll arr[101][101];
ll num[101][2];

void solve(ll ori, ll pos, ll sum) {
    num[pos][1] = 1;
    for (size_t i = 0; i < a; i++) {
        if (sum + arr[pos][i] <= arr[ori][i]) {
            arr[ori][i] = sum + arr[pos][i];
            arr[i][ori] = arr[ori][i];
            if (num[i][1] == 0 && sum + arr[pos][i] <= b) {
                solve(ori, i, sum + arr[pos][i]);
            }
        }
    }
    num[pos][1] = 0;
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    fill_n(arr[0], 101 * 101, 100000000);
    for (size_t i = 0; i < a; i++) {
        cin >> num[i][0];
        arr[i][i] = 0;
    }
    for (size_t i = 0; i < c; i++) {
        cin >> x >> y >> z;
        arr[x-1][y-1] = z;
        arr[y-1][x-1] = z;
    }
    for (size_t i = 0; i < a; i++) {
        solve(i, i, 0);
    }
    c = 0;
    for (size_t i = 0; i < a; i++) {
        ll sum = 0;
        for (size_t j = 0; j < a; j++) {
            if (arr[i][j] <= b)
                sum += num[j][0];
        }
        c = max(c, sum);
    }
    cout << c;
    return 0;
}