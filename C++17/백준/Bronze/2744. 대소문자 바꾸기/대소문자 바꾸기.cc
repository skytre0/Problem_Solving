#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] < 91)
            cout << char(s[i] + 32);
        else
            cout << char(s[i] - 32);
    }
    return 0;
}