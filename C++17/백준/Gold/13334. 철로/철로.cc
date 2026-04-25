#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n, cnt = 0, len;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
priority_queue<int, vector<int>, greater<int>> sc;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a < b)
            pq.push({b, a});        // 끝나는 시간을 앞 -> 빨리 끝나는 것들이 top에 가까움.
        else
            pq.push({a, b});
    }
    cin >> len;
    while (!pq.empty()) {
        if (pq.top().first - pq.top().second <= len) {    // len 이하 길이 충족
            if (sc.empty()) {            // 비어 있으면 무조건 base case
                sc.push(pq.top().second);
                pq.pop();
            }
            else if (pq.top().first - sc.top() <= len) {    // 현재 end 위치 기점 추가 가능
                sc.push(pq.top().second);
                pq.pop();
            }
            else {        // pop하는 것으로 end 위치 뒤로 보내기 가능
                sc.pop();
            }
        }
        else    // len 범위 이상 떨어져서 감안할 필요도 없음.
            pq.pop();
        cnt = max(cnt, (int)sc.size());
    }
    cout << cnt;
    return 0;
}