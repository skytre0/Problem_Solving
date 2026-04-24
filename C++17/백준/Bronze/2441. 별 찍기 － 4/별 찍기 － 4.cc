#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

string rep(int n, size_t i) {
    string st = "";
    for (size_t j = i; j < n; j++)
        st +=  "*";
    return st;
}

int main () {
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++) {
        cout << setw(n) << rep(n, i) << '\n';
    }
    return 0;
}    