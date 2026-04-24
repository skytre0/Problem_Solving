#include <iostream>

using namespace std;

int arr[129][129];
int x = 0, y = 0;

int solve(int a, int b, int c) {
    int check = arr[a][b];
    int count = 0;
    for (size_t i = a; i < a + c; i++) {
        for (size_t j = b; j < b + c; j++) {
            if (arr[i][j] != check) {
                count = 1;
                break;
            }
        }
        if (count == 1)
            break;
    }
    if (count == 1) {
        solve(a, b, c/2);
        solve(a + c/2, b, c/2);
        solve(a, b + c/2, c/2);
        solve(a + c/2, b + c/2, c/2);
    }
    else {
        if (check == 1) {
            x += 1;
        }
        else
            y += 1;
    }
    return 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < a; j++) {
            cin >> arr[i][j];
        }
    }
    solve(0, 0, a);
    cout << y << "\n" << x;
    return 0;
}