#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct info {
    int dist;
    int fi;
    int se;

    bool operator>(const info& other) const {
        return dist > other.dist;
    }
};

int a, b, c, n, cnt, dist = 0;
int arr[100005];
pair<int, int> X[100005];
pair<int, int> Y[100005];
pair<int, int> Z[100005];
priority_queue<info, vector<info>, greater<info>> pq;       // {거리, first index, second index} 보관

int find(int x) {
    if (arr[x] == x) return x;
    return arr[x] = find(arr[x]);    // 이렇게 하면 지나온 모든 arr[x]가 전부 root node를 가리키도록 초기화 됨.
}

void UNION(info i) {
    int x, y, z;
    x = find(i.fi);
    y = find(i.se);
    if (x != y) {
        arr[y] = x;
        dist += i.dist;
        cnt--;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    cnt = n-1;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        X[i] = {a, i};
        Y[i] = {b, i};
        Z[i] = {c, i};
        arr[i] = i;
    }
    sort(X, X+n);       // 한번에 파악 불가능으로 각각 나눠서 확인 위함
    sort(Y, Y+n);
    sort(Z, Z+n);
    for (int i = 1; i < n; i++) {
        pq.push({X[i].first - X[i-1].first, X[i].second, X[i-1].second});   // 가능성 있는 것들만 수집
        pq.push({Y[i].first - Y[i-1].first, Y[i].second, Y[i-1].second});
        pq.push({Z[i].first - Z[i-1].first, Z[i].second, Z[i-1].second});
    }
    while (cnt > 0) {
        UNION(pq.top());
        pq.pop();
    }
    cout << dist;
    return 0;
}
