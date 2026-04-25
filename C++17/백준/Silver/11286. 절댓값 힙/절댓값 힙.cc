#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    priority_queue<long long, vector<long long>, greater<long long>> pq1;
    priority_queue<long long, vector<long long>, less<long long>> pq2;
    long long n, a, b, c;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) {
            if (pq1.size() > 0) {
                if (pq2.size() == 0) {
                    cout << pq1.top() << "\n";
                    pq1.pop();
                }
                else {
                    c = abs(pq2.top());
                    b = pq1.top();
                    if (c <= b) {
                        cout << -1 * c << "\n";
                        pq2.pop();
                    }
                    else {
                        cout << b << "\n";
                        pq1.pop();
                    }
                }
            }
            else {
                if (pq2.size() > 0) {
                    cout << pq2.top() << "\n";
                    pq2.pop();
                }
                else {
                    cout << 0 << "\n";
                }
            }
        }
        else {
            if (a > 0)
                pq1.push(a);
            else
                pq2.push(a);
        }
    }
    return 0;
}