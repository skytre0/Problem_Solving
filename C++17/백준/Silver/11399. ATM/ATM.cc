#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n, sum;
    int ns[1000];
    cin >> n;
    sum = 0;
    for (size_t i = 0; i < n; i++) {
        cin >> ns[i];
    }
    sort(ns, ns+n);
    for (size_t i = 0; i < n; i++) {
        sum += ns[i]*(n-i);
    }
    cout << sum;
    return 0;
}