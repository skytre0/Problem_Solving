#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, c, sum = 0;
ll arr[52][52];
ll ac[2];
ll save[52][52];

void spread() {
    for (ll i = 0; i < a; i++) {
        for (ll j = 0; j < b; j++) {
            ll check = 0;
            if (arr[i][j] > 4 && arr[i][j] != -1) {
                if (i && arr[i-1][j] != -1) {
                    save[i-1][j] += arr[i][j] / 5;
                    check++;
                }
                if (i < a - 1 && arr[i+1][j] != -1) {
                    save[i+1][j] += arr[i][j] / 5;
                    check++;
                }
                if (j && arr[i][j-1] != -1) {
                    save[i][j-1] += arr[i][j] / 5;
                    check++;
                }
                if (j < b - 1) {
                    save[i][j+1] += arr[i][j] / 5;
                    check++;
                }
                save[i][j] += (arr[i][j]) - ((arr[i][j] / 5) * check);
            }
            else 
                save[i][j] += arr[i][j];
        }
    }
}

void move() {
    ll x1 = ac[0], x2 = ac[1];
    for (ll i = x1 - 1; i > 0; i--) 
        arr[i][0] = arr[i-1][0];
    for (ll i = 0; i < b - 1; i++) 
        arr[0][i] = arr[0][i+1];
    for (ll i = 0; i < x1; i++) 
        arr[i][b-1] = arr[i+1][b-1];
    for (ll i = b - 1; i > 1; i--) 
        arr[x1][i] = arr[x1][i-1];
    
    arr[x1][1] = 0;

    for (ll i = x2 + 1; i < a - 1; i++) 
        arr[i][0] = arr[i+1][0];
    for (ll i = 0; i < b - 1; i++)
        arr[a-1][i] = arr[a-1][i+1];
    for (ll i = a - 1; i > x2; i--) 
        arr[i][b-1] = arr[i-1][b-1];
    for (ll i = b - 1; i > 1; i--) 
        arr[x2][i] = arr[x2][i-1];
    
    arr[x2][1] = 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    for (ll i = 0; i < a; i++) {
        for (ll j = 0; j < b; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == -1)
                ac[sum++] = i;
        }
    }
    sum = 0;
    for (size_t i = 0; i < c; i++) {
        fill_n(save[0], 52 * 52, 0);
        spread();
        memcpy(arr, save, sizeof(save));
        move();
    }
    for (ll i = 0; i < a; i++) {
        for (ll j = 0; j < b; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum + 2;
    return 0;
}