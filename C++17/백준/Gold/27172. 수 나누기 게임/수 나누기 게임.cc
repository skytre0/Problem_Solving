#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> v;
int arr[1000005][2];
int n, a;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
        arr[a][0] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = v[i] * 2; j < 1000005; j += v[i]) {
            if (arr[j][0] == 1) {
                arr[j][1]--;
                arr[v[i]][1]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[v[i]][1] << " ";
    }
    return 0;
}