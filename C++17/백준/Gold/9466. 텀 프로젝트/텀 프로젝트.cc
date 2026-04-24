#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n, sum;
int arr[100005][2];

int solve(int x) {
    arr[x][1] = 2;
    int check = 0;
    if (arr[arr[x][0]][1] == 0) {
        check = solve(arr[x][0]);
    }
    else if (arr[arr[x][0]][1] == 1 || arr[arr[x][0]][1] == -1) {
        arr[x][1] = -1;
        return 0;
    }
    else if (arr[arr[x][0]][1] == 2) {
        arr[x][1] = 1;
        if (x == arr[x][0])
            return 0;
        return arr[x][0];
    }
    
    if (check == 0) {
        arr[x][1] = -1;
        return 0;
    }
    else {
        arr[x][1] = 1;
        if (x == check)
            return 0;
        else
            return check;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum = 0;
        for (int j = 1; j <= a; j++) {
            cin >> arr[j][0];
        }
        for (int j = 1; j <= a; j++) {
            if (arr[j][1] == 0)
                solve(j);
        }

        for (int j = 1; j <= a; j++) {
            if (arr[j][1] != 1)
                sum++;
        }
        cout << sum << "\n";
        for (int j = 1; j <= a; j++) {
            arr[j][0] = 0;
            arr[j][1] = 0;
        }

    }
    return 0;
}
