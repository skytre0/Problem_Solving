#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, sum = 555555;
int arr[5][5][100005];

int fetch(int from, int to) {
    if (from == to)
        return 1;
    if (from == 0)
        return 2;
    if (abs(from - to) == 2)
        return 4;
    return 3;
}

void solve(int save, int mark, int n) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][n][mark] = min(arr[i][n][mark], min(arr[i][j][mark - 1] + fetch(j, n), arr[i][save][mark - 1] + fetch(save, n)));
            arr[n][i][mark] = min(arr[i][n][mark], min(arr[save][i][mark - 1] + fetch(save, n), arr[j][i][mark - 1] + fetch(j, n)));
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 100005; k++) {
                arr[i][j][k] = 555555;
            }
        }
    }
    int mark = 0;
    arr[0][0][mark] = 0;
    while (true) {
        int save = n;
        cin >> n;
        if (n == 0)
            break;
        mark++;
        solve(save, mark, n);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sum = min(sum, arr[i][j][mark]);
        }
    }
    cout << sum;
    return 0;
}
