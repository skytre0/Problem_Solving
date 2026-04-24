#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a = 1;
map<string, int> m1 = {{"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}};
map<string, int> m2 = {{"black", 1e0}, {"brown", 1e1}, {"red", 1e2}, {"orange", 1e3}, {"yellow", 1e4}, {"green", 1e5}, {"blue", 1e6}, {"violet", 1e7}, {"grey", 1e8}, {"white", 1e9}};
string s1, s2, s3;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s1 >> s2 >> s3;
    a = (((a * m1[s1]) * 10) + m1[s2]) * m2[s3];
    cout << a;
    return 0;
}
