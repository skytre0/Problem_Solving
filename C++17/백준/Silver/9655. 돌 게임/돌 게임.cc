#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a;
    cin >> a;
    if (a%2 == 0)
        cout << "CY";
    else
        cout << "SK";
    return 0;
}