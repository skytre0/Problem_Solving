#include <bits/stdc++.h>
#define ll long long

using namespace std;

string s;
int a, b, c, sum = 2505, tmp;
int arr[2505][2505];
int ans[2505];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        arr[i][i] = 1;
    }
    // 팰린드롬 탐색 : 길이 1씩 늘리기에 가로줄+1한 것의 길이-1의 칸이 1이면 이미 팰린드롬 상태 = 양끝만 맞으면 자동 확인됨.
    for (int i = 1; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == s[j+i]) {
                if (i == 1)
                    arr[j][j+i] = 1;
                else if (i + j < s.size())
                    arr[j][j+i] = arr[j+1][j+i-1];
            }
        }
    }
    // 최소만 구하면 되기에 최소 가능성 있는 팰린드롬 형성 부분 제외 최대치 이상 숫자 입력.
    for (int i = 0; i < s.size(); i++) {
        if (arr[0][i] == 1)
            ans[i] = arr[0][i];
        else
            ans[i] = 2505;
    }
    // 최소 직전보다 +1 많든지, 이 위치가 이전에 팰린드롬 형성해서 이미 도착 가능성 있기에 min으로 최소로 고정함.
    for (int i = 1; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            if (arr[i][j] == 1)
                ans[j] = min(ans[i-1] + 1, ans[j]);
        }
    }
    cout << ans[s.size()-1];
    return 0;
}