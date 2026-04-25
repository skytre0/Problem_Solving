#include <bits/stdc++.h>

using namespace std;

int a, b, c, d, sum = 0, arr[100005][2];
queue<pair<int ,int>> q;
queue<int> q1;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    arr[a][0] = 1;
    q.push(make_pair(a, 0));
    while (arr[b][0] == 0) {
        int p = q.size();
        for (size_t i = 0; i < p; i++) {
            c = q.front().first;
            d = q.front().second;
            q.pop();
            if (c + 1 < 100001 && arr[c + 1][0] == 0) {
                arr[c + 1][1] += d;
                q1.push(c + 1);
            }
            if (c - 1 > -1 && arr[c - 1][0] == 0) {
                arr[c - 1][1] += d;
                q1.push(c - 1);
            }
            if (c < 50001 && arr[c * 2][0] == 0) {
                arr[c * 2][1] += d;
                q1.push(c  * 2);
            }
        }
        for (size_t i = 0; !q1.empty(); i++) {
            arr[q1.front()][0]++;
            q.push(make_pair(q1.front(), arr[q1.front()][1]));
            q1.pop();
        }
        sum++;
    }
    cout << sum << "\n" << arr[b][0];
    return 0;
}