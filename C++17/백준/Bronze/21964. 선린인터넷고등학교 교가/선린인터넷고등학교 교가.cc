#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> s;
    for (int i = a - 5; i < a; i++)
        cout << s[i];
    return 0;
}