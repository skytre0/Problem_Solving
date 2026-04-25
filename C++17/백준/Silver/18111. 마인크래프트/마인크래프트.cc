#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a, b, c, low = 256, high = 0, time;
    long long record[3] = {0, 64000000, 0};
    cin >> a >> b >> record[0];
    long long arr[a][b];
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> arr[i][j];
            if (arr[i][j] > high)
                high = arr[i][j];
            if (arr[i][j] < low)
                low = arr[i][j];
        }
    }
    for (long long i = high; i >= low; i--) {
        c = record[0];
        time = 0;
        for (long long j = 0; j < a; j++) {
            for (long long k = 0; k < b; k++) {
                if (arr[j][k] >= i) {
                    c += arr[j][k] - i;
                    time += 2 * (arr[j][k] - i);
                }
                else {
                    c -= i - arr[j][k];
                    time += i - arr[j][k];
                }
            }
        }
        if (c >= 0) {
            if (record[1] > time) {
                record[1] = time;
                record[2] = i;
            }
        }
    }
    cout << record[1] << " " << record[2];
    return 0;
}