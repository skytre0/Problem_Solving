#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll arr[9][9];
ll a, b, c = 0, zeros = 0;
queue<ll> q;
queue<ll> que;
ll ar[9][9];

ll solve(ll x, ll y, ll z, queue<ll> que, ll ar[9][9], ll total) {
    if (ar[x/b][x%b] == 0 && ar[y/b][y%b] == 0 && ar[z/b][z%b] == 0) {
        ar[x/b][x%b] = 1;
        ar[y/b][y%b] = 1;
        ar[z/b][z%b] = 1;
        total -= 3;
        while (!que.empty()) {
            ll t1 = que.front() / b;
            ll t2 = que.front() % b;
            que.pop();
            if (t1 > 0 && ar[t1 - 1][t2] == 0) {
                ar[t1 - 1][t2] = 2;
                que.push((t1 - 1) * b + t2);
                total--;
            }
            if (t1 + 1 < a && ar[t1 + 1][t2] == 0) {
                ar[t1 + 1][t2] = 2;
                que.push((t1 + 1) * b + t2);
                total--;
            }
            if (t2 > 0 && ar[t1][t2 - 1] == 0) {
                ar[t1][t2 - 1] = 2;
                que.push(t1 * b + t2 - 1);
                total--;
            }
            if (t2 + 1 < b && ar[t1][t2 + 1] == 0) {
                ar[t1][t2 + 1] = 2;
                que.push(t1 * b + t2 + 1);
                total--;
            }
        }
        return total;
    }
    else
        return 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                zeros++;
            }
            else if (arr[i][j] == 2)
                q.push(i * b + j);
        }
    }
    for (size_t i = 0; i < a * b; i++) {
        for (size_t j = i + 1; j < a * b; j++) {
            for (size_t k = j + 1; k < a * b; k++) {
                que = q;
                memcpy(ar, arr, sizeof(ar));
                c = max(c, solve(i, j, k, que, ar, zeros));
            }
        }
    }
    cout << c;
    return 0;
}