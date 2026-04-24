#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a = 101, b;
int arr[5];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        a = min(a, arr[i]);
    }
    for (int i = a; ; i++) {
        b = 0;
        for (int j = 0; j < 5; j++) {
            if (i % arr[j] == 0)
                b++;
        }
        if (b >= 3) {
            cout << i;
            break;
        }
    }
    return 0;
}
