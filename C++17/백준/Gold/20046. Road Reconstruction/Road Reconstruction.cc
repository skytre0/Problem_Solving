#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, m, n;
int arr[1005][1005] = {};
int ans[1005][1005] = {};
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            ans[i][j] = 987654321;
        }
    }
    if (arr[0][0] == -1) {
        cout << -1;
        return 0;
    }
    ans[0][0] = arr[0][0];
    pq.emplace(0, 0);
    while (!pq.empty()) {
        int x, y;
        x = pq.top().first;
        y = pq.top().second;
        pq.pop();
        if (x > 0 && arr[x-1][y] != -1) {
            if (ans[x-1][y] > ans[x][y] + arr[x-1][y]) {
                ans[x-1][y] = ans[x][y] + arr[x-1][y];
                pq.emplace(x-1, y);
            }
        }
        if (y > 0 && arr[x][y-1] != -1) {
            if (ans[x][y-1] > ans[x][y] + arr[x][y-1]) {
                ans[x][y-1] = ans[x][y] + arr[x][y-1];
                pq.emplace(x, y-1);
            }
        }
        if (x+1 < m && arr[x+1][y] != -1) {
            if (ans[x+1][y] > ans[x][y] + arr[x+1][y]) {
                ans[x+1][y] = ans[x][y] + arr[x+1][y];
                pq.emplace(x+1, y);
            }
        }
        if (y+1 < n && arr[x][y+1] != -1) {
            if (ans[x][y+1] > ans[x][y] + arr[x][y+1]) {
                ans[x][y+1] = ans[x][y] + arr[x][y+1];
                pq.emplace(x, y+1);
            }
        }
    }
    if (ans[m-1][n-1] != 987654321)
        cout << ans[m-1][n-1];
    else    cout << -1;
    return 0;
}