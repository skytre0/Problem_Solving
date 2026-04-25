#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c, n = 0;
ll dp[8][8];       // dp가 최종본 저장용으로 dp[0][0]이 ans
ll origin[8][8] = {{0, 1, 1, 0, 0, 0, 0, 0}, 
                    {1, 0, 1, 1, 0, 0, 0, 0}, 
                    {1, 1, 0, 1, 1, 0, 0, 0}, 
                    {0, 1, 1, 0, 1, 1, 0, 0}, 
                    {0, 0, 1, 1, 0, 1, 1, 0}, 
                    {0, 0, 0, 1, 1, 0, 0, 1}, 
                    {0, 0, 0, 0, 1, 0, 0, 1}, 
                    {0, 0, 0, 0, 0, 1, 1, 0}};   // 초본이자 계속 거듭제곱할 대상.

// 행렬 계산 : arr[a][b] += for {for { arr[a][0] * arr[0][b] + arr[a][1] * arr[1][b] + ...)}} 느낌 3중 for문
// 함수 안에 새로운 내용 기록 필요 -> 이후에 dp에 덮어씌우는 느낌
// origin 보존 필요 : n % 2 == 1의 경우

void solve(int n) {
    while (n > 0) {
        ll nextd[8][8] = {};    // n%2==1이면 dp에 적용해야 해서 임시 저장용.
        ll nexto[8][8] = {};    // n!=0이면 앞에 1이 나올 거라는 의미니까 origin 거듭 임시 저장용.
        if (n % 2 == 1) {
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    for (int k = 0; k < 8; k++) {
                        nextd[i][j] = (nextd[i][j] + ((dp[i][k] * origin[k][j]) % 1000000007)) % 1000000007;
                    }
                }
            }
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++)
                    dp[i][j] = nextd[i][j];
            }
        }

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                for (int k = 0; k < 8; k++) {
                    nexto[i][j] = (nexto[i][j] + ((origin[i][k] * origin[k][j]) % 1000000007)) % 1000000007;
                }
            }
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
                origin[i][j] = nexto[i][j];
        }
        n /= 2;
    }
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < 8; i++)
        dp[i][i] = 1;
    if (n == 1) {       // dp를 I로 해서 처음이 1이라서 -> 될 수 없는 구조
        cout << 0;
        return 0;
    }
    solve(n);
    cout << dp[0][0];        // 만약 dp = origin으로 하고 싶으면, while이 아닌 재귀를 이용하는 것이 좋음
    return 0;                // 재귀는 bottom-up 방식이라 이후에 if(n%2)로 계속 *2 해가면 초기 n과 동일하게 하지만,
}                            // 하지만 while은 top-down으로 줄이는 방식이라 재귀처럼 origin에 하려고 하면 달라질 가능성 존재 