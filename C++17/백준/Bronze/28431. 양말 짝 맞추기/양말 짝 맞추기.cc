#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;
int arr[10];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 5; i++) {
        cin >> a;
        arr[a]++;
    }
    for (int i = 0; i < 10; i++)
        if (arr[i] % 2) cout << i;
    return 0;
}