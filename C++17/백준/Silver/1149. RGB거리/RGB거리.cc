#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a;
    int dp[1000][3] = {};
    cin >> a;
    cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
    for (size_t i = 1; i < a; i++) {
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
        for (size_t j = 0; j < 3; j++) {
            if (j == 0) {
                dp[i][j] = dp[i][j] + min(dp[i-1][1], dp[i-1][2]);
            }
            else if (j == 1) {
                dp[i][j] = dp[i][j] + min(dp[i-1][0], dp[i-1][2]);
            }
            else {
                dp[i][j] = dp[i][j] + min(dp[i-1][0], dp[i-1][1]);
            }
        }
    }
    cout << min(dp[a-1][0], min(dp[a-1][1], dp[a-1][2]));
    return 0;
}