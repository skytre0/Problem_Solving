#include <iostream>

using namespace std;

int main() {
    int arr[10005] = {0};
    int m, n = 0;
    for (size_t i = 0; i < 10000; i++) {
        m = i + 1;
        n += m;
        while (m != 0) {
            n += m%10;
            m /= 10;
        }
        if (n < 10001) {
            arr[n-1] += 1;
        }
        n = 0;
    }
    for (size_t i = 0; i < 10000; i++) {
        if (arr[i] == 0)
            cout << i+1 << "\n";
    }
    return 0;
}