#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    queue<long long> q;
    int a, b, c, count = 1, out = 1;
    cin >> a >> b;
    q.push(a);
    while (!q.empty() && out) {
        a = q.size();
        for (size_t i = 0; i < a; i++) {
            c = q.front();
            q.pop();
            if (c * 2 <= b && c <= 500000000) {
                q.push(c * 2);
                if (c * 2 == b) {
                    out = 0;
                    break;
                }
            }
            if (c * 10 + 1 <= b && c < 100000000) {
                q.push(c * 10 + 1);
                if (c * 10 + 1 == b) {
                    out = 0;
                    break;
                }
            }
        }
        count++;
    }
    if (out == 1)
        cout << -1;
    else
        cout << count;
    return 0;
}