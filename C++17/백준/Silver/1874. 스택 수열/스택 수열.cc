#include <vector>
#include <iostream>

using namespace std;

int arr[100001];
char c[200002] = {'+'};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b = 1, m = 0, n = 0;
    cin >> a;
    vector<int> v;
    for (size_t i = 0; i < a; i++) {
        cin >> arr[i];
        v.push_back(i+1);
    }
    int i = 1;
    while (i < 2 * a) {
        if (m == a)
            break;
        if (v[n] > arr[m]) {
            b = 0;
            break;
        }
        if (v[n] == arr[m]) {
            v.erase(v.begin() + n);
            c[i] = '-';
            m++;    
            if (n != 0)
                n--;
            else {
                i++;
                c[i] = '+';
            }
        }
        else {
            c[i] = '+';
            n++;
        }
        i++;
    }
    if (b == 0)
        cout << "NO";
    else {
        for (size_t i = 0; i < 2 * a; i++) {
            cout << c[i] << "\n";
        }
    }
    return 0;
}