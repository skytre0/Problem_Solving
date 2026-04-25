#include <string>
#include <iostream>

using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string arr[3];
    int a;
    for (size_t i = 0; i < 3; i++) {
        cin >> arr[i];
        if (arr[i][0] != 'F' && arr[i][0] != 'B')
            a = stoi(arr[i]) + (3 - i);
    }
    if (a % 15 == 0) {cout << "FizzBuzz";}
    else if (a % 3 == 0) {cout << "Fizz";}
    else if (a % 5 == 0) {cout << "Buzz";}
    else {cout << a;}
    return 0;
}