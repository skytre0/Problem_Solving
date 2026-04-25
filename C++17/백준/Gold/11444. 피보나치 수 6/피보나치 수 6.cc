#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n;
vector<ll> v[2] = {{1, 0}, {0, 1}};
vector<ll> ans[2] = {{0, 1}, {1, 1}};

void solve(ll n) {
    while (n > 0) {
        vector<ll> cal[2] = {{0, 0}, {0, 0}};
        vector<ll> adder[2] = {{0, 0}, {0, 0}};
        if (n % 2 == 1) {
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    for (int k = 0; k < 2; k++) {
                        cal[i][j] += (v[i][k] * ans[k][j]) % 1000000007;
                    }
                    cal[i][j] %= 1000000007;
                }
            }
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    v[i][j] = cal[i][j];
                }
            }
        }
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    adder[i][j] += (ans[i][k] * ans[k][j]) % 1000000007;
                }
                adder[i][j] %= 1000000007;
            }
        }
        n /= 2;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                ans[i][j] = adder[i][j];
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    solve(n);
    cout << v[0][1];
    return 0;
}