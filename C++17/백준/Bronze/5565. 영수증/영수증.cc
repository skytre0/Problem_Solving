#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, sum;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> sum;
    for (int i = 0; i < 9; i++) {
        cin >> a;
        sum -= a;
    }
    cout << sum;
}