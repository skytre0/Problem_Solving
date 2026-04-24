#include <bits/stdc++.h>
#define ll long long

using namespace std;

// 17387 문제 참고

struct pos{
    int x1;
    int y1;
    int x2;
    int y2;
};

int a, b, c, d, n, M = 0;
vector<pos> v;
vector<int> vv;
map<int, int> m;

bool straight(int t1, int t2, int t3, int t4) {
    if (t1 > t2)
        swap(t1, t2);     // 알아서 t1, t2 switch 해줌.
    if (t3 > t4)
        swap(t3, t4);
    return (t4 >= t1 && t2 >= t3);        // t2 < t3, t1 > t4의 경우 안 만남 확신 가능 = ccw 의미 없어져서 평가 필요.
}

int ccw(pos fi, pos se) {       // ccw 어차피 2개씩 곱해야 해서 그냥 여기서 바로 곱한 값 반환
    int ans1, ans2;
    ans1 = ((fi.x2 - fi.x1) * (se.y1 - fi.y1)) - ((se.x1 - fi.x1) * (fi.y2 - fi.y1));
    ans2 = ((fi.x2 - fi.x1) * (se.y2 - fi.y1)) - ((se.x2 - fi.x1) * (fi.y2 - fi.y1));
    if (ans1 > 0)
        ans1 = 1;
    else if (ans1 < 0)
        ans1 = -1;
    if (ans2 > 0)
        ans2 = 1;
    else if (ans2 < 0)
        ans2 = -1;
    return ans1 * ans2;
}

bool crosscheck(pos fi, pos se) {
    int x, y;
    x = ccw(fi, se);
    y = ccw(se, fi);
    if (x == 0 && y == 0)
        return straight(fi.x1, fi.x2, se.x1, se.x2) && straight(fi.y1, fi.y2, se.y1, se.y2);
    return (x <= 0 && y <= 0);
}

int find(int x) {
    if (vv[x] == x) return x;
    return vv[x] = find(vv[x]);    // 이렇게 하면 지나온 모든 vv[x]가 전부 root node를 가리키도록 초기화 됨.
}

void UNION(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) vv[y] = x;  // 루트 노드 갱신
}

void solve(pos fi, pos se, int f, int s) {
    find(f);
    find(s);
    if (crosscheck(fi, se)) 
        UNION(f, s);
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;
        v.push_back({a, b, c, d});
        vv.push_back(i);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            solve(v[i], v[j], i, j);
        }
    }
    for (int i = 0; i < n; i++) {
        find(i);
        if (m.find(vv[i]) == m.end())
            m[vv[i]] = 1;
        else
            m[vv[i]]++;
        M = max(M, m[vv[i]]);
    }
    cout << m.size() << "\n" << M;
    return 0;
}
