#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n, a[50], b[50], c[50], sum, count;
    sum = 0;
    cin >> n;
    for (size_t i = 0; i < 2; i++) {
        for (size_t j = 0; j < n; j++) {
            if (i == 0) {
                cin >> a[j];
                c[j] = a[j];
            }
            else
                cin >> b[j];
        }
    }
    sort(c, c+n);

    for (size_t i = 0; i < n; i++) {
        count = 0;
        for (size_t j = 0; j < n; j++) {
            if (b[i] > b[j])
                count++;
            else if (b[i] == b[j]) {
                if (i > j)
                    count++;
            }     
        }
        a[i] = c[n-1-count];
    }

    for (size_t i = 0; i < n; i++) {
        sum += a[i]*b[i];
    }
    cout << sum;
    return 0;
}