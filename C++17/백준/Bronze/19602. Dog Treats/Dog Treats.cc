#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    a + 2 * b + 3 * c >= 10 ? cout << "happy" : cout << "sad";
    return 0;
}