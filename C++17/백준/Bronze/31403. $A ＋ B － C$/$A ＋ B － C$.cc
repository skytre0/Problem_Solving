#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b, c;
    int p, q, r;
    cin >> a >> b >> c;
    cout << stoi(a) + stoi(b) - stoi(c) << "\n";
    a = a + b;
    cout << stoi(a) - stoi(c);
}