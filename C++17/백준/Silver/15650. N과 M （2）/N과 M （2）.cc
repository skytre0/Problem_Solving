#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[9] = {0};
    int a, b, count, out = 0;
    cin >> a >> b;
    for (size_t i = 1; i <= a; i++)
        arr[i] = i;
    while (1) {
        count = 0;
        for (size_t i = 1; i <= b; i++)
            cout << arr[i] << " ";
        cout << "\n";
        arr[b]++;
        while (arr[b-count] > a-count && b-count > 0) {
            count++;
            arr[b-count]++;
        }
        if (b-count == 0)
            break;
        if (count > 0) {
            for (size_t i = b-count+1; i <= b; i++) 
                arr[i] = arr[i-1] + 1;
        }
    }
    return 0;
}