#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#define ll long long

using namespace std;

int a, b, c, x, y, sum = 0;
vector<int> v[100005];
int arr[100005];

void solve(int root) {
    arr[root]++;
    for (register int i = 0; i < v[root].size(); i++) {
        if (arr[v[root][i]] == 0) {
            solve(v[root][i]);
            arr[root] += arr[v[root][i]];
        }
    }
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    for (register int i = 1; i < a; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    solve(b);
    while (c--) {
        cin >> x;
        cout << arr[x] << "\n";
    }
    return 0;
}