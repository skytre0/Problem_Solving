#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    vector<int> v;
    vector<int> v1;
    int a, b, c, be = 0;
    int arr[2] = {0};
    int count[2] = {0};
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        v.push_back(b);
    }
    for (size_t i = 0; i < a; i++) {
        c = v[i];
        if (arr[0] == 0) {
            arr[0] = c;
            count[0]++;
            be++;
        }
        else if (c != arr[0] && arr[1] == 0) {
            arr[1] = c;
            count[1]++;
            be = 1;
        }
        else {
            if (c == arr[0]) {
                count[0]++;
                if (v[i] == v[i-1])
                    be++;
                else
                    be = 1;
            }
            else if (c == arr[1]) {
                count[1]++;
                if (v[i] == v[i-1])
                    be++;
                else
                    be = 1;
            }
            else {
                v1.push_back(count[0] + count[1]);
                if (v[i-1] == arr[1]) {
                    arr[0] = arr[1];
                }
                count[0] = be;
                count[1] = 1;
                arr[1] = c;
                be = 1;
            }
        }
    }
    v1.push_back(count[0] + count[1]);
    cout << *max_element(v1.begin(), v1.end());
    return 0;
}