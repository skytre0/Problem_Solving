#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    queue<int> q;
    int arr[501] = {0};
    int arr1[501] = {0};
    int a, b, c, d;
    cin >> a >> arr1[0];
    d = arr1[0];
    for (size_t i = 2; i <= a; i++) {
        for (size_t j = 0; j < i; j++) {
            cin >> arr[j];
            if (j > 0)
                q.push(arr1[j-1]);
        }   
        for (size_t j = 0; j < i-1; j++) {
            c = q.front();
            q.pop();
            if (i < a) {
                arr1[j] = max(arr1[j], c + arr[j]);
                arr1[j+1] = max(arr1[j+1], c + arr[j+1]);
            }
            else {
                d = max(d, max(c + arr[j], c + arr[j+1]));
            }
        }
    }
    cout << d;
    return 0;
}