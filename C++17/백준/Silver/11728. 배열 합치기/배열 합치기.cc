#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
    

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c;
    vector<int> v;
    cin >> a >> b;
    for (size_t i = 0; i < a + b; i++) {
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    for (size_t i = 0; i < a + b; i++)
        cout << v[i] << " ";
    return 0;
}