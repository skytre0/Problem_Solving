#include <iostream>
// dp

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a;
    int dp[300] = {0};
    int arr[300] = {0};
    cin >> a;
    for(size_t i = 0; i < a; i++) {
        cin >> arr[i];
    }
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = max(arr[0], arr[1]) + arr[2];
    for(size_t i = 3; i < a; i++) {
        dp[i] = max(dp[i-3] + arr[i-1], dp[i-2]) + arr[i];
    }
    cout << dp[a-1];
    return 0;
}