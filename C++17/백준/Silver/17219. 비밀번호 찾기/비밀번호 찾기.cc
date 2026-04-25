#include <string>
#include <map>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    map<string, string> m;
    string p, q;
    int a, b;
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        cin >> p >> q;
        m.insert(make_pair(p, q));
    }
    for (size_t i = 0; i < b; i++) {
        cin >> p;
        cout << m[p] << "\n";
    }
    return 0;
}