#include <iostream>

using namespace std;

int f(int n, int k) {
    if (n%k == 0) {return k;}   
    else {return n%k;}
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, n;
    cin >> a >> b >> c;
    n = b;
    while (true) {
        if (f(n, 15) == a && f(n, 28) == b && f(n, 19) == c)
            break;
        n += 28;
    }
    cout << n;
    return 0;
}