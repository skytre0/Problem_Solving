#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, a, b;
    vector<int> v[100];
    vector<int> v1;
    int arr[100];
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cin >> a;
            if (a == 1)
                v[i].push_back(j);
        }
    }
    for (size_t i = 0; i < n; i++) {
        fill_n(arr, 100, 0);
        v1.push_back(i);
        while (v1.size() > 0) {
            b = v1.back();
            v1.pop_back();
            for (size_t j = 0; j < v[b].size(); j++) {
                if (arr[v[b][j]] == 0) {
                    arr[v[b][j]] = 1;
                    v1.push_back(v[b][j]);
                }
            }
        }
        for (size_t j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}