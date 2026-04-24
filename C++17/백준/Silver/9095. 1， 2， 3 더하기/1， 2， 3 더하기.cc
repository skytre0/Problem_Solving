#include <iostream>

using namespace std;

// 사실 dp[n] = dp[n-1] + dp[n-2] + dp[n-3]과 동일
// 그 이유는 (n-1) + 1 = n 경우 dp[n-1]의 값과 동일한 과정 거쳐서

int f[11] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c;
    int arr[4] = {0};
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        arr[4] = 0;
        cin >> b;
        arr[2] = b / 3;
        for (;arr[2] >= 0; arr[2]--) {
            c = b - (arr[2] * 3);
            arr[1] = c / 2;
            for (;arr[1] >= 0; arr[1]--) {
                arr[0] = c - (arr[1] * 2);
                arr[4] += f[arr[0] + arr[1] + arr[2]] / (f[arr[0]] * f[arr[1]] * f[arr[2]]);
            }
        }
        cout << arr[4] << "\n";
    }
    return 0;
}