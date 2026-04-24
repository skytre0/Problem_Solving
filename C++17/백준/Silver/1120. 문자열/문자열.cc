#include <iostream>
#include <string.h>

int main() {
    using namespace std;
    string a;
    string b;
    int an;
    int bn;
    int total;
    int count;
    cin >> a >> b;
    an = a.length();
    bn = b.length();
    if (an >= bn) {
        total = bn;
        for (size_t i = 0; i < an-bn+1; i++) {
            count = bn;
            for (size_t j = 0; j < bn; j++) {
                if (a[i+j] == b[j])
                    count -= 1;
            if (count < total)
                total = count;
            }
        }
    }
    else {
        total = an;
        for (size_t i = 0; i < bn-an+1; i++) {
            count = an;
            for (size_t j = 0; j < an; j++) {
                if (a[j] == b[i+j])
                    count -= 1;
            if (count < total)
                total = count;
            }
        }
    }
    cout << total << '\n';
    return 0;
}