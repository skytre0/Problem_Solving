#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s;
    if (s.size() == 2)  cout << s[0] + s[1] - (2 * '0');
    else if (s.size() == 3) {
        if (s[1] == '0')  cout << 10 + s[2] - '0';
        else    cout << 10 + s[0] - '0';
    }
    else    cout << 20;
    return 0;
}