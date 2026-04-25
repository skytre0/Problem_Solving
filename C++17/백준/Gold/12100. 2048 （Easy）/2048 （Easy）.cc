#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n;
int arr[21][21][6];

void lway(int x) {      // x는 xyz에서 z에 들어가는 높이 fill 의미, i는 각 행 담당, j는 x-1 높이의 열, k는 x 높이의 열
    for (int i = 0; i < n; i++) {
        int j = 0, k = 0;
        while (j < n && arr[i][j][x-1] == 0)    // 0 아닌 거 찾기
            j++;
        while (j < n) {
            int l = 1;
            while (j+l < n && arr[i][j+l][x-1] == 0)    // 0 아닌 것들 사이 0 존재 가능해서 다음 찾기
                l++;
            if (j+l < n && arr[i][j][x-1] == arr[i][j+l][x-1]) {
                arr[i][k][x] = 2 * arr[i][j][x-1];
                j += l + 1;
                while (j < n && arr[i][j][x-1] == 0)    // 100001001 같이 또 사이 0 존재 가능해서 다음 찾기
                    j++;
            }
            else {
                arr[i][k][x] = arr[i][j][x-1];      // 합칠 수 없으면 그대로 오기
                j += l;
            }
            k++;    // 합칠 수 있든 없든 존재하면 1칸 옮겨야 함
        }
    }
}

void rway(int x) {
    for (int i = 0; i < n; i++) {
        int j = n-1, k = n-1;
        while (j > -1 && arr[i][j][x-1] == 0)
            j--;
        while (j > -1) {
            int l = 1;
            while (j-l > -1 && arr[i][j-l][x-1] == 0)
                l++;
            if (j-l > -1 && arr[i][j][x-1] == arr[i][j-l][x-1]) {
                arr[i][k][x] = 2 * arr[i][j][x-1];
                j -= l + 1;
                while (j > -1 && arr[i][j][x-1] == 0)
                    j--;
            }
            else {
                arr[i][k][x] = arr[i][j][x-1];
                j -= l;
            }
            k--;
        }
    }
}

void uway(int x) {
    for (int i = 0; i < n; i++) {
        int j = 0, k = 0;
        while (j < n && arr[j][i][x-1] == 0)
            j++;
        while (j < n) {
            int l = 1;
            while (j+l < n && arr[j+l][i][x-1] == 0)
                l++;
            if (j+l < n && arr[j][i][x-1] == arr[j+l][i][x-1]) {
                arr[k][i][x] = 2 * arr[j][i][x-1];
                j += l + 1;
                while (j < n && arr[j][i][x-1] == 0)
                    j++;
            }
            else {
                arr[k][i][x] = arr[j][i][x-1];
                j += l;
            }
            k++;
        }
    }
}

void dway(int x) {
    for (int i = 0; i < n; i++) {
        int j = n-1, k = n-1;
        while (j > -1 && arr[j][i][x-1] == 0)
            j--;
        while (j > -1) {
            int l = 1;
            while (j-l > -1 && arr[j-l][i][x-1] == 0)
                l++;
            if (j-l > -1 && arr[j][i][x-1] == arr[j-l][i][x-1]) {
                arr[k][i][x] = 2 * arr[j][i][x-1];
                j -= l + 1;
                while (j > -1 && arr[j][i][x-1] == 0)
                    j--;
            }
            else {
                arr[k][i][x] = arr[j][i][x-1];
                j -= l;
            }
            k--;
        }
    }
}

void cleanse(int x) {               // 직전 x+1 한 내역 삭제
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            arr[i][j][x] = 0;
    }
    return;
}

int solve(int x) {
    int tmpM = 0;
    if (x == 6) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                tmpM = max(tmpM, arr[i][j][5]);
        }
        return tmpM;
    }
    lway(x);
    tmpM = max(tmpM, solve(x+1));
    cleanse(x);

    rway(x);
    tmpM = max(tmpM, solve(x+1));
    cleanse(x);

    uway(x);
    tmpM = max(tmpM, solve(x+1));
    cleanse(x);

    dway(x);
    tmpM = max(tmpM, solve(x+1));
    cleanse(x);

    return tmpM;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j][0];
    }
    cout << solve(1);
    return 0;
}