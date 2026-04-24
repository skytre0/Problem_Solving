#include <bits/stdc++.h>
#define ll long long

using namespace std;

int arr[3];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr+3);
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    return 0;
}