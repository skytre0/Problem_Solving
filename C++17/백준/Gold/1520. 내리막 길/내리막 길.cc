#include <iostream>
#include <vector>
#include <queue>
#include <stack>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <tuple>
#define ll long long

using namespace std;

int n, a, b, m;
vector<vector<int>> v;
vector<vector<int>> visited;

// 백트래킹 - 이동한 흔적 있으면 바로 return (0 = 도착 못하는 경로 판별남, 1 = 도착 가능한 경로 판별남)
int dfs (int x, int y) {
    if (x == n-1 && y == m-1)   return 1;
    if (visited[x][y] != -1)   return visited[x][y];
    visited[x][y] = 0;
    int cnt = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++) {
        if (x + dx[i] < 0)  continue;
        if (x + dx[i] == n) continue;
        if (y + dy[i] < 0)  continue;
        if (y + dy[i] == m) continue;
        if (v[x + dx[i]][y + dy[i]] >= v[x][y]) continue;
        visited[x][y] += dfs(x + dx[i], y + dy[i]);
    }
    return visited[x][y];
}

// 위상 정렬 - 가장 h 높은 곳 = 여기로 더 오는 선택지 없음 = 일종의 dead end로 숫자 정해짐 = 탐색 가능.
int bfs (int xth, int yth) {
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, less<tuple<int, int, int>>> pq;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    pq.push({v[xth][yth], xth, yth});
    visited[xth][yth] = 1;
    while (!pq.empty()) {
        int h = get<0>(pq.top());
        int x = get<1>(pq.top());
        int y = get<2>(pq.top());
        pq.pop();
        for (int i = 0; i < 4; i++) {
            if (x + dx[i] < 0)  continue;
            if (x + dx[i] == n) continue;
            if (y + dy[i] < 0)  continue;
            if (y + dy[i] == m) continue;
            if (v[x + dx[i]][y + dy[i]] >= h) continue;
            // 0이 아니면 이미 pq에 있음 = 넣으면 중복됨 = 넣으면 안 됨.
            if (!visited[x + dx[i]][y + dy[i]])
                pq.push({v[x + dx[i]][y + dy[i]], x + dx[i], y + dy[i]});
            visited[x + dx[i]][y + dy[i]] += visited[x][y];
        }
    }
    return visited[n-1][m-1];
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n >> m;
    v = vector<vector<int>> (n, (vector<int> (m, 0)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    // visited = vector<vector<int>> (n, (vector<int> (m, -1)));
    // cout << dfs(0, 0);
    visited = vector<vector<int>> (n, (vector<int> (m, 0)));
    cout << bfs(0, 0);
    return 0;
}