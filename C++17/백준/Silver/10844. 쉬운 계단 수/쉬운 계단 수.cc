#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    int n, sum = 0;
    vector<vector<int>> v(101, vector<int>(11, 0));
    cin >> n;
    for (int i = 1; i < 10; i++) {
        v[1][i] = 1;
    }
    for (int i = 2; i < n+1; i++) {
        v[i][0] = v[i-1][1]; 
        for (int j = 1; j < 9; j++) {
            v[i][j] = (v[i-1][j-1] + v[i-1][j+1]) % 1000000000;
        }
        v[i][9] = v[i-1][8];
    }
    for (int i = 0; i < 10; i++) {
        sum += v[n][i];
        sum %= 1000000000;
    }
    cout << sum;
    return 0;
}