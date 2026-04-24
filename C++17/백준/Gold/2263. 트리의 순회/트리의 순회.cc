#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
int in[100005];
int post[100005];

void solve(int is, int ie, int ps, int pe) {    // inorder는 left, parent, right / postorder는 left, right, parent라서 post에서 parent 바로 찾을 수 있고, 그렇게 해서 분할 정복
    if (is == ie) {
        cout << in[is] << " ";
        return;
    }
    int mark = 0;
    while (in[mark] != post[pe])        // 사실 이거보다 그냥 dfs로 하는 거가 빠름 -> 이거는 거의 최악의 경우 N^2이 나와서서
        mark++;
    cout << in[mark] << " ";
    if (is != mark)
        solve(is, is + (mark - is) - 1, ps, ps + (mark - is) - 1);
    if (mark != ie)
        solve(is + (mark - is) + 1, ie, ps + (mark - is), pe-1);
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++)
        cin >> in[i];
    for (int i = 0; i < a; i++)
        cin >> post[i];
    solve(0, a-1, 0, a-1);
    return 0;
}