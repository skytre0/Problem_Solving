#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, sum = 0;
string s, ss;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s >> a;
    while (a--) {
        cin >> ss;
        if (s == ss)    sum++;
    }
    cout << sum;
    return 0;
}