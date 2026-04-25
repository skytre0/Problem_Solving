#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> s;
        reverse(s.begin(), s.end());
        cout << s << "\n";
    }
    return 0;
}