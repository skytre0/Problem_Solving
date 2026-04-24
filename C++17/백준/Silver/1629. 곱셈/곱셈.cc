#include <iostream>

using namespace std;

long long a, b, c;

long long solve(long long b) {
    if (b == 1)
        return a % c;
    if (b%2 == 0)
        return (solve(b/2) * solve(b/2)) % c;
    else
        return (((solve(b/2) * solve(b/2)) % c) * (a % c)) % c;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    cout << solve(b);
    return 0;
}