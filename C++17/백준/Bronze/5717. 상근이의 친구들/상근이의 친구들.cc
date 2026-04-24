#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (1) {
        cin >> a >> b;
        if (!a && !b)
            break;
        cout << a+b << "\n";
    }
    return 0;
}