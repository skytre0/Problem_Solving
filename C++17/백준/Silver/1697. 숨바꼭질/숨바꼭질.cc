#include <queue>
#include <iostream>

using namespace std;

int arr[100001] = {0};
queue<int> q;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d, e = 0;
    cin >> a >> b;
    q.push(a);
    if (a == b) {
        cout << 0;
        return 0;
    }
    while (arr[b] == 0) {
        e++;
        c = q.size();
        for (size_t i = 0; i < c; i++) {
            d = q.front();
            q.pop();
            if (d-1 >= 0 && arr[d-1] == 0) {
                arr[d-1] = e;
                q.push(d-1);
            }
            if (d+1 <= 100000 && arr[d+1] == 0) {
                arr[d+1] = e;
                q.push(d+1);
            }
            if (2 * d <= 100000 && arr[2 * d] == 0) {
                arr[2 * d] = e;
                q.push(2 * d);
            }
        }
    }
    cout << arr[b];
    return 0;
}