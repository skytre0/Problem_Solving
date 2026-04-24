#include <iostream>

using namespace std;

int main() {
    int a;
    int cur, before, start = -1, height = 0;
    cin >> a;
    cin >> before;
    for (size_t i = 1; i < a; i++) {
        cin >> cur;
        if (cur > before) {
            if (start == -1)
                start = before;
        }
        else {
            if (start != -1) {
                height = max(height, before - start);
                start = -1;
            }
        }
        if (i == a - 1 && start != -1) {
            height = max(height, cur - start);

        }
        before = cur;
    }
    cout << height;
    return 0;
}