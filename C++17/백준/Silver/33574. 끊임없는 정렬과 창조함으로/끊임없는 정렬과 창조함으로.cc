#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c, d;
vector<ll> v;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        if (b == 1) {
            cin >> c;
            if (c == 1) {
                sort(v.begin(), v.end());
            }
            else {
                sort(v.begin(), v.end(), greater<>());
            }
        }
        else {
            cin >> c >> d;
            v.insert(v.begin() + c, d);
        }
    }
    cout << v.size() << "\n";
    if (v.size() != 0) {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
    }
    return 0;
}
