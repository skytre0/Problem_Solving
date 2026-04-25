#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, sum, n;
vector<pair<ll, ll>> v;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    v.push_back({0, 0});
    for (ll i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({b, a});
    }
    v.push_back({n+1, n+1});
    sort(v.begin(), v.end());
    for (ll i = 1; i <= n; i++) {
        if (v[i].first != v[i-1].first && v[i].first != v[i+1].first)
            continue;
        else if (v[i].first != v[i-1].first)
            sum += v[i+1].second - v[i].second;
        else if (v[i].first != v[i+1].first)
            sum += v[i].second - v[i-1].second;
        else
            sum += min(v[i].second - v[i-1].second, v[i+1].second - v[i].second);
    }
    cout << sum;
    return 0;
}
