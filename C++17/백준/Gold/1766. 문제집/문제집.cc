#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, m, n;
int arr[32005];
vector<int> v[32005];
priority_queue<int, vector<int>, greater<int>> pq;

void solve() {
    int x, y;
    while (!pq.empty()) {
        x = pq.top();
        pq.pop();
        cout << x << " ";
        for (int i = 0; i < v[x].size(); i++) {
            if (--arr[v[x][i]] == 0)
                pq.push(v[x][i]);
        }

    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    // 앞의 수 존재 확인 이용 순서 추상적 확인 및 접근 시작 가능
    for (int i = 0; i < b; i++) {
        cin >> m >> n;
        v[m].push_back(n);
        arr[n]++;
    }
    for (int i = 1; i <= a; i++) {
        if (arr[i] == 0)
            pq.push(i);
    }
    solve();
    return 0;
}
