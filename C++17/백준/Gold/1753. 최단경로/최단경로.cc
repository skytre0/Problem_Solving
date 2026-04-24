#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int a, b, c, p, q, r;
vector<pair<int, int>> v[20002] = {};
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int arr[20002];

void solve(int a) {
    int x, y;
    arr[a] = 0;
    pq.push({0, a});
    while (!pq.empty()) {
        x = pq.top().first;
        y = pq.top().second;
        pq.pop();
        for (size_t i = 0; i < v[y].size(); i++) {
            if (x + v[y][i].first < arr[v[y][i].second]) {
                arr[v[y][i].second] = x + v[y][i].first;
                pq.push({arr[v[y][i].second], v[y][i].second});
            }
        }
    }
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    for (size_t i = 0; i < b; i++) {
        cin >> p >> q >> r;
        v[p].push_back({r, q});
    }
    r = 0;
    fill_n(arr, 20002, 98765431);
    solve(c);
    for (size_t i = 1; i <= a; i++) {
        if (arr[i] == 98765431)
            cout << "INF\n";
        else
            cout << arr[i] << "\n";
    }
    return 0;
}