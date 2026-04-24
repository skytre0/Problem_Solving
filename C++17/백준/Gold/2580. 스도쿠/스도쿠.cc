#include <bits/stdc++.h>

using namespace std;

int a = 0, arr[9][9];
vector<pair<int, int>> v;

void solve(int p) {
    int check[10];
    fill_n(check, 10, 0);
    if (p < v.size()) {
        for (int i = 0; i < 9; i++) {
            check[arr[i][v[p].second]] = 1;
            check[arr[v[p].first][i]] = 1;
            check[arr[v[p].first/3 * 3 + i/3][v[p].second/3 * 3 + i%3]] = 1;
        }
        for (int i = 1; i < 10; i++) {
            if (check[i] != 1 && a == 0) {
                arr[v[p].first][v[p].second] = i;
                solve(p+1);
                if (a == 0)
                    arr[v[p].first][v[p].second] = 0;
                else
                    break;
            }
        }
    }
    else
        a++;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
                v.push_back({i, j});
        }
    }
    solve(0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}