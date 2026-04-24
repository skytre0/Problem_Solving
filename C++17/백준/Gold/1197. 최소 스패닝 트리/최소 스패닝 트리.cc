#include <bits/stdc++.h>
#define ll long long

using namespace std;

priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
vector<pair<ll, ll>> v[10005];
ll arr[10005];
ll a, b, x, y, z, n;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    n = a;
    while (b--) {
        cin >> x >> y >> z;
        v[x].push_back({z, y});
        v[y].push_back({z, x});
    }
    fill_n(arr, a+1, 1000005);
    for (ll i = 0; i < v[1].size(); i++) {
        pq.push(v[1][i]);
    }
    arr[1] = 0;
    arr[0] = 0;
    a--;
    while (a != 0) {
        ll cost = pq.top().first;
        ll to = pq.top().second;
        pq.pop();
        if (arr[to] == 1000005) {
            arr[to] = cost;
            arr[0] += cost;
            for (ll i = 0; i < v[to].size(); i++) {
                pq.push(v[to][i]);
            }
            a--;
        }
    }
    cout << arr[0];
    return 0;
}
