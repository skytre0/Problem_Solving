#include <iostream>

using namespace std;

int main() {
    int a;
    int b = 0;
    cin >> a;
    a = 1000 - a;
    if (a >= 500) {
        b += a/500;
        a = a%500;
    }
    if (a >= 100) {
        b += a/100;
        a = a%100;
        }
    if (a >= 50) {
        b += a/50;
        a = a%50;
        }
    if (a >= 10) {
        b += a/10;
        a = a%10;
        }
    if (a >= 5) {
        b += a/5;
        a = a%5;
        }
    if (a >= 1) {
        b += a/1;
        }
    cout << b;
    return 0;
}