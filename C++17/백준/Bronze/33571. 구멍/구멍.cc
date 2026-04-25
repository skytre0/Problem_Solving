#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a = 0;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 64 || s[i] == 65 || s[i] == 68 || s[i] == 79 || s[i] == 80 || s[i] == 81 || s[i] == 82 || s[i] == 97 || s[i] == 98 || s[i] == 100 || s[i] == 101 || s[i] == 103 || s[i] == 111 || s[i] == 112 || s[i] == 113)
            a++;
        else if (s[i] == 66)
            a += 2;
    }
    cout << a;
    return 0;
}
