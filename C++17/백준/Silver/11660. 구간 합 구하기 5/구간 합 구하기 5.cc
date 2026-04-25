#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.tie(0);
    vector<vector<long long>> v(1030);
    long long a, b, c, x1, y1, x2, y2;
    cin >> a >> b;
    v[0].push_back(0);
    for (size_t i = 1; i <= a; i++) {
        v[i].push_back(0);
        for (size_t j = 1; j <= a; j++) {
            if (i == 1)
                v[0].push_back(0);
            cin >> c;
            v[i].push_back(c + v[i][j-1] + v[i-1][j] - v[i-1][j-1]);
        }
    }
    for (size_t i = 1; i <= b; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << v[x2][y2] - v[x1-1][y2] - v[x2][y1-1] + v[x1-1][y1-1]  << "\n";
    }
    return 0;
}