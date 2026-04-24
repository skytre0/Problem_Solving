#include <iostream>
#include <algorithm>

int main() {
    using namespace std;
    int a, b, c;
    cin >> a >> b >> c;
    if ((c-a)%(a-b) != 0)
        cout << (c-a)/(a-b)+2 << endl;
    else 
        cout << (c-a)/(a-b)+1 << endl;
    return 0;
}