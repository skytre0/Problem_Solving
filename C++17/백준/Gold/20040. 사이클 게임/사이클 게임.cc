#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, a, b, check = 1;
int arr[500005];

void find (int x) {
    while (arr[x] != arr[arr[x]]) 
        arr[x] = arr[arr[x]];
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++) 
        arr[i] = i;
    
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        find(a);
        find(b);
        if (arr[a] == arr[b]) {
            cout << check;
            return 0;
        }
        if (arr[a] < arr[b]) {
            arr[arr[b]] = arr[a];
            arr[b] = arr[a];
        }
        else {
            arr[arr[a]] = arr[b];
            arr[a] = arr[b];
        }
        check++;
    }
    cout << 0;
    return 0;
}