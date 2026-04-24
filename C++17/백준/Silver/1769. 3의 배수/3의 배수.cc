#include <string>
#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int b = 0, c = 0;
    string a;
    cin >> a;
    while (true) {
        if (a.length() < 2) {
            b = a[0] - '0';
            break;
        }
        for (size_t i = 0; i < a.length(); i++) {
            b += a[i] - '0';
        }
        c += 1;
        if (b < 10)
            break;
        else {
            a = to_string(b);
            b = 0;
        }
    }
    cout << c << '\n' << (b % 3 == 0 ? "YES" : "NO");
    return 0;
}