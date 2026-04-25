#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;
char ch;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    b = 0;
    c = 0;
    while (a--) {
        cin >> ch;
        ch == 'D' ? b++ : c++;
        if (abs(b - c) == 2)    break;
    }
    cout << b << ":" << c;
    return 0;
}