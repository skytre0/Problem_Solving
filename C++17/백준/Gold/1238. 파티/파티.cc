#include <bits/stdc++.h>
#define ll long long

using namespace std;

// 이 문제 플로이드-와샬 가능 : for 문 3중으로 10억이긴 하지만, 내부적으로 무거운 연산은 아니라
// 사실상 1줄이라서 비교적 가벼워서 가능 (질문 게시판 상으로 가벼우면 30억 = 1.3초도 가능하다고는 함)
// 그래도 일반적으로는 1초 = 1억이 맞음

ll a, b, c, sum = 0;
ll x, y, z;
ll arr[1005][1005];
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;

void solve(ll st) {
    while (!pq.empty()) {
        ll total = pq.top().first;
        ll cur = pq.top().second;
        pq.pop();
        for (ll i = 1; i <= a; i++) {
            if (arr[st][i] > arr[cur][i] + total) {
                arr[st][i] = arr[cur][i] + total;
                pq.push(make_pair(arr[st][i], i));
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    fill_n(arr[0], 1005 * 1005, 10000000);
    for (ll i = 1; i <= b; i++) {
        cin >> x >> y >> z;
        arr[x][y] = z;
    }
    for (ll i = 1; i <= a; i++) {
        arr[i][i] = 0;
    }
    for (ll i = 1; i <= a; i++) {
        pq.push({arr[c][i], i});
    }
    solve(c);
    for (ll i = 1; i <= a; i++) {
        for (ll j = i - 1; j > 0; j--) {
            x = arr[i][j];
            y = arr[j][i];
            arr[i][j] = y;
            arr[j][i] = x;

        }
    }
    for (ll i = 1; i <= a; i++) {
        pq.push({arr[c][i], i});
    }
    solve(c);
    b = 0;
    for (ll i = 1; i <= a; i++) {
        b = max(b, arr[i][c] + arr[c][i]);
    }
    cout << b;
    return 0;
}