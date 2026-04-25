#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n = 0;
char c;
vector<pair<int, int>> v;       // 비용, 고객 수

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    n = 0;
    for (int i = 0; i < 6; i++) {
        cin >> c;
        if (c == 'W')   n++;
    }
    n > 4 ? cout << 1 : n > 2 ? cout << 2 : n > 0 ? cout << 3 : cout << -1;
    return 0;
}