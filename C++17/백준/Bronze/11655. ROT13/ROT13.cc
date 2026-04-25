#include <string>
#include <iostream>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    for (size_t i = 0; i < a.length(); i++) {
        if ((int)a[i] == 32)
            cout << " ";
        else if ((int)a[i] < 58)
            cout << a[i];
        else if ((int)a[i] < 91)
            cout << (char)(((int)a[i] - 65 + 13)%26 + 65);
        else if ((int)a[i] < 123)
            cout << (char)(((int)a[i] - 97 + 13)%26 + 97);
    }
    return 0;
}