#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, num, sum = 0;
int arr[101][101];
queue<int> q;

void bfs() {
    while (!q.empty()) {
        int p = q.size();
        for (int i = 0; i < p; i++) {
            int x = q.front() / b;
            int y = q.front() % b;
            q.pop();
            arr[x][y] = -1;
            if (x && arr[x-1][y] == 0) {
                arr[x-1][y] = -1;
                q.push((x-1) * b + y);
            }
            if (x < a - 1 && arr[x+1][y] == 0) {
                arr[x+1][y] = -1;
                q.push((x+1) * b + y);
            }
            if (y && arr[x][y-1] == 0) {
                arr[x][y-1] = -1;
                q.push(x * b + y-1);
            }
            if (y < b - 1 && arr[x][y+1] == 0) {
                arr[x][y+1] = -1;
                q.push(x * b + y+1);
            }
        }
    }
}

int solve() {
    num = 0;
    while (sum > 0) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                int check = 0;
                if (arr[i][j] == 1) {
                    if (i && arr[i-1][j] == -1) {
                        check++;
                    }
                    if (i < a - 1 && arr[i+1][j] == -1) {
                        check++;
                    }
                    if (j && arr[i][j-1] == -1) {
                        check++;
                    }
                    if (j < b - 1 && arr[i][j+1] == -1) {
                        check++;
                    }
                    if (check > 1) {
                        q.push(i * b + j);
                        sum--;
                    }
                }
            }
        }
        bfs();
        num++;
    }
    return num;
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) 
                sum++;
        }
    }
    q.push(0);
    bfs();
    cout << solve();
    return 0;
}