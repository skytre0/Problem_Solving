#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    vector<vector<int>> v(10000, vector<int>(4, 0));
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v[i][0] = m;
    }
    v[0][1] = v[0][0]; v[0][2] = v[0][0]; v[0][3] = 0;
    for (int i = 1; i < n; i++) {
        v[i][1] = v[i-1][2] + v[i][0];
        v[i][2] = v[i-1][3] + v[i][0];
        v[i][3] = max({v[i-1][1], v[i-1][2], v[i-1][3]});
    }
    cout << max({v[n-1][1], v[n-1][2], v[n-1][3]});
    return 0;
}