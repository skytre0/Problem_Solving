#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
queue<int> q;    // 원형 구조 위해 사용

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
        q.push(i);
    cout << "<";
    while (!q.empty()) {
        for (int i = 1; i < b; i++) {
            a = q.front();    // b번째 아니라면 앞에서 뒤로 이동
            q.pop();
            q.push(a);
        }
        a = q.front();
        cout << a;
        q.pop();
        if (!q.empty())
            cout << ", ";
    }
    cout << ">";
    return 0;
}
