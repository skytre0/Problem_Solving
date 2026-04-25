#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    double low = (c - b), high = (c + b);
    low /= a;
    high /= a;
    ll check = 100000;
    while (low != high && check--) {
        double mid = (low + high) / 2;
        if (((c-b*sin(mid)) / a - mid) > 0) {
            low = mid;
        }   
        else {
            high = mid;
        }
        if (fabs(((c-b*sin(mid)) / a - mid)) <= 0.000000000001)
            break;
    }
    cout << fixed << setprecision(19) << low;
    return 0;
}