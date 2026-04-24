#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int a, b, p, q, r;
vector<pair<int, int>> v[801] = {};
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int arr[801];
int save[5] = {};

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
    cin >> a >> b;
    for (size_t i = 0; i < b; i++) {
        cin >> p >> q >> r;
        v[p].push_back({r, q});
        v[q].push_back({r, p});
    }
    cin >> p >> q;
    r = 0;
    fill_n(arr, 801, 98765431);
    solve(1);
    save[0] = arr[p];
    save[1] = arr[q];
    fill_n(arr, 801, 98765431);
    solve(p);
    save[2] = arr[q];
    save[3] = arr[a];
    fill_n(arr, 801, 98765431);
    solve(q);
    save[4] = arr[a];
    if (save[0] == 98765431 || save[1] == 98765431 || save[2] == 98765431 || save[3] == 98765431 || save[4] == 98765431) {
        cout << -1;
        return 0;
    }
    else
        cout << min(save[0] + save[2] + save[4], save[1] + save[2] + save[3]);
    return 0;
}