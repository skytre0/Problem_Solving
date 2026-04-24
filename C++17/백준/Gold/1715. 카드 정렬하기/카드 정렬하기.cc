#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        pq.push(a);
    }
    n = 0;
    while (pq.size() > 1) {
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        n += a + b;
        pq.push(a + b);
    }
    cout << n;
    return 0;
}