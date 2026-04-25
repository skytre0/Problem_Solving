#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d;
vector<int> v;

int find(int i) {
    if (v[i] == i)  return i;
    return v[i] = find(v[i]);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> a >> b >> c;
    v = vector<int>(a + 1);
    for (int i = 1; i < a+1; i++) {
        v[i] = i+1;
    }
    for (int i = 0; i < b; i++) {
        cin >> d;
        v[d] = d;
    }
    for (int i = 0; i < c; i++) {
        cin >> d;
        d = find(d+1);
        cout << v[d] << "\n";
        v[d] = v[d+1];
    }
    return 0;
}