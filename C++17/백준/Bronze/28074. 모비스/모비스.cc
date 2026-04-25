#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;
int arr[26];
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        arr[s[i] - 'A']++;
    }
    if (arr['M' - 'A'] > 0 && arr['O' - 'A'] > 0 && arr['B' - 'A'] > 0 && arr['I' - 'A'] > 0 && arr['S' - 'A'] > 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}