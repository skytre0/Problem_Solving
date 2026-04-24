#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long a, b, c;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        if (b == 0) {
            if (pq.empty())
                cout << 0 << "\n";
            else {
                c = pq.top();
                cout << c << "\n";
                pq.pop();
            }
        }
        else {
            pq.push(b);
        }
    }
    return 0;
}