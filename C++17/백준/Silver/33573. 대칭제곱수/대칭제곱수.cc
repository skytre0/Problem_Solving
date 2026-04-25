#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c, sum;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++) {
        c = 0;
        cin >> b;
        if ((ll)sqrt(b) != (double)sqrt(b)) {
            cout << "NO\n";
        }
        else {
            while (b != 0) {
                c *= 10;
                c += (b%10);
                b /= 10;
            }
            if ((ll)sqrt(c) != (double)sqrt(c)) {
                cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
    }
    return 0;
}
