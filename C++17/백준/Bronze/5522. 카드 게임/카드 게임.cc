#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, n = 0, sum = 0;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (cin >> n) {
        sum += n;
    }
    cout << sum;
    return 0;
}
