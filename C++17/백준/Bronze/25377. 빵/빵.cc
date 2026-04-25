#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, mt = 1001;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    while (a--) {
        cin >> b >> c;
        if (b <= c)  mt = min(mt, c);
    }
    mt != 1001 ? cout << mt : cout << -1;
    return 0;
}