#include <iostream>

using namespace std;

int arr[2001] = {0};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        arr[b+1000] = 1;
    }
    for (int i = 0; i < 2001; i++) {
        if (arr[i] != 0)
            cout << i - 1000 << " ";
    }
    return 0;
}