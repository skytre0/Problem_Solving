#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, sum;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> sum;
    sum += (a + b + c);
    cout << sum / 60 << "\n" << sum % 60;
    return 0;
}