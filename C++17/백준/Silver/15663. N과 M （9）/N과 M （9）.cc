#include <string>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[9] = {0};
int arr1[9] = {0};
int check[9] = {0};
set<string> s;
int a, b, c;

int solve(int x){
    string ss = "";
    if (x == b) {
        for (size_t i = 0; i < b; i++)
            ss = ss + to_string(arr[i]) + " ";
        c = s.size();
        s.insert(ss);
        if (s.size() != c)
            cout << ss << "\n";
    }
    else {
        for (size_t i = 0; i < a; i++) {
            if (check[i] == 0) {
                arr[x] = arr1[i];
                check[i] = 1;
                solve(x + 1);
                check[i] = 0;
            }
        }
    }
    return 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for (size_t i = 0; i < a; i++)
        cin >> arr1[i];
    sort(arr1, arr1+a);
    solve(0);
    return 0;
}