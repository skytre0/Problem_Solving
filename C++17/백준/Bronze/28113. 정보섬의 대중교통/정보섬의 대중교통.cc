#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (a > c)  cout << "Bus";
    if (b < c)  cout << "Bus";
    if (b == c) cout << "Anything";
    if (b > c)  cout << "Subway";
    return 0;
}