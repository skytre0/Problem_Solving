#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, x, y, z, st, en;
int arr[1005][1005];
pair<int, string> save[1005];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    fill_n(arr[0], 1005 * 1005, 123456789);
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        cin >> x >> y >> z;
        if (z < arr[x][y])
            arr[x][y] = z;
    }
    cin >> st >> en;
    for (int i = 1; i <= a; i++) {
        save[i] = make_pair(1, to_string(st) + " ");
        if (arr[st][i] != 123456789)
            pq.push({arr[st][i], i});
    }
    while (!pq.empty()) {
        int sum = pq.top().first;
        int mid = pq.top().second;
        pq.pop();
        for (int i = 1; i <= a; i++) {
            if (arr[st][i] > arr[mid][i] + sum) {
                arr[st][i] = arr[mid][i] + sum;
                save[i].first = save[mid].first + 1;
                save[i].second = save[mid].second + to_string(mid) + " ";
                pq.push({arr[st][i], i});
            }
        }
    }
    cout << arr[st][en] << "\n";
    cout << ++save[en].first << "\n" << save[en].second << en;
    return 0;
}