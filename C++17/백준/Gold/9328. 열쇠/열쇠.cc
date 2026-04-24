#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n, sum;
char arr[105][105];
char al[26];
string s;

void solve() {
    queue<pair<int, int>> qa;     // 현 위치
    queue<pair<int, int>> qp;       // 막힌 곳 위치
    for (int i = 0; i < b; i++) {   // 모서리 4개 입구 찾기
        if (arr[0][i] != '*') {     // 벽 아님
            if (arr[0][i] == '$')   // 문서
                sum++;
            if (arr[0][i] >= 'a')   // 열쇠
                al[arr[0][i] - 'a'] = 1;
            if (arr[0][i] >= 'A' && arr[0][i] <= 'Z' && al[arr[0][i] - 'A'] == 0)   // 문 & 열쇠 유무
                qp.push({0, i});
            else {
                qa.push({0, i});
                arr[0][i] = '*';
            }
        }
        if (arr[a-1][i] != '*') {
            if (arr[a-1][i] == '$')
                sum++;
            if (arr[a-1][i] >= 'a')
                al[arr[a-1][i] - 'a'] = 1;
            if (arr[a-1][i] >= 'A' && arr[a-1][i] <= 'Z' && al[arr[a-1][i] - 'A'] == 0)
                qp.push({a-1, i});
            else {
                qa.push({a-1, i});
                arr[a-1][i] = '*';
            }
        }
    } 
    for (int i = 0; i < a; i++) {
        if (arr[i][0] != '*') {
            if (arr[i][0] == '$')
                sum++;
            if (arr[i][0] >= 'a')
                al[arr[i][0] - 'a'] = 1;
            if (arr[i][0] >= 'A' && arr[i][0] <= 'Z' && al[arr[i][0] - 'A'] == 0)
                qp.push({i, 0});
            else {
                qa.push({i, 0});
                arr[i][0] = '*';
            }
        }
        if (arr[i][b-1] != '*') {
            if (arr[i][b-1] == '$')
                sum++;
            if (arr[i][b-1] >= 'a')
                al[arr[i][b-1] - 'a'] = 1;
            if (arr[i][b-1] >= 'A' && arr[i][b-1] <= 'Z' && al[arr[i][b-1] - 'A'] == 0)
                qp.push({i, b-1});
            else {
                qa.push({i, b-1});
                arr[i][b-1] = '*';
            }
        }
    }


    while (!qa.empty()) {   // 더 이상 이동 불가능 판별 위함
        while (!qa.empty()) {   // 현 시점 이동 가능 모든 경로 이동 + 이동 표시하기
            int x = qa.front().first;
            int y = qa.front().second;
            qa.pop();
            if (x > 0 && arr[x-1][y] != '*') {
                if (arr[x-1][y] == '$') {   // 문서 발견
                    arr[x-1][y] = '*';
                    sum++;
                    qa.push({x-1, y});      // 이동 가능
                }
                else if (arr[x-1][y] == '.') {    // 이동 가능
                    qa.push({x-1, y});
                    arr[x-1][y] = '*';
                }
                else {
                    if (arr[x-1][y] < 'a') {    // 문이 있음
                        if (al[arr[x-1][y]-'A'] == 1) {   // 열쇠 있는 문
                            qa.push({x-1, y});
                            arr[x-1][y] = '*';
                        }
                        else
                            qp.push({x-1, y});      // 열쇠 없는 문
                    }
                    else {
                        al[arr[x-1][y]-'a'] = 1;    // 열쇠 줍기
                        qa.push({x-1, y});
                        arr[x-1][y] = '*';
                    }
                }
            }
            if (x < a-1 && arr[x+1][y] != '*') {
                if (arr[x+1][y] == '$') {
                    arr[x+1][y] = '*';
                    sum++;
                    qa.push({x+1, y});
                }
                else if (arr[x+1][y] == '.') {
                    arr[x+1][y] = '*';
                    qa.push({x+1, y});
                }
                else {
                    if (arr[x+1][y] < 'a') {
                        if (al[arr[x+1][y]-'A'] == 1) {
                            arr[x+1][y] = '*';
                            qa.push({x+1, y});
                        }
                        else
                            qp.push({x+1, y});
                    }
                    else {
                        al[arr[x+1][y]-'a'] = 1;
                        arr[x+1][y] = '*';
                        qa.push({x+1, y});
                    }
                }
            }
            if (y > 0 && arr[x][y-1] != '*') {
                if (arr[x][y-1] == '$') {
                    arr[x][y-1] = '*';
                    sum++;
                    qa.push({x, y-1});
                }
                else if (arr[x][y-1] == '.') {
                    arr[x][y-1] = '*';
                    qa.push({x, y-1});
                }
                else {
                    if (arr[x][y-1] < 'a') {
                        if (al[arr[x][y-1]-'A'] == 1) {
                            arr[x][y-1] = '*';
                            qa.push({x, y-1});
                        }
                        else
                            qp.push({x, y-1});
                    }
                    else {
                        al[arr[x][y-1]-'a'] = 1;
                        arr[x][y-1] = '*';
                        qa.push({x, y-1});
                    }
                }
            }
            if (y < b-1 && arr[x][y+1] != '*') {
                if (arr[x][y+1] == '$') {
                    arr[x][y+1] = '*';
                    sum++;
                    qa.push({x, y+1});
                }
                else if (arr[x][y+1] == '.') {
                    arr[x][y+1] = '*';
                    qa.push({x, y+1});
                }
                else {
                    if (arr[x][y+1] < 'a') {
                        if (al[arr[x][y+1]-'A'] == 1) {
                            arr[x][y+1] = '*';
                            qa.push({x, y+1});
                        }
                        else
                            qp.push({x, y+1});
                    }
                    else {
                        al[arr[x][y+1]-'a'] = 1;
                        arr[x][y+1] = '*';
                        qa.push({x, y+1});
                    }
                }
            }
        }
        int z = qp.size();
        for (int i = 0; i < z; i++) {
            int x = qp.front().first;
            int y = qp.front().second;
            qp.pop();
            if (al[arr[x][y] - 'A'] == 1) {     // 새로 주운 열쇠로 개방 가능
                arr[x][y] = '*';
                qa.push({x, y});
            }
            else
                qp.push({x, y});
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int k = 0; k < n; k++) {
        fill_n(al, 26, 0);
        sum = 0;
        cin >> a >> b;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++)
                cin >> arr[i][j];
        }
        cin >> s;
        if (s != "0") {
            for (int i = 0; i < s.size(); i++)
                al[s[i] - 'a'] = 1;
        }
        solve();
        cout << sum << "\n";
    }
    return 0;
}