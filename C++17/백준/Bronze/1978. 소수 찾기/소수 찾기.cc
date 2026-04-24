#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a, b, c;
    vector<int> v;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        v.push_back(b);
    }
    c = 0;
    for (int i = 0; i < v.size(); i++) {
        b = 0;
        for (int j = v[i]; j > 0; j--) {
            if (v[i] % j == 0) b++;
        }
        if (b == 2) c++;
    }
    cout << c;
    return 0;
}