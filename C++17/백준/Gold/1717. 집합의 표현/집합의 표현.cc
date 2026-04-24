#include <iostream>
#include <vector>
#include <queue>
#include <stack>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#define ll long long

using namespace std;

int n, m, a, b, op;
vector<int> v;

int find(int x) {
    return (x == v[x] ? x : v[x] = find(v[x]));
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n >> m;
    v = vector<int>(n+1, 0);
    for (int i = 1; i < n+1; i++) {
        v[i] = i;
    }
    for (int i = 0; i < m; i++) {
        cin >> op >> a >> b;
        if (op) {
            cout << (find(a) == find(b) ? "YES" : "NO") << "\n";
        }
        else {
            int pa = find(a);
            int pb = find(b);
            if (pa != pb)   pa < pb ? v[pb] = pa : v[pa] = pb;
        }
    }
    return 0;
}