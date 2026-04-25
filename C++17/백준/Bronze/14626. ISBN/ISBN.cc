#include <bits/stdc++.h>
#define ll long long

using namespace std;

string s;
int decider = 0, sum = 0;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> s;
    for (int i = 0; i < 13; i++) {
        if (s[i] != '*') i % 2 ? sum += (s[i] - '0') * 3 : sum += s[i] - '0';
        else decider = i;
    }
    decider % 2 ? cout << ((10 - (sum % 10)) % 10) * 7 % 10 : cout << (10 - (sum % 10)) % 10;
    return 0;
}