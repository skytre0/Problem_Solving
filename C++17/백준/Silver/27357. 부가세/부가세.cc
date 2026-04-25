#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, n = 0, M, m;        // 소숫점 이하 등장하는 모든 곳 소수점 조정 필수
double c, sum, tmp;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum = 0, m = 10000, M = 0;
        for (int j = 0; j < a; j++) {
            cin >> c;
            sum = ((sum * 100) + (c * 100)) / 100;
        }
        for (ll j = 0; j <= 10000; j++) {
            c = (sum * j) / 100;
            if (floor(sum + (floor(c*100)/100)) == b || floor(sum + (ceil(c*100)/100)) == b) {
                m = min(m, j);
                M = max(M, j);
            }
            else if (floor(sum + (floor(c*100)/100)) > b+1)
                break;
        }
        cout << m << " " << M << "\n";
    }
    return 0;
}
