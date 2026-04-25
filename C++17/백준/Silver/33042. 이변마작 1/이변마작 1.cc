#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> v[4];
int n, m = 0;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 9; j++)
            v[i].push_back(0);
    for (int i = 0; i < 7; i++)
        v[3].push_back(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s[1] == 'm') {
            v[0][s[0] - '0']++;
            if (v[0][s[0] - '0'] > 4) {
                cout << i;
                m = 1;
                break;
            }
        }
        else if (s[1] == 'p') {
            v[1][s[0] - '0']++;
            if (v[1][s[0] - '0'] > 4) {
                cout << i;
                m = 1;
                break;
            }
        }
        else if (s[1] == 's') {
            v[2][s[0] - '0']++;
            if (v[2][s[0] - '0'] > 4) {
                cout << i;
                m = 1;
                break;
            }
        }
        else if (s[1] == 'z') {
            v[3][s[0] - '0']++;
            if (v[3][s[0] - '0'] > 4) {
                cout << i;
                m = 1;
                break;
            }
        }
    }
    if (m == 0)
        cout << 0;
    return 0;
}