#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> v(1000);
int vv[1000] = {0};

void solve(int i) {
    vv[i] = 1;
    for (size_t j = 0; j < v[i].size(); j++) {
        if (vv[v[i][j]] != 1) {
            solve(v[i][j]);
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, p, q, n = 0;
    cin >> a >> b;
    for (size_t i = 0; i < b; i++) {
        cin >> p >> q;
        v[p-1].push_back(q-1);
        v[q-1].push_back(p-1);
    }
    for (size_t i = 0; i < a; i++) {
        if (vv[i] == 0) {
            solve(i);
            n++;
        }
    }
    cout << n;
    return 0;
}