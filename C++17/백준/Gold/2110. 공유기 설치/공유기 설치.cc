#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll home, wifi, a;
priority_queue<int, vector<int>, greater<int>> pq;
int arr[200005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> home >> wifi;
    for (int i = 0; i < home; i++) {
        cin >> a;
        pq.push(a);
    }
    for (int i = 0; i < home; i++) {
        arr[i] = pq.top();
        pq.pop();
    }
    ll low = 0;
    ll high = arr[home-1];
    ll mid;
    while (low != high) {
        mid = (low + high + 1) / 2;
        ll check = 1;
        ll begin = arr[0];
        for (ll i = 1; i < home; i++) {
            if (arr[i] - begin >= mid) {
                check++;
                begin = arr[i];
            }
        }
        if (check >= wifi) {
            low = mid;
        }
        else {
            high = mid - 1;
        }
    }
    cout << low;
    return 0;
}