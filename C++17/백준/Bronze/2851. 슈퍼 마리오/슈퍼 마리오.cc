#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int sum = 0, mark = 0;
    for (size_t i = 0; i < 10; i++) {
        cin >> arr[i];
        if (abs(sum-100) >= abs(sum+arr[i]-100) && mark == 0)
            sum += arr[i];
        else
            mark = 1;
    }
    cout << sum;
    return 0;
}