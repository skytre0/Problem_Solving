#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a, b, sum = 0;
ll arr1[1005];
ll arr2[1005];
vector<ll> v1;
vector<ll> v2;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> a;
    for (ll i = 1; i <= a; i++) {
        cin >> arr1[i];
        arr1[i] += arr1[i-1];
    }
    cin >> b;
    for (ll i = 1; i <= b; i++) {
        cin >> arr2[i];
        arr2[i] += arr2[i-1];
    }
    
    for (ll i = 0; i < a; i++) {
        for (ll j = i+1; j <= a; j++) {
            v1.push_back(arr1[j] - arr1[i]);
        }
    }
    for (ll i = 0; i < b; i++) {
        for (ll j = i+1; j <= b; j++) {
            v2.push_back(arr2[j] - arr2[i]);
        }
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    ll be = 0;
    ll en = v2.size() - 1;
    while (be < v1.size() && en > -1) {
        if (v1[be] + v2[en] < n) {
            be++;
        }
        else if (v1[be] + v2[en] > n) {
            en--;
        }
        else {
            ll fi = 1;
            ll se = 1;
            while (be + 1 < v1.size() && v1[be] == v1[be + 1]) {
                be++;
                fi++;
            }
            while (en - 1 > -1 && v2[en] == v2[en - 1]) {
                en--;
                se++;
            }
            sum += fi * se;
            en--;
            be++;
        }
    }
    cout << sum;
    return 0;
}
