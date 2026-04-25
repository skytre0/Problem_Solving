#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll x, y, x2, y2, n, m;
pair<ll, ll> arr[4];

ll solve(pair <ll, ll> a, pair <ll, ll> b , pair <ll, ll> c, pair<ll, ll> d) {
    ll ans1 = ((b.first - a.first) * (c.second - a.second)) - ((c.first - a.first) * (b.second - a.second));
    ll ans2 = ((b.first - a.first) * (d.second - a.second)) - ((d.first - a.first) * (b.second - a.second));
    if (ans1 > 0)
        ans1 = 1;
    else if (ans1 < 0)
        ans1 = -1;
    if (ans2 > 0)
        ans2 = 1;
    else if (ans2 < 0)
        ans2 = -1;
    return ans1 * ans2;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 4; i++) {
        cin >> x >> y;
        arr[i] = {y, x};
    }
    sort(arr, arr + 2);
    sort(arr + 2, arr + 4);
    arr[0].first < arr[2].first ? y = arr[2].first : y = arr[0].first;
    arr[1].first < arr[3].first ? y2 = arr[1].first : y2 = arr[3].first;

    for (int i = 0; i < 4; i++) {
        m = arr[i].first;
        n = arr[i].second;
        arr[i] = {n, m};
    }
    sort(arr, arr + 2);
    sort(arr + 2, arr + 4);
    arr[0].first < arr[2].first ? x = arr[2].first : x = arr[0].first;
    arr[1].first < arr[3].first ? x2 = arr[1].first : x2 = arr[3].first;

    if (x > x2 || y > y2) {
        cout << "0";
        return 0;
    }

    // 벡터 + 행렬 이용 : CCW, 2개 사용 이유 1개 선분 끝점이 다른 선분 연장 직선상에 있지만 기울기 평행 아닌 경우 등.
    m = solve(arr[0], arr[1], arr[2], arr[3]);
    n = solve(arr[2], arr[3], arr[0], arr[1]);
    if (m <= 0 && n <= 0)
        cout << "1";
    else
        cout << "0";

    return 0;
}