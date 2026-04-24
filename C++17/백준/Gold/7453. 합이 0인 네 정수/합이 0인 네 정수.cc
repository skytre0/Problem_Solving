#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, n;
ll arr[4005][4];
vector<ll> v1;
vector<ll> v2;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            v1.push_back(arr[i][0] + arr[j][1]);
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            v2.push_back(arr[i][2] + arr[j][3]);
        }
    }
    sort(v1.begin(), v1.end(), less<>());     // 기본(오름차순) = less<>() 없어도 됨.
    sort(v2.begin(), v2.end(), greater<>());  // 변형(내림차순)
    n = 0;
    while (a < v1.size() && b < v2.size()) {
        if (v1[a] + v2[b] == 0) {
            ll x = 1, y = 1;
            while (a+1 < v1.size() && v1[a] == v1[a+1]) {
                x++;
                a++;
            }
            while (b+1 < v1.size() && v2[b] == v2[b+1]) {
                y++;
                b++;
            }
            n += x * y;
            a++;
        }
        else if (v1[a] + v2[b] > 0) {
            b++;
        }
        else {
            a++;
        }
    }
    cout << n;
    return 0;
}
