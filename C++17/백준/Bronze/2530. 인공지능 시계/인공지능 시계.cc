#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d;
    cout << (a + (b + (c+d) / 60) / 60) % 24 << " " << (b + (c+d) / 60) % 60 << " " << (c+d) % 60;
    return 0;
}