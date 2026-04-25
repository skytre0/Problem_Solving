#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, level = 2, ex = 0, check = 0;
int arr[22][22];
int save[22][22];
queue<pair<int, int>> pq;
queue<pair<int, int>> erase;

void bfs() {
    int tc = 1;
    while (!pq.empty()) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pri_q;
        int cur = pq.size();
        for (int i = 0; i < cur; i++) {
            int x = pq.front().first;
            int y = pq.front().second;
            arr[x][y] = 1000;
            pq.pop();
            if (x && arr[x-1][y] != 1000) 
                pri_q.push({x-1, y});
            if (y && arr[x][y-1] != 1000)
                pri_q.push({x, y-1});
            if (y < n - 1 && arr[x][y+1] != 1000)
                pri_q.push({x, y+1});
            if (x  < n - 1 && arr[x+1][y] != 1000)
                pri_q.push({x+1, y});
        }
        //
        while (!pri_q.empty()) {
            int x = pri_q.top().first;
            int y = pri_q.top().second;
            pri_q.pop();
                if (arr[x][y] == 0) {
                    arr[x][y] = 1000;
                    pq.push({x, y});
                }
                else if (arr[x][y] < level) {
                    save[x][y] = 0;
                    ex++;
                    check += tc;
                    tc = 0;
                    if (ex == level) {
                        level++;
                        ex = 0;
                    }
                    pq = erase;
                    pq.push({x, y});
                    memcpy(arr, save, sizeof(arr));
                    while (!pri_q.empty())
                        pri_q.pop();
                }
                else if (arr[x][y] == level) {
                    arr[x][y] = 1000;
                    pq.push({x, y});
                }
            }
        tc++;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> save[i][j];
            if (save[i][j] == 9) {
                pq.push({i, j});
                save[i][j] = 0;
            }
        }
    }
    memcpy(arr, save, sizeof(arr));
    bfs();
    cout << check;
    return 0;
}