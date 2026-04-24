#include <bits/stdc++.h>

using namespace std;

vector<int> v;
stack<pair<int, int>> s;
int a, b = 0;

void solve(int x) {
    if (x == v.size())
        return;
    if (v[x] > v[0] && b == 0) {
        while (s.size() != 1) {  
            cout << s.top().first << "\n";
            s.pop();            
        }
        b++;
    }
    if (v[x] < v[0]) {
        if (v[x] < s.top().first) {
            s.push({v[x], s.top().first});
            solve(x+1);
        }
        else {
            if (v[x] > s.top().second) {  
                cout << s.top().first << "\n";
                s.pop();            
                solve(x);
            }
            else {
                s.push({v[x], s.top().second});
                solve(x+1);
            }
        }
    }
    else {
        if (v[x] > s.top().first) {
            if (v[x] < s.top().second) {
                s.push({v[x], s.top().second});
                solve(x+1);  
            }
            else {
                if (v[x] > s.top().second && s.top().first < s.top().second) {
                    cout << s.top().first << "\n";
                    s.pop();            
                    solve(x);
                }
                else {
                    s.push({v[x], s.top().first});
                    solve(x+1);  
                }
            }
        }
        else {
            s.push({v[x], s.top().first});
            solve(x+1);
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (cin >> a)
        v.push_back(a);
    s.push({v[0], v[0]});
    solve(1);
    while (!s.empty()) {
        cout << s.top().first << "\n";
        s.pop();
    }
    return 0;
}