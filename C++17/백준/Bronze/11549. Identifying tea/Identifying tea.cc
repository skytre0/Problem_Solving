#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, sum = 0;
int arr[5];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    for (int i = 0; i < 5; i++) 
        if (arr[i] == a)    sum++;
    cout << sum;
    return 0;
}