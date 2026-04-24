#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int a, arr[10] = {0};
    cin >> a;
    while (a != 0) {
        arr[a%10] += 1;
        a /= 10;
    }
    if ((arr[6] + arr[9]) % 2 == 0) {
        arr[6] = (arr[6] + arr[9]) / 2;
    }
    else {
        arr[6] = (arr[6] + arr[9]) / 2 + 1;
    }
    cout << *max_element(arr, arr+9);
    return 0;
}