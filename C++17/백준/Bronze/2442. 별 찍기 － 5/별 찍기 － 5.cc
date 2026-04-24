#include <string>
#include <iostream>

using namespace std;

int main () {
    string n = "";
    int a;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        for (size_t j = i+1; j < a; j++)
            n += " ";
        for (size_t k = 0; k < 2*i + 1; k ++)
            n += "*";
        cout << n << "\n";
        n = "";
    }
    return 0;
}    