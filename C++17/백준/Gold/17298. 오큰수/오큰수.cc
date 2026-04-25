#include <iostream>
#include <vector>
#include <queue>
#include <stack>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#define ll long long

using namespace std;

int n, a, b;
vector<int> v;
vector<int> ans;
stack<pair<int, int>> s;

void solve () {
    for (int i = 0; i < n; i++) {
        while (!s.empty()) {
            if (s.top().first < v[i]) {
                ans[s.top().second] = v[i];
                s.pop();
            }
            else break;
        }
        s.push({v[i], i});
    }
    return;
}


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    ans = vector<int>(n, -1);
    solve();
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}