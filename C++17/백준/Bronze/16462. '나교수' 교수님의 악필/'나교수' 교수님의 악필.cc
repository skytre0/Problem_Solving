#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, sum = 0;
string s;
float f;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "100")
            sum += 100;
        else {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '0' || s[i] == '6')
                    sum += (9 * pow(10, s.size() - 1 - i));
                else
                    sum += (s[i] - '0') * pow(10, s.size() - 1 - i);
            }
        }
    }
    cout << round((double)sum / n);
    return 0;
}
