#include <iostream>

using namespace std;

int main() {
    int a, b, c, d = 1;
    while (1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        cout << "Case " << d << ": " << a*(c/b) + min(c%b, a) << "\n";
        d += 1;
    }
    return 0;
}