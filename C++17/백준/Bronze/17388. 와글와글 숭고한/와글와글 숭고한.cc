#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, sum;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    if (a + b + c >= 100)   cout << "OK";
    else {
        if (a <= b && a <= c)   cout << "Soongsil";
        else if (b <= a && b <= c)  cout << "Korea";
        else    cout << "Hanyang";
    }
    return 0;
}