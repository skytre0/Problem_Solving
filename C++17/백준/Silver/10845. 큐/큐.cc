#include <iostream>
#include <queue>

using namespace std;

queue<int> a;

int solve(string r, int q) {
    int n;
    if (r == "push") {
        a.push(q);
    }
    else if (r == "pop") {
        if (a.size() != 0) {
            n = a.front();
            cout << n << "\n";
            a.pop();
        }
        else
            cout << -1 << "\n";
    }
    else if (r == "size") {
        cout << a.size() << "\n";
    }
    else if (r == "empty") {
        if (a.size() != 0)
            cout << "0" << "\n";
        else
            cout << "1" << "\n";
    }
    else if (r == "front") {
        if (a.size() != 0) {
            n = a.front();
            cout << n << "\n";
        }
        else
            cout << -1 << "\n";
    }
    else if (r == "back") {
        if (a.size() != 0) {
            n = a.back();
            cout << n << "\n";
        }
        else
            cout << -1 << "\n";

    }
    return 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int p, q;
    string r;
    cin >> p;
    for (size_t i = 0; i < p; i++) {
        cin >> r;
        if (r == "push")
            cin >> q;
        solve(r, q);
    }
    return 0;
}