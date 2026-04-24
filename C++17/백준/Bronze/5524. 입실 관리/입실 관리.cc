#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << "\n";
    }
    return 0;
}