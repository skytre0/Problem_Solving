#include <bits/stdc++.h>
#define ll long long

using namespace std;

int arr[4];
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+4);
    cout << abs(arr[0] + arr[3] - arr[1] - arr[2]);
    return 0;
}