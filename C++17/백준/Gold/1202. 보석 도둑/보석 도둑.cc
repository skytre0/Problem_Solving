#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c, m, n, sum = 0;
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pqp;
priority_queue<ll, vector<ll>, greater<ll>> pq;
priority_queue<ll, vector<ll>, less<ll>> s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> m >> n;
    for (ll i = 0; i < m; i++) {
        cin >> a >> b;
        pqp.push({a, b});
    }
    // 무게, 가치 오름차순 배치, 가방 용적 기준으로 넣을 수 있는 보석 늘려가며 우선순위 결정
    for (ll i = 0; i < n; i++) {
        cin >> a;
        pq.push(a);
    }
    while (!pq.empty()) {
        a = pq.top();
        pq.pop();
        while (!pqp.empty() && pqp.top().first <= a) {
            s.push(pqp.top().second);
            pqp.pop();
        }
        if (!s.empty()) {
            sum += s.top();
            s.pop();
        }
    }
    cout << sum;
    return 0;
}
