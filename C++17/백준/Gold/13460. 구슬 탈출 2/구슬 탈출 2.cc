#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, rs, bs;
char arr[11][11];
queue<pair<pair<int, int>, pair<int, int>>> q;
pair<int, int> rb, bb;
pair<int, int> shift[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
set<pair<pair<int, int>, pair<int, int>>> s;

// 한번 기울이면 끝으로 감 = 가다가 중간에 안 멈춤 = ㅏ 모양 밑에서 위로 다음 오른쪽 안 됨
// 한번에 구멍 가능해도 B도 들어가면, 둘러가더라도 R 혼자 들어가는 결과 출력

void moveball(pair<int, int> rp, pair<int, int> bp, int n) {        // 그냥 n, r좌표 비교 지우고 일단 이동하고 겹치면 더 많이 이동한 거 -1 방법도 있음 = 코드 훨씬 짧음
    int rxs, rys, bxs, bys;
    rxs = rp.first;
    rys = rp.second;
    bxs = bp.first;
    bys = bp.second;
    arr[rxs][rys] = 'R';
    arr[bxs][bys] = 'B';
    while (rs == 0 || bs == 0) {        // n에 따라 r/b 순서 정하고, 각각 # 아니면 move. 쭉 이동하다가 O가 나오면 1 + 끝, 아니면 앞칸 차지 + 기존 칸 . 변경
        if (n == 0) {           // 바로 밑의 공 이동 우선순위 판별과 연관됨 = 같은 줄 & 같은 방향 이동하는 경우 때문에
            if (rxs < bxs) {
                if (arr[rxs + shift[n].first][rys] == '#' || arr[rxs + shift[n].first][rys] == 'B') {
                    rs = 1;
                }
                else if (arr[rxs + shift[n].first][rys] == 'O') {
                    rs = -1;
                    arr[rxs][rys] = '.';
                }
                else {
                    arr[rxs + shift[n].first][rys] = 'R';
                    arr[rxs][rys] = '.';
                    rxs += shift[n].first;
                }

                if (arr[bxs + shift[n].first][bys] == '#' || arr[bxs + shift[n].first][bys] == 'R') {
                    bs = 1;
                }
                else if (arr[bxs + shift[n].first][bys] == 'O') {
                    bs = -1;
                    arr[bxs][bys] = '.';
                }
                else {
                    arr[bxs + shift[n].first][bys] = 'B';
                    arr[bxs][bys] = '.';
                    bxs += shift[n].first;
                }
            }
            else {
                if (arr[bxs + shift[n].first][bys] == '#' || arr[bxs + shift[n].first][bys] == 'R') {
                    bs = 1;
                }
                else if (arr[bxs + shift[n].first][bys] == 'O') {
                    bs = -1;
                    arr[bxs][bys] = '.';
                }
                else {
                    arr[bxs + shift[n].first][bys] = 'B';
                    arr[bxs][bys] = '.';
                    bxs += shift[n].first;
                }

                if (arr[rxs + shift[n].first][rys] == '#' || arr[rxs + shift[n].first][rys] == 'B') {
                    rs = 1;
                }
                else if (arr[rxs + shift[n].first][rys] == 'O') {
                    rs = -1;
                    arr[rxs][rys] = '.';
                }
                else {
                    arr[rxs + shift[n].first][rys] = 'R';
                    arr[rxs][rys] = '.';
                    rxs += shift[n].first;
                }
            }

        }
        else if (n == 1) {
            if (rxs > bxs) {
                if (arr[rxs + shift[n].first][rys] == '#' || arr[rxs + shift[n].first][rys] == 'B') {
                    rs = 1;
                }
                else if (arr[rxs + shift[n].first][rys] == 'O') {
                    rs = -1;
                    arr[rxs][rys] = '.';
                }
                else {
                    arr[rxs + shift[n].first][rys] = 'R';
                    arr[rxs][rys] = '.';
                    rxs += shift[n].first;
                }
                
                if (arr[bxs + shift[n].first][bys] == '#' || arr[bxs + shift[n].first][bys] == 'R') {
                    bs = 1;
                }
                else if (arr[bxs + shift[n].first][bys] == 'O') {
                    bs = -1;
                    arr[bxs][bys] = '.';
                }
                else {
                    arr[bxs + shift[n].first][bys] = 'B';
                    arr[bxs][bys] = '.';
                    bxs += shift[n].first;
                }
            }
            else {
                if (arr[bxs + shift[n].first][bys] == '#' || arr[bxs + shift[n].first][bys] == 'R') {
                    bs = 1;
                }
                else if (arr[bxs + shift[n].first][bys] == 'O') {
                    bs = -1;
                    arr[bxs][bys] = '.';
                }
                else {
                    arr[bxs + shift[n].first][bys] = 'B';
                    arr[bxs][bys] = '.';
                    bxs += shift[n].first;
                }

                if (arr[rxs + shift[n].first][rys] == '#' || arr[rxs + shift[n].first][rys] == 'B') {
                    rs = 1;
                }
                else if (arr[rxs + shift[n].first][rys] == 'O') {
                    rs = -1;
                    arr[rxs][rys] = '.';
                }
                else {
                    arr[rxs + shift[n].first][rys] = 'R';
                    arr[rxs][rys] = '.';
                    rxs += shift[n].first;
                }
            }

        }

        else if (n == 2) {
            if (rys < bys) {
                if (arr[rxs][rys + shift[n].second] == '#' || arr[rxs][rys + shift[n].second] == 'B') {
                    rs = 1;
                }
                else if (arr[rxs][rys + shift[n].second] == 'O') {
                    rs = -1;
                    arr[rxs][rys] = '.';
                }
                else {
                    arr[rxs][rys + shift[n].second] = 'R';
                    arr[rxs][rys] = '.';
                    rys += shift[n].second;
                }
                
                if (arr[bxs][bys + shift[n].second] == '#' || arr[bxs][bys + shift[n].second] == 'R') {
                    bs = 1;
                }
                else if (arr[bxs][bys + shift[n].second] == 'O') {
                    bs = -1;
                    arr[bxs][bys] = '.';
                }
                else {
                    arr[bxs][bys + shift[n].second] = 'B';
                    arr[bxs][bys] = '.';
                    bys += shift[n].second;
                }
            }
            else {
                if (arr[bxs][bys + shift[n].second] == '#' || arr[bxs][bys + shift[n].second] == 'R') {
                    bs = 1;
                }
                else if (arr[bxs][bys + shift[n].second] == 'O') {
                    bs = -1;
                    arr[bxs][bys] = '.';
                }
                else {
                    arr[bxs][bys + shift[n].second] = 'B';
                    arr[bxs][bys] = '.';
                    bys += shift[n].second;
                }

                if (arr[rxs][rys + shift[n].second] == '#' || arr[rxs][rys + shift[n].second] == 'B') {
                    rs = 1;
                }
                else if (arr[rxs][rys + shift[n].second] == 'O') {
                    rs = -1;
                    arr[rxs][rys] = '.';
                }
                else {
                    arr[rxs][rys + shift[n].second] = 'R';
                    arr[rxs][rys] = '.';
                    rys += shift[n].second;
                }
            }

        }
        else if (n == 3) {
            if (rys > bys) {
                if (arr[rxs][rys + shift[n].second] == '#' || arr[rxs][rys + shift[n].second] == 'B') {
                    rs = 1;
                }
                else if (arr[rxs][rys + shift[n].second] == 'O') {
                    rs = -1;
                    arr[rxs][rys] = '.';
                }
                else {
                    arr[rxs][rys + shift[n].second] = 'R';
                    arr[rxs][rys] = '.';
                    rys += shift[n].second;
                }
                
                if (arr[bxs][bys + shift[n].second] == '#' || arr[bxs][bys + shift[n].second] == 'R') {
                    bs = 1;
                }
                else if (arr[bxs][bys + shift[n].second] == 'O') {
                    bs = -1;
                    arr[bxs][bys] = '.';
                }
                else {
                    arr[bxs][bys + shift[n].second] = 'B';
                    arr[bxs][bys] = '.';
                    bys += shift[n].second;
                }
            }
            else {
                if (arr[bxs][bys + shift[n].second] == '#' || arr[bxs][bys + shift[n].second] == 'R') {
                    bs = 1;
                }
                else if (arr[bxs][bys + shift[n].second] == 'O') {
                    bs = -1;
                    arr[bxs][bys] = '.';
                }
                else {
                    arr[bxs][bys + shift[n].second] = 'B';
                    arr[bxs][bys] = '.';
                    bys += shift[n].second;
                }

                if (arr[rxs][rys + shift[n].second] == '#' || arr[rxs][rys + shift[n].second] == 'B') {
                    rs = 1;
                }
                else if (arr[rxs][rys + shift[n].second] == 'O') {
                    rs = -1;
                    arr[rxs][rys] = '.';
                }
                else {
                    arr[rxs][rys + shift[n].second] = 'R';
                    arr[rxs][rys] = '.';
                    rys += shift[n].second;
                }
            }
        }
    }
    int ss = s.size();                      // set 이용해서 전과 동일한 상황이 나오는 중복 방지용.
    s.insert({{rxs, rys}, {bxs, bys}});
    if (ss + 1 == s.size() && rs == 1 && bs == 1)
        q.push({{rxs, rys}, {bxs, bys}}); 
    arr[rxs][rys] = '.';
    arr[bxs][bys] = '.';
    return;
}

void solve() {
    int cnt = 1;
    s.insert({rb, bb});
    q.push({rb, bb});
    while (cnt < 11) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            rb = q.front().first;
            bb = q.front().second;
            q.pop();
            for (int j = 0; j < 4; j++) {
                rs = 0; bs = 0;
                moveball(rb, bb, j);
                if (rs == -1 && bs == 1)
                    break;    
            }
            if (rs == -1 && bs == 1)
                break;
        }
        if (rs == -1 && bs == 1)
            break;
        cnt++;
    }
    if (cnt > 10)
        cout << "-1";
    else
        cout << cnt;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'R') {     // R, B 위치만 기록, array는 표시 안 할 예정 -> 1개만 사용해서 기록되면 엉키게 됨.
                rb = {i, j};
                arr[i][j] = '.';
            }
            if (arr[i][j] == 'B') {
                bb = {i, j};
                arr[i][j] = '.';
            }
        }
    }
    solve();
    return 0;
}