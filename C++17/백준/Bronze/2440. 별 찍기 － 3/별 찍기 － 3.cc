#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = a; i > 0; i--) {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}