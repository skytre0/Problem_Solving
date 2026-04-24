#include <iostream>
#include <algorithm>

int main() {
    using namespace std;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, c[1000001];
    cin >> a;
    for (size_t i = 0; i < a; i++)
        cin >> c[i];
    sort(c, c+a);
    for (size_t j = 0; j < a; j++)
        cout << c[j] << "\n";
    return 0;
}