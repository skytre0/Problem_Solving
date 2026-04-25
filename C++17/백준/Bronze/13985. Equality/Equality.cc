#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    getline(cin, s);
    if (s[0] + s[4] - 2 * '0' == s[8] - '0')  cout << "YES";
    else    cout << "NO";
    return 0;
}