#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (a * b - c < 0)  cout << 0;
    else cout << a * b - c;
    return 0;
}