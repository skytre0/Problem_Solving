#include <iostream>

using namespace std;

void fib(long long* fibs, size_t n, long long i=0) {
    if (n==0) return;
    if (i <= 1) *fibs = i;
    else        *fibs = fibs[-1] + fibs[-2];
    fib(fibs + 1, n - 1, i + 1);        // fibs + 1 = 주소에 +1하는 거라서 위의 else가 가능해짐 - 현재 위치 -1이라서.
}

int main() {
    long long fibs[46];
    int a;
    cin >> a;
    fib(fibs, sizeof fibs / sizeof fibs[0]);
    cout << fibs[a];
    return 0;
}