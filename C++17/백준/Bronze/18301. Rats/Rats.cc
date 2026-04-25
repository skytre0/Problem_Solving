#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    cout << floor((a+1) * (b+1) / (c+1) - 1);
    return 0;
}