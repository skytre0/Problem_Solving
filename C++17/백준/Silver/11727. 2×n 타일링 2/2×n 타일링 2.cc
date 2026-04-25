#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a;
    int arr[1000] = {1, 3};
    cin >> a;
    for (long long i = 2; i < a; i++) {
        arr[i] = (arr[i-1] + arr[i-2]*2) % 10007;
    }
    cout << arr[a-1];
    return 0;
}