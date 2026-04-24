#include <bits/stdc++.h>

using namespace std;

long long a, b;
long long arr[5][5];
long long save[5][5];
long long tmp[5][5];

void get_ans(long long one[5][5], long long two[5][5]) {
    long long check;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < a; j++) {
            check = 0;
            for (size_t k = 0; k < a; k++) {
                check += one[i][k] * two[k][j];
            }
            tmp[i][j] = check % 1000;
        }
    }
    memcpy(save, tmp, sizeof(save));
}

void solve(long long store[5][5], long long num) {
    if (num == 1) {
        for (size_t i = 0; i < a; i++) {
            for (size_t j = 0; j < a; j++)
                save[i][j] = store[i][j] % 1000;
        }
        return;
    }
    if (num % 2 == 0) {
        solve(store, num / 2);
        get_ans(save, save);
    }
    else {
        solve(store, num / 2);
        get_ans(save, save);
        get_ans(save, arr);
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < a; j++)
            cin >> arr[i][j];
    }
    solve(arr, b);
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < a; j++)
            cout << save[i][j] << " ";
        cout << "\n";
    }
    return 0;
}