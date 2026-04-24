#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    int arr[1001];
    arr[1] = 1;
    for (int i = 2; i < 100; i++) {
        arr[i] = arr[i-1] + 1;
    }
    for (int i = 100; i < 1000; i++) {
        if ((i / 100) - (i / 10) % 10 == (i % 100) / 10 - (i % 10)) 
            arr[i] = arr[i-1] + 1;
        else
            arr[i] = arr[i-1];
    }
    arr[1000] = arr[999];
    cin >> arr[0];
    cout << arr[arr[0]];
    return 0;
}