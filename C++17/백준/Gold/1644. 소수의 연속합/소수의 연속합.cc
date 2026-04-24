#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, num = 0, sum = 0;
int arr[4000005];
vector<int> v;
int be = 0, en = 0;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    fill_n(arr, 4000005, 1);
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (arr[i] == 1) {
            v.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                arr[j] = 0;
            }
        }
    }
    while (1) {
        if (sum <= n) {
            if (sum == n) 
                num++;
            if (en == v.size())
                break;
            sum += v[en++];
        }
        else {
            sum -= v[be++];
        }
    }
    cout << num;
    return 0;
}
