#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[101] = {0};
    queue<int> q;
    int a, b, c, d, e = 0;
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        cin >> c >> d;
        arr[c] = d;
    }
    for (size_t i = 0; i < b; i++) {
        cin >> c >> d;
        arr[c] = d;
    }
    q.push(1);
    while (1) {
        c = q.size();
        for (size_t i = 0; i < c; i++) {
            d = q.front();
            q.pop();
            for (size_t j = 1; j <= 6; j++) {
                if (d+j == 100) {
                    arr[d+j] = arr[d] - 1;
                    e = 1;
                    break;
                }
                if (d+j < 100 && arr[d+j] > 1 && arr[arr[d+j]] == 0) {
                    arr[arr[d+j]] = arr[d] - 1;
                    q.push(arr[d+j]);
                }
                else if (d+j < 100 && arr[d+j] == 0) {
                    arr[d+j] = arr[d] - 1;
                    q.push(d+j);
                }
            }
            if (e == 1)
                break;
        }
        if (e == 1)
            break;
    }
    cout << arr[100] * -1;
    return 0;
}