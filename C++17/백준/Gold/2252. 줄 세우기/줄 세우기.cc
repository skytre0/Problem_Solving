#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, m, a, b;
vector<int> v[32005];
int num[32005];

void solve() {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (num[i] == 0)
            q.push(i);
    }
    while (!q.empty()) {
        int check = q.front();
        q.pop();
        cout << check << " ";
        for (int i = 0; i < v[check].size(); i++) {
            if (--num[v[check][i]] == 0)
                q.push(v[check][i]);
        }

    }
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        num[b]++;
    }
    solve();
    return 0;
}
