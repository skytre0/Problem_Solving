#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string arr[5000];
    arr[0] = "*";
    arr[1] = "* *";
    arr[2] = "*****";
    int a, b = 3;
    cin >> a;
    for (int i = 3; i < a; i++) {
        if (b * 2 == i)
            b = i;
        arr[i] = arr[i - b];
        for (int j = 0; j < arr[b - (i-b) - 1].size(); j++)
            arr[i] += " ";
        arr[i] += arr[i - b];
    }
    for (int i = 0; i < a; i++) {
        arr[i] = string(a - i - 1, ' ') + arr[i] + string(a - i - 1, ' ');
        cout << arr[i];
        if (i != a - 1)
            cout << "\n";
    }
    return 0;
}