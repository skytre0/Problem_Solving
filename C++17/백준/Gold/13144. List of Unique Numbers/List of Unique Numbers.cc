#include <bits/stdc++.h>
#define ll long long

using namespace std;

// 포인터 2개, en 늘리면서 가능하면 len만큼 +, check에 본인 위치 기록.
// en에 이미 숫자가 있으면 be를 그거 +1로 하고, check를 본인으로 바꾸고, len만큼 +

ll a, b, n, be, en, sum;
int arr[100005];
int check[100005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> arr[i];
    sum = 0, be = 1;
    for (en = 1; en <= n; en++) {
        if (check[arr[en]] >= be)
            be = check[arr[en]] + 1;
        sum += (en - be + 1);
        check[arr[en]] = en;
    }
    cout << sum;
    return 0;
}
