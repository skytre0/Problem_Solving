#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    c = 1;
    while (1) {
        cin >> a;
        if (a) {
            for (int i = 0; i < a; i++)
                cin >> b;
            cout << "Case " << c++ << ": Sorting... done!\n";
        }
        else    break;
    }
    return 0;
}