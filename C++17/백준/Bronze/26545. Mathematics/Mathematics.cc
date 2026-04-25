#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    c = 0;
    for (int i = 0; i < a; i++) {
        cin >> b;
        c += b;
    }
    cout << c;
    return 0;
}