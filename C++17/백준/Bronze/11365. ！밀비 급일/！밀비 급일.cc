#include <bits/stdc++.h>
#define ll long long

using namespace std;

int l, a, b, c, d;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    getline(cin, s);
    while (s != "END") {
        reverse(s.begin(), s.end());
        cout << s << "\n";
        getline(cin, s);
    }
}