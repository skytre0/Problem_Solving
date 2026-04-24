#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    vector<pair<int, int>> v;
    vector<int> vv;
    int a, b, c = 0;
    pair<int, int> p;
    v.push_back(make_pair(1, 0));
    v.push_back(make_pair(0, 1));
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        vv.push_back(b);
        if (b > c)
            c = b;
    }
    for (size_t i = 1; i < c; i++) {
        v.push_back(make_pair(v[i].first + v[i-1].first, v[i].second + v[i-1].second));
    }
    for (size_t i = 0; i < a; i++) {
        cout << v[vv[i]].first << " " << v[vv[i]].second << "\n";
    }
    return 0;
}