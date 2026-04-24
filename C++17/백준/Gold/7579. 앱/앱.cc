#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n, sum = 0;
int arr[105][2];
int dp[105][10005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 1; i <= a; i++) {
        cin >> arr[i][0];
    }
    for (int i = 1; i <= a; i++) {
        cin >> arr[i][1];
        sum += arr[i][1];
    }

    for (int i = 1; i <= a; i++) {
        for (int j = 0; j <= sum; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= arr[i][1]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-arr[i][1]] + arr[i][0]);
            }
        }
    }
    for (int j = 0; j <= sum; j++) {
        if (dp[a][j] >= b) {
            cout << j;
            break;
        }
    }
    return 0;
}
