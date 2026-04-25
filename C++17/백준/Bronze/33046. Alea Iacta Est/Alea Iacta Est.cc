#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d - 1;
    sum = sum % 4;
    if (sum == 0)
        cout << 4;
    else
        cout << sum;
    return 0;
}