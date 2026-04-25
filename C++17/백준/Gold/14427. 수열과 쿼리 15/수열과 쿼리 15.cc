#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<pair<int, int>> v(6000005, {100000005, 100000005});
int arr[100005];
int n, a, b, c;

pair<int, int> make(int cur, int st, int en) {
    if (st == en) {
        v[cur] = {arr[st], st};
        arr[st] = cur;
    }
    else {
        int mid = (st + en) / 2;
        pair<int, int> left = make(cur * 2, st, mid);
        pair<int, int> right = make(cur * 2 + 1, mid + 1, en);
        if (left.first <= right.first) {
            v[cur] = left;
        }
        else {
            v[cur] = right;
        }
    }
    return v[cur];
}

void reset(int cur) {
    if (v[cur * 2].first <= v[cur * 2 + 1].first) {
        if (v[cur] != v[cur * 2]) {
            v[cur] = v[cur * 2];
            reset(cur / 2);
        }
    }
    else {
        if (v[cur] != v[cur * 2 + 1]) {
            v[cur] = v[cur * 2 + 1];
            reset(cur / 2);
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    make(1, 1, n);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 2) {
            cout << v[1].second << "\n";
        }
        else {
            cin >> b >> c;
            v[arr[b]].first = c;
            reset(arr[b] / 2);
        }
    }
    return 0;
}