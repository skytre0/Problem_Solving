#include <bits/stdc++.h>
#define ll long long

using namespace std;

string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s;
    if (s == "NLCS")
        cout << "North London Collegiate School";
    else if (s == "BHA")
        cout << "Branksome Hall Asia";
    else if (s == "KIS")
        cout << "Korea International School";
    else if (s == "SJA")
        cout << "St. Johnsbury Academy";
    return 0;
}