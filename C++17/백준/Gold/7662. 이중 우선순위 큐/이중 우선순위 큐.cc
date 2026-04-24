#include <set>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    multiset<long long> ms;
    long long a, b, c;
    string s;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        ms.clear();
        cin >> b;
        for (size_t j = 0; j < b; j++) {
            cin >> s >> c;
            if (s == "I") {
                ms.insert(c);
            }
            else {
                if (ms.size() != 0 && c == 1) {
                    auto p = ms.end();
                    ms.erase(--p);
                }
                else if (ms.size() != 0 && c == -1) {
                    ms.erase(ms.begin());
                }
            }
        }
        if (ms.empty())
            cout << "EMPTY\n";
        else {
            auto p = ms.end();
            cout << *(--p) << " " << *(ms.begin()) << "\n";
        }
    }
    return 0;
}