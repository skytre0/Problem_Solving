#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, sum = 0;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    sum += a * b;
    cin >> a >> b;
    sum += a * b;
    cout << sum;
    return 0;
}