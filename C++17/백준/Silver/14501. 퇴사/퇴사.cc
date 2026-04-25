#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int n;
vector<pair<int, int>> v(16, {0, 0});

int solve (int curdate, int paddingdate, int sum) {
    if (!curdate)   return sum;
    int ans = 0;
    if (v[curdate].first <= paddingdate) {
        ans = max(ans, solve(curdate-1, 1, sum+v[curdate].second));
    }
    ans = max(ans, solve(curdate-1, paddingdate+1, sum));
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    cout << solve(n, 1, 0);
    return 0;
}