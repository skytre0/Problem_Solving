#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a = 0, b = 0, c = 0;
    string s;
    cin >> s;
    for (size_t i = 0; i <= s.length(); i++) {
        if (s[i] == '+' || s[i] == '-' || i == s.length()) {
            if (c == 0) {
                b += a;
                a = 0;
            }
            else {
                b -= a;
                a = 0;
            }
            if (s[i] == '-')
                c = 1;
        }
        else {
            a *= 10;
            a += s[i] - '0';
        }
    }
    cout << b;
    return 0;
}