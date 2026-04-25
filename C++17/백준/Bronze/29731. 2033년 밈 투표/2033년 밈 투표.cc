#include <bits/stdc++.h>
#define ll long long

using namespace std;

string srr[7] = {"Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", 
    "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop"};
int a, cnt;
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    cin.ignore();
    while (a--) {
        getline(cin, s);
        cnt = 0;
        for (int i = 0; i < 7; i++) {
            if (s == srr[i])    cnt++;
        }
        if (cnt != 1) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}