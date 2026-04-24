#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, ans = 987654321;
int arr[1005][1005];
queue<int> q;
int x, y;
string s;

void solve() {
    q.push(0);
    arr[0][0] = -2;
    int num = 1;
    while (!q.empty()) {
        if (arr[a-1][b-1] == -2 || arr[a-1][b-1] == -1) {
            ans = min(ans, num);
            break;
        }
        int c = q.size();
        for (int i = 0; i < c; i++) {
            x = q.front() / b;
            y = q.front() % b;
            q.pop();
            if (x) {
                if (arr[x][y] == -2) {
                    if (arr[x-1][y] == 0 || arr[x-1][y] == -1) {
                        arr[x-1][y] = -2;
                        q.push((x-1) * b + y);
                    }
                    else if (arr[x-1][y] == 1) {
                        arr[x-1][y] = 2;
                        q.push((x-1) * b + y);
                    }
                }
                else if (arr[x][y] == -1 && arr[x-1][y] == 0) {
                    arr[x-1][y] = -1;
                    q.push((x-1) * b + y);
                }
                else if (arr[x][y] == 2 && arr[x-1][y] == 0) {
                    arr[x-1][y] = -1;
                    q.push((x-1) * b + y);
                }
            }
            if (x < a-1) {
                if (arr[x][y] == -2) {
                    if (arr[x+1][y] == 0 || arr[x+1][y] == -1) {
                        arr[x+1][y] = -2;
                        q.push((x+1) * b + y);
                    }
                    else if (arr[x+1][y] == 1) {
                        arr[x+1][y] = 2;
                        q.push((x+1) * b + y);
                    }
                }
                else if (arr[x][y] == -1 && arr[x+1][y] == 0) {
                    arr[x+1][y] = -1;
                    q.push((x+1) * b + y);
                }
                else if (arr[x][y] == 2 && arr[x+1][y] == 0) {
                    arr[x+1][y] = -1;
                    q.push((x+1) * b + y);
                }
            }
            if (y) {
                if (arr[x][y] == -2) {
                    if (arr[x][y-1] == 0 || arr[x][y-1] == -1) {
                        arr[x][y-1] = -2;
                        q.push(x * b + y-1);
                    }
                    else if (arr[x][y-1] == 1) {
                        arr[x][y-1] = 2;
                        q.push(x * b + y-1);
                    }
                }
                else if (arr[x][y] == -1 && arr[x][y-1] == 0) {
                    arr[x][y-1] = -1;
                    q.push(x * b + y-1);
                }
                else if (arr[x][y] == 2 && arr[x][y-1] == 0) {
                    arr[x][y-1] = -1;
                    q.push(x * b + y-1);
                }
            }
            if (y < b-1) {
                if (arr[x][y] == -2) {
                    if (arr[x][y+1] == 0 || arr[x][y+1] == -1) {
                        arr[x][y+1] = -2;
                        q.push(x * b + y+1);
                    }
                    else if (arr[x][y+1] == 1) {
                        arr[x][y+1] = 2;
                        q.push(x * b + y+1);
                    }
                }
                else if (arr[x][y] == -1 && arr[x][y+1] == 0) {
                    arr[x][y+1] = -1;
                    q.push(x * b + y+1);
                }
                else if (arr[x][y] == 2 && arr[x][y+1] == 0) {
                    arr[x][y+1] = -1;
                    q.push(x * b + y+1);
                }
            }
        }
        num++;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> s;
        for (int j = 0; j < b; j++) 
            arr[i][j] = s[j] - '0';
    }
    solve();
    if (ans == 987654321)
        cout << -1;
    else
        cout << ans;
    return 0;
}