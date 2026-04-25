#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, sum;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    sum = 0;
    b = 101;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        sum += a;
        b = min(a, b);
    }
    sum -= b;
    b = 101;
    for (int i = 0; i < 2; i++) {
        cin >> a;
        sum += a;
        b = min(a, b);
    }
    sum -= b;
    cout << sum;
    return 0;
}