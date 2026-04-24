#include <algorithm>
#include <iostream>

using namespace std;

int solve(int (*arr)[52], int j, int k) {
    arr[j][k] = 0;
    if (arr[j-1][k] == 1) {
        solve(arr, j-1, k);
    }
    if (arr[j][k-1] == 1) {
        solve(arr, j, k-1);
    }
    if (arr[j][k+1] == 1) {
        solve(arr, j, k+1);
    }
    if (arr[j+1][k] == 1) {
        solve(arr, j+1, k);
    }
    return 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[52][52];
    int a, b, c, d;
    int x, y, z = 0;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b >> c >> d;
        fill(arr[0], arr[52], 0);
        //fill(&arr[0][0], &arr[0][0] + sizeof(arr) / sizeof(arr[0][0]), 0);
        z = 0;
        for (size_t j = 0; j < d; j++) {
            cin >> x >> y;
            arr[y+1][x+1] = 1;
        }
        for (size_t j = 1; j <= c; j++) {
            for (size_t k = 1; k <= b; k++) {
                if (arr[j][k] == 1) {
                    solve(arr, j, k);
                    z += 1;
                }
            }
        }
        cout << z << "\n";
    }
    return 0;
}