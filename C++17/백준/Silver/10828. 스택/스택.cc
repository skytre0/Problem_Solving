#include <vector>
#include <iostream>

using namespace std;

vector<int> a;

int solve(string r, int q) {
    int n;
    if (r == "push") {
        a.push_back(q);
    }
    else if (r == "pop") {
        if (a.end() - a.begin() != 0) {
            n = a[a.end() - a.begin() - 1];
            cout << n << "\n";
            a.pop_back();
        }
        else
            cout << -1 << "\n";
    }
    else if (r == "size") {
        cout << a.end() - a.begin() << "\n";
    }
    else if (r == "empty") {
        if ((a.end() - a.begin()) != 0)
            cout << "0" << "\n";
        else
            cout << "1" << "\n";
    }
    else if (r == "top") {
        if (a.end() - a.begin() != 0) {
            n = a[a.end() - a.begin() - 1];
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