#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    priority_queue<long long> pq;
    long long a, b = 0, n;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) {
            if (pq.size() == 0)
                cout << 0 << "\n";
            else {
                a = pq.top();
                cout << a << "\n";
                pq.pop();
            }
        }
        else {
            pq.push(a);
        }
    }
    return 0;
}