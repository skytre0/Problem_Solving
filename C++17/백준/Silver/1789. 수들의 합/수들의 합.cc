#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    long long int a, b;
    cin >> a;
    b = (1 + sqrt(1 + 2*4*a)) / 2;
    if (b*(b+1)/2 != a)
        b -= 1;
    cout << b;
    return 0;
}