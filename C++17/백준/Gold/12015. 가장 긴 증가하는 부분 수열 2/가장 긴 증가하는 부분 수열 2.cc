#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n, p, q;
int arr[1000005];

void solve(int a) {
    p = 1;
    q = n;
    while (p <= q) {
        if (arr[(p+q)/2] > a && arr[(p+q)/2 - 1] < a) {
            arr[(p+q)/2] = a;
            break;
        }
        else {
            if (arr[(p+q)/2] > a)
                q = (p+q)/2 - 1;
            else
                p = (p+q)/2 + 1;
        }
    }
    return;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> b;
    n = 0;
    for (int i = 1; i <= b; i++) {
        cin >> a;
        if (arr[n] < a) 
            arr[++n] = a;
        else {
            solve(a);
        }
    }
    cout << n;
    return 0;
}
