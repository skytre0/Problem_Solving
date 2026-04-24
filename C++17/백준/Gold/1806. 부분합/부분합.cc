#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, n, be, en;
int arr[100005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (ll i = 0; i < a; i++) {
        cin >> n;
        arr[i+1] = arr[i] + n;
    }
    be = 0;
    en = 1;
    n = 100005;
    if (arr[a] - arr[0] < b)
        cout << 0;
    else {
        while (en <= a) {
            if (arr[en] - arr[be] < b) {
                en++;
            }
            else {
                n = min(n, en - be);
                be++;
            }
        }
        cout << n;
    }
    return 0;
}
