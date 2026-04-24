#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int a;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = 0; j < 10; j++) {
            cin >> arr[j];
        }
        sort(arr, arr+10);
        cout << arr[7] << "\n";
    }
    return 0;
}