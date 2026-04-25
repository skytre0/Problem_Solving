#include <algorithm>
#include <iostream>

using namespace std;

long int arr[5000005] = {0};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long int a, b;
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+a);
    cout << arr[b-1];
    return 0;
}