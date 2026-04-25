#include <bits/stdc++.h>
#define ll long long

using namespace std;

map<string, string> m;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    m["SONGDO"] = "HIGHSCHOOL";
    m["CODE"] = "MASTER";
    m["2023"] = "0611";
    m["ALGORITHM"] = "CONTEST";
    cin >> s;
    cout << m[s];
    return 0;
}