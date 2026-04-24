#include <numeric>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long n, a, b, c, d;
    long long k, p, q, x, y;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> p >> q >> x >> y;
        k = lcm(p, q);
        long long m = x;
        while (m <= k) {
            if (m % q == y % q) 
                break;
            else
                m += p;
        }
        if (m > k)
            cout << -1 << "\n";
        else
            cout << m << "\n";
    }
    return 0;
}