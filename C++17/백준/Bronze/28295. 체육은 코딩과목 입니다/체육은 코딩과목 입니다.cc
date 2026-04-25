#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b = 0;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 10; i++) {
        cin >> a;
        b += a;
    }
    b %= 4;
    b == 0 ? cout << "N" : b == 1 ? cout << "E" : b == 2 ? cout << "S" : cout << "W";
}