#include <bits/stdc++.h>
#define ll long long

using namespace std;

int l, a, b, c, d;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (1) {
        cin >> s >> a >> b;
        if (s == "#" && a == 0 && b == 0)   break;
        cout << s << " ";
        if (a > 17 || b >= 80)  cout << "Senior\n";
        else cout << "Junior\n";
    }
    return 0;
}