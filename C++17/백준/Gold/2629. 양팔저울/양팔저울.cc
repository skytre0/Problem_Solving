#include <iostream>
#include <vector>
#include <queue>
#include <stack>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <tuple>
#include <iomanip>
#define ll long long

using namespace std;

int n, a, b, m, sum = 0;
vector<vector<int>> v;
vector<int> w;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n;
    v = vector<vector<int>> (n+2, vector<int>(15502, 0));
    w = vector<int>(n+2, 0);
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    v[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        sum += w[i];
        v[i][w[i]] = 1;
        for (int j = 0; j <= sum; j++) {
            if (v[i-1][j]) {
                v[i][j] = 1;
                v[i][j + w[i]] = 1;
                v[i][abs(j - w[i])] = 1;
            }
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        if (a > 15000)    cout << "N ";
        else cout << (v[n][a] == 1 ? "Y " : "N ");
    }
    return 0;
}