#include <algorithm>
#include <string>
#include <queue>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    deque<string> d;
    int n, a, b, c;
    string s1, s2, ss;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cin >> s1 >> a >> s2;
        b = s2.length();
        c = 1;
        ss = "";
        for (size_t j = 1; j < b; j++) {
            if (s2[j] == ',' || s2[j] == ']') {
                if (ss != "") {
                    d.push_back(ss);
                    ss = "";
                }
            }
            else 
                ss = ss + s2[j];
        }
        b = s1.length();
        for (size_t j = 0; j < b; j++) {
            if (s1[j] == 'R') {
                c *= -1;
            }
            else {
                if (d.empty()) {
                    c = 2;
                    break;
                }
                else {
                    if (c == 1) {
                        d.pop_front();
                    }
                    else {
                        d.pop_back();
                    }
                }
            }
        }
        if (c == 2)
            cout << "error\n";
        else {
            if (c == -1)
                reverse(d.begin(), d.end());
            cout << "[";
            b = d.size();
            for (size_t i = 0; i < b; i++) {
                cout << d[0];
                d.pop_front();
                if (i != b - 1)
                    cout << ",";
            }
            cout << "]\n";
        }
    }
    return 0;
}