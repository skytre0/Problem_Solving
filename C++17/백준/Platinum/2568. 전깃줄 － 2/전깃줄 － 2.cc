#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, p, q, n;
vector<pair<int, int>> v;
int arr[100005];    // 사실상 최종 길이 기록용
int pos[100005];    // arr에서의 위치 기록
int A[100005];        // from의 위치 기록
vector<int> vv;

void solve(int b, int i) {
    p = 1;
    q = a;
    while (p <= q) {
        if (arr[(p+q)/2] > b && arr[(p+q)/2 - 1] < b) {     // b보다 작음 < b보다 큼 -> 이 상황에서 "b보다 큼" 대신 b를 끼워넣음 = 더 길어질 수 있는 가능성 제시 + 현재 길이는 무간섭 가능
            arr[(p+q)/2] = b;
            pos[i] = (p+q)/2;
            break;
        }
        else {
            if (arr[(p+q)/2] > b)
                q = (p+q)/2 - 1;
            else
                p = (p+q)/2 + 1;
        }
    }
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    a = 0;
    for (int i = 1; i <= n; i++) {
        b = v[i-1].second;
        A[i] = v[i-1].first;
        if (arr[a] < b) {
            arr[++a] = b;
            pos[i] = a;
        }
        else
            solve(b, i);
    }
    cout << n-a << "\n";
    for (int i = n; i > 0; i--) {
        if (pos[i] != a)
            vv.push_back(A[i]);
        else
            a--;
    }
    for (int i = vv.size()-1; i > -1; i--)
        cout << vv[i] << "\n";
    return 0;
}
