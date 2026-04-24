#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;
int arr[26] = {};
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}