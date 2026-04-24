#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a, b, m, x, y;
ll arr[101][101], age[101];

void dfs(ll a) {
    for (size_t i = 1; i < 101; i++) {
        if (arr[a][i] == 1 && age[i] == -1) {
            age[i] = age[a] + 1;
            dfs(i);
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    fill_n(age, 101, -1);
    cin >> n >> a >> b >> m;
    age[a] = 0;
    for (size_t i = 0; i < m; i++) {
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    dfs(a);
    cout << age[b];
    return 0;
}