#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    (a * 100 - b) < 0 ? cout << "No" : cout << "Yes";
    return 0;
}