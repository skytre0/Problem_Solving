#include <iostream>
#include <vector>
#include <queue>
#include <stack>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <tuple>
#define ll long long

using namespace std;

int n, a, b, m;
vector<pair<int, int>> v;
vector<pair<int, int>> tmp(1, {1000, 1000});

int binsearch(int x) {
    int start = 0, end = tmp.size()-1;
    while (end > start) {
        int mid = (start + end) / 2;
        tmp[mid].second > v[x].second ? end = mid : start = mid+1;
    }
    return end;
}

void solve(int x) {
    if (tmp[tmp.size()-1].second < v[x].second)   tmp.push_back(v[x]);
    else    tmp[binsearch(x)] = v[x];
    return;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n;
    v = vector<pair<int, int>>(n, {0, 0});
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        solve(i);
    cout << n - tmp.size();
    return 0;
}