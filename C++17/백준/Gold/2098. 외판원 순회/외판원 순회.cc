#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b = 0;
int arr[16][16];
int dp[16][1 << 16];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < a; i++) {
        if (arr[0][i] != 0)
            dp[i][(1 << i) + 1] = arr[0][i];
    }
    for (int i = 1; i < a; i++) {               // a개 node 지나기 위해서 최소 a번 반복문 필요함
        for (int j = 1; j < a; j++) {               // 모든 node 대해서 1번씩 실행 위해
            for (int k = 1; k < (1 << a); k++) {       // 비트마스킹 이용해서 이동한 적 없는 node 찾기 위해
                for (int l = 1; l < a; l++) {               // 다음으로 이동할 좌표 겸 arr에 있는 이동 코스트 확인 위해    
                    if (dp[j][k] != 0 && !(k & (1 << l)) && arr[j][l] != 0) {
                        if (dp[l][k | (1 << l)] == 0)
                            dp[l][k | (1 << l)] = dp[j][k] + arr[j][l];
                        else
                            dp[l][k | (1 << l)] = min(dp[l][k | (1 << l)], dp[j][k] + arr[j][l]);
                    }
                }
            }
        }
    }

    dp[0][(1 << a) - 1] = 9876543210;
    for (int i = 1; i < a; i++) {
        if (dp[i][(1 << a) - 1] != 0 && arr[i][0] != 0)
            dp[0][(1 << a) - 1] = min(dp[0][(1 << a) - 1], dp[i][(1 << a) - 1] + arr[i][0]);
    }
    cout << dp[0][(1 << a) - 1];
    return 0;
}