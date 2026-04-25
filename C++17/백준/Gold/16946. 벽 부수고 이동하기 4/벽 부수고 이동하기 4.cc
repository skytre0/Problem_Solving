#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n;
int arr[1005][1005];
int ans[1000005];
queue<pair<int, int>> q;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> s;
        for (int j = 0; j < b; j++)
            arr[i][j] = s[j] - '0';
    }
    n = -1;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            if (arr[i][j] == 0) {
                // 여기 인접 0 모두 n으로 처리
                q.push({i, j});
                arr[i][j] = n;
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    arr[x][y] = n;
                    if (x > 0 && arr[x-1][y] == 0) {
                        q.push({x-1, y});
                        arr[x-1][y] = n;
                    }
                    if (y > 0 && arr[x][y-1] == 0) {
                        q.push({x, y-1});
                        arr[x][y-1] = n;
                    }
                    if (x < a - 1 && arr[x+1][y] == 0) {
                        q.push({x+1, y});
                        arr[x+1][y] = n;
                    }
                    if (y < b - 1 && arr[x][y+1] == 0) {
                        q.push({x, y+1});
                        arr[x][y+1] = n;
                    }
                    ans[-1 * n]++;
                }
                n--;
            }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            n = 1;
            if (arr[i][j] == 1) {
                unordered_set<int> s;
                // 여기 인접 음수 * -1 해서 해당 arr 값 더하기기
                if (i > 0 && arr[i-1][j] < 0) 
                    s.insert(-1 * arr[i-1][j]);
                if (j > 0 && arr[i][j-1] < 0) 
                    s.insert(-1 * arr[i][j-1]);
                if (i < a - 1 && arr[i+1][j] < 0) 
                    s.insert(-1 * arr[i+1][j]);
                if (j < b - 1 && arr[i][j+1] < 0) 
                    s.insert(-1 * arr[i][j+1]);
                for (auto k : s)
                    n += ans[k];
            }
            else
                n = 0;
            cout << n % 10;
        }
        cout << "\n";
    }
    return 0;
}