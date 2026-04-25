#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, a, b, c, ans = 987654321;
int arr[1005][3];
int mark[3] = {0, 1, 2};


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    for (int k = 0; k < 3; k++) {
        int dp[1005][3];
        dp[0][0] = 987654321;
        dp[0][1] = 987654321;
        dp[0][2] = 987654321;
        dp[0][k] = arr[0][k];
        for (int i = 1; i < n; i++) {
            int temp[3];
            if (dp[i-1][0] < dp[i-1][1]) 
                dp[i][2] = arr[i][2] + dp[i-1][0];
            else 
                dp[i][2] = arr[i][2] + dp[i-1][1];

            if (dp[i-1][1] < dp[i-1][2]) 
                dp[i][0] = arr[i][0] + dp[i-1][1];
            else 
                dp[i][0] = arr[i][0] + dp[i-1][2];
            
            if (dp[i-1][2] < dp[i-1][0]) 
                dp[i][1] = arr[i][1] + dp[i-1][2];
            else 
                dp[i][1] = arr[i][1] + dp[i-1][0];
            
        }
        for (int i = 0; i < 3; i++) {
            if (k != i)
                ans = min(ans, dp[n-1][i]);
        }
    }
    cout << ans;
    return 0;
}