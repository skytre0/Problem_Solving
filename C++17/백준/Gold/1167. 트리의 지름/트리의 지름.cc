#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<pair<int, int>> arr[100005];
int check[100005];
queue<pair<int, int>> q;

pair<int, int> solve1() {
    pair<int, int> pa = {0, 1};
    while (!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        check[b] = 1;
        for (int i = 0; i < arr[b].size(); i++) {
            if (check[arr[b][i].second] != 1) {
                check[arr[b][i].second] = 1;
                if (a + arr[b][i].first > pa.first)
                    pa = {a + arr[b][i].first, arr[b][i].second};
                q.push({a + arr[b][i].first, arr[b][i].second});
            }
        }
    }
    return pa;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        while (true) {
            cin >> c;
            if (c != -1) 
                cin >> d;
            else
                break;
        arr[b].push_back({d, c});
        }
    }
    pair<int, int> M;
    q.push({0, 1});
    M = solve1();
    fill_n(check, 100005, 0);
    q.push({0, M.second});
    M = solve1();
    cout << M.first;
    return 0;
}