#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    b = a % 5;
    a /= 5;
    if (b)
        cout << a + 1;
    else
        cout << a;
    return 0;
}