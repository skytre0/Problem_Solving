#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long

using namespace std;

ll n;

void solve(int x, int y, int len) {
    int divisor = len / 3;
    int sec = (x / divisor) * 3 + (y / divisor);
    switch (sec) {
        case 4:;
            cout << " ";
            break;
        default:;
            if (divisor == 1)   cout << "*";
            else solve(x - (sec / 3 * divisor), y - (sec % 3 * divisor), divisor);
            break;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            solve(i, j, n);
        }
        cout << "\n";
    }
    return 0;
}