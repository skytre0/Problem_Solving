#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;
int three;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (a % 3 == 0)
        three = a / 3;
    else {
        if (c < 3 - (a % 3)) {
            cout << "-1";
            return 0;
        }
        else {
            c -= (3 - (a % 3));
            three = (a / 3) + 1;
        }
    }
    while ((b + c) % 4 != 0 && c >= 0) {
        if (c < 3)
            break;
        else {
            three++;
            c -= 3;
        }
    }
    if ((b + c) % 4 == 0)
        cout << three << " " << (b + c) / 4;
    else
        cout << -1;
    return 0;
}