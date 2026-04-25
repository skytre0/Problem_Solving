#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    cout << min(a/2, b);
    return 0;
}