#include <string>
#include <iostream>

using namespace std;

int* solve(int* arr, string n, int b) {
    if (n == "add") {
        arr[b-1] = 1;
    }
    else if (n == "remove") {
        arr[b-1] = 0;
    }
    else if (n == "check") {
        cout << arr[b-1] << "\n";
    }
    else if (n == "toggle") {
        arr[b-1] = abs(arr[b-1]-1);
    }
    else if (n == "all") {
        for (size_t i = 0; i < 20; i++)
            arr[i] = 1;
    }
    else if (n == "empty") {
        for (size_t i = 0; i < 20; i++)
            arr[i] = 0;
    }
    return arr;
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, arr[20] = {0};
    string n;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> n;
        if (n != "all" && n != "empty")
            cin >> b;
        solve(arr, n, b);
    }
    return 0;
}