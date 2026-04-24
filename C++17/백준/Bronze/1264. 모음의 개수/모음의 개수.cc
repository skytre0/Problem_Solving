#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, sum;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (getline(cin, s)) {
        if (s == "#")   break;
        a = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
                a++;
        }
        cout << a << "\n";
    }
    return 0;
}