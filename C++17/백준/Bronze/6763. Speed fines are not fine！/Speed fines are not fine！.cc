#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    if (b <= a) cout << "Congratulations, you are within the speed limit!";
    else {
        a = b - a;
        if (a <= 20)    cout << "You are speeding and your fine is $100.";
        else if (a <= 30)    cout << "You are speeding and your fine is $270.";
        else    cout << "You are speeding and your fine is $500.";
    }
    return 0;
}