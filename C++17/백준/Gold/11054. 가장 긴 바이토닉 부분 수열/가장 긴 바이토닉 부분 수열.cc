#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a[1001];
    pair<int, int> b[1001];
    int c, sum = 0;
    cin >> c;
    for (size_t i = 0; i < c; i++) {
        cin >> a[i];
        b[i].first = 0;
        b[i].second = 0;
    }
    for (size_t i = 0; i < c; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                b[i].first = max(b[i].first, b[j].first+1);
            }
            if (a[c - i - 1] > a[c - j - 1]) {
                b[c - i - 1].second = max(b[c - i - 1].second, b[c - j - 1].second+1);
            }
        }
        b[i].first = max(1, b[i].first);
        b[c - i - 1].second = max(1, b[c - i - 1].second);
    }
    for (size_t i = 0; i < c; i++) {
        sum = max(sum, b[i].first + b[i].second - 1);
    }
    cout << sum;
    return 0;
}