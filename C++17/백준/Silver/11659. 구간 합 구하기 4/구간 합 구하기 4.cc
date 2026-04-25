#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    vector<long long> v;
    long long a, b, c, d, s;
    cin >> a >> b;
    v.push_back(0);
    for (size_t i = 1; i <= a; i++) {
        cin >> c;
        v.push_back(v[i-1] + c);
    }
    for (size_t i = 0; i < b; i++) {
        cin >> c >> d;
        cout << v[d] - v[c-1] << "\n";
    }
    return 0;
}