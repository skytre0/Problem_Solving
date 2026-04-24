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
vector<vector<int>> tmp;

// tmp[i][j] == -cnt -> 이번에 바다가 됨 = 0 >= sea < -cnt 만 바다로 간주 = continue
// v에서 확인 : 0 >= sea
// visited : v[i][j] == 11 -> visited한 빙하 = continue

int dfs(int x, int y, int cnt) {
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    tmp[x][y] = v[x][y];
    v[x][y] = 11;
    for (int i = 0; i < 4; i++) {
        if (tmp[x + dx[i]][y + dy[i]] == -cnt)  continue;
        if (v[x + dx[i]][y + dy[i]] > 10)    continue;
        if (v[x + dx[i]][y + dy[i]] <= 0)   tmp[x][y]--;
    }

    if (tmp[x][y] < 1)  tmp[x][y] = -cnt;

    for (int i = 0; i < 4; i++) {
        if (tmp[x + dx[i]][y + dy[i]] == -cnt)  continue;
        if (v[x + dx[i]][y + dy[i]] > 10)    continue;
        if (v[x + dx[i]][y + dy[i]] > 0) dfs(x + dx[i], y + dy[i], cnt);
    }
    return 0;
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n >> m;
    v = vector<vector<int>> (n, (vector<int> (m, 0)));
    tmp = vector<vector<int>> (n, (vector<int> (m, 0)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    
    int cnt = 1;
    while (cnt) {
        int dfss = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] < 1)   {tmp[i][j] = v[i][j]; continue;}
                if (v[i][j] > 10)   continue;
                dfs(i, j, cnt);
                dfss++;
            }
        }
        if (!dfss)  cnt = 0;
        else {
            if (dfss > 1)    break;
            cnt++;
            tmp.swap(v);
        }

    }
    
    cout << (cnt == 0 ? 0 : --cnt);
    return 0;
}