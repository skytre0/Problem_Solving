#include <iostream>

using namespace std;

int main() {
    int a, b;
    char arr[50][50];
    int row = 0;
    int col = 0;
    int check = 0;

    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            if (arr[i][j] != '.') {
                check = 0;
                break;
            }
            else
                check += 1;
        }
        if (check != 0) {
            row += 1;
            check = 0;
        }
    }

    for (size_t j = 0; j < b; j++) {
        for (size_t i = 0; i < a; i++) {
            if (arr[i][j] != '.') {
                check = 0;
                break;
            }
            else
                check += 1;
        }
        if (check != 0) {
            col += 1;
            check = 0;
        }
    }

    cout << max(row, col);
    return 0;
}