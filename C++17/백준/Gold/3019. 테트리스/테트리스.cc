#include <iostream>
#include <algorithm>


int main() {
    using namespace std;
    int a;
    int b;
    int count = 0;
    int n[100] = {};
    cin >> a >> b;
    for (size_t i = 0; i < a; i++) 
        cin >> n[i];

    if (b == 1) {
        count += a;
        for (size_t i = 0; i < a-3; i++) {
            if (n[i] == n[i+1] && n[i+1] == n[i+2] && n[i+2] == n[i+3])
                count += 1;
        }
    }
    else if (b == 2) {
        for (size_t i = 0; i < a-1; i++) {
            if (n[i] == n[i+1])
                count += 1;
        }
    }
    else if (b == 3) {
        for (size_t i = 0; i < a-1; i++) {
            if (n[i] == n[i+1] + 1)
                count += 1;
        }
        for (size_t i = 0; i < a-2; i++) {
            if (n[i] == n[i+1] && n[i+1] + 1 == n[i+2])
                count += 1;
        }
    }
    else if (b == 4) {
        for (size_t i = 0; i < a-1; i++) {
            if (n[i] + 1 == n[i+1])
                count += 1;
        }
        for (size_t i = 0; i < a-2; i++) {
            if (n[i] == n[i+1] + 1 && n[i+1] == n[i+2])
                count += 1;
        }
    }
    else if (b == 5) {
        for (size_t i = 0; i < a-1; i++) {
            if (abs(n[i]-n[i+1]) == 1)
                count += 1;
        }
        for (size_t i = 0; i < a-2; i++) {
            if (n[i] == n[i+1] && n[i+1] == n[i+2])
                count += 1;
            if (n[i] == n[i+1]+1 && n[i+1]+1 == n[i+2])
                count += 1;
        }
    }
    else if (b == 6) {
        for (size_t i = 0; i < a-1; i++) {
            if (n[i] == n[i+1])
                count += 1;
            if (n[i] - 2 == n[i+1])
                count += 1;
        }
        for (size_t i = 0; i < a-2; i++) {
            if (n[i] == n[i+1] && n[i+1] == n[i+2])
                count += 1;
            if (n[i]+1 == n[i+1] && n[i+1] == n[i+2])
                count += 1;
        }
    }
    else{
        for (size_t i = 0; i < a-1; i++) {
            if (n[i] == n[i+1])
                count += 1;
            if (n[i] + 2 == n[i+1])
                count += 1;
        }
        for (size_t i = 0; i < a-2; i++) {
            if (n[i] == n[i+1] && n[i+1] == n[i+2])
                count += 1;
            if (n[i] == n[i+1] && n[i+1] == n[i+2]+1)
                count += 1;
        }
    }
    cout << count;
    return 0;
}