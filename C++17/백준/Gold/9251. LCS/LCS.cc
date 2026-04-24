#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string a, b;
    int arr[1000] = {};
    int n;
    cin >> a >> b;
    for (size_t i = 0; i < a.size(); i++) {
        n = 0;
        for (size_t j = 0; j < b.size(); j++) {
            if (n < arr[j])
                n = arr[j];
            else if (a[i] == b[j])
                arr[j] = n + 1;
        }
    }
    cout << *max_element(arr, arr+b.size());
    return 0;
}