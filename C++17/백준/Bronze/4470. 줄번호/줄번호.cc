#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    cin.ignore();
    for (int i = 1; i <= a; i++) {
        getline(cin, s);
        cout << i << ". " << s << "\n";
    }
    return 0;
}