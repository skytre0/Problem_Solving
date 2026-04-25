#include <bits/stdc++.h>
#define ll long long

using namespace std;

// 추정 : 값 / 2(n-1)하고 대칭 이동 -> ((start_point + dir*speed) % 2(n-1))=tmp -> tmp<1, tmp>n, else로 나눔 
// 방향 조정 n으로 -> 그림 그리면 알게 됨.

struct si{
    int x;
    int y;
    int s;
    int d;
    int z;
};

int a, b, c, x, z, y, s, d, sum = 0;
si arr[101][101];
pair<int, int> shift[5] = {{0, 0}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};

void solve() {
    for (int i = 1; i <= b; i++) {
        si tmp[101][101] = {0, };
        int m = 1, n;
        while (m <= a && arr[m][i].z == 0)
            m++;
        if (m <= a) {
            sum += arr[m][i].z;
            arr[m][i] = {0, 0, 0, 0, 0};
        }
        for (int j = 1; j <= a; j++) {
            for (int k = 1; k <= b; k++) {
                if (arr[j][k].x != 0) {
                    if (arr[j][k].d < 3) {
                        m = (j + (arr[j][k].s * shift[arr[j][k].d].first)) % (2 * (a-1));
                        n = j + (arr[j][k].s * shift[arr[j][k].d].first);
                        if (n > a) {
                            if (((n-a-1) / (a-1)) % 2 == 0)
                                arr[j][k].d = 1;
                            else
                                arr[j][k].d = 2;
                        }
                        else if (n < 1) {
                            if ((n / (a-1)) % 2 == 0)
                                arr[j][k].d = 2;
                            else
                                arr[j][k].d = 1;
                        }
                        else {
                            if (n < j)
                                arr[j][k].d = 1;
                            else if (n > j)
                                arr[j][k].d = 2;
                        }
                        if (m < 2 - a)      // 양수는 % (2 * (a-1))하면 1~a가 범위 안에 있어서 안전하지만, 음수는 1~ 일부랑 0~-a라서 그냥 하면 arr 범위 초과 가능해서 조정해야 함.
                            m += 2*(a-1);
                        if (m < 1) {
                            if (tmp[2-m][arr[j][k].y].z < arr[j][k].z)
                                tmp[2-m][arr[j][k].y] = {2-m, arr[j][k].y, arr[j][k].s, arr[j][k].d, arr[j][k].z}; 
                        }
                        else if (m > a) {
                            if (tmp[(2*a)-m][arr[j][k].y].z < arr[j][k].z)
                                tmp[(2*a)-m][arr[j][k].y] = {(2*a)-m, arr[j][k].y, arr[j][k].s, arr[j][k].d, arr[j][k].z}; 
                        }
                        else {
                            if (tmp[m][arr[j][k].y].z < arr[j][k].z)
                                tmp[m][arr[j][k].y] = {m, arr[j][k].y, arr[j][k].s, arr[j][k].d, arr[j][k].z};
                        }
                    }
                    else {
                        m = (k + (arr[j][k].s * shift[arr[j][k].d].second)) % (2 * (b-1));
                        n = k + (arr[j][k].s * shift[arr[j][k].d].second);
                        if (n > b) {
                            if (((n-b-1) / (b-1)) % 2 == 0)
                                arr[j][k].d = 4;
                            else
                                arr[j][k].d = 3;
                        }
                        else if (n < 1) {
                            if ((n / (b-1)) % 2 == 0)
                                arr[j][k].d = 3;
                            else 
                                arr[j][k].d = 4;
                        }
                        else {
                            if (n < k)
                                arr[j][k].d = 4;
                            else if (n > k)
                                arr[j][k].d = 3;
                        }
                        if (m < 2 - b)
                            m += 2*(b-1);
                        if (m < 1) {
                            if (tmp[arr[j][k].x][2-m].z < arr[j][k].z)
                                tmp[arr[j][k].x][2-m] = {arr[j][k].x, 2-m, arr[j][k].s, arr[j][k].d, arr[j][k].z}; 
                        }
                        else if (m > b) {
                            if (tmp[arr[j][k].x][(2*b)-m].z < arr[j][k].z)
                                tmp[arr[j][k].x][(2*b)-m] = {arr[j][k].x, (2*b)-m, arr[j][k].s, arr[j][k].d, arr[j][k].z}; 
                        }
                        else {
                            if (tmp[arr[j][k].x][m].z < arr[j][k].z)
                                tmp[arr[j][k].x][m] = {arr[j][k].x, m, arr[j][k].s, arr[j][k].d, arr[j][k].z};
                        }
                    }
                }
            }
        }
        memcpy(arr, tmp, sizeof(tmp));
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    for (int i = 0; i < c; i++) {
        cin >> x >> y >> s >> d >> z;
        arr[x][y] = {x, y, s, d, z};
    }
    solve();
    cout << sum;
    return 0;
}
