#include <vector>
#include <iostream>

using namespace std;

int arr[101][14] = {0};
int a, b, c, sum = 0, final = 0;
vector<pair<int, int>> one;
vector<pair<int, int>> two;

void solve() {
    sum = 0;
    for (size_t i = 1; i <= one.size(); i++) {
        c = 2 * a;
        for (size_t j = 1; j <= b; j++) {
            c = min(c, arr[i][arr[0][j]]);
        }
        sum += c;
    }
    if (final == 0)
        final = sum;
    else
        final = min(final, sum);
    return;
}

void com() {
    int x = 1;
    int y = two.size();
    while (y - b + 1 >= arr[0][1]) {
        solve();
        for (size_t i = 0; i < b; i++) {
            arr[0][b-i]++;
            if (arr[0][b-i] <= y-i) {
                for (size_t j = b-i+1; j <= y; j++)
                    arr[0][j] = arr[0][j-1] + 1;
                break;
            }
            if (arr[0][1] > y-i)
                break;
        }
    }
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (size_t i = 1; i <= a; i++) {
        for (size_t j = 1; j <= a; j++) {
            cin >> c;
            if (c == 1) {
                one.push_back({i, j});
            }
            else if (c == 2) {
                two.push_back({i, j});
            }
        }
    }
    for (size_t i = 0; i < two.size(); i++) {
        arr[0][i+1] = i+1;
        for (size_t j = 0; j < one.size(); j++) {
            arr[j+1][i+1] = abs(two[i].first - one[j].first) + abs(two[i].second - one[j].second);
        }
    }
    com();
    cout << final;
    return 0;
}