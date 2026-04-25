#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, n = 0;
int arr[1005][1005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
            arr[i][j] += (c * i);
        }
    }
    for (int i = 0; i < a; i++)
        sort(arr[i], arr[i] + b);
    for (int j = 0; j < b; j++) {
        for (int i = 1; i < a; i++) {
            if (arr[i][j] <= arr[i-1][j]) {
                n = 1;
                break;
            }
        }
        if (n == 1)
            break;
    }
    n == 1 ? cout << "NO" : cout << "YES";
    return 0;
}
