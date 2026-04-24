#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, st = 0, en;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    en = sqrt(a) + 1;
    while (st != en) {
        ll mid = (st + en) / 2;
        if (mid * mid < a) {
            st = mid + 1;
        }
        else {
            en = mid;
        }
    }
    cout << en;
    return 0;
}
