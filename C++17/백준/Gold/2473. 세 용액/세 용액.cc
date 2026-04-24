#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, mid, en, total = 9234567890;
ll arr[5005];
ll save[3];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (ll be = 0; be < n - 2; be++) {
        mid = be + 1;
        en = n - 1;
        while (mid < en) {
            if (total > abs(arr[be] + arr[mid] + arr[en])) {
                total = abs(arr[be] + arr[mid] + arr[en]);
                save[0] = arr[be];
                save[1] = arr[mid];
                save[2] = arr[en];
            }
            if (arr[be] + arr[mid] + arr[en] >= 0)
                en--;
            else
                mid++;
        }
    }

    cout << save[0] << " " << save[1] << " " << save[2];
    return 0;
}
