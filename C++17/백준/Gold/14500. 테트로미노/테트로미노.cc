#include <algorithm>
#include <tuple>
#include <queue>
#include <iostream>

using namespace std;

int arr[500][500] = {0};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    queue<tuple<int, int, int, int>> q;
    int a, b, c, d, cur, sav = 0, count;
    int w, x, y, z;
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            count = 0;
            cur = 0;
            q.push({i, j, 0, arr[i][j]});
            while (count < 3) {
                c = q.size();
                for (size_t k = 0; k < c; k++) {
                    w = get<0>(q.front());
                    x = get<1>(q.front());
                    y = get<2>(q.front());
                    z = get<3>(q.front());
                    q.pop();
                    if (w-1 >= 0 && y != 3) {
                        d = z + arr[w-1][x];
                        if (count != 2)
                            q.push({w-1, x, 1, d});
                        else
                            d >= cur ? cur = d : cur *= 1;
                    }
                    if (x-1 >= 0 && y != 4) {
                        d = z + arr[w][x-1];
                        if (count != 2)
                            q.push({w, x-1, 2, d});
                        else
                            d >= cur ? cur = d : cur *= 1;
                    }
                    if (w+1 < a && y != 1) {
                        d = z + arr[w+1][x];
                        if (count != 2)
                            q.push({w+1, x, 3, d});
                        else
                            d >= cur ? cur = d : cur *= 1;
                    }
                    if (x+1 < b && y != 2) {
                        d = z + arr[w][x+1];
                        if (count != 2)
                            q.push({w, x+1, 4, d});
                        else
                            d >= cur ? cur = d : cur *= 1;
                    }
                }
                count++;
            }
            if (!(i == 0 || i == a-1) && !(j == 0 || j == b-1)) {
                cur = max(cur, arr[i][j] + arr[i-1][j] + arr[i][j-1] + arr[i+1][j] + arr[i][j+1] - min({arr[i-1][j], arr[i][j-1], arr[i+1][j], arr[i][j+1]}));
            }
            else if ((i == 0 || i == a-1) && !(j == 0 || j == b-1)) {
                if (i == 0)
                    cur = max(cur, arr[i][j] + arr[i][j-1] + arr[i+1][j] + arr[i][j+1]);
                else
                    cur = max(cur, arr[i][j] + arr[i-1][j] + arr[i][j-1] + arr[i][j+1]);
            }
            else if (!(i == 0 || i == a-1) && (j == 0 || j == b-1)) {
                if (j == 0)
                    cur = max(cur, arr[i][j] + arr[i-1][j] + arr[i+1][j] + arr[i][j+1]);
                else
                    cur = max(cur, arr[i][j] + arr[i-1][j] + arr[i][j-1] + arr[i+1][j]);
            }
            if (cur >= sav) {
                sav = cur;
            }
        }
    }
    cout << sav;
    return 0;
}