#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a, b, c;
ll x, y, z;
ll arr[505];
vector<pair<pair<ll, ll>, ll>> v;
vector<pair<pair<ll, ll>, ll>> vv;

void solve(ll a) {
    for (ll i = 0; i < a - 1; i++) {
        for (ll j = 0; j < v.size(); j++) {
            ll p = v[j].first.first;
            ll q = v[j].first.second;
            ll r = v[j].second;
            if (arr[q] > arr[p] + r)
                arr[q] = arr[p] + r;
        }
    }
    for (ll j = 0; j < v.size(); j++) {
        ll p = v[j].first.first;
        ll q = v[j].first.second;
        ll r = v[j].second;
        if (arr[q] > arr[p] + r) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    while (n--) {
        v = vv;
        fill_n(arr, 505, 0);
        cin >> a >> b >> c;
        for (ll i = 0; i < b; i++) {
            cin >> x >> y >> z;
            v.push_back({{x, y}, z});
            v.push_back({{y, x}, z});
        }
        for (ll i = 0; i < c; i++) {
            cin >> x >> y >> z;
            v.push_back({{x, y}, -z});
        }
        solve(a);
    }
    return 0;
}