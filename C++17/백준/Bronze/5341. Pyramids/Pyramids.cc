#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (cin >> a) {
        if (a == 0)
            break;
        cout << (a * (a+1)) / 2 << "\n";
    }
    return 0;
}