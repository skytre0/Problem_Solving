#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long

using namespace std;

ll n;
vector<pair<ll, ll>> v;

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    cin >> n;
    v.push_back({0, 0});
    v.push_back({0, 1});
    for (int i = 2; i <= n; i++) {
        v.push_back({v[i-1].first + v[i-1].second, v[i-1].first});
    }
    cout << v[n].first + v[n].second;
    return 0;
}