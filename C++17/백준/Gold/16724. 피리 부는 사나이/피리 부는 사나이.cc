#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n;
char arr[1005][1005];
int arr1[1005][1005];

void solve(int x, int y) {
    int cur = x * b + y;
    while (arr1[x][y] == 0) {
        arr1[x][y] = cur;
        if (arr[x][y] == 'U') {
            x--;
        }
        else if (arr[x][y] == 'D') {
            x++;
        }
        else if (arr[x][y] == 'L') {
            y--;
        }
        else if (arr[x][y] == 'R') {
            y++;
        }
    }
    if (arr1[x][y] == cur) 
        n++;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            solve(i, j);
        }
    }
    cout << n;
    return 0;
}
