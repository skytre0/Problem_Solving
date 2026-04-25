#include <iostream>
#include <algorithm>

using namespace std;


int main () {
    long long int T, n, sum, m;
    static int ns[1000001];
    cin >> T;
    for (size_t i = 0; i < T; i++) {
        sum = 0;
        cin >> n;
        for (size_t j = 0; j < n; j++) {
            cin >> ns[j];
        }
        m = ns[n-1];
        for (int k = n-1; k >= 0; k--) {
            if (ns[k] > m)
                m = ns[k];

            else
                sum += m - ns[k];
        }
        cout << sum << "\n";
    }
    return 0;
}