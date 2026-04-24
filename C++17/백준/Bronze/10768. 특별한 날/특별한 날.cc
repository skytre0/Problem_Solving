#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    if (a == 2 && b == 18)  cout << "Special";
    else if (a > 2 || a == 2 && b > 18)  cout << "After";
    else    cout << "Before";
    return 0;
}