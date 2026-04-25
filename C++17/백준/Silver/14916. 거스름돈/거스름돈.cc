#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if ((a%5)%2 == 1) {
        if (a/5 == 0)
            cout << -1;
        else
            cout << a/5 - 1 + (a%5 + 5) / 2;
    }
    else
        cout << a/5 + (a%5)/2;
    return 0;
}