#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#define ll long long

using namespace std;

int n, a;
vector<int> v;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    for (int i = 3; i <= n; i++) {
        v.push_back(v[i-1] + v[i-2]);
        v[i] %= 15746;
    }
    cout << v[n];
    return 0;
}