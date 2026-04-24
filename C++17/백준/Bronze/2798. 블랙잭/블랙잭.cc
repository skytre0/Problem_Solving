#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a, b, c, M = 0;
    vector<int> v;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> c;
        v.push_back(c);
    }
    for (int i = 0; i < a - 2; i++) {
        for (int j = i+1; j < a - 1; j++) {
            for (int k = j+1; k < a; k++) {
                if (b - (v[i] + v[j] + v[k]) < b - M && b >= (v[i] + v[j] + v[k])) M = v[i] + v[j] + v[k];
            }
        }
    }
    cout << M;
    return 0;
}