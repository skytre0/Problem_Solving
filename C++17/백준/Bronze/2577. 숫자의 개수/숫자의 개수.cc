#include <iostream>

using namespace std;

int main () {
    int a, b, c;
    int n[10] = {0};
    cin >> a >> b >> c;
    a = a*b*c;
    while (a > 0) {
        n[a%10] += 1;
        a /=10;
    }
    for (size_t i = 0; i < 10; i++)
        cout << n[i] << "\n";
    return 0;
}    