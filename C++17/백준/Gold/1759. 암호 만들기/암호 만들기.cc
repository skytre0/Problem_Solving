#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

#define ll long long

using namespace std;

int a, b, c;
string s;
vector<string> sv;

void tf (string s) {
    if (s.size() != a)   return;
    int j = 0, m = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a')    m++;
        else if (s[i] == 'e')   m++;
        else if (s[i] == 'i')   m++;
        else if (s[i] == 'o')   m++;
        else if (s[i] == 'u')   m++;
        else j++;
    }
    if (!m) return;
    if (j < 2)  return;

    cout << s << "\n";
    return;
}

void solve (int ith, string s) {
    if (ith == b) tf(s);
    else {
        solve(ith+1, s + sv[ith]);
        solve(ith+1, s);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        cin >> s;
        sv.push_back(s);
    }
    sort(sv.begin(), sv.end());
    solve(0, "");
    return 0;
}