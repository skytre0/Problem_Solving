#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll arr[100005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    ll n, a, b, total = 2000000000;
    pair<ll, ll> sum;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    a = 0;
    b = n - 1;
    while (a != b) {
        if (total > abs(arr[a] + arr[b])) {
            total = abs(arr[a] + arr[b]);
            sum.first = a;
            sum.second = b;
        }
        if (arr[a] + arr[b] > 0)
            b--;
        else if (arr[a] + arr[b] < 0)
            a++;
        else
            break;       
    }
    cout << arr[sum.first] << " " << arr[sum.second];
    return 0;
}