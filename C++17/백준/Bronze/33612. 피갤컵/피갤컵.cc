#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b = 2024, c = 8;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a-1; i++) {
        c += 7;
        if (c > 12) {
            b++;
            c -= 12;
        }
    }
    cout << b << " " << c;
    return 0;
}
