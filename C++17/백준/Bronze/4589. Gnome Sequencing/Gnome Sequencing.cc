#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c, d;
int arr[26];
string s;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    cout << "Gnomes:\n";
    while (a--) {
        cin >> b >> c >> d;
        if (b <= c && c <= d)  cout << "Ordered\n";
        else if (b >= c && c >= d)  cout << "Ordered\n";
        else    cout << "Unordered\n";
    }
    return 0;
}