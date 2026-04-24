#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a, b, c;
    cin >> a >> b;
    int arr[a];
    cin >> arr[0];
    c = arr[0];
    for (size_t i = 1; i < a; i++) {
        cin >> arr[i];
        arr[i] > c ? c = arr[i] : c;
    }
    long long p = 1, q = c, r = 0;

    while (p <= q) {
        c = 0;
        r = (p + q) / 2;
        for (size_t j = 0; j < a; j++) {
            c += arr[j] / r;
        }        
        if (c >= b) {
            p = r + 1;
        }
        else {
            q = r - 1;
        }
    }
    cout << q;
    return 0;
}