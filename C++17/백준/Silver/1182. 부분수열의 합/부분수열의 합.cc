#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#define ll long long

using namespace std;

int a, b, c;
vector<int> v;

int solve(int cur, int sum) {
    int ans = 0;
    if (sum == b)    ans++;
    for (int i = cur; i < a; i++) {
        ans += solve(i+1, sum + v[i]);
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> c;
        v.push_back(c);
    }
    cout << (b == 0 ? solve(0, 0) - 1 : solve(0, 0));
    return 0;
}