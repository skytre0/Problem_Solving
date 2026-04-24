#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main () {
    int total, n, b, sum, t, check;
    vector<int> a;
    cin >> total >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> t;
        a.push_back(t);
    }
    b = 0;
    sum = 0;
    n = 0;
    t = 0;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    while (a.size() != 0) {
        if (sum + a[b] < total) {
            sum += a[b];
            t += 1;
            a.erase(a.begin()+b);
        }
        else if (sum + a[b] == total) {
            sum = 0;
            a.erase(a.begin()+b);
            b = 0;
            n += 1;
            t = 0;
            if (a.begin()+b == a.end())
                break;
        }
        else {
            b += 1;
        }
        if (a.begin()+b == a.end() || t == 2) {
            b = 0;
            sum = 0;
            n += 1;
            t = 0;
        }
    }
    cout << n;
    return 0;
}