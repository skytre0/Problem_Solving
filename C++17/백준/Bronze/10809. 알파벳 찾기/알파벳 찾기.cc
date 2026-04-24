#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
    int arr[26];
    cin >> s;
    fill_n(arr, 26, -1);
    for (int i = 0; i < s.size(); i++) {
        if (arr[s[i] - 'a'] == -1)  arr[s[i] - 'a'] = i;
    }
    for (int i = 0; i < 26; i++)
        cout << arr[i] << " ";
    return 0;
}