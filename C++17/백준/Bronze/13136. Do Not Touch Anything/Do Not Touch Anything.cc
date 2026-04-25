#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    a % c ? a = a / c + 1 : a = a / c;
    b % c ? b = b / c + 1 : b = b / c;
    cout << a * b;
    return 0;
}