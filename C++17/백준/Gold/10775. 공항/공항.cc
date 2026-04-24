#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, n;
int arr[100005];
queue<int> q;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 1; i < 100005; i++) 
        arr[i] = i;
    // 큰 수부터 착륙이 유리함
    for (int i = 0; i < b; i++) {
        cin >> c;
        // 최신화 필요한 경로 모음
        while (arr[c] != c) {
            q.push(c);
            c = arr[c];
        }
        if (c == 0)
            break;
        n++;
        arr[c] = c - 1;
        while (!q.empty()) {
            arr[q.front()] = c - 1;
            q.pop();
        }
    }
    cout << n;
    return 0;
}
