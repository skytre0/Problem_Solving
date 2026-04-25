#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    if (b < 3)  cout << "NEWBIE!";
    else if (b <= a)    cout << "OLDBIE!";
    else    cout << "TLE!";
    return 0;
}