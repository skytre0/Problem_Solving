#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    if (!(a / 425)) cout << "Violet";
    else if (!(a / 450)) cout << "Indigo";
    else if (!(a / 495)) cout << "Blue";
    else if (!(a / 570)) cout << "Green";
    else if (!(a / 590)) cout << "Yellow";
    else if (!(a / 620)) cout << "Orange";
    else cout << "Red";
    return 0;
}