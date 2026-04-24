#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a = 0, before = -1;
    string n;
    cin >> n;
    for (size_t i = 0; i < n.length(); i++) {
        if ((int)n[i] != before) {
            before = (int)n[i];
            a += 1;
        }
    }
    cout << a/2;
    return 0;
}