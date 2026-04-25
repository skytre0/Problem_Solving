#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d, st, sum, M = 0;
int arr[6000005];   // a + c라서 600만으로 했어야 함 -> 크기 줄이려면 arr[i % a]로 하면 되기는 했음
int mark[6000005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b >> c >> d;
    mark[d] = 1;
    sum = 1;
    for (int i = c; i < a + c; i++) 
        cin >> arr[i];
    for (int i = 0; i < c; i++) 
        arr[i] = arr[a + i];

    for (int i = 0; i < c; i++) {
        if ((mark[arr[i]]++) == 0)
            sum++;
    }
    st = 0;
    M = sum;
    for (int i = c; i < a + c; i++) {
        if (--mark[arr[st++]] == 0)
            sum--;
        if ((mark[arr[i]]++) == 0)
            sum++;
        M = max(M, sum);
    }
    cout << M;
    return 0;
}
