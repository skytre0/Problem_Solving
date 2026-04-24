#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n, x, y;
int arr[1005];
vector<int> v[1005];
queue<int> q;

void solve() {
    int pout[a];
    int check = 0;
    while (!q.empty()) {
        int k = q.front();
        q.pop();
        pout[check++] = k;
        for (int i = 0; i < v[k].size(); i++) {
            if (--arr[v[k][i]] == 0)
                q.push(v[k][i]);
        }
    }
    if (pout[a - 1] == 0)
        cout << "0";
    else {
        for (int i = 0; i < a; i++)
            cout << pout[i] << "\n";
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 1; i <= b; i++) {
        cin >> n >> x;
        for (int j = 1; j < n; j++) {
            cin >> y;
            arr[y]++;
            v[x].push_back(y);
            x = y;
        }
    }
    for (int i = 1; i <= a; i++) {
        if (arr[i] == 0)
            q.push(i);
    }
    solve();
    return 0;
}
