#include <bits/stdc++.h>

using namespace std;

pair<int, int> check[16];
int a, b = 0, counter = 0;

void solve(int p) {
    for (int i = 0; i < a; i++) {
        if (p != 0) {
            b = 0;
            for (size_t j = 0; j < p; j++) {
                if (check[j].second == i || (abs(i - check[j].second) == (p - check[j].first))) 
                    b++;
                if (b > 0)
                    break;
            }
            if (b == 0) {
                check[p] = {p, i};
                if (p + 1 < a)
                    solve(p+1);
                else 
                    counter++;
            }
        }
        else {
            check[p] = {p, i};
            if (p + 1 < a)
                solve(p+1);
            else 
                counter++;
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    solve(0);
    cout << counter;
    return 0;
}