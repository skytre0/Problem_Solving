#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[100][100] = {0};
    int arr2[100] = {0};
    vector<int> v;
    v.push_back(1);
    int a, b, p, q, n, sum = 0;
    cin >> a >> b;
    for (size_t i = 0; i < b; i++) {
        cin >> p >> q;
        arr[p-1][q-1] = 1;
        arr[q-1][p-1] = 1;
    }
    while (v.size() != 0) {
        n = v.back();
        v.pop_back();
        for (size_t i = 1; i < a; i++) {
            if (arr[n-1][i] == 1) {
                if (arr2[i] != 1) {
                    arr2[i] = 1;
                    v.push_back(i+1);
                }
            }
        }
    }
    for (size_t i = 0; i < a; i++)
        sum += arr2[i];
    cout << sum;
    return 0;
}