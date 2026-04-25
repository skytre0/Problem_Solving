#include <bits/stdc++.h>

using namespace std;

int arr[9] = {};
int a, b;

void solve(string s) {
    if (s.size() == b * 2) 
        cout << s << "\n";
    
    else {
        for (size_t i = 1; i <= a; i++) {
                if (arr[i] != 1) {
                arr[i] = 1;
                solve(s + to_string(i) + " ");
                arr[i] = 0;
            }
        }
    }

}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    solve("");
    return 0;
}