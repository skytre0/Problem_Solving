#pragma GCC optimize("Ofast")
#include <queue>
#include <iostream>

using namespace std;

int arr[1000][1000] = {0};

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    queue<pair<int, int>> q;
    int a, b, c;
    pair<int, int> p;
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> c;
            arr[i][j] = c - 2;
            if (c == 2)
                q.push(make_pair(i, j));
        }
    }
    while (!q.empty()) {
        c = q.size();
        for (size_t i = 0; i < c; i++) {
            p = q.front();
            q.pop();
            if (p.first - 1 >= 0 && p.first - 1 < a && p.second >= 0 && p.second < b && arr[p.first-1][p.second] == -1) {
                arr[p.first-1][p.second] = arr[p.first][p.second] + 1;
                q.push(make_pair(p.first-1, p.second));
            }
            if (p.first >= 0 && p.first < a && p.second - 1 >= 0 && p.second - 1 < b && arr[p.first][p.second-1] == -1) {
                arr[p.first][p.second-1] = arr[p.first][p.second] + 1;
                q.push(make_pair(p.first, p.second-1));
            }
            if (p.first + 1 >= 0 && p.first + 1 < a && p.second >= 0 && p.second < b && arr[p.first+1][p.second] == -1) {
                arr[p.first+1][p.second] = arr[p.first][p.second] + 1;
                q.push(make_pair(p.first+1, p.second));
            }
            if (p.first >= 0 && p.first < a && p.second + 1 >= 0 && p.second + 1 < b && arr[p.first][p.second+1] == -1) {
                arr[p.first][p.second+1] = arr[p.first][p.second] + 1;
                q.push(make_pair(p.first, p.second+1));
            }
        }
    }
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            if (arr[i][j] == -2)
                cout << "0 ";
            else
                cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}