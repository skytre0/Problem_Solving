#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c, sum = 0;
int arr[105][105];
vector<ll> v[105];
vector<ll> ans[105];

void solve(ll n) {
    vector<ll> cal[105];
    vector<ll> adder[105];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cal[i].push_back(0);
            adder[i].push_back(0);
        }
    }
    while (n > 0) {
        if (n % 2 == 1) {
            for (int i = 0; i < a; i++) {
                for (int j = 0; j < a; j++) {
                    cal[i][j] = 0;
                    for (int k = 0; k < a; k++) {
                        cal[i][j] += (v[i][k] * ans[k][j]) % 1000000007;
                    }
                    cal[i][j] %= 1000000007;
                }
            }
            for (int i = 0; i < a; i++) {
                for (int j = 0; j < a; j++) {
                    v[i][j] = cal[i][j];
                }
            }
        }

        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                adder[i][j] = 0;
                for (int k = 0; k < a; k++) {
                    adder[i][j] += (ans[i][k] * ans[k][j]) % 1000000007;
                }
                adder[i][j] %= 1000000007;
            }
        }
        n /= 2;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                ans[i][j] = adder[i][j];
            }
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) 
            sum = (sum + v[i][j]) % 1000000007;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cin >> c;
            ans[i].push_back(c);
            if (i == j)
                v[i].push_back(1);
            else
                v[i].push_back(0);
        }
    }
    solve(b);
    cout << sum;
    return 0;
}