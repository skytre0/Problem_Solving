#include <cmath>
#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b = 0, c = 0, sum = 1;
    cin >> a;
    if (a <= 2) {
        cout << 1;
        return 0;
    }
    for (size_t i = a/2 + 1; i >= (-1 + sqrt(1+8*a))/2; i--) {
        while (b < a) {
            b = b + i - c;
            c++;
        }
        if (b == a)
            sum++;
        b = 0;
        c = 0;
    }
    cout << sum;
    return 0;
}