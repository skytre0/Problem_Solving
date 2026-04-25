#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, p, q, r;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        for (int j = 0; j < b; j++) 
            cout << "=";
        cout << "\n";
    }
    return 0;
}