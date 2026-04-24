#include <string>
#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    while (a.length() % 3 != 0)
        a =  '0' + a;
    int b = a.length();
    for (size_t i = 0; i<b; i += 3) {
        cout << ((a[i]-'0')*4 + (a[i+1]-'0')*2 + (a[i+2]-'0'));
    }
    return 0;
}