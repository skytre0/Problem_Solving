#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d, st, sum, M = 0;
int arr[2];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    cin >> arr[0] >> arr[1];
    c = 0;
    for (int i = 0; i < b; i++) {
        cin >> d;
        if (arr[c] <= d)
            c = (c + 1) % 2;
    }
    cout << arr[c];

    return 0;
}
