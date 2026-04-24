#include <tuple>
#include <queue>
#include <iostream>

using namespace std;

int arr[100][100][100] = {0};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    queue<tuple<int, int, int>> q;
    int a, b, c, sum, day = 0, d;
    int x, y, z;
    cin >> c >> b >> a;
    sum = a * b * c;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            for (size_t k = 0; k < c; k++) {
                cin >> arr[i][j][k];
                if (arr[i][j][k] != 0)
                    sum--;
                if (arr[i][j][k] == 1)
                    q.push(make_tuple(i, j, k));
            }
        }
    }
    while (!q.empty()) {
        day++;
        d = q.size();
        for (size_t i = 0; i < d; i++) {
            x = get<0>(q.front());
            y = get<1>(q.front());
            z = get<2>(q.front());
            q.pop();
            if (x-1 >= 0 && x-1 < a && y >= 0 && y < b && z >= 0 && z < c && arr[x-1][y][z] == 0) {
                arr[x-1][y][z] = 1;
                q.push(make_tuple(x-1, y, z));
            }
            if (x >= 0 && x < a && y-1 >= 0 && y-1 < b && z >= 0 && z < c && arr[x][y-1][z] == 0) {
                arr[x][y-1][z] = 1;
                q.push(make_tuple(x, y-1, z));
            }
            if (x >= 0 && x < a && y >= 0 && y < b && z-1 >= 0 && z-1 < c && arr[x][y][z-1] == 0) {
                arr[x][y][z-1] = 1;
                q.push(make_tuple(x, y, z-1));
            }
            if (x+1 >= 0 && x+1 < a && y >= 0 && y < b && z >= 0 && z < c && arr[x+1][y][z] == 0) {
                arr[x+1][y][z] = 1;
                q.push(make_tuple(x+1, y, z));
            }
            if (x >= 0 && x < a && y+1 >= 0 && y+1 < b && z >= 0 && z < c && arr[x][y+1][z] == 0) {
                arr[x][y+1][z] = 1;
                q.push(make_tuple(x, y+1, z));
            }
            if (x >= 0 && x < a && y >= 0 && y < b && z+1 >= 0 && z+1 < c && arr[x][y][z+1] == 0) {
                arr[x][y][z+1] = 1;
                q.push(make_tuple(x, y, z+1));
            }
        }
        d = q.size();
        sum -= d;
    }
    sum != 0 ? cout << -1 : cout << day - 1;
    return 0;
}