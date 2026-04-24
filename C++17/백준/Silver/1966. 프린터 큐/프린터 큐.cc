#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b >> c;
        queue<int> q;
        int m = 0, n;
        int arr[b] = {0};
        for (size_t j = 0; j < b; j++) {
            cin >> arr[j];
            q.push(arr[j]);
        }
        sort(arr, arr + b);
        while (1) {
            if (arr[b - 1] == q.front()) {
                m += 1;
                q.pop();
                b--;
                if (c == 0)
                    break;
                else 
                    c--;
            }
            else {
                n = q.front();
                q.pop();
                q.push(n);
                if (c == 0)
                    c = q.size() - 1;
                else
                    c--;
            }
        }
        cout << m << "\n";
    }
    return 0;
}