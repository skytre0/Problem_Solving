#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, m, T = 0;
ll arr[1000005];

ll cal(ll t) {
    ll total = 0;
    for (ll i = 0; i < n; i++) {
        total += (t / arr[i]);
    }
    return total;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        T = max(T, arr[i]);
    }
    ll low = 0;
    ll high = T * m;
    ll mid;
    while (low < high) {
        mid = (high + low) / 2;
        if (cal(mid) >= m)
            high = mid;
        else
            low = mid + 1;
    }
    cout << low;
    return 0;
}