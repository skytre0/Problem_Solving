#include <iostream>
#include <vector>
#include <queue>
#include <stack>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#include <tuple>
#include <iomanip>
#define ll long long

using namespace std;

int n, a, b, m;
double f1, f2, total_dist = 0, pos = 0;
int cnt = 0; 
vector<pair<double, double>> v;
vector<double> visited;

double get_dist(int ith, int jth) {
    return sqrt(pow(abs(v[ith].first - v[jth].first), 2) + pow(abs(v[ith].second - v[jth].second), 2));
}

double solve(int ith) {
    visited[ith] = -1;
    cnt++;
    int minpos = -1;
    for (int i = 0; i < n; i++) {
        if (visited[i] == -1) continue;
        visited[i] = get_dist(ith, i);
        if (minpos < 0 || visited[i] < visited[minpos])    minpos = i;
    }
    while (cnt < n) {
        total_dist += visited[minpos];
        visited[minpos] = -1;
        pos = minpos;
        minpos = -1;
        cnt++;

        for (int i = 0; i < n; i++) {
            if (visited[i] == -1) continue;
            visited[i] = min(get_dist(pos, i), visited[i]);
            if (minpos < 0 || visited[i] < visited[minpos])    minpos = i;
        }
    }
    return total_dist;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f1 >> f2;
        v.push_back({(f1), (f2)});
    }
    visited = vector<double>(n, 0);
    // pq = {dist, v's ith pos}
    cout << fixed << setprecision(2) << solve(0);
    return 0;
}