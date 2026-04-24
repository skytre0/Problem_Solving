#include <cstring>
#include <queue>
#include <iostream>

using namespace std;

long long arr[1010][1010] = {};
long long check[1010][1010] = {};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a, b, x, y, z;
    priority_queue<pair<long long, long long>> q;
    long long arr1[1010];
    fill_n(arr1, 1010, 100000000);
    fill(arr[0], arr[1010], 100000000);
    cin >> a >> b;
    for (size_t i = 0; i < b; i++) {
        cin >> x >> y >> z;
        check[x][y] = 1;
        if (z < arr[x][y])
            arr[x][y] = z;
    }
    cin >> x >> y;
    arr1[x] = 0;
    q.push({0, x});
    while (!q.empty()) {
        z = -q.top().first;
        x = q.top().second;
        q.pop();
        for (size_t i = 1; i <= a; i++) {
            if (check[x][i] != 0 && arr[x][i] + z <= arr1[i] && arr[x][i] + z <= arr1[y]) {
                arr1[i] = arr[x][i] + z;
                arr[x][i] = 0;
                check[x][i] = 0;
                q.push({-arr1[i], i});
            }
        }
    }
    cout << arr1[y];
    return 0;
}