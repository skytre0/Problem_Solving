#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, sum = 0;
    cin >> a >> b;
    char arr1[a][b];
    int arr2[a][b] = {0};
    vector<pair<int, int>> v;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < b; j++) {
            cin >> arr1[i][j];
            if (arr1[i][j] == 'I') {
                v.push_back(make_pair(i, j));
                arr2[i][j] = 1;
            }
        }
    }
    pair<int, int> pa[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    pair<int, int> p;

    while (v.size() != 0) {
        p = v.back();
        v.pop_back();
        for (size_t i = 0; i < 4; i++) {
            if (p.first + pa[i].first < 0 || p.second + pa[i].second < 0)
                continue;
            if (p.first + pa[i].first >= a || p.second + pa[i].second >= b)
                continue;
            if (arr1[p.first + pa[i].first][p.second + pa[i].second] == 'X' || arr2[p.first + pa[i].first][p.second + pa[i].second] == 1)
                continue;
            if (arr1[p.first + pa[i].first][p.second + pa[i].second] == 'P')
                sum++;
            v.push_back(make_pair(p.first + pa[i].first, p.second + pa[i].second));
            arr2[p.first + pa[i].first][p.second + pa[i].second] = 1;
        }
    }
    sum > 0 ? cout << sum : cout << "TT";
    return 0;
}