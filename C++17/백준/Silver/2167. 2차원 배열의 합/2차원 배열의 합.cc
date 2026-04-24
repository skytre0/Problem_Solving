#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b;
    int arr[a][b];
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> c;
    int p, q, m, n, sum = 0;
    for (size_t x = 0; x < c; x++) {
        cin >> p >> q >> m >> n;
        for (int i = p-1; i < m; i++) {
            for (int j = q-1; j < n; j++) {
                sum += arr[i][j];
            }
        }
        cout << sum << "\n";
        sum = 0;
    }
    return 0;
}