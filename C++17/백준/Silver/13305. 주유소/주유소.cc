#include <iostream>

using namespace std;

int main () {
    long int n[100000];
    long int r[99999];
    long int a, b, c, d;
    cin >> a;
    b = 0;
    c = 0;
    d = 0;
    for (size_t i = 0; i < a-1; i++)
        cin >> r[i];
    for (size_t i = 0; i < a; i++)
        cin >> n[i];

    for (size_t i = 0; i < a-1; i++) {
        if (c == 0)
            c = n[i];
        if (n[i] >= c) {
            b += r[i];
        }
        else {
            d += b*c;
            c = n[i];
            b = r[i];
        }
    }
    d += b*c;
    cout << d;
    return 0;
}