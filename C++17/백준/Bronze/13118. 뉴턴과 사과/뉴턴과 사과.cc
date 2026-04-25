#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, check = 0;
int arr[4];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    cin >> a;
    for (int i = 0; i < 4; i++)
        if (a == arr[i])    check = i + 1;
    cout << check;    
    return 0;
}