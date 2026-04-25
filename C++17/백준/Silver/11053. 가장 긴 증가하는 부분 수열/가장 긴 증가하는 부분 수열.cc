#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[1001] = {};
    int b[1001] = {};
    int m = 0;
    int p;
    cin >> p;
    for (size_t i = 0; i < p; i++) {
        cin >> a[i];
        for (size_t j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                b[i] = max(b[i], b[j]+1);
            }
        }
        b[i] = max(1, b[i]);
    }
    for (size_t i = 0; i < p; i++) {
        m = max(m, b[i]);
    }
    cout << m;
    return 0;
}