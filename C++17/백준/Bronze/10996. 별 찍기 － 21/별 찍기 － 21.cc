#include <iostream>        // 숏코딩 참고한 내용

using namespace std;

int main() {
    string st = "";
    int a;
    cin >> a;
    for (size_t i = 0; i < 2*a; i++) {
        for(size_t j = 0; j < a; j++)
            cout << ((i+j)%2? " ":"*");
        if (a != 1 && i != 2*a-1)
            cout << "\n";
        }
    return 0;
}