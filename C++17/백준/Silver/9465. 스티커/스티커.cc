#include <iostream>

using namespace std;
 
int arr[2][100001] = {0};
int dp[2][100001] = {0};
 
int solve(int n) { 
    dp[0][0] = arr[0][0];
    dp[1][0] = arr[1][0];
    dp[0][1] = arr[0][1] + dp[1][0];
    dp[1][1] = arr[1][1] + dp[0][0];
    for (size_t i = 2; i < n; i++) {
        dp[0][i] = arr[0][i] + max(dp[1][i - 1], dp[1][i - 2]);
        dp[1][i] = arr[1][i] + max(dp[0][i - 1], dp[0][i - 2]);
    }
    cout << max(dp[0][n - 1], dp[1][n - 1]) << "\n";
    return 0;
}
 
int main() {
    int a, b;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        for (size_t j = 0; j < b; j++) 
            cin >> arr[0][j];
        for (size_t j = 0; j < b; j++) 
            cin >> arr[1][j];
	    solve(b);
    }
    return 0;
}