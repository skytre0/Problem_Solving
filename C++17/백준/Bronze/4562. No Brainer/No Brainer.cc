#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    while (a--) {
        cin >> b >> c;
        if (b < c)  cout << "NO BRAINS\n";
        else    cout << "MMM BRAINS\n";
    }
    return 0;
}