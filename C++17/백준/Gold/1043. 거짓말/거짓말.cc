#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[51][51] = {};
    queue<int> q;
    queue<int> q2;
    int a, b, c, d;
    cin >> a >> b >> c;
    for (size_t i = 0; i < c; i++) {
        cin >> d;
        arr[0][d] = 1;
        q.push(d);
    }
    for (size_t i = 1; i <= b; i++) {
        cin >> d;
        while (d--) {
            cin >> c;
            arr[i][c] = 1;
        }
    }
    while (!q.empty()) {
        c = q.front();
        q.pop();
        for (size_t i = 1; i <= b; i++) {
            if (arr[i][c] == 1 && arr[i][0] == 0) {
                q2.push(i);
                arr[i][0] = 1;
            }
        }
        while (!q2.empty()) {
            c = q2.size();
            for (size_t i = 0; i < c; i++) {
                d = q2.front();
                q2.pop();
                for (size_t j = 1; j <= a; j++) {
                    if (arr[d][j] == 1 && arr[0][j] == 0) {
                        q.push(j);
                        arr[0][j] = 1;
                    }
                }
            }
        }
    }
    for (size_t i = 1; i <= b; i++) {
        if (arr[i][0] == 0) {
            arr[0][0]++;
        }
    }
    cout << arr[0][0];
    return 0;
}