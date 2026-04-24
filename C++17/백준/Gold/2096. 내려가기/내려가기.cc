#include <iostream>

using namespace std;

int v[3][100005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a, b, c, d;
    long long arr[3];
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> v[0][i] >> v[1][i] >> v[2][i];
    }
    arr[0] = v[0][0];
    arr[1] = v[1][0];
    arr[2] = v[2][0];
    for (size_t i = 1; i < a; i++) {
        b = arr[0];
        c = arr[1];
        d = arr[2];
        arr[0] = v[0][i] + max(b, c);
        arr[1] = v[1][i] + max(b, max(c, d));
        arr[2] = v[2][i] + max(c, d);
        
        v[0][i] = v[0][i] + min(v[0][i-1], v[1][i-1]);
        v[1][i] = v[1][i] + min(v[2][i-1], min(v[0][i-1], v[1][i-1]));
        v[2][i] = v[2][i] + min(v[2][i-1], v[1][i-1]);
    }
    cout << max(arr[0], max(arr[1], arr[2])) << " " << min(v[2][a-1], min(v[0][a-1], v[1][a-1]));
    return 0;
}