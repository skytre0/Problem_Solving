#include <cmath>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    map<string, int> m;
    int a, b, c;
    string p, q;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        m.clear();
        for (size_t j = 0; j < b; j++) {
            cin >> p >> q;
            m[q]++;
        }
        c = 1;
        for (auto j = m.begin(); j != m.end(); j++) {
            c *= (j->second + 1);
        }
        cout << --c << "\n";
    }
    return 0;
}