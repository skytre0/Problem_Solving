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

int n, a, b;
vector<vector<int>> v;

int bfs (int xth, int yth) {
    int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
    int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({xth, yth});
    v[xth][yth] = 0;

    while (!pq.empty()) {
        int x = pq.top().first;
        int y = pq.top().second;
        pq.pop();

        for (int i = 0; i < 8; i++) {
            if (x + dx[i] < 0)   continue;
            if (y + dy[i] < 0)   continue;
            if (x + dx[i] == b)   continue;
            if (y + dy[i] == a)   continue;
            if (v[x + dx[i]][y + dy[i]] == 0)   continue;
            if (v[x + dx[i]][y + dy[i]] == 0)   continue;
            pq.push({x + dx[i], y + dy[i]});
            v[x + dx[i]][y + dy[i]] = 0;
        }
    }

    return 1;
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    while (1) {
        cin >> a >> b;
        if (a + b == 0) break;
        v = vector<vector<int>>(b, vector<int>(a, 0));
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                cin >> n;
                v[i][j] = n;
            }
        }
        int ans = 0;
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                if (v[i][j] == 1)   ans += bfs(i, j);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}