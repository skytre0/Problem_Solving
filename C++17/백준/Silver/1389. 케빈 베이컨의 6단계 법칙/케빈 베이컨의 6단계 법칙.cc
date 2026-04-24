#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int a, b, p, q, sum, ans = 10000, num = 0;
int arr[100] = {0};
int arr1[100][100];


void solve(int k) {
    int i, x, y = 1;
    queue<int> q;
    q.push(k);
    while (q.size() != 0) {
        x = q.size();
        for (size_t z = 0; z < x; z++) {
            i = q.front();
            q.pop();
            for (int j = 0; j < a; j++) {
                if (arr1[i][j] == 1 && arr[j] == 0) {
                    arr[j] = y;
                    q.push(j);
                }
            }
        }
        y++;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (size_t i = 0; i < b; i++) {
        cin >> p >> q;
        arr1[p-1][q-1] = 1;
        arr1[q-1][p-1] = 1;
    }
    for (size_t i = 0; i < a; i++) {
        fill_n(arr, a, 0);
        solve(i);
        sum = 0;
        for (size_t j = 0; j < a; j++) {
            if (j != i)
                sum += arr[j];
        }
        if (sum < ans) {
            ans = sum;
            num = i + 1;
        }
    }
    cout << num;
    return 0;
}