#include <bits/stdc++.h>
#define ll long long

using namespace std;

int l, a, b, c, d;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s;
    a = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117) a++;
    cout << a;
    return 0;
}