#include <iostream>

using namespace std;

int arr[17][17] = {};
int a, b, x, y, check = 0;

void solve(int x, int y) {
    if (x == y && x == a) {
        check++;
    }
    else if (b == 1) {
        if (y+1 <= a && arr[x][y+1] != 1) {
            b = 1;
            solve(x, y+1);
        }
        if (x+1 <= a && y+1 <= a && arr[x][y+1] == 0 && arr[x+1][y] == 0 && arr[x+1][y+1] == 0) {
            b = 2;
            solve(x+1, y+1);
        }
    }
    else if (b == 2) {
        if (y+1 <= a && arr[x][y+1] != 1) {
            b = 1;
            solve(x, y+1);
        }
        if (x+1 <= a && y+1 <= a && arr[x][y+1] == 0 && arr[x+1][y] == 0 && arr[x+1][y+1] == 0) {
            b = 2;
            solve(x+1, y+1);
        }
        if (x+1 <= a && arr[x+1][y] != 1) {
            b = 3;
            solve(x+1, y);
        }
    }
    else if (b == 3) {
        if (x+1 <= a && y+1 <= a && arr[x][y+1] == 0 && arr[x+1][y] == 0 && arr[x+1][y+1] == 0) {
            b = 2;
            solve(x+1, y+1);
        }
        if (x+1 <= a && arr[x+1][y] != 1) {
            b = 3;
            solve(x+1, y);
        }
    }
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (size_t i = 1; i <= a; i++) {
        for (size_t j = 1; j <= a; j++) {
            cin >> arr[i][j];
        }
    }
    b = 1;
    solve(1, 2);
    cout << check;
    return 0;
}