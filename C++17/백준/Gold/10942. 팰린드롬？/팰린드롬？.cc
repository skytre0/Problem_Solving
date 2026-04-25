#include <bits/stdc++.h>
#define ll long long

using namespace std;

int length, n, from, to;
int arr[2005][2005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> length;
    for (int i = 1; i <= length; i++) {
        cin >> arr[i][0];
    }
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= length - i + 1; j++) {
            if (arr[j][0] == arr[j+i-1][0])
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
            if (i > 2)
                arr[i][j] = arr[i][j] * arr[i-2][j+1];
        }
    }
    cin >> n;
    while (n--) {
        cin >> from >> to;
        cout << arr[to - from + 1][from] << "\n";
    }
    return 0;
}