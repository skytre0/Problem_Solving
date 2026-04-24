#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, m, sum = 0;
int arr[11][11];
int ld[19];     // x+y -> 0 ~ 2a-1
int rd[19];     // x-y -> -(a-1) ~ (a-1)

// 필요 요소 : 좌표 2개, cnt, 
// 끝 도달 확인 필요 -> 가로 -> 세로 -> 전환 느낌

void solve(int x, int y, int cnt) {     // for문 없는 이유 밖에 solve(x+1, y%2, cnt) 두는데 그러면 for문에서 1줄이 끝난 상태로 다음 줄로 넘어가서 1자리가 다시 복원되고 무조건 1인 상태로 넘어감
    if (y > a-1)
        solve(x+1, (y+1)%2, cnt);
    else if (x > a-1)
        m = max(m, cnt);
    else {
        if (arr[x][y] == 1 && !ld[x+y] && !rd[x-y+(a-1)]) {
            ld[x+y] = 1, rd[x-y+(a-1)] = 1;
            solve(x, y+2, cnt+1);
            ld[x+y] = 0, rd[x-y+(a-1)] = 0;
        }
        solve(x, y+2, cnt);
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++)
            cin >> arr[i][j];
    }
    solve(0, 0, 0);
    sum += m;
    m = 0;
    solve(0, 1, 0);
    cout << sum + m;
    return 0;
}
