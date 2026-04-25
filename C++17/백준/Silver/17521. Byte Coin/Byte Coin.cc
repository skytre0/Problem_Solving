#include <iostream>

using namespace std;

int main () {
    long long int n, w, coin;
    coin = 0;
    long long int ns[15];
    cin >> n >> w;
    for (size_t i = 0; i < n; i++)
        cin >> ns[i];

    for (size_t i = 0; i < n-1; i++) {
        if (ns[i] <= ns[i+1]) {
            if (w >= ns[i]) {
                coin += w/ns[i];
                w -= coin*ns[i];
            }
            if (i == n-2) 
                w += coin*ns[i+1];
        }
        else if (ns[i] > ns[i+1]) {
            w += coin*ns[i];
            coin = 0;
        }
    }
    cout << w;
    return 0;
}