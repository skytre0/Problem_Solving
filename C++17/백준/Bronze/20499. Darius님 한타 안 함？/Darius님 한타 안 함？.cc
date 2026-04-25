#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, l;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s;
    l = 0;
    for (int i = l; i < s.size(); i++) {
        if (s[i] == '/') {
            l = i+1;
            break;
        }
        a = a * 10 + s[i] - '0';
    }
    for (int i = l; i < s.size(); i++) {
        if (s[i] == '/') {
            l = i+1;
            break;
        }
        b = b * 10 + s[i] - '0';
    }
    for (int i = l; i < s.size(); i++) {
        if (s[i] == '/') {
            l = i+1;
            break;
        }
        c = c * 10 + s[i] - '0';
    }
    if (a + c < b || b == 0)    cout << "hasu";
    else    cout << "gosu";
    return 0;
}