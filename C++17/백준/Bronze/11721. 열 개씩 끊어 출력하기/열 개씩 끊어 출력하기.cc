#include <string>
#include <iostream>

using namespace std;

int main () {
    char n[100];
    string a = "";
    cin >> n;
    for (size_t i = 0; i < 100; i++) {
        if (n[i] == '\0') {
            cout << a;
            break;
        }
        else if ((i+1)%10 == 0) {
            a += n[i];
            cout << a << '\n';
            a = "";
        }
        else
            a += n[i];
    }
    return 0;
}    