#include <iostream>

using namespace std;

int main() {
    string st = "";
    int a, n;
    float b;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        getline(cin, st);
        n = st.length();
        for (size_t j = 0; j < n; j++) {
            if (st[j] == '@')
                b *= 3;
            else if (st[j] == '%')
                b += 5;
            else if (st[j] == '#')
                b -= 7;
        }
        printf("%0.2f\n", b);
    }
    return 0;
}