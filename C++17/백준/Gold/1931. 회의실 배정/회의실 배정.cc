#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main () {
    int b, n, count;
    count = 1;
    vector<pair<int, int>> a;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        a.push_back(make_pair(q, p));
    }
    
    sort(a.begin(), a.end());
    b = a[0].first;

    for (size_t i = 1; i < n; i++) {
        if (a[i].second >= b) {
            count += 1;
            b = a[i].first;
        }
    }
    cout << count;
    return 0;
}