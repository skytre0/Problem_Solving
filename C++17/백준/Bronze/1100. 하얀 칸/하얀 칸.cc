#include <iostream>

using namespace std;

int main() {
    char n[8][8];
    int count = 0;
    for (size_t i = 0; i < 8; i++) {
        for (size_t j = 0; j < 8; j++) {
            cin >> n[i][j];
            if (n[i][j] == 'F') {
                if (i%2==0 && j%2==0 || i%2==1 && j%2==1)
                    count += 1;
            }
        }
    }
    cout << count;
    return 0;
}