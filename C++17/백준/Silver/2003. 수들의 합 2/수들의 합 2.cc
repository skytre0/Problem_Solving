#include <iostream>
#include <vector>
#include <queue>
#include <stack>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
#define ll long long

using namespace std;

int n, a, b, m;
vector<int> v;



int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n >> m;
    v = vector<int> (n+1, 0);
    for (int i = 1; i < n+1; i++) {
        cin >> v[i];
        v[i] = v[i] + v[i-1];
    }
    int a = 1, b = 1;
    int sum = 0, cnt = 0;
    while (a < n+1) {
        sum = v[a] - v[b-1];
        if (sum == m) {
            cnt++; a++; b++;
        }
        else {
            sum > m ? b++ : a++;
        }
    }
    cout << cnt;
    return 0;
}