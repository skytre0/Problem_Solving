#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, l, a, b, x, y;
int arr[303][303];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    while (n--) {
        fill_n(arr[0], 303 * 303, 0);
        cin >> l >> a >> b >> x >> y;
        arr[a][b] = -1;
        queue<pair<int, int>> q;
        q.push({a, b});
        int check = 0;
        int size;
        while (arr[x][y] != -1) {
            size = q.size();
            for (int i = 0; i < size; i++) {
                a = q.front().first;
                b = q.front().second;
                q.pop();
                if (a - 2 >= 0 && b - 1 >= 0 && arr[a-2][b-1] == 0) {
                    arr[a-2][b-1] = -1;
                    q.push({a-2, b-1});
                }
                if (a - 2 >= 0 && b + 1 < l && arr[a-2][b+1] == 0) {
                    arr[a-2][b+1] = -1;
                    q.push({a-2, b+1});
                }

                if (a + 2 < l && b - 1 >= 0 && arr[a+2][b-1] == 0) {
                    arr[a+2][b-1] = -1;
                    q.push({a+2, b-1});
                }
                if (a + 2 < l && b + 1 < l && arr[a+2][b+1] == 0) {
                    arr[a+2][b+1] = -1;
                    q.push({a+2, b+1});
                }

                if (a - 1 >= 0 && b - 2 >= 0 && arr[a-1][b-2] == 0) {
                    arr[a-1][b-2] = -1;
                    q.push({a-1, b-2});
                }
                if (a + 1 < l && b - 2 >= 0 && arr[a+1][b-2] == 0) {
                    arr[a+1][b-2] = -1;
                    q.push({a+1, b-2});
                }

                if (a - 1 >= 0 && b + 2 < l && arr[a-1][b+2] == 0) {
                    arr[a-1][b+2] = -1;
                    q.push({a-1, b+2});
                }
                if (a + 1 < l && b + 2 < l && arr[a+1][b+2] == 0) {
                    arr[a+1][b+2] = -1;
                    q.push({a+1, b+2});
                }
            }
            check++;
        }
        if (arr[x][y] == -1)
            cout << check << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}