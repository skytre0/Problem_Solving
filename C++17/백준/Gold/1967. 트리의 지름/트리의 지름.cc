#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> arr[10005];      // 총합, 다음 좌표
int check[10005];
pair<int, int> M = {0, 1};

pair<int, int> solve1(pair<int, int> x) {
    for (size_t i = 0; i < arr[x.second].size(); i++) {
        if (check[arr[x.second][i].second] != 1) {
            pair<int, int> y = {x.first + arr[x.second][i].first, arr[x.second][i].second};
            if (y.first > M.first)
                M = y;
            check[x.second] = 1;
            solve1(y);
            check[x.second] = 0;
        }
    }
    return M;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a;
    for (size_t i = 0; i < a-1; i++) {
        cin >> b >> c >> d;
        arr[b].push_back({d, c});
        arr[c].push_back({d, b});
    }
    solve1({0, 1});
    M.first = 0;
    cout << solve1(M).first;
    return 0;
}