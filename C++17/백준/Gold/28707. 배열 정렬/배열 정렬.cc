#include <bits/stdc++.h>
#define ll long long

using namespace std;

// map : 각 숫자가 어떤 node에 있는지 확인 위해 같은 느낌 -> m.find() 없으면 m.end() 뜨고, min 사용하면 기본값 0이 되기 때문에 먼저 find 써야 함.
// 순행  + map(vector, int), pq(int, vector) -> 이걸로 다익스트라 느낌 -> 뜨면 끝, 아니면 없음.

int a, b, c, d, e;
vector<int> v;      // 초기 형태, pq.top() 저장용
vector<int> tmp;    // 변형 형태 저장용
vector<int> vv;
vector<pair<int, int>> ver[9];  // vertex 저장용
map<vector<int>, int> m;    // visited & min() 값 저장용
priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq; // 다익스트라용

void solve() {
    while (!pq.empty()) {
        c = pq.top().first;
        v = pq.top().second;
        pq.pop();
        for (int i = 1; i < a; i++) {
            for (int j = 0; j < ver[i].size(); j++) {   // ver[i][j].first = 연결된 node, ver[i][j].second = cost
                tmp = v;
                tmp[i] = v[ver[i][j].first];    // 연결된 node끼리 switch
                tmp[ver[i][j].first] = v[i];
                if (m.find(tmp) == m.end()) {    // 최신화
                    m.insert({tmp, c + ver[i][j].second});
                    pq.push({c + ver[i][j].second, tmp});
                }
                else {  // 대소 비교 후 최신화
                    if (m[tmp] > c + ver[i][j].second) {
                        m[tmp] = c + ver[i][j].second;
                        pq.push({c + ver[i][j].second, tmp});
                    }
                }
            }
        }
    }

    if (m.find(vv) == m.end())
        cout << -1;
    else
        cout << m[vv];
}



int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    v.push_back(0);
    for (int i = 0; i < a; i++) {
        cin >> b;
        v.push_back(b);
    }
    cin >> b;
    for (int i = 0; i < b; i++) {
        cin >> c >> d >> e;
        ver[c].push_back({d, e});
        ver[d].push_back({c, e});
    }
    pq.push({0, v});
    m.insert({v, 0});
    sort(v.begin(), v.end());         // 마지막에 확인 위해 sort하고 저장
    vv = v;
    solve();
    return 0;
}
