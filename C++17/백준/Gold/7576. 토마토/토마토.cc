#include <queue>
#include <iostream>

using namespace std;

int arr[1000][1000] = {0};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    queue<pair<int, int>> q;
    int a, b, sum, day = 0, d;
    int x, y;
    cin >> b >> a;
    sum = a * b;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> arr[i][j];
            if (arr[i][j] != 0)
                sum--;
            if (arr[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }
    while (!q.empty()) {
        day++;
        d = q.size();
        for (size_t i = 0; i < d; i++) {
            x = q.front().first;
            y = q.front().second;
            q.pop();
            if (x-1 >= 0 && x-1 < a && y >= 0 && y < b && arr[x-1][y] == 0) {
                arr[x-1][y] = 1;
                q.push(make_pair(x-1, y));
            }
            if (x >= 0 && x < a && y-1 >= 0 && y-1 < b && arr[x][y-1] == 0) {
                arr[x][y-1] = 1;
                q.push(make_pair(x, y-1));
            }
            if (x+1 >= 0 && x+1 < a && y >= 0 && y < b && arr[x+1][y] == 0) {
                arr[x+1][y] = 1;
                q.push(make_pair(x+1, y));
            }
            if (x >= 0 && x < a && y+1 >= 0 && y+1 < b && arr[x][y+1] == 0) {
                arr[x][y+1] = 1;
                q.push(make_pair(x, y+1));
            }
        }
        d = q.size();
        sum -= d;
    }
    sum != 0 ? cout << -1 : cout << day - 1;
    return 0;
}