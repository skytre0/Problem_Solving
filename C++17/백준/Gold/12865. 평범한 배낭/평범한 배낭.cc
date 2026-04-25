#include <algorithm>
#include <iostream>

using namespace std;

int dp[101][100001] = {};
int v[101] = {};
int w[101] = {};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d, m;
    m = 0;
    cin >> a >> b;
    for (size_t i = 1; i <= a; i++) {
        cin >> c >> d;
        w[i] = c;
        v[i] = d;
    }
    for (int i = 1; i <= b; i++) {
        dp[0][i] = 0;
        for (int j = 1; j <= a; j++) {
            if (i - w[j] >= 0) {
                dp[j][i] = max(dp[j-1][i-w[j]] + v[j], dp[j-1][i]);
            }
            else {
                dp[j][i] = dp[j-1][i];
            }
        }
    }
    cout << dp[a][b];
    return 0;
}