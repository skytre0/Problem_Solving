#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, l;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    if (a < b)  cout << -1;
    else if ((a + b) % 2)    cout << -1;
    else cout << (a + b) / 2 << " " << a - (a + b) / 2;
    return 0;
}