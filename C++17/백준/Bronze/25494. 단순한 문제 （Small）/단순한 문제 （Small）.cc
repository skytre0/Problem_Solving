#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d, sum;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    while (a--) {
        cin >> b >> c >> d;
        sum = 0;
        for (int i = 1; i <= b; i++) {
            for (int j = 1; j <= c; j++) {
                for (int k = 1; k <= d; k++) {
                    if (i % j == j % k && j % k == k % i)   sum++;
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}