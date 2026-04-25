#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll a, b, c, d, n, sum = 0;
ll q, r, u, v;

void extendedGCD(ll a, ll b, ll &x, ll &y) {    // 하단 순서 보면 x1, x2를 함수가 끝난 뒤에도 사용해야 하기 때문에 reference로 작성한 것
    if (b == 0) {
        x = 1;
        y = 0;
        return;
    }
    ll x1, y1;
    extendedGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
}

ll modInverse(ll a, ll m) {
    ll x, y;
    extendedGCD(a, m, x, y);
    return (x % m + m) % m;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    while (n--) {
        cin >> b >> a;
        c = __gcd(a, b);
        a /= c;
        b /= c;
        d = modInverse(b, 1000000007);
        sum = (sum + (a * d) % 1000000007) % 1000000007;
    }
    cout << sum;
    return 0;
}