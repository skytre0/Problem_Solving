#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#define ll long long

using namespace std;

int n, a, M = 0, islands = 0;
vector<vector<int>> v;

int dfs (int depth, int x, int y, vector<vector<int>> &visited) {
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        // n 범위 안에 들어오도록.
        if (x + dx[i] < 0)  continue;
        if (y + dy[i] < 0)  continue;
        if (x + dx[i] == visited.size())    continue;
        if (y + dy[i] == visited.size())    continue;
        // 방문한 적 없는 곳
        if (visited[x + dx[i]][y + dy[i]])    continue;
        // 수심 초과 = 땅 개수만 cnt
        if (v[x + dx[i]][y + dy[i]] > depth)
            dfs(depth, x + dx[i], y + dy[i], visited);
    }
    return 1;
}

int bfs (int depth, int xth, int yth, vector<vector<int>> &visited) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    visited[xth][yth] = 1;
    pq.push({xth, yth});
    while (!pq.empty()) {
        int x = pq.top().first;
        int y = pq.top().second;
        pq.pop();
        for (int i = 0; i < 4; i++) {
            // n 범위 안에 들어오도록.
            if (x + dx[i] < 0)  continue;
            if (y + dy[i] < 0)  continue;
            if (x + dx[i] == visited.size())    continue;
            if (y + dy[i] == visited.size())    continue;
            // 방문한 적 없는 곳
            if (visited[x + dx[i]][y + dy[i]])    continue;
            // 수심 초과 = 땅 개수만 cnt
            if (v[x + dx[i]][y + dy[i]] > depth) {
                visited[x + dx[i]][y + dy[i]] = 1;
                pq.push({x + dx[i], y + dy[i]});
            }
        }
    }

    return 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n;
    v = vector<vector<int>>(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a;
            v[i][j] = a;
            M = max(M, a);
        }
    }
    for (int i = 0; i <= M; i++) {
        vector<vector<int>> visited(n, vector<int>(n, 0));
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                // if (!visited[j][k] && v[j][k] > i) cnt += dfs(i, j, k, visited);
                if (!visited[j][k] && v[j][k] > i) cnt += bfs(i, j, k, visited);
            }
        }
        islands = max(islands, cnt);
    }
    cout << islands;
    return 0;
}