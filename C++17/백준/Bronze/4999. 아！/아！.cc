#include <bits/stdc++.h>
#define ll long long

using namespace std;

string a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    a.size() >= b.size() ? cout << "go" : cout << "no";
    return 0;
}
