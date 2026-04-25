#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    if (a > b)  cout << "flight";
    else cout << "high speed rail";
    return 0;
}