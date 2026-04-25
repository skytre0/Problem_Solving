#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<long int> bs;
    static int as[1000002];
    long int N, n, m;
    cin >> N;
    for (size_t i = 0; i < N; i++) {
        cin >> n;
        bs.push_back(n);
    }
    for (size_t i = 0; i < N+1; i++) {
        as[i] = 0;
    }
    m = 0;
    for (size_t i = 0; i < N; i++) {
        if (as[bs[i]] < 1) {
            m += 1;
            as[bs[i]-1] += 1;
        }
        else {
            as[bs[i]] -= 1;
            as[bs[i]-1] += 1;
            }
        }
    cout << m;
    return 0;
}