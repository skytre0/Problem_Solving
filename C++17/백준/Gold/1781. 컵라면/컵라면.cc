#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct cmp {
    bool operator() (pair<int, int> a, pair<int, int> b) {        // pq가 max heap이라 반대로 적어야 pq에서는 됨, sort는 생각하는 거가 맞고.
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};

int a, b, n, cnt = 0;
priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;    // deadline 짧은 거 중에 가장 큰 대가 얻는 것 pq 정렬 기준이 됨.
priority_queue<int, vector<int>, greater<int>> st;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        pq.push({a, b});
    }
    n = 1;
    while (!pq.empty()) {
        if (pq.top().first < n) {        // deadline 지난 대상
            while (!pq.empty() && pq.top().first < n)
                pq.pop();
        }
        else if (pq.top().first == n) {
            st.push(pq.top().second);
            pq.pop();
            while (!pq.empty() && pq.top().first == n) {    // while하는 이유 deadline 짧아서 먼저 한 것들보다 시간 넉넉하면서 보상 더 많이 줄 수 있음 = 대체하는 것이 좋음
                if (pq.top().second > st.top()) {
                    st.pop();
                    st.push(pq.top().second);
                }
                pq.pop();
            }
            n++;
        }
        else {
            st.push(pq.top().second);        // 시간 넉넉하면서 보상 많은 것 여럿 존재 가능해서 바로 계산 아니라 st에 넣음
            pq.pop();
            n++;
        }
    }
    while (!st.empty()) {
        cnt += st.top();
        st.pop();
    }
    cout << cnt;
    return 0;
}