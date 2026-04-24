#include <iostream>

using namespace std;

int main () {
    int n, a, b, c;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (c%a == 0)
            cout << a*100 + (c/a) << "\n";
        else
            cout << c%a*100 + (c/a)+1 << "\n";
    }
    return 0;
}    