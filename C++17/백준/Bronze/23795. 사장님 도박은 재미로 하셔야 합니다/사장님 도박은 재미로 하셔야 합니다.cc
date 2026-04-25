#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, sum = 0;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    while (a != -1) {
        sum += a;
        cin >> a;
    }
    cout << sum;
    return 0;
}