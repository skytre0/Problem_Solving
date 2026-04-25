#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c;
    int p = 0;
    int arr[6] = {0};
    cin >> a;
    for (size_t i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    cin >> b >> c;
    for (size_t i = 0; i < 6; i++) {
        arr[i] % b == 0 ? p += arr[i] / b : p += arr[i] / b + 1;
    }
    cout << p << "\n" << a / c << " " << a % c;
    return 0;
}