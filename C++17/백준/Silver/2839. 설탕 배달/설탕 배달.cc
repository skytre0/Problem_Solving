#include <iostream>
#include <algorithm>

int main() {
    using namespace std;
    int n;
    cin >> n;
    if (n == 4 || n == 7)
        cout << "-1" << endl;
    else if (n%5 == 0)
        cout << n/5 << endl;
    else if (n%5 == 1)
      cout << ((n-6)/5)+2 << endl;
    else if (n%5 == 2)
      cout << ((n-12)/5)+4 << endl;
    else if (n%5 == 3)
      cout << ((n-3)/5)+1 << endl;
    else 
      cout << ((n-9)/5)+3 << endl;
    return 0;
}