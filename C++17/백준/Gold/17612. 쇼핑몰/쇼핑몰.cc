#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, m, n;
ll sum = 0, cnt = 1;
priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> market;
priority_queue<int, vector<int>, greater<int>> counter;

void circle() {
    int time = get<0>(market.top());
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> tmp;

    while (!market.empty()) {
        if (get<0>(market.top()) - time == 0) {
            counter.push(-1 * get<1>(market.top()));
            sum += (cnt++) * get<2>(market.top());
        }
        else {
            tmp.push(make_tuple(get<0>(market.top()) - time, get<1>(market.top()), get<2>(market.top())));
        }
        market.pop();
    }
    market.swap(tmp);
    return;
}



int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        counter.push(i);
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        if (counter.empty()) {
            circle();
            market.push(make_tuple(b, -1 * counter.top(), a));
            counter.pop();
        }
        else {
            market.push(make_tuple(b, -1 * counter.top(), a));
            counter.pop();
        }
    }
    while (!market.empty())
        circle();
    cout << sum;
    return 0;
}