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

int n, a, m = 0, cnt = 0, M = 0;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < n; i++) {
        m = v[i]; cnt++;
        M = max(M, m * cnt);
    }
    cout << M;
    return 0;
}