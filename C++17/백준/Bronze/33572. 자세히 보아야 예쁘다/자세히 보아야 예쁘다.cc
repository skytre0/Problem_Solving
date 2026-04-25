#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c, sum;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> c;
        sum += c-1;
    }
    if (b > sum)
        cout << "OUT";
    else
        cout << "DIMI";
    return 0;
}
