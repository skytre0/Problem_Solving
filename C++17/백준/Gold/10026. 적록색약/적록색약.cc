#include <iostream>

using namespace std;

char arr[100][100] = {0};

pair<int, int> solve(pair<int, int> p, int a, char c, int d) {
    int x = p.first;
    int y = p.second;
    if (x-1 >= 0 && x-1 < a && y >= 0 && y < a && arr[x-1][y] == c) {
        if (d == 1 && (c == 'A' || c == 'C'))
            arr[x][y] = '0';
        else
            c == 'B' ? arr[x][y]-- : arr[x][y] = 'C';
        solve({x-1, y}, a, c, d);
    }
    if (x >= 0 && x < a && y-1 >= 0 && y-1 < a && arr[x][y-1] == c) {
        if (d == 1 && (c == 'A' || c == 'C'))
            arr[x][y] = '0';
        else
            c == 'B' ? arr[x][y]-- : arr[x][y] = 'C';
        solve({x, y-1}, a, c, d);
    }
    if (x+1 >= 0 && x+1 < a && y >= 0 && y < a && arr[x+1][y] == c) {
        if (d == 1 && (c == 'A' || c == 'C'))
            arr[x][y] = '0';
        else
            c == 'B' ? arr[x][y]-- : arr[x][y] = 'C';
        solve({x+1, y}, a, c, d);
    }
    if (x >= 0 && x < a && y+1 >= 0 && y+1 < a && arr[x][y+1] == c) {
        if (d == 1 && (c == 'A' || c == 'C'))
            arr[x][y] = '0';
        else
            c == 'B' ? arr[x][y]-- : arr[x][y] = 'C';
        solve({x, y+1}, a, c, d);
    }
    if (d == 0 && (c == 'R' || c == 'G' || c == 'B'))
        c == 'B' ? arr[x][y] = 'A' : arr[x][y] = 'C';
    else if (d == 1 && (c == 'A' || c == 'C'))
        arr[x][y] = '0';
    return {0, 0};
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    size_t a, b, d = 0, r;
    string s;
    char x, y;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> s;
        for (size_t j = 0; j < a; j++) {
            arr[i][j] = s[j];
        }
    }
    r = 0;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < a; j++) {
            if (arr[i][j] == 'R') {
                r++;
                solve({i, j}, a, 'R', d);
            }
            else if (arr[i][j] == 'G') {
                r++;
                solve({i, j}, a, 'G', d);
            }
            else if (arr[i][j] == 'B') {
                r++;
                solve({i, j}, a, 'B', d);
            }
        }
    }
    cout << r << " ";
    r = 0;
    d = 1;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < a; j++) {
            if (arr[i][j] == 'A') {
                r++;
                solve({i, j}, a, 'A', d);
            }
            else if (arr[i][j] == 'C') {
                r++;
                solve({i, j}, a, 'C', d);
            }
        }
    }
    cout << r;
    return 0;
}