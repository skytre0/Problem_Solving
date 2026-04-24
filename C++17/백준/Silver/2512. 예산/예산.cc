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
    cin >> n;
    v = vector<int>(n, 0);
    a = 0; b = 0;
    int start = 1, end = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        end = max(end, v[i]);
    }
    cin >> m;
    while (start < end) {
        int money = m;
        int mid = (start + end + 1) / 2;
        for (int i = 0; i < n; i++) {
            v[i] > mid ? money -= mid : money -= v[i];
        }
        if (money == 0) {
            end = mid;
            break;
        }
        else {
            money < 0 ? end = mid-1 : start = mid;
        }
        // cout << mid << " ";
    }
    cout << end;
    return 0;
}