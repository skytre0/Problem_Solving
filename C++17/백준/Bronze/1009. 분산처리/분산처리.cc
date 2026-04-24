#include <iostream>

using namespace std;

int main() {
    int a, b, m, n;
    int k[9];
    int j;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> a >> b;
        a %= 10;
        k[0] = a;
        m = b;
        j = 1;
        while (m > 1) {
            k[j] = (k[j-1] * a)%10;
            m -= 1;
            if (k[j] == k[0]) {
                break;
            }
            j++;
        }
        if (a == 0)
            cout << 10 << "\n";
        else
            cout << k[(b-1)%j] << "\n";
    }
    return 0;
}