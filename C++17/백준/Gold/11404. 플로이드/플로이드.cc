#include <bits/stdc++.h>

using namespace std;

int a, b, p, q, r, arr[101][101];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

void solve(int x) {
    if (x <= a) {
        for (size_t i = 1; i <= a; i++) {
            if (arr[x][i] != 0) {
                pq.push(make_pair(arr[x][i], i));
            }
        }
        while (!pq.empty()) {
            int y = pq.top().first, z = pq.top().second;
            pq.pop();
            for (size_t i = 1; i <= a; i++) {
                if (x != i && arr[z][i] != 0 && (arr[x][i] > arr[z][i] + y ||  arr[x][i] == 0)) {
                    arr[x][i] = arr[z][i] + y;
                    pq.push(make_pair(arr[x][i], i));
                }
            }
        }
        solve(x+1);
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        cin >> p >> q >> r;
        if (arr[p][q] == 0)
            arr[p][q] = r;
        else
            arr[p][q] < r ?  : arr[p][q] = r;
    }
    solve(1);
    for (size_t i = 1; i <= a; i++) {
        for (size_t j = 1; j <= a; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}