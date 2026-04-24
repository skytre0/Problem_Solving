#include <bits/stdc++.h>
#define ll long long

using namespace std;

int arr[1005][1005];
string a, b, ans;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    a = " " + a;
    b = " " + b;
    int x = a.size() - 1;
    int y = b.size() - 1;
    for (size_t i = 1; i <= x; i++) {
        for (size_t j = 1; j <= y; j++) {
            arr[i][j] = arr[i-1][j];
            if (arr[i][j] < arr[i][j-1])
                arr[i][j] = arr[i][j-1];
            else if (a[i] == b[j])
                arr[i][j] = arr[i-1][j-1] + 1;
        }
    }
    while (arr[x][y] > 0) {
        while (arr[x][y] == arr[x][y-1])
            y--;
        while (arr[x][y] == arr[x-1][y])
            x--;
        ans = b[y] + ans;
        x--;
        y--;        
    }
    ans.size() == 0 ? cout << 0 : cout << ans.size() << "\n" << ans;
    return 0;
}