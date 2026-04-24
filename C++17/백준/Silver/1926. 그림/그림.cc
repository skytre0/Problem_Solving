#include <iostream>
#include <vector>
#include <queue>
#include <stack>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#define ll long long

using namespace std;

int n, a, b, m;
vector<vector<int>> v;

int bfs(int xth, int yth) {
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    queue<pair<int, int>> q;
    v[xth][yth] = 0;
    int size = 1;
    q.push({xth, yth});
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            // 0 <= x, y < n or m
            if (x + dx[i] < 0)    continue;
            if (x + dx[i] == n)   continue;
            if (y + dy[i] < 0)    continue;
            if (y + dy[i] == m)   continue;
            if (v[x + dx[i]][y + dy[i]] == 0)   continue;
            v[x + dx[i]][y + dy[i]] = 0;
            q.push({x + dx[i], y + dy[i]});
            size++;
        }
    }
    return size;
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n >> m;
    v = vector<vector<int>>(n, (vector<int>(m, 0)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    // 그냥 v 의 1 -> 0으로 overwrite하면 될 것으로 보임.
    // vector<vector<int>> visited (n, (vector<int>(m, 0)));
    int cnt = 0, M = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 1) {
                M = max(M, bfs(i, j));
                cnt++;
            }
        }
    }
    cout << cnt << "\n" << M;
    return 0;
}