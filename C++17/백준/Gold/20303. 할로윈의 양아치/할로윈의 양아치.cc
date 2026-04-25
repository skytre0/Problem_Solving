#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, m, n;
int arr[30005][3];      // [0] = 사탕 수, [1] = 분리 집합, [2] = v에 사용하기 위한 각 집합 인자 개수.
vector<pair<int, int>> v;
int mark[3005][30005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++) {
        cin >> arr[i][0];
        arr[i][1] = i;
    }
    for (int i = 0; i < b; i++) {
        cin >> m >> n;
        while (arr[m][1] != m) {
            m = arr[m][1];
        }
        while (arr[n][1] != n) {
            n = arr[n][1];
        }
        if (m < n)
            arr[n][1] = arr[m][1];
        else
            arr[m][1] = arr[n][1];
    }
    for (int i = 1; i <= a; i++) {
        while (arr[i][1] != arr[arr[i][1]][1]) {
            arr[i][1] = arr[arr[i][1]][1];
        }
        if (arr[i][1] != i) {
            arr[arr[i][1]][0] += arr[i][0];
            arr[i][0] = 0;
        }
        arr[arr[i][1]][2]++;
    }
    for (int i = 1; i <= a; i++) {
        if (arr[i][0] != 0) 
            v.push_back({arr[i][2], arr[i][0]});
    }
    // 배낭 문제 방식
    for (int i = 0; i < v.size(); i++) {
        for (int j = 1; j < c; j++) {
            if (j >= v[i].first)
                mark[j][i+1] = max(mark[j][i], mark[j - v[i].first][i] + v[i].second);
            else
                mark[j][i+1] = mark[j][i];
        }
    }
    cout << mark[c - 1][v.size()];
    return 0;
}
