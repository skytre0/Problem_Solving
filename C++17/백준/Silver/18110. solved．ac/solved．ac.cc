#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int p = 1, q = 0, a = 0;
    cin >> p;
    if (p == 0) {
        cout << 0;
        return 0;
    }
    int arr[p];
    for (size_t i = 0; i < p; i++) {
        cin >> arr[i];
    }
    a = round((double)p * 15 / 100);
    sort(arr, arr+p);
    for (size_t i = a; i < p - a; i++) {
        q += arr[i];
    }
    cout << round((double)q / (p - 2 * a));
    return 0;
}