#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

string solve(string a, string b) {
    int m = 0, n;
    string p = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (size_t i = 0; i < a.length(); i++) {
        if (i < b.length()) 
            n = ((int)a[i] - '0' + (int)b[i] - '0' + m);
        else
            n = (a[i] - '0' + m);
        p = to_string(n % 10) + p;
        m = n / 10;
    }
    if (m != 0)
        p = to_string(m) + p;
    return p;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    string c[10001];
    c[0] = "0";
    c[1] = "1";
    cin >> n;
    for (size_t i = 2; i <= n; i++) {
        c[i] = solve(c[i-1], c[i-2]);
    }
    cout << c[n];
    return 0;
}