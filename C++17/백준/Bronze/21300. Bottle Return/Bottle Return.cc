#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, sum = 0;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 6; i++) {
        cin >> a;
        sum += a;
    }
    cout << sum * 5;
    return 0;
}