#include <queue>
#include <stack>
#include <iostream>

using namespace std;

int arr1[1010][1010] = {0,};
int arr3[1010][1010] = {0,};

int main() {
    // dfs = stack 큰거부터 작은 거 순서 입력, 이유 빼는 거 역순이라서 역의 역으로 정방향이 됨.
    // bfs = queue는 순서대로, front기준 다시 순서대로
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[1010] = {0};
    int check[1010] = {0};
    int check1[1010] = {0};
    int arr2[10010] = {0};
    stack<int> s;
    queue<int> q;
    int a, b, c;
    int x, y, z = 0;
    cin >> a >> b >> c;
    for (size_t i = 0; i < b; i++) {
        cin >> x >> y;
        arr1[x][y] = 1;
        arr1[y][x] = 1;
        arr3[x][y] = 1;
        arr3[y][x] = 1;
    }

    // 1번째 dfs
    s.push(c);
    while (!s.empty()) {
        int node = s.top();
        s.pop();
        if (!check[node]) {
            check[node] = 1;
            arr[z++] = node;
            for (int i = a; i >= 1; i--) {
                if (arr1[node][i] == 1 && !check[i]) {
                    s.push(i);
                }
            }
        }
    }
    for (size_t i = 0; i < z; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // 2번째 bfs
    q.push(c);
    int front = 0;
    z = 0;
    while (!q.empty()) {
        front = q.front();
        q.pop();
        if (!check1[front]) {
            check1[front] = 1;
            cout << front << " ";
            for (size_t i = 1; i <= a; i++) {
                if (arr3[front][i] == 1 && !check1[i]) {
                    q.push(i);
                }
            }
        }
    }
    return 0;
}