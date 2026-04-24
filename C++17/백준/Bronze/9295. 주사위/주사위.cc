#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cin >> b >> c;
        cout << "Case " << i << ": " << b + c << "\n";
    }
    return 0;
}