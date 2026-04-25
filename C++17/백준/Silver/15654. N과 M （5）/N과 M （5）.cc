#include <algorithm>
#include <iostream>

using namespace std;

int arr[9] = {0};
int arr1[9] = {0};
int check[9] = {0};
int a, b;

int solve(int x){
    if (x == b) {
        for (size_t i = 0; i < b; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    else {
        for (size_t i = 0; i < a; i++) {
            if (check[i] == 0) {
                arr[x] = arr1[i];
                check[i] = 1;
                solve(x + 1);
                check[i] = 0;
            }
        }
    }
    return 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (size_t i = 0; i < a; i++)
        cin >> arr1[i];
    sort(arr1, arr1+a);
    solve(0);
    return 0;
}