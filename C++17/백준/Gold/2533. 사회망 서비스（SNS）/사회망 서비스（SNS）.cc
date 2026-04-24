#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> v[1000005];
int arr[1000005];
int a, b, c;
int sum = 0;

int cnt(int node) {
    arr[node]++;
    int outer = 0;
    int ifs = 0;
    for (int i = 0; i < v[node].size(); i++) {
        if (arr[v[node][i]] == 0) {
            outer += cnt(v[node][i]);
        }
    }
    // 0 = outmost node = parent should be early adopter
    if (outer == 0) {
        return 1;
    }
    else {
        sum++;
        return 0;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b >> c;
        v[b].emplace_back(c);
        v[c].emplace_back(b);
    }
    cnt(1);
    cout << sum;
}