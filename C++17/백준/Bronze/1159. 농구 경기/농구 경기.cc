#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b = 0, ans = 0;
string arr[151];
char c = '.';

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    sort(arr, arr + a);
    for (int i = 0; i < a; i++) {
        if (b == 0) {
            c = arr[i][0];
            b++;
        }
        else if (arr[i][0] != c) {
            if (b > 4) {
                cout << c;
                ans = 1;
            }
            c = arr[i][0];
            b = 1;
        }
        else
            b++;
    }
    if (b > 4) {
        cout << c;
        ans = 1;
    }
    if (ans == 0)
        cout << "PREDAJA";
    return 0;
}
