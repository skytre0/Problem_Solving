#include <algorithm>
#include <iostream>

using namespace std;

int arr[100001] = {0};
    int a, b, c;

int solve(int c) {
    int p = 0, q = a - 1, r = 0;
    while (p <= q) {
        r = (p + q) / 2;
        if (arr[r] == c) {
            cout << "1" << "\n";
            return 0;
        }
        else if (arr[r] > c) {
            q = r - 1;
        }
        else
            p = r + 1;
    }
    cout << "0" << "\n";
    return 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    cin >> b;
    for (size_t i = 0; i < b; i++) {
        cin >> c;
        solve(c);
    }
    return 0;
}