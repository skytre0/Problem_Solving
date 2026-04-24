#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = ((a / 100) * 100); ; i++) {
        if (i % b == 0) {
            c = i;
            break;
        }     
    }
    if (c < 9)
        cout << "0" << c;
    else {
        cout << ((c % 100) / 10) << (c % 10);
    }
    return 0;
}
