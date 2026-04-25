#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int n, m;
int arr[8];

void solve (int sum, int now, int ith) {
    if (sum == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    else if (now != n+1) {
        arr[ith] = now;
        solve(sum+1, 1, ith+1);
        solve(sum, now+1, ith);
    }
    return;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    deque<int> dq;
    cin >> n >> m;
    solve(0, 1, 0);
    return 0;
}