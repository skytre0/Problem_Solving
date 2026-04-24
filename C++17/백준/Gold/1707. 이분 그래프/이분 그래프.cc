#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a, b, x, y;
ll arr[20005];
vector<ll> v[20005];
vector<ll> vv;
stack<ll> check;
stack<ll> em;

ll dfs(ll st) {
    check.push(st);
    while (!check.empty()) {
        x = check.top();
        check.pop();
        for (size_t i = 0; i < v[x].size(); i++) {
            if (arr[v[x][i]] == arr[x]) {
                st = 0;
                break;
            }
            else if (arr[v[x][i]] == -1) {
                arr[v[x][i]] = (arr[x] + 1) % 2;
                check.push(v[x][i]);
            }
        }
        if (st == 0)
            break;
    }
    if (check.empty())
        return 0;
    else {
        return 1;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        fill_n(arr, 20005, -1);
        cin >> a >> b;
        for (size_t j = 0; j < b; j++) {
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for (size_t j = 1; j <= a; j++) {
            if (arr[j] == -1) {
                arr[j] = 0;
                b = dfs(j);
                if (b == 1) {
                    cout << "NO\n";
                    break;
                }
            }
        }
        check = em;
        for (size_t j = 1; j <= a; j++) {
            v[j] = vv;
        } 
        if (b == 0)
            cout << "YES\n";
    }
    return 0;
}