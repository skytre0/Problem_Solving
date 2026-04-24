#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, sum;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    sum = a * b;
    for (int i = 0; i < 5; i++) {
        cin >> c;
        cout << c - sum << " ";
    }
    return 0;
}