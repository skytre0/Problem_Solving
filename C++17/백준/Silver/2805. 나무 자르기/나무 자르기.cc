#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a, b, c, d = 0;
    vector<long long> v;
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        cin >> c;
        c > d ? d = c : d;
        v.push_back(c);
    }
    long long s = 0, e = d, m, sum;
    while (s <= e) {
        m = (s + e) / 2;
        sum = 0;
        for (size_t i = 0; i < a; i++) {
            v[i] > m ? sum += (v[i] - m) : sum;
        }
        if (sum >= b) {
            d = m;
            s = m+1;
        }
        else if (sum < b) {
            e = m-1;
        }
    }
    cout << d;
    return 0;
}