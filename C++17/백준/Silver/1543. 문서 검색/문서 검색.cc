#include <string>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int m = 0, n = 0;
    string a, b;
    getline(cin, a);
    getline(cin, b);
    while (n + b.length() <= a.length()) {
        if (a.substr(n, b.length()) != b) {
            n += 1;
        }
        else {
            n += b.length();
            m += 1;
        }
    }
    cout << m;
    return 0;
}