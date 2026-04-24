#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#define ll long long

using namespace std;

int n, a;
string s;

int solve(int nth) {
    int cnt = 0;
    int depth = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')    depth++;
        else if (s[i-1] == '(' && s[i] == ')')  cnt += --depth;
        else {cnt++; depth--;}
    }
    
    return cnt;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> s;
    int ans = solve(0);
    cout << ans;
    return 0;
}