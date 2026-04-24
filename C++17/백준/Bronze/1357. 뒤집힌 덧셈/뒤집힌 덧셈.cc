#include <iostream>

using namespace std;

int rev(int n) {
    int a = 0;
    while (n != 0) {
        a = a*10 + n%10;
        n = n/10;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << rev(rev(a) + rev(b));
    return 0;
}