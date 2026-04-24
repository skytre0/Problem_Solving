#include <bits/stdc++.h>

using namespace std;

int check[27];
string arr[20];
int M = 1;
int a, b;

int solve(pair<int, int> x) {
    if (x.first >= 0 && x.first < a && x.second >= 0 && x.second + 1 < b && check[arr[x.first][x.second + 1] - 'A'] == 0) {
        check[arr[x.first][x.second + 1] - 'A'] = 1;
        check[26]++;
        solve({x.first, x.second + 1});
        check[arr[x.first][x.second + 1] - 'A'] = 0;
        check[26]--;
    }
    if (x.first >= 0 && x.first + 1 < a && x.second >= 0 && x.second < b && check[arr[x.first + 1][x.second] - 'A'] == 0) {
        check[arr[x.first + 1][x.second] - 'A'] = 1;
        check[26]++;
        solve({x.first + 1, x.second});
        check[arr[x.first + 1][x.second] - 'A'] = 0;
        check[26]--;
    }
    if (x.first >= 0 && x.first < a && x.second - 1 >= 0 && x.second < b && check[arr[x.first][x.second - 1] - 'A'] == 0) {
        check[arr[x.first][x.second - 1] - 'A'] = 1;
        check[26]++;
        solve({x.first, x.second - 1});
        check[arr[x.first][x.second - 1] - 'A'] = 0;
        check[26]--;
    }
    if (x.first - 1 >= 0 && x.first < a && x.second >= 0 && x.second < b && check[arr[x.first - 1][x.second] - 'A'] == 0) {
        check[arr[x.first - 1][x.second] - 'A'] = 1;
        check[26]++;
        solve({x.first - 1, x.second});
        check[arr[x.first - 1][x.second] - 'A'] = 0;
        check[26]--;
    }
    if (check[26] > M)
        M = check[26];
    return M;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        cin >> arr[i];
    }
    check[26] = 1;
    check[arr[0][0] - 'A'] = 1;
    cout << solve({0, 0});
    return 0;
}