#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[100001] = {0};
    int a, b, c, d = 0, n = 1;
    queue<int> q;
    cin >> a >> b;
    q.push(a);
    arr[a] = 1;
    while (n > 0) {
        n = q.size();
        for (size_t i = 0; i < n; i++) {
            c = q.front();
            q.pop();
            q.push(c);
            while (c * 2 <= 100000 && arr[c*2] == 0) {
                c *= 2;
                arr[c] = 1;
                q.push(c);
            }
        }
        if (arr[b] == 1) {
            n = 0;
            break;
        }
        d++;
        n = q.size();
        for (size_t i = 0; i < n; i++) {
            c = q.front();
            q.pop();
            if (arr[c + 1] == 0 && c < 100000) {
                arr[c+1] = 1;
                q.push(c+1);
            }
            if (arr[c - 1] == 0 && c > 0) {
                arr[c-1] = 1;
                q.push(c-1);
            }
        }
    }
    cout << d;
    return 0;
}