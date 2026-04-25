#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;
string s = "WelcomeToSMUPC";

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    cout << s[(a-1) % 14];
    return 0;
}