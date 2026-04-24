#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, n, cnt = 0, sum = 0, be;
queue<ll> q;
ll arr[1000005];
ll check[1000005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (ll i = 0; i < b; i++) {
        cin >> n;
        q.push(n);
        cnt += n;
    }
    ll mark = cnt;
    for (ll i = 0; i < b; i++) {
        cin >> n;
        check[n] += q.front();
        q.pop();
    }

    for (ll i = 1; i <= a; i++) {
        cin >> arr[i];
    }
    if (mark > a) {
        cout << 0;
        return 0;
    }
    for (ll i = 1; i <= mark; i++) {
        if (--check[arr[i]] >= 0)
            cnt--;
    }
    if (cnt == 0)
        sum++;
    be = 1;
    for (mark; mark <= a;) {
        if (check[arr[be++]]++ >= 0)
            cnt++;
        if (--check[arr[++mark]] >= 0)
            cnt--;
        if (cnt == 0)
            sum++;
    }
    cout << sum;
    return 0;
}
