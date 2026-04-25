#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        (s.size() > 9 || s.size() < 6) ? cout << "no\n" : cout << "yes\n";
    }
    return 0;
}