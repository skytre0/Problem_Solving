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
    cin >> n;
    v = vector<int> (n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        ans[i] = v[i];
        for (int j = 0; j < i; j++) {
            if (v[j] < v[i])
                ans[i] = max(ans[i], v[i] + ans[j]);
        }
    }
    cout << *max_element(ans.begin(), ans.end());
    return 0;
}