#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n;
ll arr[505][505];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        arr[i][0] = a;
        arr[i+1][0] = b;
    }
    // 3중 for 문 -> 1번은 묶음(행렬 개수), 2번은 시작 위치, 3번은 묶음 안의 조합(1~4면 2조각으로 나누는 위치)
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            for (int k = j + 1; k < i + j; k++) {
                if (arr[j][j + i] == 0)
                    arr[j][j + i] = arr[j][k] + arr[k][j + i] + (arr[j][0] * arr[k][0] * arr[j + i][0]);
                else
                    arr[j][j + i] = min(arr[j][j + i], arr[j][k] + arr[k][j + i] + (arr[j][0] * arr[k][0] * arr[j + i][0]));
            }
        }
    }
    cout << arr[0][n];
    return 0;
}
