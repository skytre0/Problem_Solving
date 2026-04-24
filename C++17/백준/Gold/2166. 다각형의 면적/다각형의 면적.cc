#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll xs[10005];
ll ys[10005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    ll n;
    double sum = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> xs[i] >> ys[i];
    }
    xs[n] = xs[0];
    ys[n] = ys[0];
    for (ll i = 0; i < n; i++) {
        sum += ((xs[i] * ys[i+1]) - (xs[i+1] * ys[i]));
    }
    sum = abs(sum) / 2;
    cout << fixed << setprecision(1) << sum;
    return 0;
}