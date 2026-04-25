#include <bits/stdc++.h>
#define ll long long

using namespace std;

char s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s;
    (s == 'N' || s == 'n') ? cout << "Naver D2" : cout << "Naver Whale";
    return 0;
}