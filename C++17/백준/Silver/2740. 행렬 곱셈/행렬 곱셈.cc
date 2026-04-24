#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    int arr1[a][b];
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> arr1[i][j];
        }
    }
    int c, d;
    cin >> c >> d;
    int arr2[c][d];
    for (size_t i = 0; i < c; i++) {
        for (size_t j = 0; j < d; j++) {
            cin >> arr2[i][j];
        }
    }
    int arr3[a][d] = {0,};
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < d; j++) {
            arr3[i][j] = 0;
            for (size_t k = 0; k < b; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < d; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}