#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n, p, q;
vector<pair<int, int>> v[1000005];
vector<int> ans;

void solve(int a, int i) {
    p = 1;
    q = n;
    while (p <= q) {
        if (v[(p+q)/2][v[(p+q)/2].size() - 1].first >= a && v[(p+q)/2 - 1][v[(p+q)/2 - 1].size() - 1].first < a) {
            v[(p+q)/2].push_back({a, i});
            break;
        }
        else {
            if (v[(p+q)/2][v[(p+q)/2].size() - 1].first > a)
                q = (p+q)/2 - 1;
            else
                p = (p+q)/2 + 1;
        }
    }
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> b;
    n = 0;  // LIS 길이
    v[0].push_back({-1000000005, 0});   // solve 사용 위한 초기값 설정
    // v에 {값, 나온 순서} 저장 (v[x]가 LIS의 최적의 위치)
    for (int i = 1; i <= b; i++) {
        cin >> a;
        if (v[n][v[n].size() - 1].first < a) 
            v[++n].push_back({a, i});
        else 
            solve(a, i);
    }
    cout << n << "\n";
    a = b + 1;
    // to_string은 시간이 오래 걸려서 vector 안에 넣고 반대 방향 읽으며 출력
    for (int i = n; i > 0; i--) {
        for (int j = v[i].size() - 1; j > -1; j--) {
            if (v[i][j].second < a) {
                a = v[i][j].second;     // LIS 기준 본인보다 큰 숫자보다 나온 순서가 앞인 숫자 고르기
                ans.push_back(v[i][j].first);
                break;
            }
        }
    }
    for (int i = ans.size() - 1; i > -1; i--)
        cout << ans[i] << " ";
    return 0;
}

// 추가로 그냥 arr 3개로 1개는 입력 받음, 1개는 LIS 만들기(12015), 1개는 LIS에서의 위치 기록
// 이걸로 마지막 arr 최종 길이-- 하면서 역방향 처음 등장하는 거 추려내면 됨