#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
int arr[1000005];

void solve() {
    arr[1] = 1;
    for (int i = 2; i < 1000001; i++) {     // 일단 i % 2 == 0이면, arr[i] == arr[i+1] -> i번째의 모든 경우에 +1만 하면 되기에 = 변형/조작이 불가능해서
        arr[i] = (arr[i-1] % 1000000000);   // i % 2 == 0이면, i/2의 모든 경우에 숫자들 전부 * 2를 하면 i의 경우로 바뀜
        if (i % 2 == 0)
            arr[i] = (arr[i] + arr[i/2]) % 1000000000;      // 하지만, 1이 있는 경우가 없어져서, i-2 == i-1이고, i-2의 모든 경우에 "1, 1"을 옆에 붙이면 i에 1이 있는 모든 경우가 됨됨
    }
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    solve();
    cout << arr[a];
    return 0;
}