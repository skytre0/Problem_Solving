#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int dp[100002] = {};
    int a;
    dp[0] = 0;
    cin >> a;
    for (size_t i = 1; i <= a; i++) {
        dp[i] = i;
        for (size_t j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
    cout << dp[a];
    return 0;
}