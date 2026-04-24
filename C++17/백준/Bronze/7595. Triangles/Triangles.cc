#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (1) {
        cin >> a;
        if (!a) return 0;
        else {
            for (int i = 1; i <= a; i++) {
                for (int j = 1; j <= i; j++)
                    cout << "*";
                cout << "\n";
            }
        }
    }
    return 0;
}