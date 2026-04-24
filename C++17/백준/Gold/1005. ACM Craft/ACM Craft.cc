#include <bits/stdc++.h>
#define ll long long

using namespace std;

int arr[1005][1005];
int dp[1005];
int linked[1005];
int n, a, b;

void solve() {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (linked[i] == 0) {
            q.push(i);
            dp[i] = arr[0][i];
        }
    }
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (arr[cur][i] == 1) {
                dp[i] = max(dp[i], dp[cur] + arr[0][i]);
                if (--linked[i] == 0)
                    q.push(i);
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> a;
        for (int i = 1; i <= n; i++) {
            cin >> arr[0][i];
        }
        for (int i = 0; i < a; i++) {
            int x, y;
            cin >> x >> y;
            arr[x][y] = 1;
            linked[y]++;
        }

        cin >> b;
        solve();
        cout << dp[b] << "\n";
        memset(arr, 0, sizeof(arr));
        memset(dp, 0, sizeof(dp));
        memset(linked, 0, sizeof(linked));
    }
    return 0;
}
