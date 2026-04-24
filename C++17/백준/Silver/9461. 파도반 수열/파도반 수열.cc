#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    vector<long long> v;
    long long a, b, c;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        v = {1, 1, 1, 2, 2};
        for (size_t j = 4; j < b-1; j++) {
            c = v[j] + v[j-4];
            v.push_back(c);
        }
        cout << v[b-1] << "\n";
    }
    return 0;
}