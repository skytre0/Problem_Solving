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

int n, a, b, m;
vector<int> v;




int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n >> m;
    v = vector<int> (100001, 0);
    for (int i = 0; i < n; i++) {
        cin >> a;
        v[a] = 1;
    }
    for (int i = 2; i <= m; i++) {
        for (int j = 1; j <= (i+j)/2; j++) {
            if (!v[j])      continue;
            if (!v[i-j])    continue;
            v[i] == 0 ? v[i] = v[j] + v[i-j] : v[i] = min(v[i], v[j] + v[i-j]);
        }
    }
    cout << (v[m] == 0 ? -1 : v[m]);
    return 0;
}