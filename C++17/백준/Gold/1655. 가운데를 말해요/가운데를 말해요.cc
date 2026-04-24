#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, n;
priority_queue<int, vector<int>, greater<int>> rside;
priority_queue<int, vector<int>, less<int>> lside;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> a;
    lside.push(a);
    cout << lside.top() << "\n";
    for (int i = 2; i <= n; i++) {
        cin >> a;
        lside.push(a);
        if (rside.size() != 0 && lside.top() > rside.top()) {
            rside.push(lside.top());
            lside.pop();
        }
        while (lside.size()-1 > rside.size()) {
            rside.push(lside.top());
            lside.pop();
        }
        while (lside.size() < rside.size()) {
            lside.push(rside.top());
            rside.pop();
        }
        cout << lside.top() << "\n";
    }
    return 0;
}