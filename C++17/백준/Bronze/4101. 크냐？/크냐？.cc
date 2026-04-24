#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a==b && a==0)
            break;
        else {
            if (a > b)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}